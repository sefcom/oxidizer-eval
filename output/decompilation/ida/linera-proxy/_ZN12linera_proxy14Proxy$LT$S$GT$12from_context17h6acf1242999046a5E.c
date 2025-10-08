__int64 __fastcall linera_proxy::Proxy<S>::from_context(_QWORD *a1, __int64 a2, __int128 *a3)
{
  const void *v5; // rsi
  unsigned __int8 v6; // al
  char v7; // cl
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  __int64 v11; // r14
  int v12; // r13d
  __int128 v13; // xmm1
  __int64 v14; // rax
  _BYTE v15[2]; // [rsp+8h] [rbp-240h] BYREF
  _BYTE v16[2]; // [rsp+Ah] [rbp-23Eh] BYREF
  int v17; // [rsp+Ch] [rbp-23Ch]
  const void *v18; // [rsp+10h] [rbp-238h]
  __int64 v19; // [rsp+18h] [rbp-230h]
  __int64 v20; // [rsp+20h] [rbp-228h]
  _OWORD v21[2]; // [rsp+28h] [rbp-220h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp-200h] BYREF
  _BYTE dest[200]; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+128h] [rbp-120h]
  int v25; // [rsp+130h] [rbp-118h]
  __int64 v26; // [rsp+138h] [rbp-110h]
  int v27; // [rsp+140h] [rbp-108h]
  __int128 v28; // [rsp+148h] [rbp-100h]
  __int128 v29; // [rsp+158h] [rbp-F0h]
  __int64 v30; // [rsp+168h] [rbp-E0h]
  _QWORD src[27]; // [rsp+170h] [rbp-D8h] BYREF

  v5 = (const void *)(a2 + 216);
  v6 = *(_BYTE *)(a2 + 377);
  v15[0] = *(_BYTE *)(a2 + 376);
  v15[1] = v6;
  v7 = *(_BYTE *)(a2 + 24);
  v8 = *(_BYTE *)(a2 + 25);
  v16[0] = v7;
  v16[1] = v8;
  v18 = v5;
  if ( v15[0] == 1 )
  {
    if ( v7 )
    {
      memcpy(dest, v5, 0xA8uLL);
      v9 = linera_proxy::grpc::GrpcProxy<S>::new(
             dest,
             *(_QWORD *)(a2 + 504),
             *(_DWORD *)(a2 + 512),
             *(_QWORD *)(a2 + 520),
             *(_DWORD *)(a2 + 528),
             v8,
             a3,
             *(_QWORD *)(a2 + 536));
      *a1 = 1LL;
      a1[1] = v9;
      core::ptr::drop_in_place<linera_client::config::ValidatorConfig>(a2);
      return core::ptr::drop_in_place<linera_base::crypto::secp256k1::Secp256k1SecretKey>(a2 + 384);
    }
    goto LABEL_5;
  }
  if ( v7 )
  {
LABEL_5:
    src[0] = v15;
    src[1] = <linera_rpc::config::NetworkProtocol as core::fmt::Display>::fmt;
    src[2] = v16;
    src[3] = <linera_rpc::config::NetworkProtocol as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_14A95B0;
    *(_QWORD *)&dest[8] = 3LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = src;
    *(_QWORD *)&dest[24] = 2LL;
    core::option::Option<T>::map_or_else(v22, 0LL, a3, dest);
    a1[1] = anyhow::error::<impl anyhow::Error>::msg(v22);
    *a1 = 2LL;
    core::ptr::drop_in_place<linera_storage::db_storage::DbStorage<linera_views::backends::lru_caching::LruCachingDatabase<linera_storage_service::client::StorageServiceDatabaseInternal>>>(a3);
    return core::ptr::drop_in_place<linera_proxy::ProxyContext>(a2);
  }
  linera_rpc::config::ValidatorInternalNetworkPreConfig<P>::clone_with_protocol(src, v5, v6);
  linera_rpc::config::ValidatorPublicNetworkPreConfig<P>::clone_with_protocol(v21, a2, v8);
  v11 = *(_QWORD *)(a2 + 504);
  v12 = *(_DWORD *)(a2 + 512);
  v19 = *(_QWORD *)(a2 + 520);
  v17 = *(_DWORD *)(a2 + 528);
  v20 = *(_QWORD *)(a2 + 536);
  *(_OWORD *)&dest[16] = v21[1];
  *(_OWORD *)dest = v21[0];
  memcpy(&dest[32], src, 0xA8uLL);
  v24 = v11;
  v25 = v12;
  v26 = v19;
  v27 = v17;
  v13 = a3[1];
  v28 = *a3;
  v29 = v13;
  v30 = v20;
  v14 = alloc::boxed::Box<T>::new(dest);
  *a1 = 0LL;
  a1[1] = v14;
  core::ptr::drop_in_place<linera_client::config::ValidatorConfig>(a2);
  core::ptr::drop_in_place<linera_base::crypto::secp256k1::Secp256k1SecretKey>(a2 + 384);
  return core::ptr::drop_in_place<linera_rpc::config::ValidatorInternalNetworkPreConfig<linera_rpc::config::NetworkProtocol>>(v18);
}