__int64 __fastcall forc_debug::server::DapServer::stop(_WORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int128 v8; // [rsp+8h] [rbp-210h]
  _BYTE v9[24]; // [rsp+20h] [rbp-1F8h]
  __int128 v10; // [rsp+38h] [rbp-1E0h]
  unsigned __int64 v11; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-1C8h]
  __int64 v13; // [rsp+58h] [rbp-1C0h]
  __int64 v14; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v15; // [rsp+68h] [rbp-1B0h]
  __int128 v16; // [rsp+70h] [rbp-1A8h]
  unsigned __int64 v17; // [rsp+80h] [rbp-198h]
  __int128 v18; // [rsp+88h] [rbp-190h]
  __int128 v19; // [rsp+98h] [rbp-180h]
  __int64 v20; // [rsp+A8h] [rbp-170h]
  __int128 v21; // [rsp+B0h] [rbp-168h]
  __int64 v22; // [rsp+C0h] [rbp-158h]
  __int16 v23; // [rsp+C8h] [rbp-150h]
  _OWORD v24[5]; // [rsp+1C0h] [rbp-58h] BYREF

  v3 = (_QWORD *)forc_debug::server::state::ServerState::vm_pc_to_breakpoint_id((__int64)&v11, (__int64)a2, a3);
  if ( (_BYTE)v11 == 51 )
  {
    v4 = v12;
    *a2 = 1LL;
    a2[1] = v4;
    v3 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL, 0LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v3 = v4;
    v5 = 0x8000000000000001LL;
    v6 = 1LL;
  }
  else
  {
    *a2 = 0LL;
    v6 = 0x8000000000000000LL;
    v5 = 0x8000000000000000LL;
  }
  *(_QWORD *)&v8 = v6;
  *((_QWORD *)&v8 + 1) = v3;
  *(_QWORD *)v9 = v5;
  *(_OWORD *)&v9[8] = v24[0];
  core::ptr::drop_in_place<core::result::Result<i64,forc_debug::error::AdapterError>>(&v11);
  v22 = *(_QWORD *)&v9[16];
  v21 = *(_OWORD *)v9;
  v19 = v8;
  v20 = 1LL;
  v12 = 16LL;
  v13 = 1LL;
  v14 = 0LL;
  v15 = 0x8000000000000000LL;
  v16 = v10;
  v17 = 0x8000000000000000LL;
  v18 = v10;
  v23 = 514;
  v11 = 0x8000000000000001LL;
  dap::server::Server<R,W>::send(v24, a2[311], &v11);
  result = core::ptr::drop_in_place<core::result::Result<(),dap::errors::ServerError>>(v24);
  *a1 = 307;
  return result;
}