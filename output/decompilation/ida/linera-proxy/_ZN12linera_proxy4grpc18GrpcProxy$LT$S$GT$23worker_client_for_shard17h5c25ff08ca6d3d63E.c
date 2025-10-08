__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::worker_client_for_shard(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-128h]
  __int64 v6; // [rsp+20h] [rbp-108h] BYREF
  __int128 v7; // [rsp+28h] [rbp-100h]
  __int128 v8; // [rsp+38h] [rbp-F0h]
  __int64 v9; // [rsp+48h] [rbp-E0h]
  _BYTE v10[168]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v11[48]; // [rsp+F8h] [rbp-30h] BYREF

  linera_rpc::config::ShardConfig::http_address(v11, a3);
  linera_rpc::grpc::pool::GrpcConnectionPool::channel(v10, a2 + 16, v11);
  v5 = *(_OWORD *)&v10[8];
  if ( *(_QWORD *)v10 == 4LL )
  {
    *(_OWORD *)&v10[16] = *(_OWORD *)&v10[24];
    *(_OWORD *)v10 = v5;
    result = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v10);
    v3 = 2LL;
  }
  else
  {
    v6 = *(_QWORD *)v10;
    v7 = *(_OWORD *)&v10[8];
    v8 = *(_OWORD *)&v10[24];
    v9 = *(_QWORD *)&v10[40];
    tonic::client::grpc::Grpc<T>::new(v10, &v6);
    memcpy(a1 + 4, &v10[32], 0x88uLL);
    a1[2] = 1LL;
    a1[3] = 0x1000000LL;
    v3 = 1LL;
    result = 0x1000000LL;
  }
  a1[1] = result;
  *a1 = v3;
  return result;
}