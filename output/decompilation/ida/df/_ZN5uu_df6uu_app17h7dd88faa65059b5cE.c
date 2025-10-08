void *__fastcall uu_df::uu_app(void *a1)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+28h] [rbp-AC0h] BYREF
  int v4; // [rsp+2A0h] [rbp-848h]
  int v5; // [rsp+2A4h] [rbp-844h]
  _DWORD src[175]; // [rsp+2A8h] [rbp-840h] BYREF
  __int64 v7; // [rsp+564h] [rbp-584h]
  int v8; // [rsp+56Ch] [rbp-57Ch]
  const char *v9; // [rsp+570h] [rbp-578h] BYREF
  __int64 v10; // [rsp+578h] [rbp-570h]
  const char *v11; // [rsp+580h] [rbp-568h]
  __int64 v12; // [rsp+588h] [rbp-560h]
  const char *v13; // [rsp+590h] [rbp-558h]
  __int64 v14; // [rsp+598h] [rbp-550h]
  const char *v15; // [rsp+5A0h] [rbp-548h]
  __int64 v16; // [rsp+5A8h] [rbp-540h]
  const char *v17; // [rsp+5B0h] [rbp-538h]
  __int64 v18; // [rsp+5B8h] [rbp-530h]
  const char *v19; // [rsp+5C0h] [rbp-528h]
  __int64 v20; // [rsp+5C8h] [rbp-520h]
  _BYTE dest[700]; // [rsp+7F0h] [rbp-2F8h] BYREF
  __int64 v22; // [rsp+AACh] [rbp-3Ch]
  int v23; // [rsp+AB4h] [rbp-34h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(dest, src);
  clap_builder::builder::command::Command::about(src, dest);
  uucore::format_usage(v3, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(dest, src);
  clap_builder::builder::command::Command::after_help(src, dest);
  memcpy(dest, src, sizeof(dest));
  v22 = v7 | 0x8008000080080LL;
  v23 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 5LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 97LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 66LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  v9 = aKilo;
  v10 = 4LL;
  v11 = aBlocksize_0;
  v12 = 9LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v3, dest);
  clap_builder::builder::arg::Arg::overrides_with(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(&v9, v3, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 104LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  v9 = aHumanReadableD;
  v10 = 22LL;
  v11 = aHumanReadableB;
  v12 = 21LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 72LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  v9 = aHumanReadableB;
  v10 = 21LL;
  v11 = aHumanReadableD;
  v12 = 22LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 105LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 107LL);
  clap_builder::builder::arg::Arg::help(dest, v3);
  v9 = aBlocksize_0;
  v10 = 9LL;
  v11 = aKilo;
  v12 = 4LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, dest);
  clap_builder::builder::arg::Arg::action(&v9, v3, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v3, dest);
  v9 = aSync_0;
  v10 = 4LL;
  v11 = aNoSync;
  v12 = 7LL;
  clap_builder::builder::arg::Arg::overrides_with_all(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(&v9, v3, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::num_args(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x80;
  v5 = src[159];
  clap_builder::builder::arg::Arg::use_value_delimiter(src, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::arg::Arg::default_missing_values_os(src, v3);
  v9 = "sourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
  v10 = 6LL;
  v11 = aSize_1;
  v12 = 4LL;
  v13 = aUsed_0;
  v14 = 4LL;
  v15 = "availpcenttarget-total%";
  v16 = 5LL;
  v17 = "pcenttarget-total%";
  v18 = 5LL;
  v19 = "target-total%";
  v20 = 6LL;
  clap_builder::builder::arg::Arg::default_values(v3, src);
  v9 = aInodes_0;
  v10 = 6LL;
  v11 = aPortability;
  v12 = 11LL;
  v13 = aPrintType;
  v14 = 10LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 80LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  v9 = aNoSync;
  v10 = 7LL;
  v11 = aSync_0;
  v12 = 4LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v9, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 116LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, dest);
  clap_builder::builder::arg::Arg::value_name(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 1LL);
  clap_builder::builder::arg::Arg::help(&v9, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 84LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 120LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 1LL);
  clap_builder::builder::arg::Arg::value_parser(dest, v3);
  clap_builder::builder::arg::Arg::value_name(v3, dest);
  clap_builder::builder::arg::Arg::use_value_delimiter(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_hint(src, v3);
  clap_builder::builder::command::Command::arg(a1, dest);
  return a1;
}