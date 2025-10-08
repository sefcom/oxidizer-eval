void *__fastcall uu_expr::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[175]; // [rsp+8h] [rbp-830h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-574h]
  int v5; // [rsp+2CCh] [rbp-56Ch]
  _BYTE desta[700]; // [rsp+2D0h] [rbp-568h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-2ACh]
  int v8; // [rsp+594h] [rbp-2A4h]
  _BYTE v9[632]; // [rsp+598h] [rbp-2A0h] BYREF
  int v10; // [rsp+810h] [rbp-28h]
  int v11; // [rsp+814h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v9, aExpressionOpti, 28LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v4 | 0x28008000280080LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 8LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 5LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v9, src, 1LL);
  memcpy(src, v9, 0x278uLL);
  src[158] = v10 | 0x20;
  src[159] = v11;
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}