__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::new(
        void *src,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        _OWORD *a7,
        __int64 a8)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm1
  _OWORD v16[4]; // [rsp+8h] [rbp-390h] BYREF
  __int64 v17; // [rsp+48h] [rbp-350h]
  _OWORD srca[24]; // [rsp+50h] [rbp-348h] BYREF
  __int128 v19; // [rsp+1D0h] [rbp-1C8h] BYREF
  _BYTE v20[376]; // [rsp+1E0h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+358h] [rbp-40h]
  char v22; // [rsp+360h] [rbp-38h]

  v11 = std::thread::local::LocalKey<T>::with();
  papaya::map::HashMap<K,V,S>::with_capacity_and_hasher(srca, v11);
  *(_DWORD *)&v20[64] = 1000000000;
  *(_DWORD *)&v20[80] = 1000000000;
  v19 = srca[0];
  *(_OWORD *)v20 = srca[1];
  *(_OWORD *)&v20[16] = srca[2];
  *(_OWORD *)&v20[32] = srca[3];
  *(_QWORD *)&v20[48] = *(_QWORD *)&srca[4];
  linera_rpc::grpc::pool::GrpcConnectionPool::with_connect_timeout(srca, &v19, a2, a3);
  linera_rpc::grpc::pool::GrpcConnectionPool::with_timeout(&v19, srca, a4, a5);
  v12 = std::thread::local::LocalKey<T>::with();
  papaya::map::HashMap<K,V,S>::with_capacity_and_hasher(v16, v12);
  *((_QWORD *)&srca[10] + 1) = v17;
  *(_OWORD *)((char *)&srca[9] + 8) = v16[3];
  *(_OWORD *)((char *)&srca[8] + 8) = v16[2];
  *(_OWORD *)((char *)&srca[7] + 8) = v16[1];
  *(_OWORD *)((char *)&srca[6] + 8) = v16[0];
  memcpy(&srca[11], src, 0xA8uLL);
  srca[0] = v19;
  srca[1] = *(_OWORD *)v20;
  srca[2] = *(_OWORD *)&v20[16];
  srca[3] = *(_OWORD *)&v20[32];
  srca[4] = *(_OWORD *)&v20[48];
  srca[5] = *(_OWORD *)&v20[64];
  *(_QWORD *)&srca[6] = *(_QWORD *)&v20[80];
  v13 = a7[1];
  *(_OWORD *)((char *)&srca[21] + 8) = *a7;
  *(_OWORD *)((char *)&srca[22] + 8) = v13;
  *(_QWORD *)&v19 = 1LL;
  *((_QWORD *)&v19 + 1) = 1LL;
  memcpy(v20, srca, sizeof(v20));
  v21 = a8;
  v22 = a6;
  return alloc::boxed::Box<T>::new(&v19);
}