__int64 __fastcall linera_indexer::main(__int64 a1)
{
  _BYTE v2[80]; // [rsp+0h] [rbp-B88h] BYREF
  _BYTE v3[80]; // [rsp+50h] [rbp-B38h] BYREF
  _BYTE v4[205]; // [rsp+A0h] [rbp-AE8h] BYREF
  __int16 v5; // [rsp+16Dh] [rbp-A1Bh]
  _BYTE v6[2576]; // [rsp+178h] [rbp-A10h] BYREF

  v6[377] = 0;
  tokio::runtime::builder::Builder::new_multi_thread(v4);
  v5 = 257;
  tokio::runtime::builder::Builder::build(v3, v4);
  core::result::Result<T,E>::expect(v2, v3);
  tokio::runtime::runtime::Runtime::block_on(a1, v2, v6);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v2);
  core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v4);
  return a1;
}