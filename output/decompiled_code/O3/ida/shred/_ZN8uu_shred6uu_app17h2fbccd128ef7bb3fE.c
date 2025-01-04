void *__fastcall uu_shred::uu_app(void *dest)
{
  __int64 v1; // rax
  _QWORD v3[73]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD src[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE desta[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _QWORD v12[2]; // [rsp+7E0h] [rbp-268h] BYREF
  char v13; // [rsp+7F0h] [rbp-258h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src, aForce_0, 5LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 102LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aIterations_0, 10LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 110LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::default_value(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSize, 4LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aU_0, 1LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 117LL);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aRemove_0, 6LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  v3[0] = aUnlink_1;
  v3[1] = 6LL;
  v3[2] = aWipe;
  v3[3] = 4LL;
  v3[4] = aWipesync;
  v3[5] = 8LL;
  ((void (__fastcall *)(_QWORD *, _QWORD *))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v12,
    v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  v12[0] = 0LL;
  v12[1] = 1LL;
  v13 = 0;
  clap_builder::builder::arg::Arg::num_args(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 0x80;
  v5 = src[147];
  clap_builder::builder::arg::Arg::default_missing_value(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 0LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose_0, 7LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 118LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aExact_0, 5LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 120LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 122LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFile, 4LL);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
