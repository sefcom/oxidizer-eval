__int64 __fastcall linera_indexer::plugin::sdl(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-1A0h] BYREF
  char v8; // [rsp+10h] [rbp-198h]

  async_graphql::schema::Schema<Query,Mutation,Subscription>::build_with_ignore_name_conflicts(&v7);
  v6 = async_graphql::schema::SchemaBuilder<Query,Mutation,Subscription>::finish(&v7);
  v1 = *(_QWORD *)(v6 + 96) + 16LL;
  v7 = 0LL;
  v8 = 2;
  async_graphql::registry::export_sdl::<impl async_graphql::registry::Registry>::export_sdl(a1, v1, &v7, v2, v3, v4);
  return core::ptr::drop_in_place<async_graphql::schema::Schema<linera_indexer_plugins::operations::OperationsPlugin<linera_views::context::ViewContext<(),linera_views::backends::metering::MeteredStore<linera_views::backends::lru_caching::LruCachingStore<linera_views::backends::metering::MeteredStore<linera_views::backends::value_splitting::ValueSplittingStore<linera_views::backends::metering::MeteredStore<linera_views::backends::rocks_db::RocksDbStoreInternal>>>>>>>,async_graphql::types::empty_mutation::EmptyMutation,async_graphql::types::empty_subscription::EmptySubscription>>(&v6);
}