void *__fastcall uu_shuf::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[640]; // [rsp+18h] [rbp-AB0h] BYREF
  _BYTE desta[700]; // [rsp+298h] [rbp-830h] BYREF
  __int64 v5; // [rsp+554h] [rbp-574h]
  int v6; // [rsp+55Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+560h] [rbp-568h] BYREF
  __int64 v8; // [rsp+81Ch] [rbp-2ACh]
  int v9; // [rsp+824h] [rbp-2A4h]
  _QWORD v10[84]; // [rsp+828h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(v3, aOptionFileEOpt, 72LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v8 | 0x8000000080LL;
  v6 = v9;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 101LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::conflicts_with(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::conflicts_with(v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_parser(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 111LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::value_hint(v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}