void *__fastcall uu_sync::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-830h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-574h]
  int v5; // [rsp+2CCh] [rbp-56Ch]
  _BYTE src[700]; // [rsp+2D0h] [rbp-568h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-2ACh]
  int v8; // [rsp+594h] [rbp-2A4h]
  _BYTE v9[672]; // [rsp+598h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v9, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::conflicts_with(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::conflicts_with(v9, desta);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v9, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v9);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}