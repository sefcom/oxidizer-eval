void *__fastcall uu_pwd::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-AB0h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-7F4h]
  int v5; // [rsp+2CCh] [rbp-7ECh]
  _BYTE v6[640]; // [rsp+2D0h] [rbp-7E8h] BYREF
  _BYTE src[700]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v8; // [rsp+80Ch] [rbp-2ACh]
  int v9; // [rsp+814h] [rbp-2A4h]
  _BYTE v10[672]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v8 | 0x8000000080LL;
  v5 = v9;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v6, src, 76LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v10, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 80LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::overrides_with(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}