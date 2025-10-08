__int64 __fastcall hx::main_impl(__int64 a1)
{
  _BYTE v2[80]; // [rsp+0h] [rbp-12A8h] BYREF
  _BYTE v3[80]; // [rsp+50h] [rbp-1258h] BYREF
  _BYTE v4[205]; // [rsp+A0h] [rbp-1208h] BYREF
  __int16 v5; // [rsp+16Dh] [rbp-113Bh]
  _BYTE v6[288]; // [rsp+178h] [rbp-1130h] BYREF
  __int64 v7; // [rsp+298h] [rbp-1010h]
  char v8; // [rsp+1293h] [rbp-15h]

  v7 = 0LL;
  v8 = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v4);
  v5 = 257;
  tokio::runtime::builder::Builder::build(v3, v4);
  core::result::Result<T,E>::expect(v2, v3);
  tokio::runtime::runtime::Runtime::block_on(a1, v2, v6);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v2);
  return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v4);
}