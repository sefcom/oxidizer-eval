__int64 __fastcall linera_indexer_plugins::operations::OperationsPlugin<C>::operations(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = a3;
  v6 = *(_OWORD *)(a4 + 16);
  v7 = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 40) = v7;
  result = *(_QWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 56) = result;
  *(_DWORD *)a1 = a5;
  *(_DWORD *)(a1 + 4) = a6;
  *(_BYTE *)(a1 + 208) = 0;
  return result;
}