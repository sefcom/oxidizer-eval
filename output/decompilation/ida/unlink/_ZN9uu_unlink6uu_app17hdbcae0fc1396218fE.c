void *__fastcall uu_unlink::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[175]; // [rsp+18h] [rbp-800h] BYREF
  __int64 v4; // [rsp+2D4h] [rbp-544h]
  int v5; // [rsp+2DCh] [rbp-53Ch]
  _BYTE desta[700]; // [rsp+2E0h] [rbp-538h] BYREF
  __int64 v7; // [rsp+59Ch] [rbp-27Ch]
  int v8; // [rsp+5A4h] [rbp-274h]
  _BYTE v9[584]; // [rsp+5A8h] [rbp-270h] BYREF
  int v10; // [rsp+7F0h] [rbp-28h]
  int v11; // [rsp+7F4h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v9, aFileOption, 19LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v4 | 0x8000000080LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(src);
  memcpy(v9, src, sizeof(v9));
  v10 = src[146] | 5;
  v11 = src[147];
  clap_builder::builder::arg::Arg::value_parser(src, v9);
  clap_builder::builder::arg::Arg::value_hint(v9, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
