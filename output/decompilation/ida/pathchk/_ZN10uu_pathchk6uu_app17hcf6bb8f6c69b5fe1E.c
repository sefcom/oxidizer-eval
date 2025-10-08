void *__fastcall uu_pathchk::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-828h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-56Ch]
  int v5; // [rsp+2C4h] [rbp-564h]
  _BYTE src[700]; // [rsp+2C8h] [rbp-560h] BYREF
  __int64 v7; // [rsp+584h] [rbp-2A4h]
  int v8; // [rsp+58Ch] [rbp-29Ch]
  _BYTE desta[632]; // [rsp+590h] [rbp-298h] BYREF
  int v10; // [rsp+808h] [rbp-20h]
  int v11; // [rsp+80Ch] [rbp-1Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(desta, aOptionName, 22LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(desta, src, 112LL);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(desta, v3, 80LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(desta, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::help(src, desta);
  clap_builder::builder::arg::Arg::action(desta, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  memcpy(desta, v3, sizeof(desta));
  v10 = v3[158] | 4;
  v11 = v3[159];
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(desta, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}