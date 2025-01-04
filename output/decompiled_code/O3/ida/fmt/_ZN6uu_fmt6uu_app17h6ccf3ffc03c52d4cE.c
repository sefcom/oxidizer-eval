void *__fastcall uu_fmt::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD v3[175]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-78Ch]
  int v5; // [rsp+2C4h] [rbp-784h]
  _BYTE v6[584]; // [rsp+2C8h] [rbp-780h] BYREF
  int v7; // [rsp+510h] [rbp-538h]
  int v8; // [rsp+514h] [rbp-534h]
  _BYTE src[700]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE desta[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(v6, aWidthOptionFil, 33LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v10 | 0x8800000088LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src, aCrownMargin, 12LL);
  clap_builder::builder::arg::Arg::short(v6, src, 99LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aTaggedParagrap, 16LL);
  clap_builder::builder::arg::Arg::short(v6, v3, 116LL);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aPreserveHeader, 16LL);
  clap_builder::builder::arg::Arg::short(v6, src, 109LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aSplitOnly, 10LL);
  clap_builder::builder::arg::Arg::short(v6, v3, 115LL);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aUniformSpacing, 15LL);
  clap_builder::builder::arg::Arg::short(v6, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aPrefix, 6LL);
  clap_builder::builder::arg::Arg::short(v6, v3, 112LL);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aSkipPrefix, 11LL);
  clap_builder::builder::arg::Arg::short(v6, src, 80LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aExactPrefix, 12LL);
  clap_builder::builder::arg::Arg::short(v6, v3, 120LL);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aExactSkipPrefi, 17LL);
  clap_builder::builder::arg::Arg::short(v6, src, 88LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aWidth, 5LL);
  clap_builder::builder::arg::Arg::short(v6, v3, 119LL);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aGoal, 4LL);
  clap_builder::builder::arg::Arg::short(v6, src, 103LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aQuick, 5LL);
  clap_builder::builder::arg::Arg::short(v6, v3, 113LL);
  clap_builder::builder::arg::Arg::long(v3, v6);
  clap_builder::builder::arg::Arg::help(v6, v3);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src, aTabWidth, 9LL);
  clap_builder::builder::arg::Arg::short(v6, src, 84LL);
  clap_builder::builder::arg::Arg::long(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v6, v3, 1LL);
  clap_builder::builder::arg::Arg::value_name(v3, v6);
  clap_builder::builder::arg::Arg::value_hint(v6, v3, 3LL);
  memcpy(v3, v6, 0x248uLL);
  v3[146] = v7 | 0x40;
  v3[147] = v8;
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
