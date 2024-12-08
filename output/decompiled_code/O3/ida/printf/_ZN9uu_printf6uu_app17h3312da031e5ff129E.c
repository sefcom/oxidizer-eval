void *__fastcall uu_printf::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE src[700]; // [rsp+8h] [rbp-800h] BYREF
  _BYTE v4[12]; // [rsp+2C4h] [rbp-544h]
  _BYTE desta[700]; // [rsp+2D0h] [rbp-538h] BYREF
  _BYTE v6[12]; // [rsp+58Ch] [rbp-27Ch]
  _BYTE v7[624]; // [rsp+598h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  memcpy(desta, src, sizeof(desta));
  *(_DWORD *)v6 = *(_DWORD *)v4 | 2;
  *(_QWORD *)&v6[4] = *(_QWORD *)&v4[4];
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  uucore::format_usage(v7, aFormatArgument, 33LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  memcpy(src, desta, sizeof(src));
  *(_QWORD *)v4 = *(_QWORD *)v6 | 0x14000000140000LL;
  *(_DWORD *)&v4[8] = *(_DWORD *)&v6[8];
  clap_builder::builder::arg::Arg::new(desta, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(desta, v7);
  clap_builder::builder::arg::Arg::action(v7, desta, 5LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, &unk_1FE5B, 7LL);
  clap_builder::builder::arg::Arg::long(v7, src);
  clap_builder::builder::arg::Arg::help(src, v7);
  clap_builder::builder::arg::Arg::action(v7, src, 8LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(v7, aFormat_1, 6LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aArgument_0, 8LL);
  clap_builder::builder::arg::Arg::action(v7, src, 1LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
