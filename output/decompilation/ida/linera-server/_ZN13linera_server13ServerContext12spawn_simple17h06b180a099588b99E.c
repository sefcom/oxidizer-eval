__int64 __fastcall linera_server::ServerContext::spawn_simple(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v15; // [rsp+8h] [rbp-530h] BYREF
  _QWORD v16[3]; // [rsp+10h] [rbp-528h] BYREF
  __int64 v17; // [rsp+28h] [rbp-510h]
  __int64 v18; // [rsp+30h] [rbp-508h]
  _BYTE v19[24]; // [rsp+38h] [rbp-500h] BYREF
  __int128 v20; // [rsp+50h] [rbp-4E8h]
  __int128 v21; // [rsp+60h] [rbp-4D8h]
  _BYTE v22[32]; // [rsp+78h] [rbp-4C0h] BYREF
  __int128 v23; // [rsp+98h] [rbp-4A0h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-490h]
  _QWORD src[21]; // [rsp+B0h] [rbp-488h] BYREF
  _OWORD v26[2]; // [rsp+158h] [rbp-3E0h] BYREF
  _BYTE v27[168]; // [rsp+178h] [rbp-3C0h] BYREF
  _QWORD v28[21]; // [rsp+220h] [rbp-318h] BYREF
  __int128 v29; // [rsp+2C8h] [rbp-270h]
  __int64 v30; // [rsp+2D8h] [rbp-260h]
  _BYTE v31[160]; // [rsp+2E0h] [rbp-258h] BYREF
  __int64 v32; // [rsp+380h] [rbp-1B8h]
  __int128 v33; // [rsp+388h] [rbp-1B0h]
  __int128 v34; // [rsp+398h] [rbp-1A0h]
  __int128 v35; // [rsp+3A8h] [rbp-190h]
  __int16 v36; // [rsp+3B8h] [rbp-180h]
  _BYTE dest[160]; // [rsp+3C0h] [rbp-178h] BYREF
  _BYTE v38[216]; // [rsp+460h] [rbp-D8h] BYREF

  v18 = a3;
  v17 = a2;
  v15 = a6;
  v16[2] = a4;
  v16[0] = tokio::util::idle_notified_set::IdleNotifiedSet<T>::new();
  v16[1] = 0LL;
  futures_util::stream::futures_unordered::FuturesUnordered<Fut>::new(v19);
  linera_rpc::config::ValidatorInternalNetworkPreConfig<P>::clone_with_protocol(v27, a1 + 232, a5);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v22, a4);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v22);
  if ( !__OFSUB__(0LL, src[0]) )
  {
    do
    {
      memcpy(dest, src, sizeof(dest));
      v8 = src[20];
      v21 = v26[1];
      v20 = v26[0];
      <linera_rpc::config::ValidatorInternalNetworkPreConfig<P> as core::clone::Clone>::clone(v38, v27);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v23, v17, v18);
      v30 = v24;
      v29 = v23;
      memcpy(v28, v38, sizeof(v28));
      memcpy(v31, src, sizeof(v31));
      v36 = WORD6(v21);
      v32 = v8;
      v9 = *(_OWORD *)(a1 + 552);
      v34 = *(_OWORD *)(a1 + 568);
      v33 = v9;
      v35 = 0LL;
      <tokio_util::sync::cancellation_token::CancellationToken as core::clone::Clone>::clone(&v15);
      v10 = linera_rpc::simple::server::Server<S>::spawn(v28);
      v28[0] = 0LL;
      v28[1] = v10;
      v28[2] = v11;
      LOBYTE(v28[5]) = 0;
      v28[6] = v8;
      futures_util::stream::futures_unordered::FuturesUnordered<Fut>::push(v19, v28);
      core::ptr::drop_in_place<linera_rpc::config::ValidatorPublicNetworkPreConfig<linera_rpc::config::NetworkProtocol>>(v26);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v22);
    }
    while ( src[0] != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(linera_core::worker::WorkerState<linera_storage::db_storage::DbStorage<linera_views::backends::lru_caching::LruCachingDatabase<linera_storage_service::client::StorageServiceDatabaseInternal>>>,usize,linera_rpc::config::ShardConfig)>>(v22);
  <linera_storage_service::client::StorageServiceStoreInternal as linera_views::store::ReadableKeyValueStore>::read_multi_values_bytes::{{closure}}::{{closure}}(
    v28,
    v19);
  src[0] = <tokio::task::join_set::JoinSet<()> as linera_core::join_set_ext::implementation::JoinSetExt>::spawn_task(
             v16,
             v28);
  src[1] = v12;
  core::ptr::drop_in_place<linera_core::join_set_ext::TaskHandle<()>>(src);
  v13 = v16[0];
  core::ptr::drop_in_place<linera_rpc::config::ValidatorInternalNetworkPreConfig<linera_rpc::config::NetworkProtocol>>(v27);
  core::ptr::drop_in_place<tokio_util::sync::cancellation_token::CancellationToken>(&v15);
  return v13;
}