void *__fastcall uu_printenv::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-A50h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-794h]
  int v5; // [rsp+2CCh] [rbp-78Ch]
  _BYTE v6[592]; // [rsp+2D0h] [rbp-788h] BYREF
  _BYTE src[700]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v8; // [rsp+7DCh] [rbp-27Ch]
  int v9; // [rsp+7E4h] [rbp-274h]
  _BYTE v10[624]; // [rsp+7E8h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionVariable, 28LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v8 | 0x8000000080LL;
  v5 = v9;
  clap_builder::builder::arg::Arg::new(src, aNull, 4LL);
  clap_builder::builder::arg::Arg::short(v6, src);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v10, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVariables, 9LL);
  clap_builder::builder::arg::Arg::action(v6, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v6);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
