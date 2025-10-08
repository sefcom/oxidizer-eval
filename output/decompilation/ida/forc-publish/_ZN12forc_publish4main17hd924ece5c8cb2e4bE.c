__int64 forc_publish::main()
{
  _BYTE v1[80]; // [rsp+8h] [rbp-680h] BYREF
  _BYTE v2[80]; // [rsp+58h] [rbp-630h] BYREF
  _BYTE v3[205]; // [rsp+A8h] [rbp-5E0h] BYREF
  __int16 v4; // [rsp+175h] [rbp-513h]
  _BYTE v5[1288]; // [rsp+180h] [rbp-508h] BYREF

  v5[1264] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v3);
  v4 = 257;
  tokio::runtime::builder::Builder::build(v2, v3);
  core::result::Result<T,E>::expect(v1, v2);
  tokio::runtime::runtime::Runtime::block_on(v1, v5);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v1);
  return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v3);
}