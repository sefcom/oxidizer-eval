void *__fastcall uu_pinky::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-AA8h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-7ECh]
  int v5; // [rsp+2C4h] [rbp-7E4h]
  _BYTE desta[700]; // [rsp+2C8h] [rbp-7E0h] BYREF
  __int64 v7; // [rsp+584h] [rbp-524h]
  int v8; // [rsp+58Ch] [rbp-51Ch]
  _BYTE src[640]; // [rsp+590h] [rbp-518h] BYREF
  _BYTE v10[664]; // [rsp+810h] [rbp-298h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  clap_builder::builder::command::Command::about(desta, v3);
  uucore::format_usage(src, aOptionUser, 24LL);
  clap_builder::builder::command::Command::override_usage(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v7 = v4 | 0x8008000080080LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 108LL);
  clap_builder::builder::arg::Arg::requires(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(src, desta, 98LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 104LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(src, desta, 112LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(src, desta, 102LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 119LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(src, desta, 105LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 113LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(src, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v10, src);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 5LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}