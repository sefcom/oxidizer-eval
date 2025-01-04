void *__fastcall uu_readlink::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[592]; // [rsp+8h] [rbp-A50h] BYREF
  _BYTE desta[700]; // [rsp+258h] [rbp-800h] BYREF
  __int64 v5; // [rsp+514h] [rbp-544h]
  int v6; // [rsp+51Ch] [rbp-53Ch]
  _BYTE src[700]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v8; // [rsp+7DCh] [rbp-27Ch]
  int v9; // [rsp+7E4h] [rbp-274h]
  _BYTE v10[624]; // [rsp+7E8h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v8 | 0x8000000080LL;
  v6 = v9;
  clap_builder::builder::arg::Arg::new(src, aCanonicalize_0, 12LL);
  clap_builder::builder::arg::Arg::short(v3, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, &unk_1D55B, 21LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 101LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, &unk_1D5E3, 20LL);
  clap_builder::builder::arg::Arg::short(v3, src, 109LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, &unk_1D67D, 10LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, &unk_1D6AB, 5LL);
  clap_builder::builder::arg::Arg::short(v3, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, &unk_1D6CC, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, &unk_1D6D2, 7LL);
  clap_builder::builder::arg::Arg::short(v3, src, 118LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 122LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v10, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFiles_0, 5LL);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
