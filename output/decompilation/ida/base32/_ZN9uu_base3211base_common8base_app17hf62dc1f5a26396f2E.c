void *__fastcall uu_base32::base_common::base_app(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+10h] [rbp-AD8h] BYREF
  _DWORD src[178]; // [rsp+28h] [rbp-AC0h] BYREF
  _BYTE v11[640]; // [rsp+2F0h] [rbp-7F8h] BYREF
  _BYTE dest[700]; // [rsp+570h] [rbp-578h] BYREF
  __int64 v13; // [rsp+82Ch] [rbp-2BCh]
  int v14; // [rsp+834h] [rbp-2B4h]
  _QWORD v15[86]; // [rsp+838h] [rbp-2B0h] BYREF

  v7 = uucore::util_name();
  clap_builder::builder::command::Command::new(dest, v7);
  clap_builder::builder::command::Command::version(src, dest);
  clap_builder::builder::command::Command::about(dest, src);
  uucore::format_usage(v11, a4, a5);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v13 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v14 = src[177];
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v11, src, 100LL);
  clap_builder::builder::arg::Arg::visible_short_alias(src, v11);
  clap_builder::builder::arg::Arg::long(v11, src);
  clap_builder::builder::arg::Arg::help(src, v11);
  clap_builder::builder::arg::Arg::action(v11, src, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v15, v11);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v11, dest, 105LL);
  clap_builder::builder::arg::Arg::long(dest, v11);
  clap_builder::builder::arg::Arg::help(v11, dest);
  clap_builder::builder::arg::Arg::action(dest, v11, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v11, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v11, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v11);
  clap_builder::builder::arg::Arg::value_name(v11, src);
  v15[0] = &unk_19470;
  v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)src = &off_10DE80;
  *(_QWORD *)&src[2] = 2LL;
  *(_QWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[4] = v15;
  *(_QWORD *)&src[6] = 1LL;
  core::option::Option<T>::map_or_else(v9, src);
  clap_builder::builder::arg::Arg::help(src, v11);
  clap_builder::builder::arg::Arg::overrides_with(v11, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::index(v11, dest);
  clap_builder::builder::arg::Arg::action(dest, v11, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v11, dest);
  clap_builder::builder::command::Command::arg(a1, src);
  return a1;
}