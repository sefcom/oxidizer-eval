void __fastcall linera_indexer::indexer::Indexer<D>::add_plugin(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 152) = a2;
  *(_QWORD *)(a1 + 160) = a3;
  *(_BYTE *)(a1 + 169) = 0;
}