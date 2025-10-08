void *__fastcall uu_seq::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+8h] [rbp-AB0h] BYREF
  int v4; // [rsp+280h] [rbp-838h]
  int v5; // [rsp+284h] [rbp-834h]
  _DWORD desta[175]; // [rsp+288h] [rbp-830h] BYREF
  __int64 v7; // [rsp+544h] [rbp-574h]
  int v8; // [rsp+54Ch] [rbp-56Ch]
  _BYTE src[700]; // [rsp+550h] [rbp-568h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2ACh]
  int v11; // [rsp+814h] [rbp-2A4h]
  _BYTE v12[672]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x80000000A0LL;
  v8 = v11;
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionLastOpti, 81LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 116LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 119LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 0x20;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}