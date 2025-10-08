void *__fastcall uu_users::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+20h] [rbp-828h] BYREF
  __int64 v4; // [rsp+2DCh] [rbp-56Ch]
  int v5; // [rsp+2E4h] [rbp-564h]
  _BYTE src[700]; // [rsp+2E8h] [rbp-560h] BYREF
  __int64 v7; // [rsp+5A4h] [rbp-2A4h]
  int v8; // [rsp+5ACh] [rbp-29Ch]
  _BYTE v9[664]; // [rsp+5B0h] [rbp-298h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v9, aFile_0, 9LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::num_args(v9, src);
  clap_builder::builder::arg::Arg::value_hint(src, v9);
  clap_builder::builder::arg::Arg::value_parser(v9, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}