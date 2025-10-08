void *__fastcall uu_mknod::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+8h] [rbp-AB0h] BYREF
  int v4; // [rsp+280h] [rbp-838h]
  int v5; // [rsp+284h] [rbp-834h]
  _DWORD src[175]; // [rsp+288h] [rbp-830h] BYREF
  __int64 v7; // [rsp+544h] [rbp-574h]
  int v8; // [rsp+54Ch] [rbp-56Ch]
  _DWORD desta[175]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2ACh]
  int v11; // [rsp+814h] [rbp-2A4h]
  _QWORD v12[84]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(v3, aOptionNameType, 38LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 109LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 1;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::value_hint(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 1;
  v5 = src[159];
  clap_builder::builder::arg::Arg::value_parser(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v12);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v12);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 90LL);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  v12[0] = 1LL;
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::arg::Arg::num_args(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x80;
  v5 = src[159];
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}