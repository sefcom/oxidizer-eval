void *__fastcall uu_rm::uu_app(void *dest, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _DWORD v6[175]; // [rsp+0h] [rbp-A58h] BYREF
  __int64 v7; // [rsp+2BCh] [rbp-79Ch]
  int v8; // [rsp+2C4h] [rbp-794h]
  _BYTE desta[584]; // [rsp+2C8h] [rbp-790h] BYREF
  int v10; // [rsp+510h] [rbp-548h]
  int v11; // [rsp+514h] [rbp-544h]
  _DWORD src[175]; // [rsp+518h] [rbp-540h] BYREF
  __int64 v13; // [rsp+7D4h] [rbp-284h]
  int v14; // [rsp+7DCh] [rbp-27Ch]
  const char *v15; // [rsp+7E0h] [rbp-278h] BYREF
  __int64 v16; // [rsp+7E8h] [rbp-270h]
  const char *v17; // [rsp+7F0h] [rbp-268h]
  __int64 v18; // [rsp+7F8h] [rbp-260h]

  v4 = uucore::util_name(dest, a2, a3, a4);
  clap_builder::builder::command::Command::new(v6, v4);
  clap_builder::builder::command::Command::version(src, v6);
  clap_builder::builder::command::Command::about(v6, src);
  uucore::format_usage(desta, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, v6);
  memcpy(v6, src, sizeof(v6));
  v7 = v13 | 0x8800000088LL;
  v8 = v14;
  clap_builder::builder::arg::Arg::new(src, aForce, 5LL);
  clap_builder::builder::arg::Arg::short(desta, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(&v15, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v6);
  clap_builder::builder::arg::Arg::new(v6, aPrompt, 6LL);
  clap_builder::builder::arg::Arg::short(desta, v6, 105LL);
  clap_builder::builder::arg::Arg::help(v6, desta);
  v15 = aPromptMore;
  v16 = 11LL;
  v17 = aInteractive;
  v18 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v6);
  clap_builder::builder::arg::Arg::action(&v15, desta, 2LL);
  clap_builder::builder::command::Command::arg(v6, src);
  clap_builder::builder::arg::Arg::new(src, aPromptMore, 11LL);
  clap_builder::builder::arg::Arg::short(desta, src, 73LL);
  clap_builder::builder::arg::Arg::help(src, desta);
  v15 = aPrompt;
  v16 = 6LL;
  v17 = aInteractive;
  v18 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, src);
  clap_builder::builder::arg::Arg::action(&v15, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v6);
  clap_builder::builder::arg::Arg::new(v6, aInteractive, 11LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  v15 = 0LL;
  v16 = 1LL;
  LOBYTE(v17) = 0;
  clap_builder::builder::arg::Arg::num_args(v6, desta);
  memcpy(desta, v6, sizeof(desta));
  v10 = v6[146] | 0x80;
  v11 = v6[147];
  clap_builder::builder::arg::Arg::default_missing_value(v6, desta);
  v15 = aPrompt;
  v16 = 6LL;
  v17 = aPromptMore;
  v18 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v6);
  clap_builder::builder::command::Command::arg(v6, src);
  clap_builder::builder::arg::Arg::new(src, aOneFileSystem, 15LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v6);
  clap_builder::builder::arg::Arg::new(v6, aNoPreserveRoot, 16LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(v6, src);
  clap_builder::builder::arg::Arg::new(src, aPreserveRoot, 13LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v6);
  clap_builder::builder::arg::Arg::new(v6, aRecursive, 9LL);
  clap_builder::builder::arg::Arg::short(desta, v6, 114LL);
  clap_builder::builder::arg::Arg::visible_short_alias(v6, desta);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(v6, src);
  clap_builder::builder::arg::Arg::new(src, aDir, 3LL);
  clap_builder::builder::arg::Arg::short(desta, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(&v15, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v6);
  clap_builder::builder::arg::Arg::new(v6, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::short(desta, v6, 118LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(&v15, desta, 2LL);
  clap_builder::builder::command::Command::arg(v6, src);
  clap_builder::builder::arg::Arg::new(src, aPresumeInputTt, 18LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::alias(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = src[146] | 4;
  v11 = src[147];
  clap_builder::builder::arg::Arg::action(&v15, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v6);
  clap_builder::builder::arg::Arg::new(v6, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(desta, v6, 1LL);
  v15 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(v6, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v6);
  clap_builder::builder::arg::Arg::value_hint(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
