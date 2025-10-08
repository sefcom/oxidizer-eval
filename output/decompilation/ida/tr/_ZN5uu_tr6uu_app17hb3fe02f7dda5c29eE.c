void *__fastcall uu_tr::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[640]; // [rsp+8h] [rbp-AB0h] BYREF
  _BYTE desta[700]; // [rsp+288h] [rbp-830h] BYREF
  int v5; // [rsp+544h] [rbp-574h]
  __int64 v6; // [rsp+548h] [rbp-570h]
  _BYTE src[700]; // [rsp+550h] [rbp-568h] BYREF
  int v8; // [rsp+80Ch] [rbp-2ACh]
  __int64 v9; // [rsp+810h] [rbp-2A8h]
  __int64 v10[84]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionSet1Set2, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v8 | 0xA0;
  v6 = v9 | 0x80;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::visible_short_alias(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 99LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src);
  clap_builder::builder::arg::Arg::overrides_with(v10, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 116LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}