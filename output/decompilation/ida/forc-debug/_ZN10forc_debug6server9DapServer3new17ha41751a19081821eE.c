_OWORD *__fastcall forc_debug::server::DapServer::new(_OWORD *dest, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  _OWORD v11[4]; // [rsp+0h] [rbp-A08h] BYREF
  _BYTE v12[48]; // [rsp+40h] [rbp-9C8h] BYREF
  _BYTE src[2456]; // [rsp+70h] [rbp-998h] BYREF

  std::io::buffered::bufreader::BufReader<R>::with_capacity(src);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v12, a4, a5);
  dap::server::Server<R,W>::new(v11, src, v12);
  <forc_debug::server::state::ServerState as core::default::Default>::default(src);
  v7 = v11[0];
  v8 = v11[1];
  v9 = v11[2];
  dest[155] = v11[3];
  dest[154] = v9;
  dest[153] = v8;
  dest[152] = v7;
  *((_QWORD *)dest + 312) = 0LL;
  memcpy(dest, src, 0x980uLL);
  return dest;
}