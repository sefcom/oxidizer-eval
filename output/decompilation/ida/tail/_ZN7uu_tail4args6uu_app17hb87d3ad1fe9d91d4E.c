void *__fastcall uu_tail::args::uu_app(void *dest, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE v7[584]; // [rsp+40h] [rbp-A48h] BYREF
  int v8; // [rsp+288h] [rbp-800h]
  int v9; // [rsp+28Ch] [rbp-7FCh]
  _DWORD desta[178]; // [rsp+290h] [rbp-7F8h] BYREF
  _DWORD src[175]; // [rsp+558h] [rbp-530h] BYREF
  __int64 v12; // [rsp+814h] [rbp-274h]
  int v13; // [rsp+81Ch] [rbp-26Ch]
  const char *v14; // [rsp+820h] [rbp-268h] BYREF
  __int64 v15; // [rsp+828h] [rbp-260h]
  const char *v16; // [rsp+830h] [rbp-258h]
  __int64 v17; // [rsp+838h] [rbp-250h]

  v2 = uucore::util_name(dest, a2);
  clap_builder::builder::command::Command::new(desta, v2);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v7, aFlagFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[175] = v12 | 0x8000000080LL;
  desta[177] = v13;
  clap_builder::builder::arg::Arg::new(src, aBytes_0, 5LL);
  clap_builder::builder::arg::Arg::short(v7, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v7);
  memcpy(v7, src, sizeof(v7));
  v8 = src[146] | 0x20;
  v9 = src[147];
  v16 = aLines;
  v17 = 5LL;
  v14 = aBytes_0;
  v15 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFollow, 6LL);
  clap_builder::builder::arg::Arg::short(v7, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v7);
  clap_builder::builder::arg::Arg::default_missing_value(v7, desta);
  v14 = 0LL;
  v15 = 1LL;
  LOBYTE(v16) = 0;
  clap_builder::builder::arg::Arg::num_args(desta, v7);
  memcpy(v7, desta, sizeof(v7));
  v8 = desta[146] | 0x80;
  v9 = desta[147];
  *(_QWORD *)desta = aDescriptor;
  *(_QWORD *)&desta[2] = 10LL;
  *(_QWORD *)&desta[4] = aName;
  *(_QWORD *)&desta[6] = 4LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(
    &v14,
    desta,
    v3,
    desta[146] | 0x80u,
    v4,
    v5,
    aBytes_0,
    5LL,
    aLines,
    5LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v7);
  clap_builder::builder::arg::Arg::overrides_with(v7, desta);
  clap_builder::builder::arg::Arg::help(&v14, v7);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aLines, 5LL);
  clap_builder::builder::arg::Arg::short(v7, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v7);
  memcpy(v7, src, sizeof(v7));
  v8 = src[146] | 0x20;
  v9 = src[147];
  clap_builder::builder::arg::Arg::overrides_with_all(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aPid, 3LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v7);
  clap_builder::builder::arg::Arg::help(v7, desta);
  clap_builder::builder::arg::Arg::overrides_with(&v14, v7);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aQuiet, 5LL);
  clap_builder::builder::arg::Arg::short(v7, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v7);
  clap_builder::builder::arg::Arg::visible_alias(v7, src);
  v16 = aVerbose;
  v17 = 7LL;
  v14 = aQuiet;
  v15 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::arg::Arg::action(&v14, v7, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSleepInterval, 14LL);
  clap_builder::builder::arg::Arg::short(v7, desta, 115LL);
  clap_builder::builder::arg::Arg::value_name(desta, v7);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(&v14, v7);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aMaxUnchangedSt, 19LL);
  clap_builder::builder::arg::Arg::value_name(v7, src);
  clap_builder::builder::arg::Arg::long(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::short(v7, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v7);
  clap_builder::builder::arg::Arg::overrides_with_all(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::action(v7, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aZeroTerminated, 15LL);
  clap_builder::builder::arg::Arg::short(v7, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v7);
  clap_builder::builder::arg::Arg::help(v7, src);
  clap_builder::builder::arg::Arg::action(&v14, v7, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aUsePolling, 11LL);
  clap_builder::builder::arg::Arg::alias(v7, desta);
  clap_builder::builder::arg::Arg::alias(desta, v7);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::action(v7, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aRetry, 5LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::overrides_with(v7, src);
  clap_builder::builder::arg::Arg::action(&v14, v7, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, asc_28646, 1LL);
  clap_builder::builder::arg::Arg::short(v7, desta, 70LL);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::overrides_with(v7, desta);
  clap_builder::builder::arg::Arg::action(&v14, v7, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPresumeInputPi, 19LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::alias(src, v7);
  memcpy(v7, src, sizeof(v7));
  v8 = src[146] | 4;
  v9 = src[147];
  clap_builder::builder::arg::Arg::action(&v14, v7, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v7, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v7);
  v14 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(v7, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v7, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
