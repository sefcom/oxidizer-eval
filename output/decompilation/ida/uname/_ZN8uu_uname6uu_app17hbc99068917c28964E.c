void *__fastcall uu_uname::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _DWORD src[175]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOption, 14LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x8000000080LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src, anon_fa20d908ae531394d995a480a5191403_0_llvm_9354271668978287964, 3LL);
  clap_builder::builder::arg::Arg::short(v3, src, 97LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_fa20d908ae531394d995a480a5191403_1_llvm_9354271668978287964, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::alias(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, &anon_fa20d908ae531394d995a480a5191403_2_llvm_9354271668978287964, 8LL);
  clap_builder::builder::arg::Arg::short(v3, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_fa20d908ae531394d995a480a5191403_4_llvm_9354271668978287964, 14LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::alias(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_fa20d908ae531394d995a480a5191403_3_llvm_9354271668978287964, 14LL);
  clap_builder::builder::arg::Arg::short(v3, src, 118LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_fa20d908ae531394d995a480a5191403_5_llvm_9354271668978287964, 7LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 109LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_fa20d908ae531394d995a480a5191403_8_llvm_9354271668978287964, 16LL);
  clap_builder::builder::arg::Arg::short(v3, src, 111LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_fa20d908ae531394d995a480a5191403_6_llvm_9354271668978287964, 9LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 112LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[146] | 4;
  v5 = desta[147];
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_fa20d908ae531394d995a480a5191403_7_llvm_9354271668978287964, 17LL);
  clap_builder::builder::arg::Arg::short(v3, src, 105LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 4;
  v5 = src[147];
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
