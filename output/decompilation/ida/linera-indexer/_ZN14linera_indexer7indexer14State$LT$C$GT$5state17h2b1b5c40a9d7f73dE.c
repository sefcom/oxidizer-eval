void __fastcall linera_indexer::indexer::State<C>::state(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_BYTE *)(a1 + 25) = 0;
}