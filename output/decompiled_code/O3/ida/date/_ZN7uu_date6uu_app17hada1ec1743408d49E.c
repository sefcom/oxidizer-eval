void *__fastcall uu_date::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[178]; // [rsp+8h] [rbp-A60h] BYREF
  _QWORD v4[74]; // [rsp+2D0h] [rbp-798h] BYREF
  _BYTE desta[700]; // [rsp+520h] [rbp-548h] BYREF
  __int64 v6; // [rsp+7DCh] [rbp-28Ch]
  int v7; // [rsp+7E4h] [rbp-284h]
  _BYTE v8[640]; // [rsp+7E8h] [rbp-280h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v4, aOptionFormatOp, 66LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v6 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v7 = src[177];
  clap_builder::builder::arg::Arg::new(src, "datethur]", 4LL);
  clap_builder::builder::arg::Arg::short(v4, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::help(v8, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, "filemode{", 4LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v4, 3LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aIso8601, 8LL);
  clap_builder::builder::arg::Arg::short(v4, src, 73LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  *(_QWORD *)src = "datethur]";
  *(_QWORD *)&src[2] = 4LL;
  *(_QWORD *)&src[4] = aHours;
  *(_QWORD *)&src[6] = 5LL;
  *(_QWORD *)&src[8] = aMinutes;
  *(_QWORD *)&src[10] = 7LL;
  *(_QWORD *)&src[12] = aSeconds;
  *(_QWORD *)&src[14] = 7LL;
  *(_QWORD *)&src[16] = aNs;
  *(_QWORD *)&src[18] = 2LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v8, src);
  clap_builder::builder::arg::Arg::value_parser(src, v4);
  clap_builder::builder::arg::Arg::num_args(v4, src);
  clap_builder::builder::arg::Arg::default_missing_value(src);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aRfcEmail_0, 9LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 82LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v8, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aRfc3339, 8LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::value_name(src, v4);
  v4[0] = "datethur]";
  v4[1] = 4LL;
  v4[2] = aSeconds;
  v4[3] = 7LL;
  v4[4] = aNs;
  v4[5] = 2LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v8, v4);
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(v8, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aDebug, 5LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aReference, 9LL);
  clap_builder::builder::arg::Arg::short(v4, src, 114LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::value_hint(src, v4, 2LL);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSet_0, 3LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::help(v8, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aUniversal_0, 9LL);
  clap_builder::builder::arg::Arg::short(v4, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::alias(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFormat_0, 6LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
