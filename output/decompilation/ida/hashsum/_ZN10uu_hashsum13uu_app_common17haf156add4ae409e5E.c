void *__fastcall uu_hashsum::uu_app_common(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[592]; // [rsp+0h] [rbp-A48h] BYREF
  _BYTE desta[700]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v5; // [rsp+50Ch] [rbp-53Ch]
  int v6; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v8; // [rsp+7D4h] [rbp-274h]
  int v9; // [rsp+7DCh] [rbp-26Ch]
  _QWORD v10[77]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionsFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v8 | 0x8800000088LL;
  v6 = v9;
  clap_builder::builder::arg::Arg::new(src, aBinary_0, 6LL);
  clap_builder::builder::arg::Arg::short(v3, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aCheck_0, 5LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::arg::Arg::conflicts_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aTag_0, 3LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::arg::Arg::conflicts_with(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aText, 4LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::conflicts_with(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aQuiet_0, 5LL);
  clap_builder::builder::arg::Arg::short(v3, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aStatus_0, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aStrict_0, 6LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aIgnoreMissing_0, 14LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aWarn, 4LL);
  clap_builder::builder::arg::Arg::short(v3, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, "fileEDOMmode{", 4LL);
  clap_builder::builder::arg::Arg::index(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
