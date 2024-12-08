void *__fastcall uu_echo::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+2BCh] [rbp-78Ch]
  __int64 v5; // [rsp+2C0h] [rbp-788h]
  _BYTE desta[700]; // [rsp+2C8h] [rbp-780h] BYREF
  int v7; // [rsp+584h] [rbp-4C4h]
  __int64 v8; // [rsp+588h] [rbp-4C0h]
  _BYTE src[592]; // [rsp+590h] [rbp-4B8h] BYREF
  _QWORD v10[77]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  memcpy(desta, v3, sizeof(desta));
  v7 = v4 | 0x22;
  v8 = v5;
  clap_builder::builder::command::Command::version(v3, desta);
  clap_builder::builder::command::Command::about(desta, v3);
  clap_builder::builder::command::Command::after_help(v3, desta);
  uucore::format_usage(src, aOptionsString, 27LL);
  clap_builder::builder::command::Command::override_usage(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aNoNewline_0, 10LL);
  clap_builder::builder::arg::Arg::short(src, v3, 110LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aEnableBackslas_0, 23LL);
  clap_builder::builder::arg::Arg::short(src, desta, 101LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v10, src);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aDisableBacksla, 24LL);
  clap_builder::builder::arg::Arg::short(src, v3, 69LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v10, src);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aString_0, 6LL);
  clap_builder::builder::arg::Arg::action(src, desta, 1LL);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, src);
  clap_builder::builder::command::Command::arg(dest, v3);
  return dest;
}
