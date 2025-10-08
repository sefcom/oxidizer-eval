__int64 linera_schema_export::main()
{
  __int64 v0; // rbx
  _BYTE v2[80]; // [rsp+8h] [rbp-180h] BYREF
  _BYTE v3[80]; // [rsp+58h] [rbp-130h] BYREF
  _BYTE v4[205]; // [rsp+A8h] [rbp-E0h] BYREF
  __int16 v5; // [rsp+175h] [rbp-13h]

  tokio::runtime::builder::Builder::new_multi_thread(v4);
  v5 = 257;
  tokio::runtime::builder::Builder::build(v3, v4);
  core::result::Result<T,E>::expect(v2, v3);
  v0 = tokio::runtime::runtime::Runtime::block_on(v2, 0LL);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v2);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v4);
  return v0;
}