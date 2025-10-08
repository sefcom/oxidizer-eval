void __fastcall linera_proxy::grpc::GrpcProxy<S>::public_server(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int128 v3; // [rsp+0h] [rbp-258h]
  __int64 v4; // [rsp+10h] [rbp-248h]
  __int128 v5; // [rsp+20h] [rbp-238h] BYREF
  __int64 v6; // [rsp+30h] [rbp-228h]
  int v7; // [rsp+40h] [rbp-218h]
  int v8; // [rsp+48h] [rbp-210h]
  unsigned __int64 v9; // [rsp+50h] [rbp-208h]
  int v10; // [rsp+58h] [rbp-200h]
  int v11; // [rsp+60h] [rbp-1F8h]
  __int64 v12; // [rsp+68h] [rbp-1F0h]
  int v13; // [rsp+70h] [rbp-1E8h]
  __int16 v14; // [rsp+78h] [rbp-1E0h]
  char v15; // [rsp+7Ah] [rbp-1DEh]
  int v16; // [rsp+80h] [rbp-1D8h]
  int v17; // [rsp+90h] [rbp-1C8h]
  int v18; // [rsp+A0h] [rbp-1B8h]
  int v19; // [rsp+B0h] [rbp-1A8h]
  int v20; // [rsp+C8h] [rbp-190h]
  __int64 v21; // [rsp+D0h] [rbp-188h]
  int v22; // [rsp+E0h] [rbp-178h]
  __int64 v23; // [rsp+E8h] [rbp-170h] BYREF
  __int128 v24; // [rsp+F0h] [rbp-168h]
  __int64 v25; // [rsp+100h] [rbp-158h]
  _BYTE src[168]; // [rsp+108h] [rbp-150h] BYREF
  _BYTE v27[48]; // [rsp+1B0h] [rbp-A8h] BYREF
  _BYTE v28[120]; // [rsp+1E0h] [rbp-78h] BYREF

  if ( *(_BYTE *)(a2 + 400) == 1 )
  {
    tonic::transport::tls::Identity::from_pem(v27);
    *(_QWORD *)&v5 = 0x8000000000000000LL;
    v9 = 0x8000000000000000LL;
    v14 = 0;
    v15 = 0;
    v13 = 1000000000;
    tonic::transport::server::tls::ServerTlsConfig::identity(v28, &v5, v27);
    v21 = 0LL;
    *(_QWORD *)&v5 = 0LL;
    v16 = 1000000000;
    v20 = 1000000001;
    v7 = 0;
    v8 = 0;
    LODWORD(v9) = 0;
    v17 = 1000000000;
    v18 = 1000000000;
    v12 = 20LL;
    v13 = 0;
    v6 = 0LL;
    v10 = 0;
    v11 = 0;
    v22 = 33554688;
    v19 = 1000000000;
    tonic::transport::server::Server<L>::tls_config(&v23, &v5, v28);
    v2 = v23;
    v3 = v24;
    v4 = v25;
    if ( v23 == 2 )
    {
      v6 = v25;
      v5 = v24;
      *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v5);
      *(_QWORD *)a1 = 2LL;
    }
    else
    {
      memcpy((void *)(a1 + 32), src, 0xA8uLL);
      *(_QWORD *)(a1 + 24) = v4;
      *(_OWORD *)(a1 + 8) = v3;
      *(_QWORD *)a1 = v2;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = 20LL;
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 96) = 1000000000;
    *(_DWORD *)(a1 + 112) = 1000000000;
    *(_DWORD *)(a1 + 128) = 1000000000;
    *(_DWORD *)(a1 + 144) = 1000000000;
    *(_DWORD *)(a1 + 168) = 1000000001;
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_DWORD *)(a1 + 192) = 33554688;
  }
}