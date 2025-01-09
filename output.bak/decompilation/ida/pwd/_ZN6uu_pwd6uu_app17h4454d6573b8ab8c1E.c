void *__fastcall uu_pwd::uu_app(void *dest)
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
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(desta, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src, aLogical_0, 7LL);
  clap_builder::builder::arg::Arg::short(desta, src, 76LL);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v10, desta);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aPhysical, 8LL);
  clap_builder::builder::arg::Arg::short(desta, v3, 80LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
