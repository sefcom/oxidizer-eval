void *__fastcall uu_sleep::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-828h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-56Ch]
  int v5; // [rsp+2C4h] [rbp-564h]
  _BYTE src[700]; // [rsp+2C8h] [rbp-560h] BYREF
  __int64 v7; // [rsp+584h] [rbp-2A4h]
  int v8; // [rsp+58Ch] [rbp-29Ch]
  _BYTE desta[664]; // [rsp+590h] [rbp-298h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(v3, src);
  clap_builder::builder::command::Command::about(src, v3);
  clap_builder::builder::command::Command::after_help(v3, src);
  uucore::format_usage(desta, aNumberSuffixOp, 30LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::value_name(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src);
  clap_builder::builder::command::Command::arg(dest, v3);
  return dest;
}