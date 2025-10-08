void __fastcall linera_indexer_plugins::operations::_::<impl linera_indexer_plugins::operations::OperationsPlugin<C>>::__operations_resolver(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 24) = 0;
}