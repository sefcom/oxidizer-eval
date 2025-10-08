void *__fastcall uu_tty::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-828h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-56Ch]
  int v5; // [rsp+2C4h] [rbp-564h]
  _BYTE desta[700]; // [rsp+2C8h] [rbp-560h] BYREF
  __int64 v7; // [rsp+584h] [rbp-2A4h]
  int v8; // [rsp+58Ch] [rbp-29Ch]
  _BYTE src[664]; // [rsp+590h] [rbp-298h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  clap_builder::builder::command::Command::about(desta, v3);
  uucore::format_usage(src, aOption, 14LL);
  clap_builder::builder::command::Command::override_usage(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v7 = v4 | 0x8000000080LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::visible_alias(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}