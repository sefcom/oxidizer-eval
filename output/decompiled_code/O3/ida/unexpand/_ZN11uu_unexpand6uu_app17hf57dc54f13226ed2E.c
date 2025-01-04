void *__fastcall uu_unexpand::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-78Ch]
  int v5; // [rsp+2C4h] [rbp-784h]
  _BYTE src[584]; // [rsp+2C8h] [rbp-780h] BYREF
  int v7; // [rsp+510h] [rbp-538h]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE desta[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  uucore::format_usage(src, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, v3);
  clap_builder::builder::command::Command::about(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v10 = v4 | 0x8000000080LL;
  v11 = v5;
  clap_builder::builder::arg::Arg::new(v3, aFile, 4LL);
  memcpy(src, v3, sizeof(src));
  v7 = v3[146] | 4;
  v8 = v3[147];
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aAll, 3LL);
  clap_builder::builder::arg::Arg::short(src, desta, 97LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aFirstOnly, 10LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aTabs, 4LL);
  clap_builder::builder::arg::Arg::short(src, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 1LL);
  clap_builder::builder::arg::Arg::value_name(src, desta);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aNoUtf8, 7LL);
  clap_builder::builder::arg::Arg::short(src, v3, 85LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
