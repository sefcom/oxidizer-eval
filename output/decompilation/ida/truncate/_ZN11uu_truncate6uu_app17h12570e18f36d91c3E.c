void *__fastcall uu_truncate::uu_app(void *dest)
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
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src, anon_e7564acb652dbde43394d696a024ead1_18_llvm_5275832360742018685, 9LL);
  clap_builder::builder::arg::Arg::short(v3, src, 111LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_e7564acb652dbde43394d696a024ead1_19_llvm_5275832360742018685, 9LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_e7564acb652dbde43394d696a024ead1_20_llvm_5275832360742018685, 9LL);
  clap_builder::builder::arg::Arg::short(v3, src, 114LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::required_unless_present(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::value_hint(v12, v3, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_e7564acb652dbde43394d696a024ead1_21_llvm_5275832360742018685, 4LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::required_unless_present(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_e7564acb652dbde43394d696a024ead1_22_llvm_5275832360742018685, 5LL);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 1;
  v5 = src[147];
  clap_builder::builder::arg::Arg::value_hint(src, v3, 3LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
