void *__fastcall uu_shuf::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[592]; // [rsp+0h] [rbp-A48h] BYREF
  _BYTE desta[700]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v5; // [rsp+50Ch] [rbp-53Ch]
  int v6; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v8; // [rsp+7D4h] [rbp-274h]
  int v9; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v10[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(v3, aOptionFileEOpt, 72LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v8 | 0x8000000080LL;
  v6 = v9;
  clap_builder::builder::arg::Arg::new(src, anon_ae22b1c09f715fcd73a906c29609d168_14_llvm_5115542112142487751, 4LL);
  clap_builder::builder::arg::Arg::short(v3, src, 101LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::conflicts_with(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ae22b1c09f715fcd73a906c29609d168_15_llvm_5115542112142487751, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::conflicts_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_ae22b1c09f715fcd73a906c29609d168_16_llvm_5115542112142487751, 10LL);
  clap_builder::builder::arg::Arg::short(v3, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ae22b1c09f715fcd73a906c29609d168_17_llvm_5115542112142487751, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 111LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_ae22b1c09f715fcd73a906c29609d168_18_llvm_5115542112142487751, 13LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_hint(v10, v3, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ae22b1c09f715fcd73a906c29609d168_19_llvm_5115542112142487751, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_ae22b1c09f715fcd73a906c29609d168_20_llvm_5115542112142487751, 15LL);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ae22b1c09f715fcd73a906c29609d168_21_llvm_5115542112142487751, 12LL);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(desta, v3, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
