void *__fastcall uu_chroot::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[176]; // [rsp+8h] [rbp-AB0h] BYREF
  __int64 v4; // [rsp+2C8h] [rbp-7F0h]
  _BYTE v5[632]; // [rsp+2D0h] [rbp-7E8h] BYREF
  int v6; // [rsp+548h] [rbp-570h]
  int v7; // [rsp+54Ch] [rbp-56Ch]
  _BYTE desta[700]; // [rsp+550h] [rbp-568h] BYREF
  int v9; // [rsp+80Ch] [rbp-2ACh]
  __int64 v10; // [rsp+810h] [rbp-2A8h]
  _BYTE v11[672]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v5, aOptionNewrootC, 41LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v9 = src[175] | 0xA0;
  v10 = v4 | 0x80;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::value_hint(v5, src);
  memcpy(src, v5, 0x278uLL);
  src[158] = v6 | 5;
  src[159] = v7;
  clap_builder::builder::arg::Arg::index(v5, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v5, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v5);
  clap_builder::builder::arg::Arg::help(v5, desta);
  clap_builder::builder::arg::Arg::value_name(v11, v5);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v5, src);
  clap_builder::builder::arg::Arg::help(src, v5);
  clap_builder::builder::arg::Arg::value_name(v5, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v5, desta);
  clap_builder::builder::arg::Arg::help(desta, v5);
  clap_builder::builder::arg::Arg::action(v5, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v5, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v5);
  memcpy(v5, src, sizeof(v5));
  v6 = src[158] | 4;
  v7 = src[159];
  clap_builder::builder::arg::Arg::index(src, v5);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}