__int64 __fastcall linera_exporter::runloops::indexer::client::IndexerClient::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // edx
  __int128 v16; // [rsp+0h] [rbp-128h]
  __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  int v18; // [rsp+28h] [rbp-100h]
  __int64 v19; // [rsp+30h] [rbp-F8h]
  int v20; // [rsp+38h] [rbp-F0h]
  __m256i v21; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-C8h]
  __m256i v23; // [rsp+70h] [rbp-B8h] BYREF
  _OWORD src[9]; // [rsp+90h] [rbp-98h] BYREF

  v6 = *a4;
  v7 = *((_DWORD *)a4 + 2);
  v8 = a4[2];
  v9 = *((_DWORD *)a4 + 6);
  v17 = v6;
  v18 = v7;
  v19 = v8;
  v20 = v9;
  linera_exporter::runloops::indexer::client::create_channel(&v23, a2, a3, &v17);
  v16 = *(_OWORD *)&v23.m256i_u64[1];
  if ( v23.m256i_i64[0] == 4 )
  {
    *(__int64 *)((char *)&v23.m256i_i64[2] + 7) = v23.m256i_i64[3];
    *(_OWORD *)((char *)&v23.m256i_u32[1] + 3) = v16;
    *(_BYTE *)(a1 + 8) = 0;
    v10 = *(__int64 *)((char *)&v23.m256i_i64[1] + 7);
    v11 = *(__int64 *)((char *)&v23.m256i_i64[2] + 7);
    *(_OWORD *)(a1 + 9) = *(_OWORD *)v23.m256i_i8;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 32) = v11;
    result = 2LL;
  }
  else
  {
    v22 = src[0];
    v21 = v23;
    tonic::client::grpc::Grpc<T>::new(&v23, &v21);
    memcpy((void *)(a1 + 32), src, 0x88uLL);
    v13 = a4[4];
    v14 = *((_DWORD *)a4 + 10);
    v15 = *((_DWORD *)a4 + 12);
    *(_QWORD *)(a1 + 8) = 0x1000000LL;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_QWORD *)(a1 + 24) = 0x1000000LL;
    *(_QWORD *)(a1 + 168) = v13;
    *(_DWORD *)(a1 + 176) = v14;
    *(_DWORD *)(a1 + 184) = v15;
    result = 1LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}