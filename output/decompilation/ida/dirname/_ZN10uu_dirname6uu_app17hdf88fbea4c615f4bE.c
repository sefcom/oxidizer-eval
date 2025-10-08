void *__fastcall uu_dirname::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-AA8h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-7ECh]
  int v5; // [rsp+2C4h] [rbp-7E4h]
  _BYTE desta[632]; // [rsp+2C8h] [rbp-7E0h] BYREF
  int v7; // [rsp+540h] [rbp-568h]
  int v8; // [rsp+544h] [rbp-564h]
  _BYTE src[700]; // [rsp+548h] [rbp-560h] BYREF
  __int64 v10; // [rsp+804h] [rbp-2A4h]
  int v11; // [rsp+80Ch] [rbp-29Ch]
  _BYTE v12[664]; // [rsp+810h] [rbp-298h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::about(src, v3);
  clap_builder::builder::command::Command::version(v3, src);
  uucore::format_usage(desta, aOptionName, 19LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 0x8800000088LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(desta, src);
  clap_builder::builder::arg::Arg::short(src, desta);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(v12, desta, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  memcpy(desta, v3, sizeof(desta));
  v7 = v3[158] | 4;
  v8 = v3[159];
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(desta, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}