__int64 __fastcall fuel_core_e2e_client::async_execute(__int64 a1, __int64 a2)
{
  _BYTE v3[80]; // [rsp+8h] [rbp-190h] BYREF
  _BYTE v4[80]; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v5[205]; // [rsp+A8h] [rbp-F0h] BYREF
  __int16 v6; // [rsp+175h] [rbp-23h]

  tokio::runtime::builder::Builder::new_current_thread(v5);
  v6 = 257;
  tokio::runtime::builder::Builder::build(v4, v5);
  core::result::Result<T,E>::unwrap(v3, v4);
  tokio::runtime::runtime::Runtime::block_on(a1, v3, a2);
  core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(v3);
  return core::ptr::drop_in_place<tokio::runtime::builder::Builder>(v5);
}