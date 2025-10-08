__int64 __fastcall linera_indexer_plugins::operations::OperationsPlugin<C>::operation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = a3;
  v4 = *(_OWORD *)(a4 + 16);
  v5 = *(_OWORD *)(a4 + 32);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)(a1 + 32) = v5;
  result = *(_QWORD *)(a4 + 48);
  *(_QWORD *)(a1 + 48) = result;
  *(_BYTE *)(a1 + 168) = 0;
  return result;
}