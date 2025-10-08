__int64 __fastcall turbo_trace::main(__int64 a1)
{
  _BYTE v2[80]; // [rsp+8h] [rbp-810h] BYREF
  _BYTE v3[80]; // [rsp+58h] [rbp-7C0h] BYREF
  _BYTE v4[205]; // [rsp+A8h] [rbp-770h] BYREF
  __int16 v5; // [rsp+175h] [rbp-6A3h]
  _BYTE v6[1688]; // [rsp+180h] [rbp-698h] BYREF

  v6[148] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v4);
  v5 = 257;
  tokio::runtime::builder::Builder::build(v3, v4);
  core::result::Result<T,E>::expect(v2, v3);
  tokio::runtime::runtime::Runtime::block_on(a1, v2, v6);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v2);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v4);
  return a1;
}