void *__fastcall uu_base32::base_common::base_app(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+10h] [rbp-838h] BYREF
  _BYTE v10[24]; // [rsp+20h] [rbp-828h] BYREF
  _DWORD src[178]; // [rsp+38h] [rbp-810h] BYREF
  _BYTE v12[592]; // [rsp+300h] [rbp-548h] BYREF
  _BYTE dest[700]; // [rsp+550h] [rbp-2F8h] BYREF
  __int64 v14; // [rsp+80Ch] [rbp-3Ch]
  int v15; // [rsp+814h] [rbp-34h]

  v7 = uucore::util_name();
  clap_builder::builder::command::Command::new(dest, v7);
  clap_builder::builder::command::Command::version(src, dest);
  clap_builder::builder::command::Command::about(dest, src);
  uucore::format_usage(v12, a4, a5);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v14 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v15 = src[177];
  clap_builder::builder::arg::Arg::new(src, anon_0042c4fb131193d352280bb9a37e85a0_24_llvm_14663537404383231718, 6LL);
  clap_builder::builder::arg::Arg::short(v12, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v12);
  clap_builder::builder::arg::Arg::help(v12, src);
  clap_builder::builder::arg::Arg::action(src, v12, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v12, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest, anon_0042c4fb131193d352280bb9a37e85a0_26_llvm_14663537404383231718, 14LL);
  clap_builder::builder::arg::Arg::short(v12, dest, 105LL);
  clap_builder::builder::arg::Arg::long(dest, v12);
  clap_builder::builder::arg::Arg::help(v12, dest);
  clap_builder::builder::arg::Arg::action(dest, v12, 2LL);
  clap_builder::builder::arg::Arg::overrides_with(v12, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src, anon_0042c4fb131193d352280bb9a37e85a0_25_llvm_14663537404383231718, 4LL);
  clap_builder::builder::arg::Arg::short(v12, src, 119LL);
  clap_builder::builder::arg::Arg::long(src, v12);
  clap_builder::builder::arg::Arg::value_name(v12, src);
  v9[0] = &unk_C310;
  v9[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)src = &off_14A3B8;
  *(_QWORD *)&src[2] = 2LL;
  *(_QWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[4] = v9;
  *(_QWORD *)&src[6] = 1LL;
  core::option::Option<T>::map_or_else(v10, src);
  clap_builder::builder::arg::Arg::help(src, v12);
  clap_builder::builder::arg::Arg::overrides_with(v12, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest, anon_0042c4fb131193d352280bb9a37e85a0_27_llvm_14663537404383231718, 4LL);
  clap_builder::builder::arg::Arg::index(v12, dest);
  clap_builder::builder::arg::Arg::action(dest, v12, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v12, dest, 3LL);
  clap_builder::builder::command::Command::arg(a1, src);
  return a1;
}
