void *__fastcall uu_cut::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+18h] [rbp-AB0h] BYREF
  int v4; // [rsp+290h] [rbp-838h]
  int v5; // [rsp+294h] [rbp-834h]
  _DWORD src[175]; // [rsp+298h] [rbp-830h] BYREF
  __int64 v7; // [rsp+554h] [rbp-574h]
  int v8; // [rsp+55Ch] [rbp-56Ch]
  _DWORD desta[175]; // [rsp+560h] [rbp-568h] BYREF
  __int64 v10; // [rsp+81Ch] [rbp-2ACh]
  int v11; // [rsp+824h] [rbp-2A4h]
  _BYTE v12[672]; // [rsp+828h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(v3, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8800000088LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  memcpy(src, v3, 0x278uLL);
  src[158] = v4 | 0x20;
  src[159] = v5;
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  memcpy(desta, v3, 0x278uLL);
  desta[158] = v4 | 0x20;
  desta[159] = v5;
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 1LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 119LL);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  memcpy(src, v3, 0x278uLL);
  src[158] = v4 | 0x20;
  src[159] = v5;
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 4;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}