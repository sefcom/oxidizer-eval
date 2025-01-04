void *__fastcall uu_date::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[178]; // [rsp+0h] [rbp-A58h] BYREF
  _QWORD src[74]; // [rsp+2C8h] [rbp-790h] BYREF
  _BYTE desta[700]; // [rsp+518h] [rbp-540h] BYREF
  __int64 v6; // [rsp+7D4h] [rbp-284h]
  int v7; // [rsp+7DCh] [rbp-27Ch]
  _QWORD v8[2]; // [rsp+7E0h] [rbp-278h] BYREF
  char v9; // [rsp+7F0h] [rbp-268h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  clap_builder::builder::command::Command::about(desta, v3);
  uucore::format_usage(src, aOptionFormatOp, 66LL);
  clap_builder::builder::command::Command::override_usage(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v6 = *(_QWORD *)&v3[175] | 0x8000000080LL;
  v7 = v3[177];
  clap_builder::builder::arg::Arg::new(v3, "datethur]", 4LL);
  clap_builder::builder::arg::Arg::short(src, v3, 100LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v8, src);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, "filemode{", 4LL);
  clap_builder::builder::arg::Arg::short(src, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::value_name(src, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, src, 3LL);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aIso8601, 8LL);
  clap_builder::builder::arg::Arg::short(src, v3, 73LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  *(_QWORD *)v3 = "datethur]";
  *(_QWORD *)&v3[2] = 4LL;
  *(_QWORD *)&v3[4] = aHours;
  *(_QWORD *)&v3[6] = 5LL;
  *(_QWORD *)&v3[8] = aMinutes;
  *(_QWORD *)&v3[10] = 7LL;
  *(_QWORD *)&v3[12] = aSeconds;
  *(_QWORD *)&v3[14] = 7LL;
  *(_QWORD *)&v3[16] = aNs;
  *(_QWORD *)&v3[18] = 2LL;
  ((void (__fastcall *)(_QWORD *, _DWORD *))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v8,
    v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  v8[0] = 0LL;
  v8[1] = 1LL;
  v9 = 0;
  clap_builder::builder::arg::Arg::num_args(src, v3);
  clap_builder::builder::arg::Arg::default_missing_value(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aRfcEmail_0, 9LL);
  clap_builder::builder::arg::Arg::short(src, desta, 82LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v8, src);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aRfc3339, 8LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  src[0] = "datethur]";
  src[1] = 4LL;
  src[2] = aSeconds;
  src[3] = 7LL;
  src[4] = aNs;
  src[5] = 2LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v8, src);
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::help(v8, src);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aDebug, 5LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aReference, 9LL);
  clap_builder::builder::arg::Arg::short(src, v3, 114LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, src, 2LL);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aSet_0, 3LL);
  clap_builder::builder::arg::Arg::short(src, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::value_name(src, desta);
  clap_builder::builder::arg::Arg::help(v8, src);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, aUniversal_0, 9LL);
  clap_builder::builder::arg::Arg::short(src, v3, 117LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::alias(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, aFormat_0, 6LL);
  clap_builder::builder::command::Command::arg(dest, v3);
  return dest;
}
