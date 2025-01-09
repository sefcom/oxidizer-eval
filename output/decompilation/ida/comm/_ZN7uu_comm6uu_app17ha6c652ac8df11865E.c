void *__fastcall uu_comm::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD desta[175]; // [rsp+8h] [rbp-A50h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-794h]
  int v5; // [rsp+2CCh] [rbp-78Ch]
  _BYTE v6[584]; // [rsp+2D0h] [rbp-788h] BYREF
  int v7; // [rsp+518h] [rbp-540h]
  int v8; // [rsp+51Ch] [rbp-53Ch]
  _DWORD src[175]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v10; // [rsp+7DCh] [rbp-27Ch]
  int v11; // [rsp+7E4h] [rbp-274h]
  _BYTE v12[624]; // [rsp+7E8h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFile1Fil, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v10 | 0x8800000088LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src, a1, 1LL);
  clap_builder::builder::arg::Arg::short(v6, src, 49LL);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, a2, 1LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 50LL);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, a3, 1LL);
  clap_builder::builder::arg::Arg::short(v6, src, 51LL);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aOutputDelimite, 16LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::value_name(v6, desta);
  clap_builder::builder::arg::Arg::default_value(desta, v6);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[146] | 0x20;
  v8 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, v6, 1LL);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[146] | 0x400;
  v8 = desta[147];
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aZeroTerminated_0, 15LL);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::short(src, v6, 122LL);
  clap_builder::builder::arg::Arg::overrides_with(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile1_0, 5LL);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[146] | 1;
  v8 = desta[147];
  clap_builder::builder::arg::Arg::value_hint(v12, v6, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFile2_0, 5LL);
  memcpy(v6, src, sizeof(v6));
  v7 = src[146] | 1;
  v8 = src[147];
  clap_builder::builder::arg::Arg::value_hint(v12, v6, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTotal, 5LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
