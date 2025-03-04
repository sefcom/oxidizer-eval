void *__fastcall uu_mkdir::uu_app(void *dest)
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
  __int64 v12[77]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(desta, aOptionDirector, 27LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 0x8000000080LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src, aMode, 4LL);
  clap_builder::builder::arg::Arg::short(desta, src, 109LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aParents_0, 7LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 112LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aVerbose_0, 7LL);
  clap_builder::builder::arg::Arg::short(desta, src, 118LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aDirs, 4LL);
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v7 = v3[146] | 1;
  v8 = v3[147];
  v12[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v3, 4LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
