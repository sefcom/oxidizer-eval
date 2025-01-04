void *__fastcall uu_ptx::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD src[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE desta[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(v3, aOptionInputGOp, 60LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src, "filemode{", 4LL);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 4;
  v5 = src[147];
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v3, src, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_18_llvm_7942943287365551935, 14LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 65LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_19_llvm_7942943287365551935, 11LL);
  clap_builder::builder::arg::Arg::short(v3, src, 71LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_20_llvm_7942943287365551935, 15LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 70LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_21_llvm_7942943287365551935, 10LL);
  clap_builder::builder::arg::Arg::short(v3, src, 77LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_22_llvm_7942943287365551935, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 79LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_23_llvm_7942943287365551935, 15LL);
  clap_builder::builder::arg::Arg::short(v3, src, 82LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_24_llvm_7942943287365551935, 15LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 83LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_25_llvm_7942943287365551935, 10LL);
  clap_builder::builder::arg::Arg::short(v3, src, 84LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_26_llvm_7942943287365551935, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 87LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_27_llvm_7942943287365551935, 10LL);
  clap_builder::builder::arg::Arg::short(v3, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, src, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_28_llvm_7942943287365551935, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935, 8LL);
  clap_builder::builder::arg::Arg::short(v3, src, 103LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_30_llvm_7942943287365551935, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_31_llvm_7942943287365551935, 9LL);
  clap_builder::builder::arg::Arg::short(v3, src, 111LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, src, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_32_llvm_7942943287365551935, 10LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_7bad5d3cfcfc6941f72c3bc4e85b9543_33_llvm_7942943287365551935, 5LL);
  clap_builder::builder::arg::Arg::short(v3, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
