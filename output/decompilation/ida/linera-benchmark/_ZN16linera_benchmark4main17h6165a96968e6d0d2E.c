__int64 linera_benchmark::main()
{
  __int64 v0; // rbx
  _QWORD v2[10]; // [rsp+0h] [rbp-1048h] BYREF
  _BYTE v3[80]; // [rsp+50h] [rbp-FF8h] BYREF
  _BYTE v4[205]; // [rsp+A0h] [rbp-FA8h] BYREF
  __int16 v5; // [rsp+16Dh] [rbp-EDBh]
  _BYTE v6[3792]; // [rsp+178h] [rbp-ED0h] BYREF

  v2[7] = 0LL;
  v6[3768] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v4);
  v5 = 257;
  tokio::runtime::builder::Builder::build(v3, v4);
  core::result::Result<T,E>::expect(v2, v3);
  v0 = tokio::runtime::runtime::Runtime::block_on(v2, v6);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v2);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v4);
  return v0;
}