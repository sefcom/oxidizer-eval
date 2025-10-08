void *__fastcall uu_rm::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD desta[175]; // [rsp+8h] [rbp-AC0h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-804h]
  int v5; // [rsp+2CCh] [rbp-7FCh]
  _BYTE v6[632]; // [rsp+2D0h] [rbp-7F8h] BYREF
  int v7; // [rsp+548h] [rbp-580h]
  int v8; // [rsp+54Ch] [rbp-57Ch]
  _DWORD src[175]; // [rsp+550h] [rbp-578h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2BCh]
  int v11; // [rsp+814h] [rbp-2B4h]
  const char *v12; // [rsp+818h] [rbp-2B0h] BYREF
  __int64 v13; // [rsp+820h] [rbp-2A8h]
  const char *v14; // [rsp+828h] [rbp-2A0h]
  __int64 v15; // [rsp+830h] [rbp-298h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v10 | 0x8800000088LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v6, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(&v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 105LL);
  clap_builder::builder::arg::Arg::help(desta, v6);
  v12 = aPromptMore;
  v13 = 11LL;
  v14 = aInteractive;
  v15 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v6, desta);
  clap_builder::builder::arg::Arg::action(&v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v6, src, 73LL);
  clap_builder::builder::arg::Arg::help(src, v6);
  v12 = aPrompt;
  v13 = 6LL;
  v14 = aInteractive;
  v15 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v6, src);
  clap_builder::builder::arg::Arg::action(&v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::value_name(v6, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v6);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[158] | 0x80;
  v8 = desta[159];
  clap_builder::builder::arg::Arg::default_missing_value(desta);
  v12 = aPrompt;
  v13 = 6LL;
  v14 = aPromptMore;
  v15 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v6, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 114LL);
  clap_builder::builder::arg::Arg::visible_short_alias(desta, v6);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v6, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(&v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(&v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::alias(src, v6);
  memcpy(v6, src, sizeof(v6));
  v7 = src[158] | 4;
  v8 = src[159];
  clap_builder::builder::arg::Arg::action(&v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v6, desta, 1LL);
  v12 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(desta, v6);
  clap_builder::builder::arg::Arg::num_args(v6, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v6);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}