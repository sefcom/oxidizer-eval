void *__fastcall uu_touch::uu_app(void *dest)
{
  __int64 v1; // rax
  _OWORD v3[4]; // [rsp+8h] [rbp-B20h] BYREF
  __int64 v4; // [rsp+48h] [rbp-AE0h]
  __int128 v5; // [rsp+50h] [rbp-AD8h]
  _BYTE src[700]; // [rsp+60h] [rbp-AC8h] BYREF
  __int64 v7; // [rsp+31Ch] [rbp-80Ch]
  int v8; // [rsp+324h] [rbp-804h]
  _BYTE v9[632]; // [rsp+330h] [rbp-7F8h] BYREF
  int v10; // [rsp+5A8h] [rbp-580h]
  int v11; // [rsp+5ACh] [rbp-57Ch]
  _DWORD desta[175]; // [rsp+5B0h] [rbp-578h] BYREF
  __int64 v13; // [rsp+86Ch] [rbp-2BCh]
  int v14; // [rsp+874h] [rbp-2B4h]
  __int128 v15; // [rsp+878h] [rbp-2B0h] BYREF
  __int128 v16; // [rsp+888h] [rbp-2A0h]
  __int128 v17; // [rsp+898h] [rbp-290h]
  __int128 v18; // [rsp+8A8h] [rbp-280h]
  __int64 v19; // [rsp+8B8h] [rbp-270h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v9, aOptionUser, 21LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v13 = v7 | 0x8008000080080LL;
  v14 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 97LL);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 116LL);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::value_name(v9, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 100LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  memcpy(v9, desta, sizeof(v9));
  v10 = desta[158] | 0x20;
  v11 = desta[159];
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::value_name(v9, desta);
  clap_builder::builder::arg::Arg::conflicts_with(&v15, v9);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 109LL);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 99LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(&v15, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 104LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::arg::Arg::action(&v15, v9, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 114LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v9);
  *(_QWORD *)&v15 = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v9, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v9);
  clap_builder::builder::arg::Arg::conflicts_with(v9, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::value_name(v9, src);
  *(_QWORD *)&src[48] = aAtime;
  *(_QWORD *)&src[56] = 5LL;
  *(_QWORD *)&src[24] = 0x8000000000000000LL;
  *(_OWORD *)&src[32] = v5;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 8LL;
  *(_QWORD *)&src[16] = 0LL;
  src[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::alias(&v15, src, aAccess, 6LL);
  clap_builder::builder::possible_value::PossibleValue::alias(v3, &v15, aUse, 3LL);
  *(_QWORD *)&src[48] = aMtime;
  *(_QWORD *)&src[56] = 5LL;
  *(_QWORD *)&src[24] = 0x8000000000000000LL;
  *(_OWORD *)&src[32] = v5;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 8LL;
  *(_QWORD *)&src[16] = 0LL;
  src[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::alias(&v15, src, aModify, 6LL);
  *(_OWORD *)src = v3[0];
  *(_OWORD *)&src[16] = v3[1];
  *(_OWORD *)&src[32] = v3[2];
  *(_OWORD *)&src[48] = v3[3];
  *(_QWORD *)&src[64] = v4;
  *(_OWORD *)&src[72] = v15;
  *(_OWORD *)&src[88] = v16;
  *(_OWORD *)&src[104] = v17;
  *(_OWORD *)&src[120] = v18;
  *(_QWORD *)&src[136] = v19;
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v3, src);
  clap_builder::builder::arg::Arg::value_parser(&v15, v9);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v9, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v9);
  clap_builder::builder::arg::Arg::value_hint(v9, desta);
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
  clap_builder::builder::arg_group::ArgGroup::id(v9, src);
  *(_QWORD *)&v15 = aTimestamp;
  *((_QWORD *)&v15 + 1) = 9LL;
  *(_QWORD *)&v16 = "datethur]";
  *((_QWORD *)&v16 + 1) = 4LL;
  *(_QWORD *)&v17 = aReference;
  *((_QWORD *)&v17 + 1) = 9LL;
  clap_builder::builder::arg_group::ArgGroup::args(src, v9, &v15);
  src[89] = 1;
  *(_OWORD *)v9 = *(_OWORD *)src;
  *(_OWORD *)&v9[16] = *(_OWORD *)&src[16];
  *(_OWORD *)&v9[32] = *(_OWORD *)&src[32];
  *(_OWORD *)&v9[48] = *(_OWORD *)&src[48];
  *(_OWORD *)&v9[64] = *(_OWORD *)&src[64];
  *(_QWORD *)&v9[80] = *(_QWORD *)&src[80];
  v9[88] = src[88];
  v9[89] = 1;
  *(_DWORD *)&v9[90] = *(_DWORD *)&src[90];
  *(_WORD *)&v9[94] = *(_WORD *)&src[94];
  clap_builder::builder::command::Command::group(dest, desta);
  return dest;
}