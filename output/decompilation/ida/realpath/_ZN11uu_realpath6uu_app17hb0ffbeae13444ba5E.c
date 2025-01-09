void *__fastcall uu_realpath::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD desta[175]; // [rsp+8h] [rbp-A50h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-794h]
  int v5; // [rsp+2CCh] [rbp-78Ch]
  _BYTE v6[584]; // [rsp+2D0h] [rbp-788h] BYREF
  int v7; // [rsp+518h] [rbp-540h]
  int v8; // [rsp+51Ch] [rbp-53Ch]
  _BYTE src[700]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v10; // [rsp+7DCh] [rbp-27Ch]
  int v11; // [rsp+7E4h] [rbp-274h]
  _QWORD v12[78]; // [rsp+7E8h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v10 | 0x8000000080LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src, aQuiet, 5LL);
  clap_builder::builder::arg::Arg::short(v6, src, 113LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aStrip, 5LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::visible_alias(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::short(v6, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aLogical, 7LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 76LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPhysical, 8LL);
  clap_builder::builder::arg::Arg::short(v6, src, 80LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  v12[0] = aStrip;
  v12[1] = 5LL;
  v12[2] = aLogical;
  v12[3] = 7LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aCanonicalizeEx_0, 21LL);
  clap_builder::builder::arg::Arg::short(v6, desta, 101LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aCanonicalizeMi_0, 20LL);
  clap_builder::builder::arg::Arg::short(v6, src, 109LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aRelativeTo, 11LL);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::arg::Arg::value_parser(v6, desta);
  clap_builder::builder::arg::Arg::help(v12, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aRelativeBase, 13LL);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::value_name(src, v6);
  clap_builder::builder::arg::Arg::value_parser(v6, src);
  clap_builder::builder::arg::Arg::help(v12, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v6, desta, 1LL);
  memcpy(desta, v6, 0x248uLL);
  desta[146] = v7 | 1;
  desta[147] = v8;
  clap_builder::builder::arg::Arg::value_parser(v6, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
