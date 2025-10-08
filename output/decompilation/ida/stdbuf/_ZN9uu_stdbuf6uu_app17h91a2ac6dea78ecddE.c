void *__fastcall uu_stdbuf::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+28h] [rbp-840h] BYREF
  int v4; // [rsp+2A0h] [rbp-5C8h]
  int v5; // [rsp+2A4h] [rbp-5C4h]
  _DWORD desta[175]; // [rsp+2A8h] [rbp-5C0h] BYREF
  __int64 v7; // [rsp+564h] [rbp-304h]
  int v8; // [rsp+56Ch] [rbp-2FCh]
  _BYTE src[700]; // [rsp+570h] [rbp-2F8h] BYREF
  __int64 v10; // [rsp+82Ch] [rbp-3Ch]
  int v11; // [rsp+834h] [rbp-34h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionCommand, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x80000000A0LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 105LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::required_unless_present_any(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 111LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::required_unless_present_any(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 101LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::required_unless_present_any(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v3, desta);
  memcpy(desta, v3, 0x278uLL);
  desta[158] = v4 | 5;
  desta[159] = v5;
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}