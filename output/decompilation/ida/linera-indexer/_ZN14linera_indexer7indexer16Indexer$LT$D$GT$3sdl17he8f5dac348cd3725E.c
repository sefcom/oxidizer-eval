__int64 __fastcall linera_indexer::indexer::Indexer<D>::sdl(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r15
  bool v4; // of
  __int64 v5; // rt0
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v12; // rax
  __int64 v13; // [rsp+8h] [rbp-1D0h] BYREF
  __int128 v14; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-1B8h]
  __int128 v16; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-198h]

  v3 = 0x8000000000000016LL;
  v4 = __OFSUB__(*a3, 0x8000000000000000LL);
  if ( *a3 == 0x8000000000000000LL )
  {
    v5 = _InterlockedIncrement64(*(volatile signed __int64 **)a2);
    if ( (v5 < 0) ^ v4 | (v5 == 0) )
      BUG();
    async_graphql::schema::Schema<Query,Mutation,Subscription>::build_with_ignore_name_conflicts(&v16);
    v13 = async_graphql::schema::SchemaBuilder<Query,Mutation,Subscription>::finish(&v16);
    v6 = *(_QWORD *)(v13 + 96) + 16LL;
    *(_QWORD *)&v14 = 0LL;
    BYTE8(v14) = 2;
    async_graphql::registry::export_sdl::<impl async_graphql::registry::Registry>::export_sdl(
      &v16,
      v6,
      &v14,
      v7,
      v8,
      v9);
    *(_QWORD *)(a1 + 24) = v17;
    *(_OWORD *)(a1 + 8) = v16;
    *(_QWORD *)a1 = 0x8000000000000016LL;
    return core::ptr::drop_in_place<async_graphql::schema::Schema<linera_indexer::indexer::State<linera_views::context::ViewContext<(),linera_views::backends::metering::MeteredStore<linera_views::backends::lru_caching::LruCachingStore<linera_views::backends::metering::MeteredStore<linera_views::backends::value_splitting::ValueSplittingStore<linera_views::backends::metering::MeteredStore<linera_views::backends::rocks_db::RocksDbStoreInternal>>>>>>>,async_graphql::types::empty_mutation::EmptyMutation,async_graphql::types::empty_subscription::EmptySubscription>>(&v13);
  }
  else
  {
    v15 = a3[2];
    v14 = *(_OWORD *)a3;
    v12 = (_QWORD *)alloc::collections::btree::map::BTreeMap<K,V,A>::get(
                      *(_QWORD *)(a2 + 8),
                      *(_QWORD *)(a2 + 16),
                      *((_QWORD *)&v14 + 1));
    if ( v12 )
    {
      (*(void (__fastcall **)(__int128 *, _QWORD))(v12[1] + 32LL))(&v16, *v12);
      *(_QWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(&v16, &v14);
      *(_QWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      v3 = 0x8000000000000010LL;
    }
    *(_QWORD *)a1 = v3;
    return core::ptr::drop_in_place<alloc::string::String>(a3);
  }
}