void __fastcall __noreturn forc_debug::server::DapServer::exit(__int64 a1, __int64 a2)
{
  _BYTE v2[56]; // [rsp+8h] [rbp-1C0h] BYREF
  _QWORD v3[49]; // [rsp+40h] [rbp-188h] BYREF

  v3[1] = 6LL;
  v3[2] = a2;
  v3[0] = 0x8000000000000001LL;
  dap::server::Server<R,W>::send(v2, a1, v3);
  core::ptr::drop_in_place<core::result::Result<(),dap::errors::ServerError>>(v2);
  std::process::exit(a2);
}