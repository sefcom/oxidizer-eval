__int64 change_log::main()
{
  __int64 v0; // rbx
  _BYTE v2[80]; // [rsp+0h] [rbp-3C48h] BYREF
  _BYTE v3[80]; // [rsp+50h] [rbp-3BF8h] BYREF
  _BYTE v4[205]; // [rsp+A0h] [rbp-3BA8h] BYREF
  __int16 v5; // [rsp+16Dh] [rbp-3ADBh]
  _BYTE v6[2744]; // [rsp+178h] [rbp-3AD0h] BYREF
  __int64 v7; // [rsp+C30h] [rbp-3018h]
  __int64 v8; // [rsp+1C30h] [rbp-2018h]
  __int64 v9; // [rsp+2C30h] [rbp-1018h]

  v9 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  v6[264] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v4);
  v5 = 257;
  tokio::runtime::builder::Builder::build(v3, v4);
  core::result::Result<T,E>::expect(v2, v3);
  v0 = tokio::runtime::runtime::Runtime::block_on(v2, v6);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v2);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v4);
  return v0;
}