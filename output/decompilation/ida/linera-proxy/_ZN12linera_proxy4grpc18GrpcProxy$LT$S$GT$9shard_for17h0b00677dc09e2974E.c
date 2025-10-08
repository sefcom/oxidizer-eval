unsigned __int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::shard_for(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 shard_for; // r14
  unsigned __int64 result; // rax
  char v5; // [rsp+Fh] [rbp-59h] BYREF
  __int128 v6; // [rsp+10h] [rbp-58h]
  __int128 v7; // [rsp+20h] [rbp-48h]
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  <linera_rpc::grpc::api::HandleConfirmedCertificateRequest as linera_rpc::grpc::server::GrpcProxyable>::chain_id(
    &v5,
    a3);
  if ( v5 == 1 )
  {
    v8[1] = v7;
    v8[0] = v6;
    shard_for = linera_rpc::config::ValidatorInternalNetworkPreConfig<P>::get_shard_for(a2 + 192, v8);
    <alloc::string::String as core::clone::Clone>::clone(a1, shard_for);
    result = *(unsigned __int16 *)(shard_for + 28);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(shard_for + 24);
    *(_WORD *)(a1 + 28) = result;
  }
  else
  {
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}