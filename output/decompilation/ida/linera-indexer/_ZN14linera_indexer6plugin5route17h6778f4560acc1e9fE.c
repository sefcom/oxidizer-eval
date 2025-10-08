__int64 __fastcall linera_indexer::plugin::route(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v12; // [rsp+10h] [rbp-2F8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-2E8h]
  __int64 v14; // [rsp+28h] [rbp-2E0h]
  __int64 v15; // [rsp+30h] [rbp-2D8h]
  _QWORD v16[2]; // [rsp+38h] [rbp-2D0h] BYREF
  _QWORD dest[50]; // [rsp+48h] [rbp-2C0h] BYREF
  __int128 v18; // [rsp+1D8h] [rbp-130h] BYREF
  __int64 v19; // [rsp+1E8h] [rbp-120h]

  v16[0] = a1;
  v16[1] = a2;
  v14 = a3;
  *(_QWORD *)&v12 = v16;
  *((_QWORD *)&v12 + 1) = <&T as core::fmt::Display>::fmt;
  dest[0] = &off_146F520;
  dest[1] = 1LL;
  dest[4] = 0LL;
  dest[2] = &v12;
  dest[3] = 1LL;
  core::option::Option<T>::map_or_else(&v18, 0LL, a3, dest);
  v12 = v18;
  v4 = v19;
  v13 = v19;
  v5 = *((_QWORD *)&v18 + 1);
  axum::routing::method_routing::on(dest);
  axum::routing::method_routing::MethodRouter<S>::on(&v18, dest);
  v6 = axum::routing::Router<S>::route(a4, v5, v4, &v18, &off_146F548);
  v15 = v6;
  async_graphql::schema::Schema<Query,Mutation,Subscription>::build_with_ignore_name_conflicts(dest);
  v7 = async_graphql::schema::SchemaBuilder<Query,Mutation,Subscription>::finish(dest);
  v8 = axum::routing::Router<S>::layer(v6, v7);
  *(_QWORD *)&v18 = v8;
  tower_http::cors::CorsLayer::permissive(dest);
  v9 = axum::routing::Router<S>::layer(v8, dest);
  core::ptr::drop_in_place<alloc::string::String>(&v12);
  return v9;
}