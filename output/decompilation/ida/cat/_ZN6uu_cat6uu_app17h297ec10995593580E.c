void *__fastcall uu_cat::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-78Ch]
  int v5; // [rsp+2C4h] [rbp-784h]
  _BYTE desta[700]; // [rsp+2C8h] [rbp-780h] BYREF
  __int64 v7; // [rsp+584h] [rbp-4C4h]
  int v8; // [rsp+58Ch] [rbp-4BCh]
  _BYTE src[584]; // [rsp+590h] [rbp-4B8h] BYREF
  int v10; // [rsp+7D8h] [rbp-270h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  uucore::format_usage(src, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, v3);
  clap_builder::builder::command::Command::about(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v7 = v4 | 0x8800000088LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(v3, anon_1ec98090b1de29d3df94daf5d400a23b_18_llvm_15213056334004324336, 4LL);
  memcpy(src, v3, sizeof(src));
  v10 = v3[146] | 4;
  v11 = v3[147];
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1ec98090b1de29d3df94daf5d400a23b_19_llvm_15213056334004324336, 8LL);
  clap_builder::builder::arg::Arg::short(src, desta, 65LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, anon_1ec98090b1de29d3df94daf5d400a23b_20_llvm_15213056334004324336, 15LL);
  clap_builder::builder::arg::Arg::short(src, v3, 98LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1ec98090b1de29d3df94daf5d400a23b_21_llvm_15213056334004324336, 1LL);
  clap_builder::builder::arg::Arg::short(src, desta, 101LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, anon_1ec98090b1de29d3df94daf5d400a23b_22_llvm_15213056334004324336, 9LL);
  clap_builder::builder::arg::Arg::short(src, v3, 69LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1ec98090b1de29d3df94daf5d400a23b_23_llvm_15213056334004324336, 6LL);
  clap_builder::builder::arg::Arg::short(src, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, anon_1ec98090b1de29d3df94daf5d400a23b_24_llvm_15213056334004324336, 13LL);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1ec98090b1de29d3df94daf5d400a23b_25_llvm_15213056334004324336, 1LL);
  clap_builder::builder::arg::Arg::short(src, desta, 116LL);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, anon_1ec98090b1de29d3df94daf5d400a23b_26_llvm_15213056334004324336, 9LL);
  clap_builder::builder::arg::Arg::short(src, v3, 84LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_1ec98090b1de29d3df94daf5d400a23b_27_llvm_15213056334004324336, 16LL);
  clap_builder::builder::arg::Arg::short(src, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(v12, src, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3, anon_1ec98090b1de29d3df94daf5d400a23b_28_llvm_15213056334004324336, 9LL);
  clap_builder::builder::arg::Arg::short(src, v3, 117LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
