void *__fastcall uu_kill::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-AB8h] BYREF
  int v4; // [rsp+2BCh] [rbp-7FCh]
  __int64 v5; // [rsp+2C0h] [rbp-7F8h]
  _DWORD desta[176]; // [rsp+2C8h] [rbp-7F0h] BYREF
  __int64 v7; // [rsp+588h] [rbp-530h]
  _BYTE src[632]; // [rsp+590h] [rbp-528h] BYREF
  int v9; // [rsp+808h] [rbp-2B0h]
  int v10; // [rsp+80Ch] [rbp-2ACh]
  _BYTE v11[680]; // [rsp+810h] [rbp-2A8h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(v3, desta);
  clap_builder::builder::command::Command::about(desta, v3);
  uucore::format_usage(src, aOptionsPid, 22LL);
  clap_builder::builder::command::Command::override_usage(v3, desta);
  memcpy(desta, v3, 0x2BCuLL);
  desta[175] = v4 | 0x84;
  v7 = v5 | 0x80;
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 108LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::conflicts_with(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(src, desta, 116LL);
  clap_builder::builder::arg::Arg::short_alias(desta, src);
  clap_builder::builder::arg::Arg::long(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(src, v3, 115LL);
  clap_builder::builder::arg::Arg::short_alias(v3, src);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  *(_QWORD *)v3 = aList;
  *(_QWORD *)&v3[8] = 4LL;
  *(_QWORD *)&v3[16] = aTable;
  *(_QWORD *)&v3[24] = 5LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(v11, src);
  clap_builder::builder::command::Command::arg(v3, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(src, desta, sizeof(src));
  v9 = desta[158] | 4;
  v10 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, src, 1LL);
  clap_builder::builder::command::Command::arg(dest, v3);
  return dest;
}