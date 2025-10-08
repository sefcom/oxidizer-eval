void __fastcall linera_indexer::runner::Runner<D,Config>::run(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 432) = a2;
  *(_BYTE *)(a1 + 445) = 0;
}