void *__fastcall uu_seq::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+2BCh] [rbp-78Ch]
  __int64 v5; // [rsp+2C0h] [rbp-788h]
  _BYTE src[700]; // [rsp+2C8h] [rbp-780h] BYREF
  int v7; // [rsp+584h] [rbp-4C4h]
  __int64 v8; // [rsp+588h] [rbp-4C0h]
  _BYTE desta[592]; // [rsp+590h] [rbp-4B8h] BYREF
  _QWORD v10[2]; // [rsp+7E0h] [rbp-268h] BYREF
  char v11; // [rsp+7F0h] [rbp-258h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  memcpy(v3, src, sizeof(v3));
  v4 = v7 | 0xA4;
  v5 = v8 | 0x80;
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
  v10[0] = 1LL;
  v10[1] = 3LL;
  v11 = 0;
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
