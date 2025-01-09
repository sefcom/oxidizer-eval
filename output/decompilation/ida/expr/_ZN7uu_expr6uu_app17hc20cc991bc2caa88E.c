void *__fastcall uu_expr::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD src[175]; // [rsp+8h] [rbp-800h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-544h]
  int v5; // [rsp+2CCh] [rbp-53Ch]
  _BYTE desta[700]; // [rsp+2D0h] [rbp-538h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-27Ch]
  int v8; // [rsp+594h] [rbp-274h]
  _BYTE v9[584]; // [rsp+598h] [rbp-270h] BYREF
  int v10; // [rsp+7E0h] [rbp-28h]
  int v11; // [rsp+7E4h] [rbp-24h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v9, aExpressionOpti, 28LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v7 = v4 | 0x14008000140080LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(src, &unk_5FC68, 7LL);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 8LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 5LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aExpression_0, 10LL);
  clap_builder::builder::arg::Arg::action(v9, src, 1LL);
  memcpy(src, v9, 0x248uLL);
  src[146] = v10 | 0x20;
  src[147] = v11;
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
