void *__fastcall uu_cut::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+10h] [rbp-A58h]
  __int64 v4; // [rsp+18h] [rbp-A50h]
  _BYTE v5[584]; // [rsp+20h] [rbp-A48h] BYREF
  int v6; // [rsp+268h] [rbp-800h]
  int v7; // [rsp+26Ch] [rbp-7FCh]
  _DWORD src[175]; // [rsp+270h] [rbp-7F8h] BYREF
  __int64 v9; // [rsp+52Ch] [rbp-53Ch]
  int v10; // [rsp+534h] [rbp-534h]
  _DWORD desta[175]; // [rsp+538h] [rbp-530h] BYREF
  __int64 v12; // [rsp+7F4h] [rbp-274h]
  int v13; // [rsp+7FCh] [rbp-26Ch]
  _QWORD v14[77]; // [rsp+800h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(v5, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v12 = v9 | 0x8800000088LL;
  v13 = v10;
  clap_builder::builder::arg::Arg::new(src, aBytes_1, 5LL);
  clap_builder::builder::arg::Arg::short(v5, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  memcpy(src, v5, 0x248uLL);
  src[146] = v6 | 0x20;
  src[147] = v7;
  clap_builder::builder::arg::Arg::value_name(v5, src);
  clap_builder::builder::arg::Arg::action(v14, v5, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aCharacters_0, 10LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  memcpy(desta, v5, 0x248uLL);
  desta[146] = v6 | 0x20;
  desta[147] = v7;
  clap_builder::builder::arg::Arg::value_name(v5, desta);
  clap_builder::builder::arg::Arg::action(v14, v5, 1LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aDelimiter_0, 9LL);
  clap_builder::builder::arg::Arg::short(v5, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  v14[2] = v4;
  v14[0] = 2LL;
  v14[1] = v3;
  clap_builder::builder::arg::Arg::value_parser(v5, src);
  clap_builder::builder::arg::Arg::help(src, v5);
  clap_builder::builder::arg::Arg::value_name(v5, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aWhitespaceDeli_0, 20LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 119LL);
  clap_builder::builder::arg::Arg::help(desta, v5);
  clap_builder::builder::arg::Arg::value_name(v5, desta);
  clap_builder::builder::arg::Arg::action(v14, v5, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFields_0, 6LL);
  clap_builder::builder::arg::Arg::short(v5, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  memcpy(src, v5, 0x248uLL);
  src[146] = v6 | 0x20;
  src[147] = v7;
  clap_builder::builder::arg::Arg::value_name(v5, src);
  clap_builder::builder::arg::Arg::action(v14, v5, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aComplement_0, 10LL);
  clap_builder::builder::arg::Arg::long(v5, desta);
  clap_builder::builder::arg::Arg::help(desta, v5);
  clap_builder::builder::arg::Arg::action(v5, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aOnlyDelimited_0, 14LL);
  clap_builder::builder::arg::Arg::short(v5, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  clap_builder::builder::arg::Arg::action(v14, v5, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZeroTerminated_0, 15LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  clap_builder::builder::arg::Arg::action(v14, v5, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aOutputDelimite, 16LL);
  clap_builder::builder::arg::Arg::long(v5, src);
  clap_builder::builder::arg::Arg::value_parser(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  clap_builder::builder::arg::Arg::value_name(v14, v5);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile, 4LL);
  memcpy(v5, desta, sizeof(v5));
  v6 = desta[146] | 4;
  v7 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, v5, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v5, desta, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
