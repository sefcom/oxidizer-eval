void *__fastcall uu_tac::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-78Ch]
  int v5; // [rsp+2C4h] [rbp-784h]
  _BYTE src[584]; // [rsp+2C8h] [rbp-780h] BYREF
  int v7; // [rsp+510h] [rbp-538h]
  int v8; // [rsp+514h] [rbp-534h]
  _DWORD desta[175]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  uucore::format_usage(src, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, v3);
  clap_builder::builder::command::Command::about(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v10 = v4 | 0x8000000080LL;
  v11 = v5;
  clap_builder::builder::arg::Arg::new(v3, anon_b543cae9a39a6fad33bc794cbae1aae3_2_llvm_15264556053167492347, 6LL);
  clap_builder::builder::arg::Arg::short(src, v3, 98LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_b543cae9a39a6fad33bc794cbae1aae3_3_llvm_15264556053167492347, 5LL);
  clap_builder::builder::arg::Arg::short(src, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, anon_b543cae9a39a6fad33bc794cbae1aae3_4_llvm_15264556053167492347, 9LL);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v12, src);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, "filemode{", 4LL);
  memcpy(src, desta, sizeof(src));
  v7 = desta[146] | 4;
  v8 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, desta, 3LL);
  clap_builder::builder::command::Command::arg(dest, v3);
  return dest;
}
