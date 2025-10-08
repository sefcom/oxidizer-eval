__int64 __fastcall forc_debug::server::DapServer::log(__int64 a1, __int128 *a2)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-2C8h] BYREF
  _QWORD src[24]; // [rsp+48h] [rbp-2B0h] BYREF
  __int128 v5; // [rsp+108h] [rbp-1F0h]
  __int128 v6; // [rsp+118h] [rbp-1E0h]
  char v7; // [rsp+128h] [rbp-1D0h]
  _QWORD v8[8]; // [rsp+130h] [rbp-1C8h] BYREF
  __int128 v9; // [rsp+170h] [rbp-188h]
  __int64 v10; // [rsp+180h] [rbp-178h]
  _BYTE dest[168]; // [rsp+188h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+230h] [rbp-C8h]
  __int64 v13; // [rsp+238h] [rbp-C0h]
  __int64 v14; // [rsp+240h] [rbp-B8h]
  __int128 v15; // [rsp+248h] [rbp-B0h]
  __int128 v16; // [rsp+258h] [rbp-A0h]
  char v17; // [rsp+268h] [rbp-90h]
  _BYTE v18[80]; // [rsp+2A8h] [rbp-50h] BYREF

  src[21] = 0x8000000000000005LL;
  v3[0] = 0LL;
  v3[1] = 1LL;
  v3[2] = 0LL;
  v7 = 3;
  src[0] = 0x8000000000000001LL;
  LOBYTE(v5) = 6;
  v14 = src[23];
  v12 = 0x8000000000000005LL;
  v13 = src[22];
  memcpy(dest, src, sizeof(dest));
  v15 = v5;
  v16 = v6;
  v8[1] = 11LL;
  v8[2] = 0LL;
  v8[4] = 0LL;
  v8[6] = 0LL;
  v9 = *a2;
  v10 = *((_QWORD *)a2 + 2);
  v17 = 3;
  v8[0] = 0x8000000000000001LL;
  dap::server::Server<R,W>::send(v18, a1, v8);
  core::ptr::drop_in_place<core::result::Result<(),dap::errors::ServerError>>(v18);
  return core::ptr::drop_in_place<alloc::string::String>(v3);
}