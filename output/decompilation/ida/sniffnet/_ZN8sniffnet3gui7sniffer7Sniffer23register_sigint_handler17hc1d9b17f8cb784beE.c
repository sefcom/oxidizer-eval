__int64 sniffnet::gui::sniffer::Sniffer::register_sigint_handler()
{
  __int64 v0; // rbx
  __int64 v1; // r14
  const char *v3; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+8h] [rbp-50h]
  __int64 v5; // [rsp+10h] [rbp-48h]
  __int64 v6; // [rsp+18h] [rbp-40h]
  __int64 v7; // [rsp+20h] [rbp-38h]
  _BYTE v8[16]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  async_channel::bounded(&v3);
  v0 = v4;
  v1 = v5;
  v6 = v4;
  v7 = v5;
  ctrlc::init_and_set_handler(v9, v3);
  v3 = aSrcGuiSnifferR;
  v4 = 18LL;
  LODWORD(v5) = 1054;
  ((void (__fastcall *)(_BYTE *, _BYTE *, const char **))<core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err)(
    v8,
    v9,
    &v3);
  core::ptr::drop_in_place<core::result::Result<(),ctrlc::error::Error>>(v8);
  return iced_runtime::task::Task<T>::stream(v0, v1);
}