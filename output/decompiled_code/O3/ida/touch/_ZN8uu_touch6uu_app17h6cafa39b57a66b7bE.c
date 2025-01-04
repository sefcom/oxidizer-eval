void *__fastcall uu_touch::uu_app(void *dest)
{
  __int64 v1; // rax
  unsigned __int64 v3; // [rsp+10h] [rbp-AC8h]
  __int64 v4; // [rsp+18h] [rbp-AC0h]
  _BYTE src[700]; // [rsp+20h] [rbp-AB8h] BYREF
  __int64 v6; // [rsp+2DCh] [rbp-7FCh]
  int v7; // [rsp+2E4h] [rbp-7F4h]
  _OWORD v8[4]; // [rsp+2E8h] [rbp-7F0h] BYREF
  __int64 v9; // [rsp+328h] [rbp-7B0h]
  __int128 v10; // [rsp+330h] [rbp-7A8h]
  _BYTE v11[584]; // [rsp+340h] [rbp-798h] BYREF
  int v12; // [rsp+588h] [rbp-550h]
  int v13; // [rsp+58Ch] [rbp-54Ch]
  _DWORD desta[175]; // [rsp+598h] [rbp-540h] BYREF
  __int64 v15; // [rsp+854h] [rbp-284h]
  int v16; // [rsp+85Ch] [rbp-27Ch]
  unsigned __int128 v17; // [rsp+860h] [rbp-278h] BYREF
  __int128 v18; // [rsp+870h] [rbp-268h]
  __int128 v19; // [rsp+880h] [rbp-258h]
  __int128 v20; // [rsp+890h] [rbp-248h]
  __int64 v21; // [rsp+8A0h] [rbp-238h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v11, aOptionUser, 21LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v15 = v6 | 0x4008000040080LL;
  v16 = v7;
  clap_builder::builder::arg::Arg::new(src, anon_61762d8b03580ce2a8d56e8111306379_15_llvm_1735103616462635666, 4LL);
  clap_builder::builder::arg::Arg::long(v11, src);
  clap_builder::builder::arg::Arg::help(src, v11);
  clap_builder::builder::arg::Arg::action(v11, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_61762d8b03580ce2a8d56e8111306379_16_llvm_1735103616462635666, 6LL);
  clap_builder::builder::arg::Arg::short(v11, desta, 97LL);
  clap_builder::builder::arg::Arg::help(desta, v11);
  clap_builder::builder::arg::Arg::action(v11, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_9140edd4b155a5c33d3a3382a80f889a_4_llvm_18306172555780859939, 9LL);
  clap_builder::builder::arg::Arg::short(v11, src, 116LL);
  clap_builder::builder::arg::Arg::help(src, v11);
  clap_builder::builder::arg::Arg::value_name(v11, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, "datethur]", 4LL);
  clap_builder::builder::arg::Arg::short(v11, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v11);
  memcpy(v11, desta, sizeof(v11));
  v12 = desta[146] | 0x20;
  v13 = desta[147];
  clap_builder::builder::arg::Arg::help(desta, v11);
  clap_builder::builder::arg::Arg::value_name(v11, desta);
  clap_builder::builder::arg::Arg::conflicts_with(&v17, v11);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_61762d8b03580ce2a8d56e8111306379_17_llvm_1735103616462635666, 12LL);
  clap_builder::builder::arg::Arg::short(v11, src, 109LL);
  clap_builder::builder::arg::Arg::help(src, v11);
  clap_builder::builder::arg::Arg::action(v11, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_61762d8b03580ce2a8d56e8111306379_18_llvm_1735103616462635666, 9LL);
  clap_builder::builder::arg::Arg::short(v11, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v11);
  clap_builder::builder::arg::Arg::help(v11, desta);
  clap_builder::builder::arg::Arg::action(&v17, v11, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_61762d8b03580ce2a8d56e8111306379_19_llvm_1735103616462635666, 14LL);
  clap_builder::builder::arg::Arg::short(v11, src, 104LL);
  clap_builder::builder::arg::Arg::long(src, v11);
  clap_builder::builder::arg::Arg::help(v11, src);
  clap_builder::builder::arg::Arg::action(&v17, v11, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_9140edd4b155a5c33d3a3382a80f889a_3_llvm_18306172555780859939, 9LL);
  clap_builder::builder::arg::Arg::short(v11, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v11);
  clap_builder::builder::arg::Arg::help(v11, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v11);
  *(_QWORD *)&v18 = v4;
  v17 = __PAIR128__(v3, 2LL);
  clap_builder::builder::arg::Arg::value_parser(v11, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v11, 2LL);
  clap_builder::builder::arg::Arg::conflicts_with(v11, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_61762d8b03580ce2a8d56e8111306379_20_llvm_1735103616462635666, 4LL);
  clap_builder::builder::arg::Arg::long(v11, src);
  clap_builder::builder::arg::Arg::help(src, v11);
  clap_builder::builder::arg::Arg::value_name(v11, src);
  *(_QWORD *)&src[48] = aAtime;
  *(_QWORD *)&src[56] = 5LL;
  *(_QWORD *)&src[24] = 0x8000000000000000LL;
  *(_OWORD *)&src[32] = v10;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 8LL;
  *(_QWORD *)&src[16] = 0LL;
  src[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::alias(&v17, src, aAccess, 6LL);
  clap_builder::builder::possible_value::PossibleValue::alias(v8, &v17, aUse, 3LL);
  *(_QWORD *)&src[48] = aMtime;
  *(_QWORD *)&src[56] = 5LL;
  *(_QWORD *)&src[24] = 0x8000000000000000LL;
  *(_OWORD *)&src[32] = v10;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 8LL;
  *(_QWORD *)&src[16] = 0LL;
  src[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::alias(&v17, src, aModify, 6LL);
  *(_OWORD *)src = v8[0];
  *(_OWORD *)&src[16] = v8[1];
  *(_OWORD *)&src[32] = v8[2];
  *(_OWORD *)&src[48] = v8[3];
  *(_QWORD *)&src[64] = v9;
  *(_OWORD *)&src[72] = v17;
  *(_OWORD *)&src[88] = v18;
  *(_OWORD *)&src[104] = v19;
  *(_OWORD *)&src[120] = v20;
  *(_QWORD *)&src[136] = v21;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v8, src);
  clap_builder::builder::arg::Arg::value_parser(&v17, v11);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFiles, 5LL);
  clap_builder::builder::arg::Arg::action(v11, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v11);
  clap_builder::builder::arg::Arg::value_parser(v11, desta);
  clap_builder::builder::arg::Arg::value_hint(&v17, v11, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  *(_QWORD *)&src[72] = 1LL;
  *(_QWORD *)&src[80] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 8LL;
  *(_WORD *)&src[88] = 0;
  *(_OWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[32] = 8LL;
  *(_OWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 8LL;
  *(_QWORD *)&src[64] = 0LL;
  clap_builder::builder::arg_group::ArgGroup::id(
    v11,
    src,
    anon_61762d8b03580ce2a8d56e8111306379_14_llvm_1735103616462635666,
    7LL);
  *(_QWORD *)&v17 = anon_9140edd4b155a5c33d3a3382a80f889a_4_llvm_18306172555780859939;
  *((_QWORD *)&v17 + 1) = 9LL;
  *(_QWORD *)&v18 = "datethur]";
  *((_QWORD *)&v18 + 1) = 4LL;
  *(_QWORD *)&v19 = anon_9140edd4b155a5c33d3a3382a80f889a_3_llvm_18306172555780859939;
  *((_QWORD *)&v19 + 1) = 9LL;
  clap_builder::builder::arg_group::ArgGroup::args(src, v11, &v17);
  src[89] = 1;
  *(_OWORD *)v11 = *(_OWORD *)src;
  *(_OWORD *)&v11[16] = *(_OWORD *)&src[16];
  *(_OWORD *)&v11[32] = *(_OWORD *)&src[32];
  *(_OWORD *)&v11[48] = *(_OWORD *)&src[48];
  *(_OWORD *)&v11[64] = *(_OWORD *)&src[64];
  *(_QWORD *)&v11[80] = *(_QWORD *)&src[80];
  v11[88] = src[88];
  v11[89] = 1;
  *(_DWORD *)&v11[90] = *(_DWORD *)&src[90];
  *(_WORD *)&v11[94] = *(_WORD *)&src[94];
  clap_builder::builder::command::Command::group(dest, desta);
  return dest;
}
