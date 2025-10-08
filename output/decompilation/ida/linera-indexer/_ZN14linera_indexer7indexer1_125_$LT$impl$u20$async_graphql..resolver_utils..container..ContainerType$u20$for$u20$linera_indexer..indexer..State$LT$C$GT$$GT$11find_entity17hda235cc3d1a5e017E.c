void __fastcall linera_indexer::indexer::_::<impl async_graphql::resolver_utils::container::ContainerType for linera_indexer::indexer::State<C>>::find_entity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_BYTE *)(a1 + 24) = 0;
}