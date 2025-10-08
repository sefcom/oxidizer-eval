void *__fastcall uu_uniq::uu_app(void *dest)
{
  __int64 v1; // rax
  _QWORD v3[79]; // [rsp+8h] [rbp-AC0h] BYREF
  int v4; // [rsp+280h] [rbp-848h]
  int v5; // [rsp+284h] [rbp-844h]
  _DWORD src[178]; // [rsp+288h] [rbp-840h] BYREF
  _DWORD desta[175]; // [rsp+550h] [rbp-578h] BYREF
  __int64 v8; // [rsp+80Ch] [rbp-2BCh]
  int v9; // [rsp+814h] [rbp-2B4h]
  _QWORD v10[79]; // [rsp+818h] [rbp-2B0h] BYREF
  int v11; // [rsp+A90h] [rbp-38h]
  int v12; // [rsp+A94h] [rbp-34h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionInputOut, 31LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v8 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v9 = src[177];
  clap_builder::builder::command::Command::after_help(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 68LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  v3[0] = aNone;
  v3[1] = 4LL;
  v3[2] = aPrepend;
  v3[3] = 7LL;
  v3[4] = aSeparate;
  v3[5] = 8LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v10, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v3);
  clap_builder::builder::arg::Arg::default_missing_value(v3, desta);
  memcpy(v10, v3, sizeof(v10));
  v11 = v4 | 0x80;
  v12 = v5;
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  *(_QWORD *)src = aSeparate;
  *(_QWORD *)&src[2] = 8LL;
  *(_QWORD *)&src[4] = aPrepend;
  *(_QWORD *)&src[6] = 7LL;
  *(_QWORD *)&src[8] = aAppend;
  *(_QWORD *)&src[10] = 6LL;
  *(_QWORD *)&src[12] = aBoth;
  *(_QWORD *)&src[14] = 4LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v10, src);
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  clap_builder::builder::arg::Arg::default_missing_value(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x80;
  v5 = src[159];
  *(_QWORD *)src = aRepeatednoequa;
  *(_QWORD *)&src[2] = 8LL;
  *(_QWORD *)&src[4] = aAllRepeated;
  *(_QWORD *)&src[6] = 12LL;
  *(_QWORD *)&src[8] = aUnique;
  *(_QWORD *)&src[10] = 6LL;
  *(_QWORD *)&src[12] = aCount;
  *(_QWORD *)&src[14] = 5LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 119LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 117LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  memcpy(desta, v3, 0x278uLL);
  desta[158] = v4 | 4;
  desta[159] = v5;
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}