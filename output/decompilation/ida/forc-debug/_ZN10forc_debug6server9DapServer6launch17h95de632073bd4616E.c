void *__fastcall forc_debug::server::DapServer::launch(void *dest, __int64 a2)
{
  _BYTE v3[24]; // [rsp+0h] [rbp-13B8h] BYREF
  _BYTE desta[232]; // [rsp+18h] [rbp-13A0h] BYREF
  __int64 v5; // [rsp+100h] [rbp-12B8h] BYREF
  _BYTE src[232]; // [rsp+108h] [rbp-12B0h] BYREF
  _QWORD v7[244]; // [rsp+1F0h] [rbp-11C8h] BYREF
  _BYTE v8[608]; // [rsp+990h] [rbp-A28h] BYREF
  _QWORD v9[249]; // [rsp+BF0h] [rbp-7C8h] BYREF

  v7[52] = 0LL;
  forc_debug::server::DapServer::build_tests(&v5);
  memcpy(desta, src, sizeof(desta));
  if ( v5 == 2 )
  {
    memcpy(dest, desta, 0xE8uLL);
  }
  else
  {
    memcpy(v9, v7, 0x7A0uLL);
    memcpy(src, desta, sizeof(src));
    memcpy(v7, v9, 0x540uLL);
    memcpy(v8, &v9[168], sizeof(v8));
    v9[0] = v7[159];
    v9[1] = v7[159] + 232LL * v7[160];
    v9[2] = a2 + 1600;
    v9[3] = &v7[155];
    v9[4] = v8;
    core::iter::traits::iterator::Iterator::collect(v3, v9);
    forc_debug::server::state::ServerState::init_executors(a2, (__int64)v3);
    forc_debug::server::DapServer::start_debugging_tests(dest, a2, 0LL);
    core::ptr::drop_in_place<forc_test::setup::TestSetup>(v8);
    core::ptr::drop_in_place<forc_pkg::pkg::BuiltPackage>(&v5);
  }
  return dest;
}