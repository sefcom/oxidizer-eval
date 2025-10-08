void *__fastcall uu_tsort::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-828h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-56Ch]
  int v5; // [rsp+2C4h] [rbp-564h]
  _BYTE src[632]; // [rsp+2C8h] [rbp-560h] BYREF
  int v7; // [rsp+540h] [rbp-2E8h]
  int v8; // [rsp+544h] [rbp-2E4h]
  _BYTE desta[700]; // [rsp+548h] [rbp-2E0h] BYREF
  __int64 v10; // [rsp+804h] [rbp-24h]
  int v11; // [rsp+80Ch] [rbp-1Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  uucore::format_usage(src, aOptionsFile, 17LL);
  clap_builder::builder::command::Command::override_usage(desta, v3);
  clap_builder::builder::command::Command::about(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v10 = v4 | 0x8000000080LL;
  v11 = v5;
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::default_value(src);
  memcpy(v3, src, 0x278uLL);
  v3[158] = v7 | 4;
  v3[159] = v8;
  clap_builder::builder::arg::Arg::value_hint(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}