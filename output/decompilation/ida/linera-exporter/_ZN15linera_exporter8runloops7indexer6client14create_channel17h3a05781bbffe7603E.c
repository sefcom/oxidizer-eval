__int64 __fastcall linera_exporter::runloops::indexer::client::create_channel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // [rsp+0h] [rbp-718h]
  __int128 v15; // [rsp+20h] [rbp-6F8h]
  __m256i v16; // [rsp+40h] [rbp-6D8h] BYREF
  _BYTE src[536]; // [rsp+60h] [rbp-6B8h] BYREF
  __m256i v18; // [rsp+278h] [rbp-4A0h] BYREF
  _BYTE v19[536]; // [rsp+298h] [rbp-480h] BYREF
  _BYTE v20[24]; // [rsp+4B0h] [rbp-268h] BYREF
  __m256i v21; // [rsp+4C8h] [rbp-250h] BYREF
  _BYTE dest[536]; // [rsp+4E8h] [rbp-230h] BYREF

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20);
  tonic::transport::channel::endpoint::Endpoint::from_shared(&v16);
  v15 = *(_OWORD *)&v16.m256i_u64[1];
  if ( v16.m256i_i64[0] == 2 )
  {
    result = v16.m256i_i64[3];
    *(_QWORD *)(a1 + 24) = v16.m256i_i64[3];
    v6 = v15;
LABEL_5:
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  memcpy(dest, src, sizeof(dest));
  v21 = v16;
  *(_QWORD *)&src[16] = 0x8000000000000000LL;
  v16.m256i_i64[0] = 0LL;
  v16.m256i_i64[1] = 8LL;
  *(_OWORD *)&v16.m256i_u64[2] = 0LL;
  *(_QWORD *)src = 8LL;
  *(_QWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[40] = 0x8000000000000000LL;
  *(_DWORD *)&src[104] = (_DWORD)&stru_10000;
  *(_DWORD *)&src[96] = 1000000000;
  tonic::transport::channel::endpoint::Endpoint::tls_config(&v18, &v21, &v16);
  v7 = v18.m256i_i64[0];
  v14 = *(_OWORD *)&v18.m256i_u64[1];
  if ( v18.m256i_i64[0] == 2 )
  {
    result = v18.m256i_i64[3];
    *(_QWORD *)(a1 + 24) = v18.m256i_i64[3];
    v6 = v14;
    goto LABEL_5;
  }
  memcpy(src, v19, sizeof(src));
  v16 = v18;
  v8 = *((_DWORD *)a4 + 2);
  if ( v8 != 1000000000 )
  {
    v9 = *a4;
    *(__int64 *)((char *)&v18.m256i_i64[2] + 4) = *(_QWORD *)&src[144];
    *(_OWORD *)((char *)v18.m256i_i64 + 4) = *(_OWORD *)&src[128];
    v16.m256i_i64[0] = v7;
    *(_QWORD *)&src[112] = v9;
    *(_DWORD *)&src[120] = v8;
    *(_OWORD *)&src[124] = *(_OWORD *)v18.m256i_i8;
  }
  v10 = *((_DWORD *)a4 + 6);
  if ( v10 != 1000000000 )
  {
    v11 = a4[2];
    *(__int64 *)((char *)&v18.m256i_i64[2] + 4) = *(_QWORD *)&src[144];
    *(_OWORD *)((char *)v18.m256i_i64 + 4) = *(_OWORD *)&src[128];
    *(_QWORD *)&src[32] = v11;
    *(_DWORD *)&src[40] = v10;
    *(_OWORD *)&src[124] = *(_OWORD *)v18.m256i_i8;
  }
  *(__int64 *)((char *)&v18.m256i_i64[2] + 4) = *(_QWORD *)&src[144];
  *(_OWORD *)((char *)v18.m256i_i64 + 4) = *(_OWORD *)&src[128];
  *(_QWORD *)&src[48] = 20LL;
  *(_DWORD *)&src[56] = 0;
  *(_QWORD *)&src[80] = 20LL;
  *(_DWORD *)&src[88] = 0;
  *(_QWORD *)&src[96] = 10LL;
  *(_DWORD *)&src[104] = 0;
  *(_DWORD *)&src[124] = v18.m256i_i32[0];
  *(_WORD *)&src[512] = 256;
  tonic::transport::channel::endpoint::Endpoint::connect_lazy(&v18, &v16);
  v12 = *(_OWORD *)v18.m256i_i8;
  v13 = *(_OWORD *)&v18.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)v19;
  *(_OWORD *)(a1 + 16) = v13;
  *(_OWORD *)a1 = v12;
  return core::ptr::drop_in_place<tonic::transport::channel::endpoint::Endpoint>(&v16);
}