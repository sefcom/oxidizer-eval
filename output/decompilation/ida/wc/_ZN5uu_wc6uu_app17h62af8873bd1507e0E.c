void *__fastcall uu_wc::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+10h] [rbp-A58h]
  __int64 v4; // [rsp+18h] [rbp-A50h]
  _DWORD desta[178]; // [rsp+20h] [rbp-A48h] BYREF
  _BYTE v6[584]; // [rsp+2E8h] [rbp-780h] BYREF
  int v7; // [rsp+530h] [rbp-538h]
  int v8; // [rsp+534h] [rbp-534h]
  _BYTE src[700]; // [rsp+538h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7F4h] [rbp-274h]
  int v11; // [rsp+7FCh] [rbp-26Ch]
  _QWORD v12[77]; // [rsp+800h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[175] = v10 | 0x8800000088LL;
  desta[177] = v11;
  clap_builder::builder::arg::Arg::new(src, anon_ca8d8071f7923b59edada6fd769c66ed_22_llvm_12788460948389540269, 5LL);
  clap_builder::builder::arg::Arg::short(v6, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ca8d8071f7923b59edada6fd769c66ed_23_llvm_12788460948389540269, 5LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 109LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_ca8d8071f7923b59edada6fd769c66ed_24_llvm_12788460948389540269, 11LL);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::value_name(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  v12[2] = v4;
  v12[0] = 2LL;
  v12[1] = v3;
  clap_builder::builder::arg::Arg::value_parser(src, v6);
  clap_builder::builder::arg::Arg::value_hint(v6, src, 3LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ca8d8071f7923b59edada6fd769c66ed_25_llvm_12788460948389540269, 5LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 108LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_ca8d8071f7923b59edada6fd769c66ed_26_llvm_12788460948389540269, 15LL);
  clap_builder::builder::arg::Arg::short(v6, src, 76LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_ca8d8071f7923b59edada6fd769c66ed_27_llvm_12788460948389540269, 5LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  *(_QWORD *)desta = aAuto;
  *(_QWORD *)&desta[2] = 4LL;
  *(_QWORD *)&desta[4] = aAlways;
  *(_QWORD *)&desta[6] = 6LL;
  *(_QWORD *)&desta[8] = aOnly;
  *(_QWORD *)&desta[10] = 4LL;
  *(_QWORD *)&desta[12] = aNever;
  *(_QWORD *)&desta[14] = 5LL;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v12, desta);
  clap_builder::builder::arg::Arg::value_parser(desta, v6);
  clap_builder::builder::arg::Arg::value_name(v6, desta);
  memcpy(desta, v6, 0x248uLL);
  desta[146] = v7 | 0x10;
  desta[147] = v8;
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_ca8d8071f7923b59edada6fd769c66ed_28_llvm_12788460948389540269, 5LL);
  clap_builder::builder::arg::Arg::short(v6, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v6, desta, 1LL);
  clap_builder::builder::arg::Arg::value_parser(desta, v6);
  clap_builder::builder::arg::Arg::value_hint(v6, desta, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
