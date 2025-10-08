unsigned __int64 __fastcall linera_proxy::grpc::GrpcMessageLimiter<T>::fits(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  unsigned __int64 result; // rax
  __int128 v4; // xmm0
  unsigned __int64 v5; // rcx
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+8h] [rbp-60h]
  __int128 v8; // [rsp+18h] [rbp-50h]
  __int128 v9; // [rsp+28h] [rbp-40h]

  linera_rpc::grpc::conversions::<impl core::convert::TryFrom<linera_chain::certificate::Certificate> for linera_rpc::grpc::api::Certificate>::try_from(
    &v6,
    a3);
  result = 0LL;
  if ( __OFSUB__(0LL, v6) )
  {
    v4 = v8;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v7;
  }
  else
  {
    result = linera_proxy::grpc::GrpcMessageLimiter<T>::fits::{{closure}}(&v6);
    v5 = *a2;
    if ( *a2 >= result )
      *a2 -= result;
    *(_BYTE *)(a1 + 8) = v5 >= result;
    *(_QWORD *)a1 = 0x8000000000000010LL;
  }
  return result;
}