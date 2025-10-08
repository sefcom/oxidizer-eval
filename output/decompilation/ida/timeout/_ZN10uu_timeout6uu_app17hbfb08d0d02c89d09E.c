char *__fastcall uu_timeout::uu_app(char *dest)
{
  int v1; // ecx
  _BYTE v3[632]; // [rsp+0h] [rbp-AB8h] BYREF
  int v4; // [rsp+278h] [rbp-840h]
  int v5; // [rsp+27Ch] [rbp-83Ch]
  _DWORD desta[175]; // [rsp+280h] [rbp-838h] BYREF
  __int64 v7; // [rsp+53Ch] [rbp-57Ch]
  int v8; // [rsp+544h] [rbp-574h]
  _BYTE src[632]; // [rsp+548h] [rbp-570h] BYREF
  int v10; // [rsp+7C0h] [rbp-2F8h]
  int v11; // [rsp+7C4h] [rbp-2F4h]
  _BYTE v12[680]; // [rsp+810h] [rbp-2A8h] BYREF

  clap_builder::builder::command::Command::new(desta);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionDuration, 31LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 102LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 107LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 112LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 115LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 1;
  v5 = v11;
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 1;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  memcpy(dest, desta, 0x2BCuLL);
  v1 = v8;
  *(_QWORD *)(dest + 700) = v7 | 0x80000000A0LL;
  *((_DWORD *)dest + 177) = v1;
  return dest;
}