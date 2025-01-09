void *__fastcall uu_date::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD v7[178]; // [rsp+0h] [rbp-A58h] BYREF
  _QWORD src[74]; // [rsp+2C8h] [rbp-790h] BYREF
  _BYTE desta[700]; // [rsp+518h] [rbp-540h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-284h]
  int v11; // [rsp+7DCh] [rbp-27Ch]
  _QWORD v12[2]; // [rsp+7E0h] [rbp-278h] BYREF
  char v13; // [rsp+7F0h] [rbp-268h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v7, desta);
  clap_builder::builder::command::Command::about(desta, v7);
  uucore::format_usage(src, aOptionFormatOp, 66LL);
  clap_builder::builder::command::Command::override_usage(v7, desta);
  memcpy(desta, v7, sizeof(desta));
  v10 = *(_QWORD *)&v7[175] | 0x8000000080LL;
  v11 = v7[177];
  clap_builder::builder::arg::Arg::new(v7, "datethur]", 4LL);
  clap_builder::builder::arg::Arg::short(src, v7, 100LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::value_name(src, v7);
  clap_builder::builder::arg::Arg::help(v12, src);
  clap_builder::builder::command::Command::arg(v7, desta);
  clap_builder::builder::arg::Arg::new(desta, "filemode{", 4LL);
  clap_builder::builder::arg::Arg::short(src, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::value_name(src, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, src, 3LL);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::command::Command::arg(desta, v7);
  clap_builder::builder::arg::Arg::new(v7, aIso8601, 8LL);
  clap_builder::builder::arg::Arg::short(src, v7, 73LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::value_name(src, v7);
  *(_QWORD *)v7 = "datethur]";
  *(_QWORD *)&v7[2] = 4LL;
  *(_QWORD *)&v7[4] = aHours;
  *(_QWORD *)&v7[6] = 5LL;
  *(_QWORD *)&v7[8] = aMinutes;
  *(_QWORD *)&v7[10] = 7LL;
  *(_QWORD *)&v7[12] = aSeconds;
  *(_QWORD *)&v7[14] = 7LL;
  *(_QWORD *)&v7[16] = aNs;
  *(_QWORD *)&v7[18] = 2LL;
  ((void (__fastcall *)(_QWORD *, _DWORD *, __int64, __int64, __int64, __int64))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v12,
    v7,
    v2,
    v3,
    v4,
    v5);
  clap_builder::builder::arg::Arg::value_parser(v7, src);
  v12[0] = 0LL;
  v12[1] = 1LL;
  v13 = 0;
  clap_builder::builder::arg::Arg::num_args(src, v7);
  clap_builder::builder::arg::Arg::default_missing_value(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::command::Command::arg(v7, desta);
  clap_builder::builder::arg::Arg::new(desta, aRfcEmail_0, 9LL);
  clap_builder::builder::arg::Arg::short(src, desta, 82LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v12, src);
  clap_builder::builder::command::Command::arg(desta, v7);
  clap_builder::builder::arg::Arg::new(v7, aRfc3339, 8LL);
  clap_builder::builder::arg::Arg::long(src, v7);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  src[0] = "datethur]";
  src[1] = 4LL;
  src[2] = aSeconds;
  src[3] = 7LL;
  src[4] = aNs;
  src[5] = 2LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v12, src);
  clap_builder::builder::arg::Arg::value_parser(src, v7);
  clap_builder::builder::arg::Arg::help(v12, src);
  clap_builder::builder::command::Command::arg(v7, desta);
  clap_builder::builder::arg::Arg::new(desta, aDebug, 5LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta);
  clap_builder::builder::command::Command::arg(desta, v7);
  clap_builder::builder::arg::Arg::new(v7, aReference, 9LL);
  clap_builder::builder::arg::Arg::short(src, v7, 114LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::value_name(src, v7);
  clap_builder::builder::arg::Arg::value_hint(v7, src, 2LL);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::command::Command::arg(v7, desta);
  clap_builder::builder::arg::Arg::new(desta, aSet_0, 3LL);
  clap_builder::builder::arg::Arg::short(src, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::value_name(src, desta);
  clap_builder::builder::arg::Arg::help(v12, src);
  clap_builder::builder::command::Command::arg(desta, v7);
  clap_builder::builder::arg::Arg::new(v7, aUniversal_0, 9LL);
  clap_builder::builder::arg::Arg::short(src, v7, 117LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::alias(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::arg::Arg::action(src, v7);
  clap_builder::builder::command::Command::arg(v7, desta);
  clap_builder::builder::arg::Arg::new(desta, aFormat_0, 6LL);
  clap_builder::builder::command::Command::arg(dest, v7);
  return dest;
}
