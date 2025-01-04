void *__fastcall uu_sync::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-800h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-544h]
  int v5; // [rsp+2CCh] [rbp-53Ch]
  _BYTE v6[592]; // [rsp+2D0h] [rbp-538h] BYREF
  _BYTE src[700]; // [rsp+520h] [rbp-2E8h] BYREF
  __int64 v8; // [rsp+7DCh] [rbp-2Ch]
  int v9; // [rsp+7E4h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v8 | 0x8000000080LL;
  v5 = v9;
  clap_builder::builder::arg::Arg::new(src, aFileSystem, 11LL);
  clap_builder::builder::arg::Arg::short(v6, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::conflicts_with(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aData, 4LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::conflicts_with(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v6, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v6);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
