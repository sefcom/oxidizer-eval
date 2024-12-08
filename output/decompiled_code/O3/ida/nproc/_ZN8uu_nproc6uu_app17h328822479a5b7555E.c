void *__fastcall uu_nproc::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-800h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-544h]
  int v5; // [rsp+2CCh] [rbp-53Ch]
  _BYTE src[700]; // [rsp+2D0h] [rbp-538h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-27Ch]
  int v8; // [rsp+594h] [rbp-274h]
  _BYTE v9[624]; // [rsp+598h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v9, aOptions, 15LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src, aAll, 3LL);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aIgnore, 6LL);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
