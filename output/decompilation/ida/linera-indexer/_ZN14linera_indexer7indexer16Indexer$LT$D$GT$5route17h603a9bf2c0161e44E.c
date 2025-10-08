__int64 __fastcall linera_indexer::indexer::Indexer<D>::route(volatile signed __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rt0
  char v3; // of
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-2C0h]
  _BYTE dest[400]; // [rsp+10h] [rbp-2B8h] BYREF
  _QWORD v10[37]; // [rsp+1A0h] [rbp-128h] BYREF

  v8 = axum::routing::Router<S>::new();
  axum::routing::method_routing::on(dest);
  axum::routing::method_routing::MethodRouter<S>::on(v10, dest);
  v1 = axum::routing::Router<S>::route(v8, asc_230AC4, 1LL, v10, &off_146F848);
  v2 = _InterlockedIncrement64(a1);
  if ( (v2 < 0) ^ v3 | (v2 == 0) )
    BUG();
  v4 = v1;
  async_graphql::schema::Schema<Query,Mutation,Subscription>::build_with_ignore_name_conflicts(dest);
  v5 = async_graphql::schema::SchemaBuilder<Query,Mutation,Subscription>::finish(dest);
  v6 = axum::routing::Router<S>::layer(v4, v5);
  v10[0] = v6;
  tower_http::cors::CorsLayer::permissive(dest);
  return axum::routing::Router<S>::layer(v6, dest);
}