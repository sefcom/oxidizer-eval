__int64 __fastcall linera_server::ServerContext::spawn_grpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // [rsp+8h] [rbp-380h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-378h] BYREF
  __int64 v16; // [rsp+28h] [rbp-360h]
  __int64 v17; // [rsp+30h] [rbp-358h]
  __int64 v18; // [rsp+38h] [rbp-350h]
  __int64 v19; // [rsp+40h] [rbp-348h]
  __int64 v20; // [rsp+48h] [rbp-340h]
  __int128 v21; // [rsp+50h] [rbp-338h] BYREF
  __int64 v22; // [rsp+60h] [rbp-328h]
  _BYTE v23[24]; // [rsp+70h] [rbp-318h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp-300h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-2D0h]
  char v27; // [rsp+D0h] [rbp-2B8h]
  __int64 v28; // [rsp+D8h] [rbp-2B0h]
  _QWORD src[21]; // [rsp+150h] [rbp-238h] BYREF
  _BYTE v30[28]; // [rsp+1F8h] [rbp-190h] BYREF
  unsigned __int16 v31; // [rsp+214h] [rbp-174h]
  _BYTE dest[160]; // [rsp+218h] [rbp-170h] BYREF
  _BYTE v33[160]; // [rsp+2B8h] [rbp-D0h] BYREF

  v20 = a3;
  v19 = a2;
  v14 = a5;
  v15[2] = a4;
  v15[0] = tokio::util::idle_notified_set::IdleNotifiedSet<T>::new();
  v15[1] = 0LL;
  futures_util::stream::futures_unordered::FuturesUnordered<Fut>::new(v23);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v24, a4);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v24);
  if ( !__OFSUB__(0LL, src[0]) )
  {
    v18 = a1 + 232;
    v16 = *(_QWORD *)(a1 + 584);
    v17 = a1 + 552;
    do
    {
      memcpy(dest, src, sizeof(dest));
      v6 = src[20];
      v7 = v31;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v25, v19, v20);
      v22 = v26;
      v21 = v25;
      memcpy(v33, src, sizeof(v33));
      <linera_rpc::config::ValidatorInternalNetworkPreConfig<P> as core::clone::Clone>::clone(&v25, v18);
      v8 = <tokio_util::sync::cancellation_token::CancellationToken as core::clone::Clone>::clone(&v14);
      v9 = linera_rpc::grpc::server::GrpcServer<S>::spawn(
             (unsigned int)&v21,
             v7,
             (unsigned int)v33,
             v6,
             (unsigned int)&v25,
             v17,
             v16,
             v8,
             (__int64)v15);
      *(_QWORD *)&v25 = 0LL;
      *((_QWORD *)&v25 + 1) = v9;
      v26 = v10;
      v27 = 0;
      v28 = v6;
      futures_util::stream::futures_unordered::FuturesUnordered<Fut>::push(v23, &v25);
      core::ptr::drop_in_place<linera_rpc::config::ValidatorPublicNetworkPreConfig<linera_rpc::config::NetworkProtocol>>(v30);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v24);
    }
    while ( src[0] != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(linera_core::worker::WorkerState<linera_storage::db_storage::DbStorage<linera_views::backends::metering::MeteredDatabase<linera_views::backends::lru_caching::LruCachingDatabase<linera_views::backends::metering::MeteredDatabase<linera_views::backends::value_splitting::ValueSplittingDatabase<linera_views::backends::metering::MeteredDatabase<linera_views::backends::rocks_db::RocksDbDatabaseInternal>>>>>>>,usize,linera_rpc::config::ShardConfig)>>(v24);
  <linera_storage_service::client::StorageServiceStoreInternal as linera_views::store::ReadableKeyValueStore>::read_multi_values_bytes::{{closure}}::{{closure}}(
    src,
    v23);
  *(_QWORD *)&v11 = <tokio::task::join_set::JoinSet<()> as linera_core::join_set_ext::implementation::JoinSetExt>::spawn_task(
                      v15,
                      src);
  v25 = v11;
  core::ptr::drop_in_place<linera_core::join_set_ext::TaskHandle<()>>(&v25);
  v12 = v15[0];
  core::ptr::drop_in_place<tokio_util::sync::cancellation_token::CancellationToken>(&v14);
  return v12;
}