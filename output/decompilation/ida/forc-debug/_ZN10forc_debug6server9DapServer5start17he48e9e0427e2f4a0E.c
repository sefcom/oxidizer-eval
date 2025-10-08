_BYTE *__fastcall forc_debug::server::DapServer::start(_BYTE *a1, __int64 a2)
{
  char v2; // r15
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  _BYTE *v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int128 v14; // [rsp+3Fh] [rbp-5E9h]
  _QWORD v15[2]; // [rsp+58h] [rbp-5D0h] BYREF
  _BYTE v16[240]; // [rsp+68h] [rbp-5C0h] BYREF
  _BYTE v17[136]; // [rsp+158h] [rbp-4D0h] BYREF
  _BYTE v18[24]; // [rsp+1E0h] [rbp-448h] BYREF
  _BYTE v19[232]; // [rsp+1F8h] [rbp-430h] BYREF
  _BYTE v20[240]; // [rsp+2E0h] [rbp-348h] BYREF
  _BYTE v21[137]; // [rsp+3D0h] [rbp-258h] BYREF
  __int128 v22; // [rsp+459h] [rbp-1CFh]
  __int128 v23; // [rsp+469h] [rbp-1BFh]
  _BYTE v24[31]; // [rsp+479h] [rbp-1AFh]
  _BYTE v25[176]; // [rsp+498h] [rbp-190h] BYREF
  _BYTE dest[176]; // [rsp+548h] [rbp-E0h] BYREF

  dap::server::Server<R,W>::poll_request(v16);
  v2 = v16[0];
  if ( v16[0] == 43 )
  {
LABEL_2:
    v3 = *(_QWORD *)&v16[56];
    v4 = *(_OWORD *)&v16[8];
    v5 = *(_OWORD *)&v16[24];
    v6 = *(_OWORD *)&v16[40];
  }
  else
  {
    while ( 1 )
    {
      v14 = *(_OWORD *)&v16[48];
      LOBYTE(v14) = v16[48];
      memcpy(dest, &v16[64], sizeof(dest));
      if ( v2 == 42 )
      {
        v7 = a1;
        *a1 = 42;
        return v7;
      }
      v21[136] = v2;
      *(_OWORD *)&v24[15] = v14;
      *(_OWORD *)v24 = *(_OWORD *)&v16[33];
      v23 = *(_OWORD *)&v16[17];
      v22 = *(_OWORD *)&v16[1];
      memcpy(v25, dest, sizeof(v25));
      forc_debug::server::DapServer::handle_request(v20);
      memcpy(v19, &v20[8], sizeof(v19));
      if ( *(_QWORD *)v20 == 0x8000000000000001LL )
      {
        v7 = a1;
        memcpy(a1, v19, 0xE8uLL);
        return v7;
      }
      memcpy(v17, v21, sizeof(v17));
      memcpy(&v16[8], v19, 0xE8uLL);
      *(_QWORD *)v16 = *(_QWORD *)v20;
      dap::server::Server<R,W>::send(v19, *(_QWORD *)(a2 + 2488), v16);
      if ( *(_DWORD *)v19 != 8 )
        break;
      if ( !*(_BYTE *)(a2 + 2424) )
      {
        *(_QWORD *)&v16[8] = 2LL;
        *(_QWORD *)v16 = 0x8000000000000001LL;
        dap::server::Server<R,W>::send(v20, *(_QWORD *)(a2 + 2488), v16);
        core::ptr::drop_in_place<core::result::Result<(),dap::errors::ServerError>>(v20);
        *(_BYTE *)(a2 + 2424) = 1;
      }
      if ( *(_BYTE *)(a2 + 2426) == 1
        && !*(_BYTE *)(a2 + 2425)
        && !(*(_BYTE *)(a2 + 2428) & 1 | (*(_BYTE *)(a2 + 2428) == 2)) )
      {
        *(_BYTE *)(a2 + 2425) = 1;
        forc_debug::server::DapServer::launch(v20);
        if ( v20[0] != 51 )
        {
          memcpy(v16, v20, 0xE8uLL);
          v15[0] = v16;
          v15[1] = <forc_debug::error::AdapterError as core::fmt::Debug>::fmt;
          *(_QWORD *)v19 = &off_1F8CF30;
          *(_QWORD *)&v19[8] = 1LL;
          *(_QWORD *)&v19[32] = 0LL;
          *(_QWORD *)&v19[16] = v15;
          *(_QWORD *)&v19[24] = 1LL;
          core::option::Option<T>::map_or_else(v18, 0LL, v13, v19);
          forc_debug::server::DapServer::error(*(_QWORD *)(a2 + 2488), v18);
          forc_debug::server::DapServer::exit(*(_QWORD *)(a2 + 2488), 1LL);
        }
        if ( !v20[1] )
          forc_debug::server::DapServer::exit(*(_QWORD *)(a2 + 2488), 0LL);
      }
      dap::server::Server<R,W>::poll_request(v16);
      v2 = v16[0];
      if ( v16[0] == 43 )
        goto LABEL_2;
    }
    v3 = *(_QWORD *)&v19[48];
    *(_QWORD *)&v20[48] = *(_QWORD *)&v19[48];
    v4 = *(_OWORD *)v19;
    v5 = *(_OWORD *)&v19[16];
    v6 = *(_OWORD *)&v19[32];
    *(_OWORD *)&v20[32] = *(_OWORD *)&v19[32];
    *(_OWORD *)&v20[16] = *(_OWORD *)&v19[16];
    *(_OWORD *)v20 = *(_OWORD *)v19;
  }
  *(_QWORD *)&v16[55] = v3;
  *(_OWORD *)&v16[39] = v6;
  *(_OWORD *)&v16[23] = v5;
  *(_OWORD *)&v16[7] = v4;
  v7 = a1;
  *a1 = 59;
  v8 = *(_OWORD *)&v16[16];
  v9 = *(_OWORD *)&v16[32];
  v10 = *(_QWORD *)&v16[47];
  v11 = *(_QWORD *)&v16[55];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v16;
  *(_OWORD *)(a1 + 17) = v8;
  *(_OWORD *)(a1 + 33) = v9;
  *((_QWORD *)a1 + 6) = v10;
  *((_QWORD *)a1 + 7) = v11;
  return v7;
}