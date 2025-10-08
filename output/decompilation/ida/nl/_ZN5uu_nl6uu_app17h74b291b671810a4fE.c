void *__fastcall uu_nl::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BYTE v4[632]; // [rsp+8h] [rbp-AB0h] BYREF
  int v5; // [rsp+280h] [rbp-838h]
  int v6; // [rsp+284h] [rbp-834h]
  _BYTE src[700]; // [rsp+288h] [rbp-830h] BYREF
  __int64 v8; // [rsp+544h] [rbp-574h]
  int v9; // [rsp+54Ch] [rbp-56Ch]
  _DWORD desta[175]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v11; // [rsp+80Ch] [rbp-2ACh]
  int v12; // [rsp+814h] [rbp-2A4h]
  const char *v13; // [rsp+818h] [rbp-2A0h] BYREF
  __int64 v14; // [rsp+820h] [rbp-298h]
  const char *v15; // [rsp+828h] [rbp-290h]
  __int64 v16; // [rsp+830h] [rbp-288h]
  const char *v17; // [rsp+838h] [rbp-280h]
  __int64 v18; // [rsp+840h] [rbp-278h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::about(desta, src);
  clap_builder::builder::command::Command::version(src, desta);
  uucore::format_usage(v4, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v11 = v8 | 0x8008000080080LL;
  v12 = v9;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[158] | 4;
  v6 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, v4, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 104LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 105LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&v13);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 108LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&v13);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v13 = aLn;
  v14 = 2LL;
  v15 = aRn;
  v16 = 2LL;
  v17 = aRz;
  v18 = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 112LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(&v13, v4, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(&v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&v13);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v2 = alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str);
  v13 = &byte_4;
  v14 = v2;
  v15 = (const char *)&unk_23A038;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}