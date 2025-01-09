void *__fastcall uu_cksum::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BYTE v4[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v5; // [rsp+248h] [rbp-800h]
  int v6; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v8; // [rsp+50Ch] [rbp-53Ch]
  int v9; // [rsp+514h] [rbp-534h]
  _DWORD src[175]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v11; // [rsp+7D4h] [rbp-274h]
  int v12; // [rsp+7DCh] [rbp-26Ch]
  _QWORD v13[77]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v4, aOptionsFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v8 = v11 | 0x8800000088LL;
  v9 = v12;
  clap_builder::builder::arg::Arg::new(src, "filemode{", 4LL);
  memcpy(v4, src, sizeof(v4));
  v5 = src[146] | 4;
  v6 = src[147];
  clap_builder::builder::arg::Arg::action(src, v4, 1LL);
  v13[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::value_hint(v13, v4, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aAlgorithm_0, 9LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::short(desta, v4, 97LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  memcpy(v13, &off_355678, 0xF0uLL);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, "untagged0", 8LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTag_0, 3LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v13, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aLength_0, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  v2 = alloc::boxed::Box<T>::new();
  v13[0] = 4LL;
  v13[1] = v2;
  v13[2] = &unk_355768;
  clap_builder::builder::arg::Arg::value_parser(src, v4);
  clap_builder::builder::arg::Arg::short(v4, src, 108LL);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 0LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aRaw_0, 3LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aStrict_0, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aCheck_0, 5LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(desta, v4, 2LL);
  clap_builder::builder::arg::Arg::conflicts_with(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aBase64_0, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  clap_builder::builder::arg::Arg::conflicts_with(v13, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aText, 4LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::short(desta, v4, 116LL);
  memcpy(v4, desta, sizeof(v4));
  v5 = desta[146] | 4;
  v6 = desta[147];
  clap_builder::builder::arg::Arg::overrides_with(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aBinary_1, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::short(src, v4, 98LL);
  memcpy(v4, src, sizeof(v4));
  v5 = src[146] | 4;
  v6 = src[147];
  clap_builder::builder::arg::Arg::overrides_with(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aWarn, 4LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 119LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aStatus_0, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aQuiet_0, 5LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::help(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aIgnoreMissing_0, 14LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::action(v4, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::short(desta, v4, 122LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::arg::Arg::action(v13, v4, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::command::Command::after_help(dest, desta);
  return dest;
}
