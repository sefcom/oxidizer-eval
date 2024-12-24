void *__fastcall uu_du::uu_app(void *dest, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[584]; // [rsp+0h] [rbp-AE8h] BYREF
  int v17; // [rsp+248h] [rbp-8A0h]
  int v18; // [rsp+24Ch] [rbp-89Ch]
  __int128 v19; // [rsp+250h] [rbp-898h]
  _DWORD desta[175]; // [rsp+260h] [rbp-888h] BYREF
  __int64 v21; // [rsp+51Ch] [rbp-5CCh]
  int v22; // [rsp+524h] [rbp-5C4h]
  _DWORD src[175]; // [rsp+528h] [rbp-5C0h] BYREF
  __int64 v24; // [rsp+7E4h] [rbp-304h]
  int v25; // [rsp+7ECh] [rbp-2FCh]
  _OWORD v26[4]; // [rsp+7F0h] [rbp-2F8h] BYREF
  __int64 v27; // [rsp+830h] [rbp-2B8h]
  _OWORD v28[4]; // [rsp+838h] [rbp-2B0h] BYREF
  __int64 v29; // [rsp+878h] [rbp-270h]
  _OWORD v30[4]; // [rsp+880h] [rbp-268h] BYREF
  __int64 v31; // [rsp+8C0h] [rbp-228h]

  v2 = uucore::util_name(dest, a2);
  clap_builder::builder::command::Command::new(src, v2);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v16, aOptionFileOpti, 55LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v21 = v24 | 0x4008000040080LL;
  v22 = v25;
  clap_builder::builder::arg::Arg::new(src, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aAll_0, 3LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 97LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aApparentSize_0, 13LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aBlockSize_1, 10LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 66LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::value_name(v16, desta);
  clap_builder::builder::arg::Arg::help(v30, v16);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aB_0, 1LL);
  clap_builder::builder::arg::Arg::short(v16, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v16);
  clap_builder::builder::arg::Arg::help(v16, src);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aC_0, 1LL);
  clap_builder::builder::arg::Arg::long(v16, desta);
  clap_builder::builder::arg::Arg::short(desta, v16, 99LL);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aD_1, 1LL);
  clap_builder::builder::arg::Arg::short(v16, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v16);
  clap_builder::builder::arg::Arg::value_name(v16, src);
  clap_builder::builder::arg::Arg::help(v30, v16);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, asc_1D306, 1LL);
  clap_builder::builder::arg::Arg::long(v16, desta);
  clap_builder::builder::arg::Arg::short(desta, v16, 104LL);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aInodes_0, 6LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aK_0, 1LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 107LL);
  clap_builder::builder::arg::Arg::help(desta, v16);
  clap_builder::builder::arg::Arg::action(v16, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, asc_1D3AF, 1LL);
  clap_builder::builder::arg::Arg::short(v16, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v16);
  clap_builder::builder::arg::Arg::help(v16, src);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aDereference_0, 11LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 76LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, "dereference-argsConnection resetentity not foundk", 16LL);
  clap_builder::builder::arg::Arg::short(v16, src, 68LL);
  clap_builder::builder::arg::Arg::visible_short_alias(src, v16);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aNoDereference, 14LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 80LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v16);
  clap_builder::builder::arg::Arg::action(v16, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aM_0, 1LL);
  clap_builder::builder::arg::Arg::short(v16, src, 109LL);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, a0_3, 1LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 48LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aS_1, 1LL);
  clap_builder::builder::arg::Arg::short(v16, src, 83LL);
  clap_builder::builder::arg::Arg::long(src, v16);
  clap_builder::builder::arg::Arg::help(v16, src);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aS_2, 1LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSi_0, 2LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aOneFileSystem_0, 15LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 120LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aThreshold_0, 9LL);
  clap_builder::builder::arg::Arg::short(v16, src, 116LL);
  clap_builder::builder::arg::Arg::long(src, v16);
  clap_builder::builder::arg::Arg::value_name(v16, src);
  clap_builder::builder::arg::Arg::num_args(src, v16);
  memcpy(v16, src, sizeof(v16));
  v17 = src[146] | 0x20;
  v18 = src[147];
  clap_builder::builder::arg::Arg::help(v30, v16);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose_0, 7LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aExclude, 7LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::value_name(src, v16);
  clap_builder::builder::arg::Arg::help(v16, src);
  clap_builder::builder::arg::Arg::action(v30, v16, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aExcludeFrom, 12LL);
  clap_builder::builder::arg::Arg::short(v16, desta, 88LL);
  clap_builder::builder::arg::Arg::long(desta, v16);
  clap_builder::builder::arg::Arg::value_name(v16, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v16, 3LL);
  clap_builder::builder::arg::Arg::help(v16, desta);
  clap_builder::builder::arg::Arg::action(v30, v16, 1LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFiles0From_0, 11LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::value_name(src, v16);
  clap_builder::builder::arg::Arg::value_hint(v16, src, 3LL);
  clap_builder::builder::arg::Arg::help(src, v16);
  clap_builder::builder::arg::Arg::action(v16, src, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTime, 4LL);
  clap_builder::builder::arg::Arg::long(v16, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v16);
  memcpy(v16, desta, sizeof(v16));
  v17 = desta[146] | 0x80;
  v18 = desta[147];
  clap_builder::builder::arg::Arg::num_args(desta, v16);
  *(_QWORD *)&v16[48] = aAtime_0;
  *(_QWORD *)&v16[56] = 5LL;
  *(_QWORD *)&v16[24] = 0x8000000000000000LL;
  *(_OWORD *)&v16[32] = v19;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)&v16[8] = 8LL;
  *(_QWORD *)&v16[16] = 0LL;
  v16[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v30,
    v16,
    aAccess_0,
    6LL,
    v3,
    v4);
  clap_builder::builder::possible_value::PossibleValue::alias(
    v26,
    v30,
    aUse_0,
    3LL,
    v5,
    v6,
    *(_QWORD *)v16,
    *(_QWORD *)&v16[8],
    *(_QWORD *)&v16[16],
    *(_QWORD *)&v16[24],
    *(_QWORD *)&v16[32],
    *(_QWORD *)&v16[40],
    *(_QWORD *)&v16[48],
    *(_QWORD *)&v16[56],
    *(_QWORD *)&v16[64]);
  *(_QWORD *)&v16[48] = aCtime_0;
  *(_QWORD *)&v16[56] = 5LL;
  *(_QWORD *)&v16[24] = 0x8000000000000000LL;
  *(_OWORD *)&v16[32] = v19;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)&v16[8] = 8LL;
  *(_QWORD *)&v16[16] = 0LL;
  v16[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v28,
    v16,
    aStatus_0,
    6LL,
    v7,
    v8);
  *(_QWORD *)&v16[48] = aCreation;
  *(_QWORD *)&v16[56] = 8LL;
  *(_QWORD *)&v16[24] = 0x8000000000000000LL;
  *(_OWORD *)&v16[32] = v19;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)&v16[8] = 8LL;
  *(_QWORD *)&v16[16] = 0LL;
  v16[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v30,
    v16,
    aBirth_0,
    5LL,
    v9,
    v10);
  *(_OWORD *)v16 = v26[0];
  *(_OWORD *)&v16[16] = v26[1];
  *(_OWORD *)&v16[32] = v26[2];
  *(_OWORD *)&v16[48] = v26[3];
  *(_QWORD *)&v16[64] = v27;
  *(_OWORD *)&v16[72] = v28[0];
  *(_OWORD *)&v16[88] = v28[1];
  *(_OWORD *)&v16[104] = v28[2];
  *(_OWORD *)&v16[120] = v28[3];
  *(_QWORD *)&v16[136] = v29;
  *(_QWORD *)&v16[208] = v31;
  *(_OWORD *)&v16[192] = v30[3];
  *(_OWORD *)&v16[176] = v30[2];
  *(_OWORD *)&v16[160] = v30[1];
  *(_OWORD *)&v16[144] = v30[0];
  ((void (__fastcall *)(_OWORD *, _BYTE *, __int64, __int64, __int64, __int64))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v30,
    v16,
    v11,
    v12,
    v13,
    v14);
  clap_builder::builder::arg::Arg::value_parser(v16, desta);
  clap_builder::builder::arg::Arg::help(v30, v16);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aTimeStyle_0, 10LL);
  clap_builder::builder::arg::Arg::long(v16, src);
  clap_builder::builder::arg::Arg::value_name(src, v16);
  clap_builder::builder::arg::Arg::help(v16, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile, 4LL);
  memcpy(v16, desta, sizeof(v16));
  v17 = desta[146] | 4;
  v18 = desta[147];
  clap_builder::builder::arg::Arg::value_hint(desta, v16, 2LL);
  clap_builder::builder::arg::Arg::action(v16, desta, 1LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
