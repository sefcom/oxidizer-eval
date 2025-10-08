void *__fastcall uu_head::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+0h] [rbp-AB8h] BYREF
  int v4; // [rsp+278h] [rbp-840h]
  int v5; // [rsp+27Ch] [rbp-83Ch]
  _QWORD v6[79]; // [rsp+280h] [rbp-838h] BYREF
  int v7; // [rsp+4F8h] [rbp-5C0h]
  int v8; // [rsp+4FCh] [rbp-5BCh]
  _BYTE desta[700]; // [rsp+500h] [rbp-5B8h] BYREF
  __int64 v10; // [rsp+7BCh] [rbp-2FCh]
  int v11; // [rsp+7C4h] [rbp-2F4h]
  _DWORD src[175]; // [rsp+7C8h] [rbp-2F0h] BYREF
  __int64 v13; // [rsp+A84h] [rbp-34h]
  int v14; // [rsp+A8Ch] [rbp-2Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aFlagFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v13 | 0x8000000080LL;
  v11 = v14;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  v6[0] = aBytes_0;
  v6[1] = 5LL;
  v6[2] = aLines;
  v6[3] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, src);
  memcpy(v6, v3, sizeof(v6));
  v7 = v4 | 0x20;
  v8 = v5;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  v6[0] = aLines;
  v6[1] = 5LL;
  v6[2] = aBytes_0;
  v6[3] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, desta);
  memcpy(v6, v3, sizeof(v6));
  v7 = v4 | 0x20;
  v8 = v5;
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::visible_alias(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  v6[0] = aVerbose;
  v6[1] = 7LL;
  v6[2] = aQuiet;
  v6[3] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, src);
  clap_builder::builder::arg::Arg::action(v6, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  v6[0] = aQuiet;
  v6[1] = 5LL;
  v6[2] = aVerbose;
  v6[3] = 7LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::alias(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 4;
  v5 = src[159];
  clap_builder::builder::arg::Arg::action(v6, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}