void *__fastcall uu_date::uu_app(void *a1)
{
  __int64 v1; // rax
  _QWORD v3[79]; // [rsp+8h] [rbp-AC0h] BYREF
  int v4; // [rsp+280h] [rbp-848h]
  int v5; // [rsp+284h] [rbp-844h]
  _DWORD src[178]; // [rsp+288h] [rbp-840h] BYREF
  _BYTE dest[700]; // [rsp+550h] [rbp-578h] BYREF
  __int64 v8; // [rsp+80Ch] [rbp-2BCh]
  int v9; // [rsp+814h] [rbp-2B4h]
  _BYTE v10[688]; // [rsp+818h] [rbp-2B0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(dest, v1);
  clap_builder::builder::command::Command::version(src, dest);
  clap_builder::builder::command::Command::about(dest, src);
  uucore::format_usage(v3, aOptionFormatOp, 66LL);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v8 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v9 = src[177];
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  memcpy(src, v3, 0x278uLL);
  src[158] = v4 | 0x20;
  src[159] = v5;
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 102LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::value_name(v3, dest);
  clap_builder::builder::arg::Arg::value_hint(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 73LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  *(_QWORD *)src = "datethur]";
  *(_QWORD *)&src[2] = 4LL;
  *(_QWORD *)&src[4] = aHours_0;
  *(_QWORD *)&src[6] = 5LL;
  *(_QWORD *)&src[8] = aMinutes_0;
  *(_QWORD *)&src[10] = 7LL;
  *(_QWORD *)&src[12] = aSeconds_0;
  *(_QWORD *)&src[14] = 7LL;
  *(_QWORD *)&src[16] = aNs;
  *(_QWORD *)&src[18] = 2LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v10, src);
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  clap_builder::builder::arg::Arg::default_missing_value(src);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 82LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(v10, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  v3[0] = "datethur]";
  v3[1] = 4LL;
  v3[2] = aSeconds_0;
  v3[3] = 7LL;
  v3[4] = aNs;
  v3[5] = 2LL;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v10, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::arg::Arg::help(v10, v3);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 114LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::value_hint(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 115LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::value_name(v3, dest);
  clap_builder::builder::arg::Arg::help(v10, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 117LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::alias(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::command::Command::arg(a1, src);
  return a1;
}