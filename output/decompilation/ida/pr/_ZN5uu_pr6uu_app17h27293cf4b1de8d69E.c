void *__fastcall uu_pr::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD desta[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v3, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v10 | 0x4008800040088LL;
  v8 = v11;
  clap_builder::builder::arg::Arg::new(src, aPages, 5LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aHeader, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 104LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aDoubleSpace, 12LL);
  clap_builder::builder::arg::Arg::short(v3, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aNumberLines, 12LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  memcpy(desta, v3, 0x248uLL);
  desta[146] = v4 | 0x20;
  desta[147] = v5;
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFirstLineNumbe, 17LL);
  clap_builder::builder::arg::Arg::short(v3, src, 78LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aOmitHeader, 11LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aLength, 6LL);
  clap_builder::builder::arg::Arg::short(v3, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aNoFileWarnings, 16LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFormFeed, 9LL);
  clap_builder::builder::arg::Arg::short(v3, src, 70LL);
  clap_builder::builder::arg::Arg::short_alias(src, v3);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aWidth, 5LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 119LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPageWidth, 10LL);
  clap_builder::builder::arg::Arg::short(v3, src, 87LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aAcross, 6LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 97LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aColumn, 6LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSeparator, 9LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSepString, 10LL);
  clap_builder::builder::arg::Arg::short(v3, src, 83LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aMerge_0, 5LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 109LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aIndent, 6LL);
  clap_builder::builder::arg::Arg::short(v3, src, 111LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aJoinLines, 10LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 74LL);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles_0, 5LL);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(desta, v3, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
