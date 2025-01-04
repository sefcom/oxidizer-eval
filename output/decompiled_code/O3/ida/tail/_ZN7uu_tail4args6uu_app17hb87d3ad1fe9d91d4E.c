void *__fastcall uu_tail::args::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BYTE v6[584]; // [rsp+40h] [rbp-A48h] BYREF
  int v7; // [rsp+288h] [rbp-800h]
  int v8; // [rsp+28Ch] [rbp-7FCh]
  _DWORD desta[178]; // [rsp+290h] [rbp-7F8h] BYREF
  _DWORD src[175]; // [rsp+558h] [rbp-530h] BYREF
  __int64 v11; // [rsp+814h] [rbp-274h]
  int v12; // [rsp+81Ch] [rbp-26Ch]
  const char *v13; // [rsp+820h] [rbp-268h] BYREF
  __int64 v14; // [rsp+828h] [rbp-260h]
  const char *v15; // [rsp+830h] [rbp-258h]
  __int64 v16; // [rsp+838h] [rbp-250h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aFlagFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[175] = v11 | 0x8000000080LL;
  desta[177] = v12;
  clap_builder::builder::arg::Arg::new(src, aBytes_0, 5LL);
  clap_builder::builder::arg::Arg::short(v6, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  memcpy(v6, src, sizeof(v6));
  v7 = src[146] | 0x20;
  v8 = src[147];
  v15 = aLines;
  v16 = 5LL;
  v13 = aBytes_0;
  v14 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFollow, 6LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::default_missing_value(v6, desta);
  v13 = 0LL;
  v14 = 1LL;
  LOBYTE(v15) = 0;
  clap_builder::builder::arg::Arg::num_args(desta, v6);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[146] | 0x80;
  v8 = desta[147];
  *(_QWORD *)desta = aDescriptor;
  *(_QWORD *)&desta[2] = 10LL;
  *(_QWORD *)&desta[4] = aName;
  *(_QWORD *)&desta[6] = 4LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(
    &v13,
    desta,
    v2,
    desta[146] | 0x80u,
    v3,
    v4,
    aBytes_0,
    5LL,
    aLines,
    5LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v6);
  clap_builder::builder::arg::Arg::overrides_with(v6, desta);
  clap_builder::builder::arg::Arg::help(&v13, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aLines, 5LL);
  clap_builder::builder::arg::Arg::short(v6, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  memcpy(v6, src, sizeof(v6));
  v7 = src[146] | 0x20;
  v8 = src[147];
  clap_builder::builder::arg::Arg::overrides_with_all(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPid, 3LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::overrides_with(&v13, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aQuiet, 5LL);
  clap_builder::builder::arg::Arg::short(v6, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::visible_alias(v6, src);
  v15 = aVerbose;
  v16 = 7LL;
  v13 = aQuiet;
  v14 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(&v13, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSleepInterval, 14LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 115LL);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(&v13, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aMaxUnchangedSt, 19LL);
  clap_builder::builder::arg::Arg::value_name(v6, src);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::overrides_with_all(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aZeroTerminated, 15LL);
  clap_builder::builder::arg::Arg::short(v6, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(&v13, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aUsePolling, 11LL);
  clap_builder::builder::arg::Arg::alias(v6, desta);
  clap_builder::builder::arg::Arg::alias(desta, v6);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aRetry, 5LL);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::overrides_with(v6, src);
  clap_builder::builder::arg::Arg::action(&v13, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, asc_28646, 1LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 70LL);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::overrides_with(v6, desta);
  clap_builder::builder::arg::Arg::action(&v13, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPresumeInputPi, 19LL);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::alias(src, v6);
  memcpy(v6, src, sizeof(v6));
  v7 = src[146] | 4;
  v8 = src[147];
  clap_builder::builder::arg::Arg::action(&v13, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v6, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v6);
  v13 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(v6, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v6, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
