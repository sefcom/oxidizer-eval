__int64 linera_storage_server::main()
{
  _BYTE v1[80]; // [rsp+0h] [rbp-B68h] BYREF
  _BYTE v2[80]; // [rsp+50h] [rbp-B18h] BYREF
  _BYTE v3[205]; // [rsp+A0h] [rbp-AC8h] BYREF
  __int16 v4; // [rsp+16Dh] [rbp-9FBh]
  _BYTE v5[2544]; // [rsp+178h] [rbp-9F0h] BYREF

  v5[61] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v3);
  v4 = 257;
  tokio::runtime::builder::Builder::build(v2, v3);
  core::result::Result<T,E>::expect(v1, v2);
  tokio::runtime::runtime::Runtime::block_on(v1, v5);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v1);
  return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v3);
}