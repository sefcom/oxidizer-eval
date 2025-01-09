void *__fastcall uu_head::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+8h] [rbp-A50h] BYREF
  int v4; // [rsp+250h] [rbp-808h]
  int v5; // [rsp+254h] [rbp-804h]
  _BYTE desta[700]; // [rsp+258h] [rbp-800h] BYREF
  __int64 v7; // [rsp+514h] [rbp-544h]
  int v8; // [rsp+51Ch] [rbp-53Ch]
  _DWORD src[175]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v10; // [rsp+7DCh] [rbp-27Ch]
  int v11; // [rsp+7E4h] [rbp-274h]
  _QWORD v12[73]; // [rsp+7E8h] [rbp-270h] BYREF
  int v13; // [rsp+A30h] [rbp-28h]
  int v14; // [rsp+A34h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aFlagFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x8000000080LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src, &unk_1DD3C, 5LL);
  clap_builder::builder::arg::Arg::short(v3, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  v12[0] = &unk_1DD3C;
  v12[1] = 5LL;
  v12[2] = aLines;
  v12[3] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, src);
  memcpy(v12, v3, sizeof(v12));
  v13 = v4 | 0x20;
  v14 = v5;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aLines, 5LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  v12[0] = aLines;
  v12[1] = 5LL;
  v12[2] = &unk_1DD3C;
  v12[3] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, desta);
  memcpy(v12, v3, sizeof(v12));
  v13 = v4 | 0x20;
  v14 = v5;
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aQuiet, 5LL);
  clap_builder::builder::arg::Arg::short(v3, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::visible_alias(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  v12[0] = aVerbose;
  v12[1] = 7LL;
  v12[2] = aQuiet;
  v12[3] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  v12[0] = aQuiet;
  v12[1] = 5LL;
  v12[2] = aVerbose;
  v12[3] = 7LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPresumeInputPi, 19LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::alias(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 4;
  v5 = src[147];
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero, 4LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFile, 4LL);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
