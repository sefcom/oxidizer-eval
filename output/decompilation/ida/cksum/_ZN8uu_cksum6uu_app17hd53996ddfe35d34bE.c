void *__fastcall uu_cksum::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _DWORD src[178]; // [rsp+8h] [rbp-AC0h] BYREF
  _DWORD desta[178]; // [rsp+2D0h] [rbp-7F8h] BYREF
  _BYTE v6[632]; // [rsp+598h] [rbp-530h] BYREF
  int v7; // [rsp+810h] [rbp-2B8h]
  int v8; // [rsp+814h] [rbp-2B4h]
  const char *v9; // [rsp+818h] [rbp-2B0h] BYREF
  __int64 v10; // [rsp+820h] [rbp-2A8h]
  const char *v11; // [rsp+828h] [rbp-2A0h]
  __int64 v12; // [rsp+830h] [rbp-298h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v6, aOptionsFile, 22LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, 0x2BCuLL);
  *(_QWORD *)&desta[175] = *(_QWORD *)&src[175] | 0x8800000088LL;
  desta[177] = src[177];
  clap_builder::builder::arg::Arg::new(src);
  memcpy(v6, src, sizeof(v6));
  v7 = src[158] | 4;
  v8 = src[159];
  clap_builder::builder::arg::Arg::action(src, v6, 1LL);
  v9 = (_BYTE *)(&dword_0 + 2);
  clap_builder::builder::arg::Arg::value_parser(v6, src);
  clap_builder::builder::arg::Arg::value_hint(&v9, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::short(desta, v6, 97LL);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v6);
  clap_builder::builder::arg::Arg::value_parser(v6, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(&v9, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(&v9, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  v2 = alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str);
  v9 = &byte_4;
  v10 = v2;
  v11 = (const char *)&unk_1639A0;
  clap_builder::builder::arg::Arg::value_parser(src, v6);
  clap_builder::builder::arg::Arg::short(v6, src, 108LL);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 0LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(&v9, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::arg::Arg::conflicts_with(&v9, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::short(desta, v6, 116LL);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[158] | 4;
  v8 = desta[159];
  clap_builder::builder::arg::Arg::overrides_with(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::short(src, v6, 98LL);
  memcpy(v6, src, sizeof(v6));
  v7 = src[158] | 4;
  v8 = src[159];
  clap_builder::builder::arg::Arg::overrides_with(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v6, desta, 119LL);
  clap_builder::builder::arg::Arg::long(desta, v6);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(desta, v6, 2LL);
  v9 = aStatus_0;
  v10 = 6LL;
  v11 = aQuiet_0;
  v12 = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(v6, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  *(_QWORD *)src = aWarn;
  *(_QWORD *)&src[2] = 4LL;
  *(_QWORD *)&src[4] = aQuiet_0;
  *(_QWORD *)&src[6] = 5LL;
  clap_builder::builder::arg::Arg::overrides_with_all(&v9, v6);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::help(desta, v6);
  clap_builder::builder::arg::Arg::action(v6, desta, 2LL);
  *(_QWORD *)desta = aWarn;
  *(_QWORD *)&desta[2] = 4LL;
  *(_QWORD *)&desta[4] = aStatus_0;
  *(_QWORD *)&desta[6] = 6LL;
  clap_builder::builder::arg::Arg::overrides_with_all(&v9, v6);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::help(src, v6);
  clap_builder::builder::arg::Arg::action(v6, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v6, desta);
  clap_builder::builder::arg::Arg::short(desta, v6, 122LL);
  clap_builder::builder::arg::Arg::help(v6, desta);
  clap_builder::builder::arg::Arg::action(&v9, v6, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::command::Command::after_help(dest, desta);
  return dest;
}