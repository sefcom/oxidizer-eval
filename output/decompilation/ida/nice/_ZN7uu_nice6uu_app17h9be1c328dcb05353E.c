void *__fastcall uu_nice::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-AA8h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-7ECh]
  int v5; // [rsp+2C4h] [rbp-7E4h]
  _BYTE v6[632]; // [rsp+2C8h] [rbp-7E0h] BYREF
  int v7; // [rsp+540h] [rbp-568h]
  int v8; // [rsp+544h] [rbp-564h]
  _BYTE src[700]; // [rsp+548h] [rbp-560h] BYREF
  __int64 v10; // [rsp+804h] [rbp-2A4h]
  int v11; // [rsp+80Ch] [rbp-29Ch]
  _BYTE desta[632]; // [rsp+810h] [rbp-298h] BYREF
  int v13; // [rsp+A88h] [rbp-20h]
  int v14; // [rsp+A8Ch] [rbp-1Ch]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(v6, aOptionsCommand, 29LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 0x80000000A0LL;
  v5 = v11;
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(v6, v3);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::action(v3, v6, 0LL);
  clap_builder::builder::arg::Arg::overrides_with(v6, v3);
  memcpy(desta, v6, sizeof(desta));
  v13 = v7 | 0x20;
  v14 = v8;
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v6, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v6);
  clap_builder::builder::command::Command::arg(dest, v3);
  return dest;
}