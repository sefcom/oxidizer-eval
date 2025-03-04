void *__fastcall uu_shred::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v7[73]; // [rsp+0h] [rbp-A48h] BYREF
  int v8; // [rsp+248h] [rbp-800h]
  int v9; // [rsp+24Ch] [rbp-7FCh]
  _DWORD src[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v11; // [rsp+50Ch] [rbp-53Ch]
  int v12; // [rsp+514h] [rbp-534h]
  _BYTE desta[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v14; // [rsp+7D4h] [rbp-274h]
  int v15; // [rsp+7DCh] [rbp-26Ch]
  _QWORD v16[2]; // [rsp+7E0h] [rbp-268h] BYREF
  char v17; // [rsp+7F0h] [rbp-258h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v7, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v14 = v11 | 0x8000000080LL;
  v15 = v12;
  clap_builder::builder::arg::Arg::new(src, aForce_0, 5LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::short(src, v7, 102LL);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::arg::Arg::action(v16, v7, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aIterations_0, 10LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::short(desta, v7, 110LL);
  clap_builder::builder::arg::Arg::help(v7, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v7);
  clap_builder::builder::arg::Arg::default_value(v7, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSize, 4LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::short(src, v7, 115LL);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  clap_builder::builder::arg::Arg::help(v16, v7);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aU_0, 1LL);
  clap_builder::builder::arg::Arg::short(v7, desta, 117LL);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::action(v7, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aRemove_0, 6LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::value_name(src, v7);
  v7[0] = aUnlink_1;
  v7[1] = 6LL;
  v7[2] = aWipe;
  v7[3] = 4LL;
  v7[4] = aWipesync;
  v7[5] = 8LL;
  ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64, __int64, __int64))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v16,
    v7,
    v2,
    v3,
    v4,
    v5);
  clap_builder::builder::arg::Arg::value_parser(v7, src);
  v16[0] = 0LL;
  v16[1] = 1LL;
  v17 = 0;
  clap_builder::builder::arg::Arg::num_args(src, v7);
  memcpy(v7, src, sizeof(v7));
  v8 = src[146] | 0x80;
  v9 = src[147];
  clap_builder::builder::arg::Arg::default_missing_value(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::arg::Arg::action(v16, v7, 0LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose_0, 7LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::short(desta, v7, 118LL);
  clap_builder::builder::arg::Arg::help(v7, desta);
  clap_builder::builder::arg::Arg::action(v16, v7, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aExact_0, 5LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::short(src, v7, 120LL);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::arg::Arg::action(v16, v7, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::short(desta, v7, 122LL);
  clap_builder::builder::arg::Arg::help(v7, desta);
  clap_builder::builder::arg::Arg::action(v16, v7, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFile, 4LL);
  clap_builder::builder::arg::Arg::action(v7, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v7, 3LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
