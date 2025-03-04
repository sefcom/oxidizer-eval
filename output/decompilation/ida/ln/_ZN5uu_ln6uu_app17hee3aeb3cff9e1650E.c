void *__fastcall uu_ln::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-78Ch]
  int v5; // [rsp+2C4h] [rbp-784h]
  _BYTE desta[584]; // [rsp+2C8h] [rbp-780h] BYREF
  int v7; // [rsp+510h] [rbp-538h]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(desta, aOptionTTargetL, 131LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 0x8000000080LL;
  v5 = v11;
  uucore::features::backup_control::arguments::backup(desta);
  clap_builder::builder::command::Command::arg(src, v3);
  uucore::features::backup_control::arguments::backup_no_args(desta);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aForce_0, 5LL);
  clap_builder::builder::arg::Arg::short(desta, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aInteractive_0, 11LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 105LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aNoDereference_0, 14LL);
  clap_builder::builder::arg::Arg::short(desta, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aLogical_0, 7LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 76LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aPhysical, 8LL);
  clap_builder::builder::arg::Arg::short(desta, src, 80LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aSymbolic, 8LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 115LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  uucore::features::backup_control::arguments::suffix(desta);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aTargetDirector, 16LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 116LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v3, 4LL);
  clap_builder::builder::arg::Arg::conflicts_with(v12, desta);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aNoTargetDirect_0, 19LL);
  clap_builder::builder::arg::Arg::short(desta, src, 84LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aRelative, 8LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 114LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::requires(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aVerbose_0, 7LL);
  clap_builder::builder::arg::Arg::short(desta, src, 118LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 2LL);
  memcpy(desta, v3, sizeof(desta));
  v7 = v3[146] | 1;
  v8 = v3[147];
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
