void *__fastcall uu_factor::uu_app(void *dest, __int64 a2)
{
  __int64 v2; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-A50h] BYREF
  __int64 v5; // [rsp+2C4h] [rbp-794h]
  int v6; // [rsp+2CCh] [rbp-78Ch]
  _BYTE src[700]; // [rsp+2D0h] [rbp-788h] BYREF
  __int64 v8; // [rsp+58Ch] [rbp-4CCh]
  int v9; // [rsp+594h] [rbp-4C4h]
  _BYTE v10[592]; // [rsp+598h] [rbp-4C0h] BYREF
  _BYTE v11[624]; // [rsp+7E8h] [rbp-270h] BYREF

  v2 = uucore::util_name(dest, a2);
  clap_builder::builder::command::Command::new(desta, v2);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v10, aOptionNumber, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v8 | 0x4008800040088LL;
  v6 = v9;
  clap_builder::builder::arg::Arg::new(src, aNumber, 6LL);
  clap_builder::builder::arg::Arg::action(v10, src, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aExponents, 9LL);
  clap_builder::builder::arg::Arg::short(v10, desta);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v11, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 5LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
