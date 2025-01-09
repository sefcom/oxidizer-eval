void *__fastcall uu_tr::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[592]; // [rsp+0h] [rbp-A48h] BYREF
  _BYTE src[700]; // [rsp+250h] [rbp-7F8h] BYREF
  int v5; // [rsp+50Ch] [rbp-53Ch]
  __int64 v6; // [rsp+510h] [rbp-538h]
  _BYTE desta[700]; // [rsp+518h] [rbp-530h] BYREF
  int v8; // [rsp+7D4h] [rbp-274h]
  __int64 v9; // [rsp+7D8h] [rbp-270h]
  __int64 v10[77]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionSet1Set2, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v8 = v5 | 0xA0;
  v9 = v6 | 0x80;
  clap_builder::builder::arg::Arg::new(src, aComplement_0, 10LL);
  clap_builder::builder::arg::Arg::visible_short_alias(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 99LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src);
  clap_builder::builder::arg::Arg::overrides_with(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aDelete_0, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSqueezeRepeats_0, 15LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTruncateSet1_0, 13LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 116LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSets, 4LL);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
