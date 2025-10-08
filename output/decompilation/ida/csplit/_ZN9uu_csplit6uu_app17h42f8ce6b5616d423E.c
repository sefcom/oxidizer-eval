void *__fastcall uu_csplit::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+0h] [rbp-AB8h] BYREF
  int v4; // [rsp+278h] [rbp-840h]
  int v5; // [rsp+27Ch] [rbp-83Ch]
  _DWORD src[175]; // [rsp+280h] [rbp-838h] BYREF
  __int64 v7; // [rsp+53Ch] [rbp-57Ch]
  int v8; // [rsp+544h] [rbp-574h]
  _DWORD desta[175]; // [rsp+548h] [rbp-570h] BYREF
  __int64 v10; // [rsp+804h] [rbp-2B4h]
  int v11; // [rsp+80Ch] [rbp-2ACh]
  _BYTE v12[680]; // [rsp+810h] [rbp-2A8h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionFilePatt, 30LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8800000088LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 102LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 107LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 113LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::visible_short_alias(v3, desta);
  clap_builder::builder::arg::Arg::visible_alias(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 5;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::value_hint(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 4;
  v5 = src[159];
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 1;
  v5 = src[159];
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::command::Command::after_help(dest, src);
  return dest;
}