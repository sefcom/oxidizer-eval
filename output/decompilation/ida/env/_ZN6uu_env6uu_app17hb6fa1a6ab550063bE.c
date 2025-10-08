void *__fastcall uu_env::uu_app(void *dest)
{
  _BYTE v2[640]; // [rsp+18h] [rbp-AB0h] BYREF
  _BYTE desta[700]; // [rsp+298h] [rbp-830h] BYREF
  int v4; // [rsp+554h] [rbp-574h]
  __int64 v5; // [rsp+558h] [rbp-570h]
  _BYTE src[700]; // [rsp+560h] [rbp-568h] BYREF
  int v7; // [rsp+81Ch] [rbp-2ACh]
  __int64 v8; // [rsp+820h] [rbp-2A8h]
  _BYTE v9[672]; // [rsp+828h] [rbp-2A0h] BYREF

  clap_builder::builder::command::Command::new(src);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v2, aOptionNameValu, 53LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v7 | 0xA0;
  v5 = v8 | 0x80;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v2, src, 105LL);
  clap_builder::builder::arg::Arg::long(src, v2);
  clap_builder::builder::arg::Arg::help(v2, src);
  clap_builder::builder::arg::Arg::action(v9, v2, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v2, desta, 67LL);
  clap_builder::builder::arg::Arg::long(desta, v2);
  clap_builder::builder::arg::Arg::number_of_values(v2, desta, 1LL);
  clap_builder::builder::arg::Arg::value_name(desta, v2);
  clap_builder::builder::arg::Arg::value_parser(v2, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v2);
  clap_builder::builder::arg::Arg::help(v2, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v2, src, 48LL);
  clap_builder::builder::arg::Arg::long(src, v2);
  clap_builder::builder::arg::Arg::help(v2, src);
  clap_builder::builder::arg::Arg::action(v9, v2, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v2, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v2);
  clap_builder::builder::arg::Arg::value_name(v2, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v2);
  clap_builder::builder::arg::Arg::value_parser(v2, desta);
  clap_builder::builder::arg::Arg::action(desta, v2, 1LL);
  clap_builder::builder::arg::Arg::help(v2, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v2, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v2);
  clap_builder::builder::arg::Arg::value_name(v2, src);
  clap_builder::builder::arg::Arg::action(src, v2, 1LL);
  clap_builder::builder::arg::Arg::value_parser(v2, src);
  clap_builder::builder::arg::Arg::help(v9, v2);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v2, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v2);
  clap_builder::builder::arg::Arg::action(v2, desta, 4LL);
  clap_builder::builder::arg::Arg::help(v9, v2);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v2, src, 83LL);
  clap_builder::builder::arg::Arg::long(src, v2);
  clap_builder::builder::arg::Arg::value_name(v2, src);
  clap_builder::builder::arg::Arg::action(src, v2, 0LL);
  clap_builder::builder::arg::Arg::value_parser(v2, src);
  clap_builder::builder::arg::Arg::help(v9, v2);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::overrides_with(v2, desta);
  clap_builder::builder::arg::Arg::short(desta, v2, 97LL);
  clap_builder::builder::arg::Arg::long(v2, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v2);
  clap_builder::builder::arg::Arg::action(v2, desta, 0LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v2);
  clap_builder::builder::arg::Arg::help(v2, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v2, src, 1LL);
  clap_builder::builder::arg::Arg::value_parser(v9, v2);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v2, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v2);
  clap_builder::builder::arg::Arg::action(v2, desta, 1LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v2);
  clap_builder::builder::arg::Arg::help(v2, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}