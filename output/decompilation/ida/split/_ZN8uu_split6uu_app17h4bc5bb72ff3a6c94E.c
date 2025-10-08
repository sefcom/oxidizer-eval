void *__fastcall uu_split::uu_app(void *a1)
{
  __int64 v1; // rax
  _BYTE v3[632]; // [rsp+8h] [rbp-AC0h] BYREF
  int v4; // [rsp+280h] [rbp-848h]
  int v5; // [rsp+284h] [rbp-844h]
  _DWORD src[175]; // [rsp+288h] [rbp-840h] BYREF
  __int64 v7; // [rsp+544h] [rbp-584h]
  int v8; // [rsp+54Ch] [rbp-57Ch]
  _DWORD dest[175]; // [rsp+550h] [rbp-578h] BYREF
  __int64 v10; // [rsp+80Ch] [rbp-2BCh]
  int v11; // [rsp+814h] [rbp-2B4h]
  const char *v12; // [rsp+818h] [rbp-2B0h] BYREF
  __int64 v13; // [rsp+820h] [rbp-2A8h]
  const char *v14; // [rsp+828h] [rbp-2A0h]
  __int64 v15; // [rsp+830h] [rbp-298h]
  const char *v16; // [rsp+838h] [rbp-290h]
  __int64 v17; // [rsp+840h] [rbp-288h]
  const char *v18; // [rsp+848h] [rbp-280h]
  __int64 v19; // [rsp+850h] [rbp-278h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(dest, src);
  clap_builder::builder::command::Command::about(src, dest);
  clap_builder::builder::command::Command::after_help(dest, src);
  uucore::format_usage(v3, aOptionInputPre, 31LL);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x20;
  v5 = src[159];
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 67LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  memcpy(v3, dest, sizeof(v3));
  v4 = dest[158] | 0x20;
  v5 = dest[159];
  clap_builder::builder::arg::Arg::value_name(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 0x20;
  v5 = src[159];
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::default_value(v3, src);
  clap_builder::builder::arg::Arg::help(&v12, v3);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 110LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  memcpy(v3, dest, sizeof(v3));
  v4 = dest[158] | 0x20;
  v5 = dest[159];
  clap_builder::builder::arg::Arg::value_name(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  memcpy(src, v3, 0x278uLL);
  src[158] = v4 | 0x20;
  src[159] = v5;
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::default_value(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v3, dest);
  memcpy(dest, v3, 0x278uLL);
  dest[158] = v4 | 0x20;
  dest[159] = v5;
  clap_builder::builder::arg::Arg::value_name(v3, dest);
  clap_builder::builder::arg::Arg::value_hint(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 101LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 100LL);
  clap_builder::builder::arg::Arg::action(dest, v3, 2LL);
  v12 = aNumericSuffixe;
  v13 = 16LL;
  v14 = aD;
  v15 = 2LL;
  v16 = aHexSuffixes;
  v17 = 12LL;
  v18 = asc_1CABF;
  v19 = 2LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, dest);
  clap_builder::builder::arg::Arg::help(&v12, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  memcpy(src, v3, 0x278uLL);
  src[158] = v4 | 0x80;
  src[159] = v5;
  clap_builder::builder::arg::Arg::num_args(v3, src);
  v12 = aNumericSuffixe;
  v13 = 16LL;
  v14 = aD;
  v15 = 2LL;
  v16 = aHexSuffixes;
  v17 = 12LL;
  v18 = asc_1CABF;
  v19 = 2LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(&v12, v3);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 120LL);
  clap_builder::builder::arg::Arg::action(dest, v3, 2LL);
  v12 = aNumericSuffixe;
  v13 = 16LL;
  v14 = aD;
  v15 = 2LL;
  v16 = aHexSuffixes;
  v17 = 12LL;
  v18 = asc_1CABF;
  v19 = 2LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v3, dest);
  clap_builder::builder::arg::Arg::help(&v12, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  memcpy(src, v3, 0x278uLL);
  src[158] = v4 | 0x80;
  src[159] = v5;
  clap_builder::builder::arg::Arg::num_args(v3, src);
  v12 = aNumericSuffixe;
  v13 = 16LL;
  v14 = aD;
  v15 = 2LL;
  v16 = aHexSuffixes;
  v17 = 12LL;
  v18 = asc_1CABF;
  v19 = 2LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(&v12, v3);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 97LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  memcpy(v3, dest, sizeof(v3));
  v4 = dest[158] | 0x20;
  v5 = dest[159];
  clap_builder::builder::arg::Arg::value_name(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 116LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  memcpy(v3, dest, sizeof(v3));
  v4 = dest[158] | 0x20;
  v5 = dest[159];
  clap_builder::builder::arg::Arg::value_name(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 1LL);
  clap_builder::builder::arg::Arg::help(&v12, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::alias(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[158] | 4;
  v5 = src[159];
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::default_value(v3, dest);
  clap_builder::builder::arg::Arg::value_hint(&v12, v3);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::default_value(v3, src);
  clap_builder::builder::command::Command::arg(a1, dest);
  return a1;
}