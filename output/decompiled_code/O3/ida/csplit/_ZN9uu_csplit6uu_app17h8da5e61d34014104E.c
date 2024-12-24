void *__fastcall uu_csplit::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[175]; // [rsp+8h] [rbp-A50h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-794h]
  int v5; // [rsp+2CCh] [rbp-78Ch]
  _BYTE v6[584]; // [rsp+2D0h] [rbp-788h] BYREF
  int v7; // [rsp+518h] [rbp-540h]
  int v8; // [rsp+51Ch] [rbp-53Ch]
  _DWORD desta[175]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v10; // [rsp+7DCh] [rbp-27Ch]
  int v11; // [rsp+7E4h] [rbp-274h]
  _BYTE v12[624]; // [rsp+7E8h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFilePatt, 30LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v4 | 0x8800000088LL;
  v11 = v5;
  clap_builder::builder::arg::Arg::new(src, aSuffixFormat, 13LL);
  clap_builder::builder::arg::Arg::short(v6, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::value_name(v6, src);
  clap_builder::builder::arg::Arg::help(v12, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPrefix, 6LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::value_name(v6, desta);
  clap_builder::builder::arg::Arg::help(v12, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aKeepFiles, 10LL);
  clap_builder::builder::arg::Arg::short(v6, src, 107LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSuppressMatche, 16LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aDigits, 6LL);
  clap_builder::builder::arg::Arg::short(v6, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::value_name(v6, src);
  clap_builder::builder::arg::Arg::help(v12, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aQuiet, 5LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::visible_alias(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aElideEmptyFile, 17LL);
  clap_builder::builder::arg::Arg::short(v6, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, "filemode{", 4LL);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[146] | 5;
  v8 = desta[147];
  clap_builder::builder::arg::Arg::value_hint(v12, v6, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPattern_0, 7LL);
  memcpy(v6, src, sizeof(v6));
  v7 = src[146] | 4;
  v8 = src[147];
  clap_builder::builder::arg::Arg::action(src, v6, 1LL);
  memcpy(v6, src, sizeof(v6));
  v7 = src[146] | 1;
  v8 = src[147];
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::command::Command::after_help(dest, src);
  return dest;
}
