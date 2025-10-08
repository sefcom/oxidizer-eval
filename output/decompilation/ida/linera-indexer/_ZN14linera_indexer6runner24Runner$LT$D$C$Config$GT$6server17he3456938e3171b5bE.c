void __fastcall linera_indexer::runner::Runner<D,Config>::server(__int64 a1, __int16 a2, __int64 a3)
{
  *(_WORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  *(_BYTE *)(a1 + 45) = 0;
}