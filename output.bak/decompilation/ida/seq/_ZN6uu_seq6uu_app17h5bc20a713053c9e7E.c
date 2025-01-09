void *__fastcall uu_seq::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-78Ch]
  int v5; // [rsp+2C4h] [rbp-784h]
  _BYTE src[700]; // [rsp+2C8h] [rbp-780h] BYREF
  __int64 v7; // [rsp+584h] [rbp-4C4h]
  int v8; // [rsp+58Ch] [rbp-4BCh]
  _BYTE desta[592]; // [rsp+590h] [rbp-4B8h] BYREF
  _BYTE v10[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  memcpy(v3, src, sizeof(v3));
  v4 = v7 | 0x80000000A4LL;
  v5 = v8;
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(desta, aOptionLastOpti, 81LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aSeparator_0, 9LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 115LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aTerminator_0, 10LL);
  clap_builder::builder::arg::Arg::short(desta, src, 116LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aEqualWidth_0, 11LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 119LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v10, desta, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aFormat_1, 6LL);
  clap_builder::builder::arg::Arg::short(desta, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aNumbers_0, 7LL);
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
