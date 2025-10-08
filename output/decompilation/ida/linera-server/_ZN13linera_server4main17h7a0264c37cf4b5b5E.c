__int64 linera_server::main()
{
  char v0; // bp
  __int64 v1; // rbx
  _BYTE v3[80]; // [rsp+8h] [rbp-820h] BYREF
  _BYTE dest[216]; // [rsp+58h] [rbp-7D0h] BYREF
  _QWORD v5[36]; // [rsp+130h] [rbp-6F8h] BYREF
  _BYTE src[1496]; // [rsp+250h] [rbp-5D8h] BYREF

  clap_builder::derive::Parser::parse(v5);
  v0 = v5[0];
  v1 = v5[1];
  if ( ((v5[1] == 1LL) & v5[0]) != 0 )
  {
    tokio::runtime::builder::Builder::new_current_thread(dest);
    if ( LODWORD(v5[2]) != 1 )
      goto LABEL_8;
    goto LABEL_7;
  }
  tokio::runtime::builder::Builder::new_multi_thread(src);
  if ( (v0 & 1) != 0 )
    tokio::runtime::builder::Builder::worker_threads(src, v1, &off_23392C0);
  memcpy(dest, src, sizeof(dest));
  if ( LODWORD(v5[2]) == 1 )
LABEL_7:
    tokio::runtime::builder::Builder::max_blocking_threads(dest, v5[3], &off_23392D8);
LABEL_8:
  *(_WORD *)&dest[205] = 257;
  tokio::runtime::builder::Builder::build(src, dest);
  core::result::Result<T,E>::expect(v3, src);
  memcpy(src, v5, 0x120uLL);
  src[696] = 0;
  tokio::runtime::runtime::Runtime::block_on(v3, src);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(dest);
  return core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v3);
}