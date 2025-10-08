void *__fastcall uu_runcon::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _BYTE v4[640]; // [rsp+18h] [rbp-AB0h] BYREF
  _BYTE desta[700]; // [rsp+298h] [rbp-830h] BYREF
  _BYTE v6[12]; // [rsp+554h] [rbp-574h]
  _BYTE src[700]; // [rsp+560h] [rbp-568h] BYREF
  __int64 v8; // [rsp+81Ch] [rbp-2ACh]
  int v9; // [rsp+824h] [rbp-2A4h]
  _BYTE v10[672]; // [rsp+828h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v4, aContextCommand, 93LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  *(_QWORD *)v6 = v8 | 0x8000000080LL;
  *(_DWORD *)&v6[8] = v9;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v10, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 117LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 114LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v4, desta, 1LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  clap_builder::builder::arg::Arg::value_hint(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  memcpy(dest, desta, 0x2BCuLL);
  v2 = *(_QWORD *)&v6[4];
  *((_DWORD *)dest + 175) = *(_DWORD *)v6 | 0x20;
  *((_QWORD *)dest + 88) = v2;
  return dest;
}