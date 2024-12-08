void *__fastcall uu_expand::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x8800000088LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src, anon_8ef6a1ea3e01f53eba5d37c90f199d8a_8_llvm_14401858094204479963, 7LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 105LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_8ef6a1ea3e01f53eba5d37c90f199d8a_7_llvm_14401858094204479963, 4LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 116LL);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_8ef6a1ea3e01f53eba5d37c90f199d8a_9_llvm_14401858094204479963, 7LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 85LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_8ef6a1ea3e01f53eba5d37c90f199d8a_10_llvm_14401858094204479963, 5LL);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  memcpy(desta, v3, 0x248uLL);
  desta[146] = v4 | 4;
  desta[147] = v5;
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
