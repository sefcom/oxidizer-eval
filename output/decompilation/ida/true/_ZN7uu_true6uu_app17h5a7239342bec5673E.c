void *__fastcall uu_true::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE src[700]; // [rsp+8h] [rbp-800h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-544h]
  int v5; // [rsp+2CCh] [rbp-53Ch]
  _BYTE desta[700]; // [rsp+2D0h] [rbp-538h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-27Ch]
  int v8; // [rsp+594h] [rbp-274h]
  _BYTE v9[624]; // [rsp+598h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v4 | 0x14000000140000LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(src, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVersion, 7LL);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 8LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
