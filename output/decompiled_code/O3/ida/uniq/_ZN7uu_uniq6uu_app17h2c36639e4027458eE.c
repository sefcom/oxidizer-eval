void *__fastcall uu_uniq::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+18h] [rbp-A60h]
  _QWORD v4[73]; // [rsp+20h] [rbp-A58h] BYREF
  int v5; // [rsp+268h] [rbp-810h]
  int v6; // [rsp+26Ch] [rbp-80Ch]
  _DWORD src[178]; // [rsp+270h] [rbp-808h] BYREF
  _DWORD desta[175]; // [rsp+538h] [rbp-540h] BYREF
  __int64 v9; // [rsp+7F4h] [rbp-284h]
  int v10; // [rsp+7FCh] [rbp-27Ch]
  _QWORD v11[73]; // [rsp+800h] [rbp-278h] BYREF
  int v12; // [rsp+A48h] [rbp-30h]
  int v13; // [rsp+A4Ch] [rbp-2Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v4, aOptionInputOut, 31LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v9 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v10 = src[177];
  clap_builder::builder::command::Command::after_help(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1f49cec9ceddeb89d2d8f6d9badf249a_2_llvm_9614704736168780173, 12LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 68LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  v4[0] = aNone;
  v4[1] = 4LL;
  v4[2] = aPrepend;
  v4[3] = 7LL;
  v4[4] = aSeparate;
  v4[5] = 8LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v11, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  LOBYTE(v3) = 0;
  v11[2] = v3;
  v11[0] = 0LL;
  v11[1] = 1LL;
  clap_builder::builder::arg::Arg::num_args(desta, v4);
  clap_builder::builder::arg::Arg::default_missing_value(v4, desta);
  memcpy(v11, v4, sizeof(v11));
  v12 = v5 | 0x80;
  v13 = v6;
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_1f49cec9ceddeb89d2d8f6d9badf249a_11_llvm_9614704736168780173, 5LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  *(_QWORD *)src = aSeparate;
  *(_QWORD *)&src[2] = 8LL;
  *(_QWORD *)&src[4] = aPrepend;
  *(_QWORD *)&src[6] = 7LL;
  *(_QWORD *)&src[8] = aAppend;
  *(_QWORD *)&src[10] = 6LL;
  *(_QWORD *)&src[12] = aBoth;
  *(_QWORD *)&src[14] = 4LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v11, src);
  clap_builder::builder::arg::Arg::value_parser(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  clap_builder::builder::arg::Arg::num_args(v4, src);
  clap_builder::builder::arg::Arg::default_missing_value(src, v4);
  memcpy(v4, src, sizeof(v4));
  v5 = src[146] | 0x80;
  v6 = src[147];
  *(_QWORD *)src = &anon_1f49cec9ceddeb89d2d8f6d9badf249a_6_llvm_9614704736168780173;
  *(_QWORD *)&src[2] = 8LL;
  *(_QWORD *)&src[4] = anon_1f49cec9ceddeb89d2d8f6d9badf249a_2_llvm_9614704736168780173;
  *(_QWORD *)&src[6] = 12LL;
  *(_QWORD *)&src[8] = anon_1f49cec9ceddeb89d2d8f6d9badf249a_9_llvm_9614704736168780173;
  *(_QWORD *)&src[10] = 6LL;
  *(_QWORD *)&src[12] = anon_1f49cec9ceddeb89d2d8f6d9badf249a_4_llvm_9614704736168780173;
  *(_QWORD *)&src[14] = 5LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(v11, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1f49cec9ceddeb89d2d8f6d9badf249a_3_llvm_9614704736168780173, 11LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 119LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(v11, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_1f49cec9ceddeb89d2d8f6d9badf249a_4_llvm_9614704736168780173, 5LL);
  clap_builder::builder::arg::Arg::short(v4, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1f49cec9ceddeb89d2d8f6d9badf249a_5_llvm_9614704736168780173, 11LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, &anon_1f49cec9ceddeb89d2d8f6d9badf249a_6_llvm_9614704736168780173, 8LL);
  clap_builder::builder::arg::Arg::short(v4, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1f49cec9ceddeb89d2d8f6d9badf249a_8_llvm_9614704736168780173, 10LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(v11, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_1f49cec9ceddeb89d2d8f6d9badf249a_7_llvm_9614704736168780173, 11LL);
  clap_builder::builder::arg::Arg::short(v4, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::value_name(v11, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1f49cec9ceddeb89d2d8f6d9badf249a_9_llvm_9614704736168780173, 6LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 117LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_1f49cec9ceddeb89d2d8f6d9badf249a_10_llvm_9614704736168780173, 15LL);
  clap_builder::builder::arg::Arg::short(v4, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v4, desta, 1LL);
  v11[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  v11[0] = 0LL;
  v11[1] = 2LL;
  LOBYTE(v11[2]) = 0;
  clap_builder::builder::arg::Arg::num_args(v4, desta);
  memcpy(desta, v4, 0x248uLL);
  desta[146] = v5 | 4;
  desta[147] = v6;
  clap_builder::builder::arg::Arg::value_hint(v4, desta, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
