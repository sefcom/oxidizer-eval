void *__fastcall uu_numfmt::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v7[73]; // [rsp+0h] [rbp-A48h] BYREF
  int v8; // [rsp+248h] [rbp-800h]
  int v9; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[176]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v11; // [rsp+510h] [rbp-538h]
  _DWORD src[176]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v13; // [rsp+7D8h] [rbp-270h]
  _QWORD v14[73]; // [rsp+7E0h] [rbp-268h] BYREF
  int v15; // [rsp+A28h] [rbp-20h]
  int v16; // [rsp+A2Ch] [rbp-1Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v7, aOptionNumber, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  desta[175] = src[175] | 0x84;
  v11 = v13 | 0x80;
  clap_builder::builder::arg::Arg::new(src, aDelimiter, 9LL);
  clap_builder::builder::arg::Arg::short(v7, src);
  clap_builder::builder::arg::Arg::long(src, v7);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  clap_builder::builder::arg::Arg::help(v14, v7);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aField, 5LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::value_name(v7, desta);
  memcpy(desta, v7, 0x248uLL);
  desta[146] = v8 | 0x20;
  desta[147] = v9;
  clap_builder::builder::arg::Arg::default_value(v7, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFormat_0, 6LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  memcpy(v14, v7, sizeof(v14));
  v15 = v8 | 0x20;
  v16 = v9;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFrom, 4LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::value_name(v7, desta);
  clap_builder::builder::arg::Arg::default_value(v14, v7);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFromUnit, 9LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  clap_builder::builder::arg::Arg::default_value(v14, v7);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTo, 2LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::value_name(v7, desta);
  clap_builder::builder::arg::Arg::default_value(v14, v7);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aToUnit, 7LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  clap_builder::builder::arg::Arg::default_value(v14, v7);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPadding, 7LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::value_name(v7, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aHeader, 6LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::num_args(v7, src);
  clap_builder::builder::arg::Arg::value_name(src, v7);
  clap_builder::builder::arg::Arg::default_missing_value(v7, src);
  memcpy(v14, v7, sizeof(v14));
  v15 = v8 | 0x400;
  v16 = v9;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aRound_0, 5LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::value_name(v7, desta);
  clap_builder::builder::arg::Arg::default_value(desta, v7);
  v7[0] = aUp;
  v7[1] = 2LL;
  v7[2] = aDown;
  v7[3] = 4LL;
  v7[4] = aFromZero;
  v7[5] = 9LL;
  v7[6] = aTowardsZero;
  v7[7] = 12LL;
  v7[8] = aNearest;
  v7[9] = 7LL;
  ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v14,
    v7,
    v2,
    v3,
    v4,
    v5);
  clap_builder::builder::arg::Arg::value_parser(v7, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSuffix, 6LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aInvalid, 7LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::default_value(v7, desta);
  v14[0] = aAbort_0;
  v14[1] = 5LL;
  v14[2] = aFail;
  v14[3] = 4LL;
  v14[4] = aWarn;
  v14[5] = 4LL;
  v14[6] = aIgnore;
  v14[7] = 6LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v7);
  clap_builder::builder::arg::Arg::value_name(v7, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNumber_0, 6LL);
  memcpy(v7, src, sizeof(v7));
  v8 = src[146] | 4;
  v9 = src[147];
  clap_builder::builder::arg::Arg::action(src, v7);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
