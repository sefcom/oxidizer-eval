__int64 forc_submit::main()
{
  _BYTE v1[80]; // [rsp+0h] [rbp-5E8h] BYREF
  _BYTE v2[80]; // [rsp+50h] [rbp-598h] BYREF
  _BYTE v3[205]; // [rsp+A0h] [rbp-548h] BYREF
  __int16 v4; // [rsp+16Dh] [rbp-47Bh]
  _BYTE v5[1136]; // [rsp+178h] [rbp-470h] BYREF

  v5[1112] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v3);
  v4 = 257;
  tokio::runtime::builder::Builder::build(v2, v3);
  core::result::Result<T,E>::expect(v1, v2);
  tokio::runtime::runtime::Runtime::block_on(v1, v5);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v1);
  return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v3);
}