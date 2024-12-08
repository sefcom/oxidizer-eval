void *__fastcall uu_rm::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-A58h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-79Ch]
  int v5; // [rsp+2C4h] [rbp-794h]
  _BYTE desta[584]; // [rsp+2C8h] [rbp-790h] BYREF
  int v7; // [rsp+510h] [rbp-548h]
  int v8; // [rsp+514h] [rbp-544h]
  _DWORD src[175]; // [rsp+518h] [rbp-540h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-284h]
  int v11; // [rsp+7DCh] [rbp-27Ch]
  const char *v12; // [rsp+7E0h] [rbp-278h] BYREF
  __int64 v13; // [rsp+7E8h] [rbp-270h]
  const char *v14; // [rsp+7F0h] [rbp-268h]
  __int64 v15; // [rsp+7F8h] [rbp-260h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(desta, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 0x8800000088LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src, aForce, 5LL);
  clap_builder::builder::arg::Arg::short(desta, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(&v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aPrompt, 6LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 105LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  v12 = aPromptMore;
  v13 = 11LL;
  v14 = aInteractive;
  v15 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v3);
  clap_builder::builder::arg::Arg::action(&v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aPromptMore, 11LL);
  clap_builder::builder::arg::Arg::short(desta, src, 73LL);
  clap_builder::builder::arg::Arg::help(src, desta);
  v12 = aPrompt;
  v13 = 6LL;
  v14 = aInteractive;
  v15 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, src);
  clap_builder::builder::arg::Arg::action(&v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aInteractive, 11LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  v12 = 0LL;
  v13 = 1LL;
  LOBYTE(v14) = 0;
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v7 = v3[146] | 0x80;
  v8 = v3[147];
  clap_builder::builder::arg::Arg::default_missing_value(v3, desta);
  v12 = aPrompt;
  v13 = 6LL;
  v14 = aPromptMore;
  v15 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v3);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aOneFileSystem, 15LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aNoPreserveRoot, 16LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aPreserveRoot, 13LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aRecursive, 9LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 114LL);
  clap_builder::builder::arg::Arg::visible_short_alias(v3, desta);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aDir, 3LL);
  clap_builder::builder::arg::Arg::short(desta, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(&v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 118LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(&v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aPresumeInputTt, 18LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::alias(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = src[146] | 4;
  v8 = src[147];
  clap_builder::builder::arg::Arg::action(&v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  v12 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::arg::Arg::num_args(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
