void *__fastcall uu_numfmt::uu_app(void *dest)
{
  __int64 v1; // rax
  _QWORD v3[73]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[176]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+510h] [rbp-538h]
  _DWORD src[176]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v9; // [rsp+7D8h] [rbp-270h]
  _QWORD v10[73]; // [rsp+7E0h] [rbp-268h] BYREF
  int v11; // [rsp+A28h] [rbp-20h]
  int v12; // [rsp+A2Ch] [rbp-1Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionNumber, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  desta[175] = src[175] | 0x84;
  v7 = v9 | 0x80;
  clap_builder::builder::arg::Arg::new(src, aDelimiter, 9LL);
  clap_builder::builder::arg::Arg::short(v3, src);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aField, 5LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  memcpy(desta, v3, 0x248uLL);
  desta[146] = v4 | 0x20;
  desta[147] = v5;
  clap_builder::builder::arg::Arg::default_value(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFormat_0, 6LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  memcpy(v10, v3, sizeof(v10));
  v11 = v4 | 0x20;
  v12 = v5;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFrom, 4LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::default_value(v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFromUnit, 9LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::default_value(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTo, 2LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::default_value(v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aToUnit, 7LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::default_value(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPadding, 7LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aHeader, 6LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::default_missing_value(v3, src);
  memcpy(v10, v3, sizeof(v10));
  v11 = v4 | 0x400;
  v12 = v5;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aRound_0, 5LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::default_value(desta, v3);
  v3[0] = aUp;
  v3[1] = 2LL;
  v3[2] = aDown;
  v3[3] = 4LL;
  v3[4] = aFromZero;
  v3[5] = 9LL;
  v3[6] = aTowardsZero;
  v3[7] = 12LL;
  v3[8] = aNearest;
  v3[9] = 7LL;
  ((void (__fastcall *)(_QWORD *, _QWORD *))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v10,
    v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSuffix, 6LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aInvalid, 7LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::default_value(v3, desta);
  v10[0] = aAbort_0;
  v10[1] = 5LL;
  v10[2] = aFail;
  v10[3] = 4LL;
  v10[4] = aWarn;
  v10[5] = 4LL;
  v10[6] = aIgnore;
  v10[7] = 6LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNumber_0, 6LL);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 4;
  v5 = src[147];
  clap_builder::builder::arg::Arg::action(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
