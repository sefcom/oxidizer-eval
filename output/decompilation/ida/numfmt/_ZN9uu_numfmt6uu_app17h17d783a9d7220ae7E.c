void *__fastcall uu_numfmt::uu_app(void *dest)
{
  __int64 v1; // rax
  _QWORD v3[79]; // [rsp+8h] [rbp-AB0h] BYREF
  int v4; // [rsp+280h] [rbp-838h]
  int v5; // [rsp+284h] [rbp-834h]
  _DWORD desta[175]; // [rsp+288h] [rbp-830h] BYREF
  __int64 v7; // [rsp+544h] [rbp-574h]
  int v8; // [rsp+54Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2ACh]
  int v11; // [rsp+814h] [rbp-2A4h]
  _QWORD v12[79]; // [rsp+818h] [rbp-2A0h] BYREF
  int v13; // [rsp+A90h] [rbp-28h]
  int v14; // [rsp+A94h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionNumber, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x8000000084LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  memcpy(desta, v3, 0x278uLL);
  desta[158] = v4 | 0x20;
  desta[159] = v5;
  clap_builder::builder::arg::Arg::default_value(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  memcpy(v12, v3, sizeof(v12));
  v13 = v4 | 0x20;
  v14 = v5;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::default_value(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::default_value(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::default_value(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::default_value(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::default_missing_value(v3, src);
  memcpy(v12, v3, sizeof(v12));
  v13 = v4 | 0x400;
  v14 = v5;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::default_value(desta, v3);
  v3[0] = aUp;
  v3[1] = 2LL;
  v3[2] = aDown;
  v3[3] = 4LL;
  v3[4] = aFromZero;
  v3[5] = 9LL;
  v3[6] = aTowardsZero;
  v3[7] = 12LL;
  v3[8] = aNearest;
  v3[9] = 7LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v12, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::default_value(v3, desta);
  v12[0] = aAbort_0;
  v12[1] = 5LL;
  v12[2] = aFail;
  v12[3] = 4LL;
  v12[4] = aWarn;
  v12[5] = 4LL;
  v12[6] = aIgnore;
  v12[7] = 6LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 122LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 4;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}