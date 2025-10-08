void *__fastcall uu_rmdir::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD desta[175]; // [rsp+8h] [rbp-AB0h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-7F4h]
  int v5; // [rsp+2CCh] [rbp-7ECh]
  _BYTE v6[632]; // [rsp+2D0h] [rbp-7E8h] BYREF
  int v7; // [rsp+548h] [rbp-570h]
  int v8; // [rsp+54Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2ACh]
  int v11; // [rsp+814h] [rbp-2A4h]
  _QWORD v12[84]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionDirector, 27LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v10 | 0x8000000080LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 112LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v6, src, 118LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v6, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v6);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[158] | 1;
  v8 = desta[159];
  v12[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v6);
  clap_builder::builder::arg::Arg::value_hint(v6, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}