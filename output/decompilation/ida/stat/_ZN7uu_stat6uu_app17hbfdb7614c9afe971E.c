void *__fastcall uu_stat::uu_app(void *dest, __int64 a2)
{
  __int64 v2; // rax
  _BYTE v4[640]; // [rsp+8h] [rbp-AB0h] BYREF
  _BYTE desta[700]; // [rsp+288h] [rbp-830h] BYREF
  __int64 v6; // [rsp+544h] [rbp-574h]
  int v7; // [rsp+54Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v9; // [rsp+80Ch] [rbp-2ACh]
  int v10; // [rsp+814h] [rbp-2A4h]
  _QWORD v11[84]; // [rsp+818h] [rbp-2A0h] BYREF

  v2 = uucore::util_name(dest, a2);
  clap_builder::builder::command::Command::new(desta, v2);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v4, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v6 = v9 | 0x8000000080LL;
  v7 = v10;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 76LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 116LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(v11, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v4, desta, 1LL);
  v11[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  clap_builder::builder::arg::Arg::value_hint(v4, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}