void *__fastcall uu_env::uu_app(void *dest)
{
  unsigned __int128 v2; // [rsp+0h] [rbp-A68h]
  __int64 v3; // [rsp+10h] [rbp-A58h]
  _BYTE v4[592]; // [rsp+18h] [rbp-A50h] BYREF
  _BYTE desta[700]; // [rsp+268h] [rbp-800h] BYREF
  int v6; // [rsp+524h] [rbp-544h]
  __int64 v7; // [rsp+528h] [rbp-540h]
  _BYTE src[700]; // [rsp+530h] [rbp-538h] BYREF
  int v9; // [rsp+7ECh] [rbp-27Ch]
  __int64 v10; // [rsp+7F0h] [rbp-278h]
  unsigned __int128 v11; // [rsp+800h] [rbp-268h] BYREF
  __int64 v12; // [rsp+810h] [rbp-258h]

  clap_builder::builder::command::Command::new(src, aUuEnv, 6LL);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v4, aOptionNameValu, 53LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v6 = v9 | 0xA0;
  v7 = v10 | 0x80;
  clap_builder::builder::arg::Arg::new(src, aIgnoreEnvironm, 18LL);
  clap_builder::builder::arg::Arg::short(v4, src, 105LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(&v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aChdir_0, 5LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 67LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::number_of_values(v4, desta, 1LL);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  *(_QWORD *)&v2 = 2LL;
  v12 = v3;
  v11 = __PAIR128__(*((unsigned __int64 *)&v2 + 1), 2LL);
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v4, 4LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNull, 4LL);
  clap_builder::builder::arg::Arg::short(v4, src, 48LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::help(v4, src);
  clap_builder::builder::arg::Arg::action(&v11, v4, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile, 4LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::value_name(v4, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v4, 3LL);
  v12 = v3;
  v11 = v2;
  clap_builder::builder::arg::Arg::value_parser(v4, desta);
  clap_builder::builder::arg::Arg::action(desta, v4, 1LL);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aUnset, 5LL);
  clap_builder::builder::arg::Arg::short(v4, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::action(src, v4, 1LL);
  v12 = v3;
  v11 = v2;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(&v11, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aDebug_0, 5LL);
  clap_builder::builder::arg::Arg::short(v4, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 4LL);
  clap_builder::builder::arg::Arg::help(&v11, v4);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSplitString, 12LL);
  clap_builder::builder::arg::Arg::short(v4, src, 83LL);
  clap_builder::builder::arg::Arg::long(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::action(src, v4, 0LL);
  v12 = v3;
  v11 = v2;
  clap_builder::builder::arg::Arg::value_parser(v4, src);
  clap_builder::builder::arg::Arg::help(&v11, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aArgv0, 5LL);
  clap_builder::builder::arg::Arg::overrides_with(v4, desta);
  clap_builder::builder::arg::Arg::short(desta, v4, 97LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 0LL);
  v12 = v3;
  v11 = v2;
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aVars, 4LL);
  clap_builder::builder::arg::Arg::action(v4, src, 1LL);
  *(_QWORD *)&src[16] = v3;
  *(_OWORD *)src = v2;
  clap_builder::builder::arg::Arg::value_parser(&v11, v4);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aIgnoreSignal, 13LL);
  clap_builder::builder::arg::Arg::long(v4, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v4);
  clap_builder::builder::arg::Arg::action(v4, desta, 1LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v4);
  clap_builder::builder::arg::Arg::help(v4, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
