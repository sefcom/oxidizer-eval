void *__fastcall uu_more::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BYTE v4[584]; // [rsp+0h] [rbp-A48h] BYREF
  unsigned int v5; // [rsp+248h] [rbp-800h]
  int v6; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v8; // [rsp+50Ch] [rbp-53Ch]
  int v9; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v11; // [rsp+7D4h] [rbp-274h]
  int v12; // [rsp+7DCh] [rbp-26Ch]
  _QWORD v13[73]; // [rsp+7E0h] [rbp-268h] BYREF
  int v14; // [rsp+A28h] [rbp-20h]
  int v15; // [rsp+A2Ch] [rbp-1Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v4, aOptionsFile, 20LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::version(src, desta);
  memcpy(desta, src, sizeof(desta));
  v8 = v11 | 0x8000000080LL;
  v9 = v12;
  clap_builder::builder::arg::Arg::new(src, aPrintOver, 10LL);
  clap_builder::builder::arg::Arg::short(v4, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSilent, 6LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aCleanPrint, 11LL);
  clap_builder::builder::arg::Arg::short(v4, src, 112LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSqueeze, 7LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPlain, 5LL);
  clap_builder::builder::arg::Arg::short(v4, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  memcpy(v13, v4, sizeof(v13));
  v14 = v5 | 4;
  v15 = v6;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPattern, 7LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 80LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[146] & 0xFFFFFFDE | 0x20;
  v6 = desta[147];
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFromLine, 9LL);
  clap_builder::builder::arg::Arg::short(v4, src, 70LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::num_args(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v2 = alloc::boxed::Box<T>::new();
  v13[0] = 4LL;
  v13[1] = v2;
  v13[2] = &unk_163820;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aLines, 5LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v4);
  <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v4);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v13, v4, 0LL);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::arg::Arg::help(v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNumber, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::num_args(src, v4);
  <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v4);
  clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(v13, v4, 0LL);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles_0, 5LL);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[146] & 0xFFFFFFFE;
  v6 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, v4, 1LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v4, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
