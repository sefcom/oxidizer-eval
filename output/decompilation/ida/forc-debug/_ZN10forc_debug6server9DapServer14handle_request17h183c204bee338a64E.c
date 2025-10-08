void *__fastcall forc_debug::server::DapServer::handle_request(void *dest, __int64 a2, const void *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int128 v8; // [rsp+10h] [rbp-608h] BYREF
  __int64 v9; // [rsp+20h] [rbp-5F8h]
  __int64 v10; // [rsp+28h] [rbp-5F0h]
  __int128 v11; // [rsp+30h] [rbp-5E8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-5D8h]
  _BYTE v13[24]; // [rsp+48h] [rbp-5D0h] BYREF
  _QWORD v14[47]; // [rsp+60h] [rbp-5B8h] BYREF
  _BYTE desta[232]; // [rsp+1D8h] [rbp-440h] BYREF
  _QWORD v16[47]; // [rsp+2C0h] [rbp-358h] BYREF
  _BYTE v17[232]; // [rsp+438h] [rbp-1E0h] BYREF
  _BYTE v18[248]; // [rsp+520h] [rbp-F8h] BYREF

  forc_debug::server::DapServer::handle_command(v14);
  memcpy(desta, &v14[2], sizeof(desta));
  v3 = v14[0];
  v10 = v14[1];
  if ( desta[0] == 51 )
  {
    memcpy(v18, &desta[8], 0xC8uLL);
    memcpy(v16, a3, 0xF0uLL);
    dap::requests::Request::success(v14, v16, v18);
    memcpy(v16, v14, sizeof(v16));
  }
  else
  {
    memcpy(v17, desta, sizeof(v17));
    v16[0] = v17;
    v16[1] = <forc_debug::error::AdapterError as core::fmt::Debug>::fmt;
    v14[0] = &xmmword_2D6AC0;
    v14[1] = 1LL;
    v14[4] = 0LL;
    v14[2] = v16;
    v14[3] = 1LL;
    core::option::Option<T>::map_or_else(v13, 0LL, v4, v14);
    forc_debug::server::DapServer::error(*(_QWORD *)(a2 + 2488), v13);
    memcpy(v16, a3, 0xF0uLL);
    *(_QWORD *)&v8 = v17;
    *((_QWORD *)&v8 + 1) = <forc_debug::error::AdapterError as core::fmt::Debug>::fmt;
    v14[0] = &xmmword_2D6AC0;
    v14[1] = 1LL;
    v14[4] = 0LL;
    v14[2] = &v8;
    v14[3] = 1LL;
    core::option::Option<T>::map_or_else(&v11, 0LL, v5, v14);
    v8 = v11;
    v9 = v12;
    dap::requests::Request::error(v14, v16, *((_QWORD *)&v11 + 1));
    memcpy(v16, v14, sizeof(v16));
    core::ptr::drop_in_place<alloc::string::String>(&v8);
    core::ptr::drop_in_place<forc_debug::error::AdapterError>(v17);
  }
  if ( v3 )
    forc_debug::server::DapServer::exit(*(_QWORD *)(a2 + 2488), v10);
  return memcpy(dest, v16, 0x178uLL);
}