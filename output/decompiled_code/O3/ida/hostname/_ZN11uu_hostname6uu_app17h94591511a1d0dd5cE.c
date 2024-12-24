void *__fastcall uu_hostname::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+80h] [rbp-7F8h] BYREF
  __int64 v4; // [rsp+33Ch] [rbp-53Ch]
  int v5; // [rsp+344h] [rbp-534h]
  _BYTE src[700]; // [rsp+348h] [rbp-530h] BYREF
  __int64 v7; // [rsp+604h] [rbp-274h]
  int v8; // [rsp+60Ch] [rbp-26Ch]
  _BYTE v9[616]; // [rsp+610h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v9, aOptionHostname, 25LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src, aDomain, 6LL);
  clap_builder::builder::arg::Arg::short(v9, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::overrides_with_all(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aIpAddress, 10LL);
  clap_builder::builder::arg::Arg::short(v9, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::overrides_with_all(v9, desta);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFqdn, 4LL);
  clap_builder::builder::arg::Arg::short(v9, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::overrides_with_all(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aShort, 5LL);
  clap_builder::builder::arg::Arg::short(v9, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::overrides_with_all(v9, desta);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aHost, 4LL);
  clap_builder::builder::arg::Arg::value_parser(v9, src);
  clap_builder::builder::arg::Arg::value_hint(src, v9, 10LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
