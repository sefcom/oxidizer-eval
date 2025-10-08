void *__fastcall uu_more::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BYTE v4[632]; // [rsp+0h] [rbp-AB8h] BYREF
  unsigned int v5; // [rsp+278h] [rbp-840h]
  int v6; // [rsp+27Ch] [rbp-83Ch]
  _DWORD desta[175]; // [rsp+280h] [rbp-838h] BYREF
  __int64 v8; // [rsp+53Ch] [rbp-57Ch]
  int v9; // [rsp+544h] [rbp-574h]
  _BYTE src[700]; // [rsp+548h] [rbp-570h] BYREF
  __int64 v11; // [rsp+804h] [rbp-2B4h]
  int v12; // [rsp+80Ch] [rbp-2ACh]
  _QWORD v13[79]; // [rsp+810h] [rbp-2A8h] BYREF
  int v14; // [rsp+A88h] [rbp-30h]
  int v15; // [rsp+A8Ch] [rbp-2Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v4, aOptionsFile, 20LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::version(src, desta);
  memcpy(desta, src, sizeof(desta));
  v8 = v11 | 0x8000000080LL;
  v9 = v12;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 112LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  memcpy(v13, v4, sizeof(v13));
  v14 = v5 | 4;
  v15 = v6;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 80LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[158] & 0xFFFFFFDE | 0x20;
  v6 = desta[159];
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v4, src, 70LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::num_args(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v2 = alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str);
  v13[0] = 4LL;
  v13[1] = v2;
  v13[2] = &unk_125228;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v4, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v4);
  <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v4);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v13, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::arg::Arg::help(v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::num_args(src, v4);
  <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v4);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v13, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[158] & 0xFFFFFFFE;
  v6 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, v4, 1LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v4);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}