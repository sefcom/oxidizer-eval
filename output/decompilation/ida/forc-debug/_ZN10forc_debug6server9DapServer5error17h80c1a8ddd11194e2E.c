__int64 __fastcall forc_debug::server::DapServer::error(__int64 a1, __int128 *a2)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-2C8h] BYREF
  _QWORD src[21]; // [rsp+48h] [rbp-2B0h] BYREF
  unsigned __int64 v5[3]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v6; // [rsp+108h] [rbp-1F0h]
  __int128 v7; // [rsp+118h] [rbp-1E0h]
  char v8; // [rsp+128h] [rbp-1D0h]
  _BYTE v9[56]; // [rsp+130h] [rbp-1C8h] BYREF
  _QWORD v10[8]; // [rsp+168h] [rbp-190h] BYREF
  __int128 v11; // [rsp+1A8h] [rbp-150h]
  __int64 v12; // [rsp+1B8h] [rbp-140h]
  _BYTE dest[168]; // [rsp+1C0h] [rbp-138h] BYREF
  unsigned __int64 v14; // [rsp+268h] [rbp-90h]
  __int128 v15; // [rsp+280h] [rbp-78h]
  __int128 v16; // [rsp+290h] [rbp-68h]
  char v17; // [rsp+2A0h] [rbp-58h]

  v5[0] = 0x8000000000000005LL;
  v3[0] = 0LL;
  v3[1] = 1LL;
  v3[2] = 0LL;
  v8 = 3;
  src[0] = 0x8000000000000001LL;
  LOBYTE(v6) = 6;
  memcpy(dest, src, sizeof(dest));
  v15 = v6;
  v16 = v7;
  v10[1] = 11LL;
  v10[2] = 0LL;
  v10[4] = 0LL;
  v10[6] = 0LL;
  v11 = *a2;
  v12 = *((_QWORD *)a2 + 2);
  v14 = 0x8000000000000003LL;
  v17 = 3;
  v10[0] = 0x8000000000000001LL;
  dap::server::Server<R,W>::send(v9, a1, v10);
  core::ptr::drop_in_place<core::result::Result<(),dap::errors::ServerError>>(v9);
  core::ptr::drop_in_place<core::option::Option<dap::types::OutputEventCategory>>(v5);
  return core::ptr::drop_in_place<alloc::string::String>(v3);
}