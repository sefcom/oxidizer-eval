void *__fastcall uu_dircolors::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD src[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE desta[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionFile, 21LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8800000088LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src, aBourneShell_0, 12LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 98LL);
  clap_builder::builder::arg::Arg::visible_alias(v3, src);
  clap_builder::builder::arg::Arg::overrides_with(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aCShell_0, 7LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 99LL);
  clap_builder::builder::arg::Arg::visible_alias(v3, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPrintDatabase_0, 14LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 112LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPrintLsColors_0, 15LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFile, 4LL);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 4;
  v5 = src[147];
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
