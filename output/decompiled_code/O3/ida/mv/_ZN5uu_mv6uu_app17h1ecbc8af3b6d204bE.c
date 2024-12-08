void *__fastcall uu_mv::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-A80h]
  const char *v4; // [rsp+10h] [rbp-A78h]
  _QWORD v5[73]; // [rsp+18h] [rbp-A70h] BYREF
  int v6; // [rsp+260h] [rbp-828h]
  int v7; // [rsp+264h] [rbp-824h]
  _DWORD desta[175]; // [rsp+268h] [rbp-820h] BYREF
  __int64 v9; // [rsp+524h] [rbp-564h]
  int v10; // [rsp+52Ch] [rbp-55Ch]
  _BYTE v11[24]; // [rsp+530h] [rbp-558h] BYREF
  _DWORD src[178]; // [rsp+548h] [rbp-540h] BYREF
  const char *v13; // [rsp+810h] [rbp-278h] BYREF
  __int64 v14; // [rsp+818h] [rbp-270h]
  const char *v15; // [rsp+820h] [rbp-268h]
  __int64 v16; // [rsp+828h] [rbp-260h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v5, aOptionTSourceD, 104LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  v5[0] = &off_187020;
  v5[1] = <&T as core::fmt::Display>::fmt;
  v5[2] = &off_187010;
  v5[3] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)src = &unk_187030;
  *(_QWORD *)&src[2] = 2LL;
  *(_QWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[4] = v5;
  *(_QWORD *)&src[6] = 2LL;
  core::option::Option<T>::map_or_else(v11, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v9 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v10 = src[177];
  clap_builder::builder::arg::Arg::new(src, aForce, 5LL);
  clap_builder::builder::arg::Arg::short(v5, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  v13 = aInteractive;
  v14 = 11LL;
  v15 = aNoClobber;
  v16 = 10LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v5);
  clap_builder::builder::arg::Arg::action(v5, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aInteractive, 11LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  v13 = aForce;
  v14 = 5LL;
  v15 = aNoClobber;
  v16 = 10LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v5);
  clap_builder::builder::arg::Arg::action(v5, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNoClobber, 10LL);
  clap_builder::builder::arg::Arg::short(v5, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  v13 = aForce;
  v14 = 5LL;
  v15 = aInteractive;
  v16 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v5);
  clap_builder::builder::arg::Arg::action(v5, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aStripTrailingS, 22LL);
  clap_builder::builder::arg::Arg::long(v5, desta);
  clap_builder::builder::arg::Arg::help(desta, v5);
  clap_builder::builder::arg::Arg::action(v5, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  uucore::features::backup_control::arguments::backup(v5);
  clap_builder::builder::command::Command::arg(src, desta);
  uucore::features::backup_control::arguments::backup_no_args(v5);
  clap_builder::builder::command::Command::arg(desta, src);
  uucore::features::backup_control::arguments::suffix(v5);
  clap_builder::builder::command::Command::arg(src, desta);
  uucore::features::update_control::arguments::update(v5);
  clap_builder::builder::command::Command::arg(desta, src);
  uucore::features::update_control::arguments::update_no_args(v5);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, "target-directory/", 16LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v5);
  clap_builder::builder::arg::Arg::value_hint(v5, desta, 4LL);
  clap_builder::builder::arg::Arg::conflicts_with(desta, v5);
  v15 = v4;
  v13 = (_BYTE *)(&dword_0 + 2);
  v14 = v3;
  clap_builder::builder::arg::Arg::value_parser(v5, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNoTargetDirect, 19LL);
  clap_builder::builder::arg::Arg::short(v5, src, 84LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  clap_builder::builder::arg::Arg::action(&v13, v5, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  clap_builder::builder::arg::Arg::action(&v13, v5, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aProgress, 8LL);
  clap_builder::builder::arg::Arg::short(v5, src, 103LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  clap_builder::builder::arg::Arg::action(&v13, v5, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v5, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v5);
  memcpy(v5, desta, sizeof(v5));
  v6 = desta[146] | 1;
  v7 = desta[147];
  clap_builder::builder::arg::Arg::value_parser(desta, v5);
  clap_builder::builder::arg::Arg::value_hint(v5, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aDebug, 5LL);
  clap_builder::builder::arg::Arg::long(v5, src);
  clap_builder::builder::arg::Arg::help(src, v5);
  clap_builder::builder::arg::Arg::action(v5, src, 2LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
