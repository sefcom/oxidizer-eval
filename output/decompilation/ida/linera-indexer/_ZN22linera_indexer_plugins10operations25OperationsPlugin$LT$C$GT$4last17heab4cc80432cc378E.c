void __fastcall linera_indexer_plugins::operations::OperationsPlugin<C>::last(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  __int128 v4; // xmm1

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v4 = a4[1];
  *(_OWORD *)(a1 + 16) = *a4;
  *(_OWORD *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 88) = 0;
}