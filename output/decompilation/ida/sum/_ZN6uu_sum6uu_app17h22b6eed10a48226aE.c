void *__fastcall uu_sum::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[175]; // [rsp+8h] [rbp-830h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-574h]
  int v5; // [rsp+2CCh] [rbp-56Ch]
  _BYTE v6[632]; // [rsp+2D0h] [rbp-568h] BYREF
  int v7; // [rsp+548h] [rbp-2F0h]
  int v8; // [rsp+54Ch] [rbp-2ECh]
  _BYTE desta[700]; // [rsp+550h] [rbp-2E8h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2Ch]
  int v11; // [rsp+814h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  uucore::format_usage(v6, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v4 | 0x8000000080LL;
  v11 = v5;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v6, src, 1LL);
  memcpy(src, v6, 0x278uLL);
  src[158] = v7 | 4;
  src[159] = v8;
  clap_builder::builder::arg::Arg::value_hint(v6, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 114LL);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v6, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(src, v6, 2LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}