void *__fastcall uu_tail::args::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+8h] [rbp-AC0h] BYREF
  int v4; // [rsp+280h] [rbp-848h]
  int v5; // [rsp+284h] [rbp-844h]
  _DWORD desta[178]; // [rsp+288h] [rbp-840h] BYREF
  _DWORD src[175]; // [rsp+550h] [rbp-578h] BYREF
  __int64 v8; // [rsp+80Ch] [rbp-2BCh]
  int v9; // [rsp+814h] [rbp-2B4h]
  const char *v10; // [rsp+818h] [rbp-2B0h] BYREF
  __int64 v11; // [rsp+820h] [rbp-2A8h]
  const char *v12; // [rsp+828h] [rbp-2A0h]
  __int64 v13; // [rsp+830h] [rbp-298h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aFlagFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[175] = v8 | 0x8000000080LL;
  desta[177] = v9;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x20;
  v5 = src[159];
  v10 = (const char *)&unk_24553;
  v11 = 5LL;
  v12 = aLines;
  v13 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::default_missing_value(v3);
  clap_builder::builder::arg::Arg::num_args(desta, v3);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 0x80;
  v5 = desta[159];
  *(_QWORD *)desta = aDescriptor;
  *(_QWORD *)&desta[2] = 10LL;
  *(_QWORD *)&desta[4] = aName;
  *(_QWORD *)&desta[6] = 4LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v10, desta);
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::arg::Arg::help(&v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x20;
  v5 = src[159];
  v10 = (const char *)&unk_24553;
  v11 = 5LL;
  v12 = aLines;
  v13 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::overrides_with(&v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::visible_alias(v3, src);
  v10 = aQuiet;
  v11 = 5LL;
  v12 = aVerbose;
  v13 = 7LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(&v10, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  v10 = aQuiet;
  v11 = 5LL;
  v12 = aVerbose;
  v13 = 7LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::alias(v3, desta);
  clap_builder::builder::arg::Arg::alias(desta, v3);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::action(&v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 70LL);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::arg::Arg::action(&v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::alias(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 4;
  v5 = src[159];
  clap_builder::builder::arg::Arg::action(&v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v3);
  v10 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}