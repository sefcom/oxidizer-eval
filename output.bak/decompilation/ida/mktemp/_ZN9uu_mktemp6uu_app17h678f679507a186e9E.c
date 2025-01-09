void *__fastcall uu_mktemp::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+10h] [rbp-A58h]
  __int64 v4; // [rsp+18h] [rbp-A50h]
  _BYTE v5[584]; // [rsp+20h] [rbp-A48h] BYREF
  int v6; // [rsp+268h] [rbp-800h]
  int v7; // [rsp+26Ch] [rbp-7FCh]
  _DWORD desta[175]; // [rsp+270h] [rbp-7F8h] BYREF
  __int64 v9; // [rsp+52Ch] [rbp-53Ch]
  int v10; // [rsp+534h] [rbp-534h]
  _BYTE src[700]; // [rsp+538h] [rbp-530h] BYREF
  __int64 v12; // [rsp+7F4h] [rbp-274h]
  int v13; // [rsp+7FCh] [rbp-26Ch]
  __int64 v14; // [rsp+800h] [rbp-268h] BYREF
  __int64 v15; // [rsp+808h] [rbp-260h]
  __int64 v16; // [rsp+810h] [rbp-258h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v5, aOptionTemplate, 25LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v9 = v12 | 0x8000000080LL;
  v10 = v13;
  clap_builder::builder::arg::Arg::new(src, aDirectory, 9LL);
  clap_builder::builder::arg::Arg::short(v5, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  clap_builder::builder::arg::Arg::action(&v14, v5);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aDryRun, 7LL);
  clap_builder::builder::arg::Arg::short(v5, desta, 117LL);
  clap_builder::builder::arg::Arg::long(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  clap_builder::builder::arg::Arg::action(&v14, v5);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aQuiet, 5LL);
  clap_builder::builder::arg::Arg::short(v5, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v5);
  clap_builder::builder::arg::Arg::help(v5, src);
  clap_builder::builder::arg::Arg::action(&v14, v5);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSuffix, 6LL);
  clap_builder::builder::arg::Arg::long(v5, desta);
  clap_builder::builder::arg::Arg::help(desta, v5);
  clap_builder::builder::arg::Arg::value_name(v5, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aP, 1LL);
  clap_builder::builder::arg::Arg::short(v5, src, 112LL);
  clap_builder::builder::arg::Arg::help(src, v5);
  clap_builder::builder::arg::Arg::value_name(v5, src);
  clap_builder::builder::arg::Arg::num_args(src, v5);
  v16 = v4;
  v14 = 3LL;
  v15 = v3;
  clap_builder::builder::arg::Arg::value_parser(v5, src);
  clap_builder::builder::arg::Arg::value_hint(&v14, v5, 4LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTmpdir, 6LL);
  clap_builder::builder::arg::Arg::long(v5, desta);
  clap_builder::builder::arg::Arg::help(desta, v5);
  clap_builder::builder::arg::Arg::value_name(v5, desta);
  v14 = 0LL;
  v15 = 1LL;
  LOBYTE(v16) = 0;
  clap_builder::builder::arg::Arg::num_args(desta, v5);
  memcpy(v5, desta, sizeof(v5));
  v6 = desta[146] | 0x80;
  v7 = desta[147];
  clap_builder::builder::arg::Arg::overrides_with(desta, v5);
  clap_builder::builder::arg::Arg::value_parser(v5, desta);
  clap_builder::builder::arg::Arg::value_hint(&v14, v5, 4LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aT, 1LL);
  clap_builder::builder::arg::Arg::short(v5, src, 116LL);
  clap_builder::builder::arg::Arg::help(src, v5);
  clap_builder::builder::arg::Arg::action(v5, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, &unk_15E20, 8LL);
  clap_builder::builder::arg::Arg::num_args(v5, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
