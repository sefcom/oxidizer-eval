void *__fastcall uu_du::uu_app(void *dest, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[584]; // [rsp+0h] [rbp-AE8h] BYREF
  int v11; // [rsp+248h] [rbp-8A0h]
  int v12; // [rsp+24Ch] [rbp-89Ch]
  __int128 v13; // [rsp+250h] [rbp-898h]
  _DWORD desta[175]; // [rsp+260h] [rbp-888h] BYREF
  __int64 v15; // [rsp+51Ch] [rbp-5CCh]
  int v16; // [rsp+524h] [rbp-5C4h]
  _DWORD src[175]; // [rsp+528h] [rbp-5C0h] BYREF
  __int64 v18; // [rsp+7E4h] [rbp-304h]
  int v19; // [rsp+7ECh] [rbp-2FCh]
  _OWORD v20[4]; // [rsp+7F0h] [rbp-2F8h] BYREF
  __int64 v21; // [rsp+830h] [rbp-2B8h]
  _OWORD v22[4]; // [rsp+838h] [rbp-2B0h] BYREF
  __int64 v23; // [rsp+878h] [rbp-270h]
  _OWORD v24[4]; // [rsp+880h] [rbp-268h] BYREF
  __int64 v25; // [rsp+8C0h] [rbp-228h]

  v2 = uucore::util_name(dest, a2);
  clap_builder::builder::command::Command::new(src, v2);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v10, aOptionFileOpti, 55LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v15 = v18 | 0x4008000040080LL;
  v16 = v19;
  clap_builder::builder::arg::Arg::new(src, aHelp, 4LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aAll_0, 3LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 97LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aApparentSize_0, 13LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aBlockSize_1, 10LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 66LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::value_name(v10, desta);
  clap_builder::builder::arg::Arg::help(v24, v10);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aB_0, 1LL);
  clap_builder::builder::arg::Arg::short(v10, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v10);
  clap_builder::builder::arg::Arg::help(v10, src);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aC_0, 1LL);
  clap_builder::builder::arg::Arg::long(v10, desta);
  clap_builder::builder::arg::Arg::short(desta, v10, 99LL);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aD_1, 1LL);
  clap_builder::builder::arg::Arg::short(v10, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v10);
  clap_builder::builder::arg::Arg::value_name(v10, src);
  clap_builder::builder::arg::Arg::help(v24, v10);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, asc_1D306, 1LL);
  clap_builder::builder::arg::Arg::long(v10, desta);
  clap_builder::builder::arg::Arg::short(desta, v10, 104LL);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aInodes_0, 6LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aK_0, 1LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 107LL);
  clap_builder::builder::arg::Arg::help(desta, v10);
  clap_builder::builder::arg::Arg::action(v10, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, asc_1D3AF, 1LL);
  clap_builder::builder::arg::Arg::short(v10, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v10);
  clap_builder::builder::arg::Arg::help(v10, src);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aDereference_0, 11LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 76LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, "dereference-argsConnection resetentity not foundk", 16LL);
  clap_builder::builder::arg::Arg::short(v10, src, 68LL);
  clap_builder::builder::arg::Arg::visible_short_alias(src, v10);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aNoDereference, 14LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 80LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v10);
  clap_builder::builder::arg::Arg::action(v10, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aM_0, 1LL);
  clap_builder::builder::arg::Arg::short(v10, src, 109LL);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, a0_3, 1LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 48LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aS_1, 1LL);
  clap_builder::builder::arg::Arg::short(v10, src, 83LL);
  clap_builder::builder::arg::Arg::long(src, v10);
  clap_builder::builder::arg::Arg::help(v10, src);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aS_2, 1LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aSi_0, 2LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aOneFileSystem_0, 15LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 120LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aThreshold_0, 9LL);
  clap_builder::builder::arg::Arg::short(v10, src, 116LL);
  clap_builder::builder::arg::Arg::long(src, v10);
  clap_builder::builder::arg::Arg::value_name(v10, src);
  clap_builder::builder::arg::Arg::num_args(src, v10);
  memcpy(v10, src, sizeof(v10));
  v11 = src[146] | 0x20;
  v12 = src[147];
  clap_builder::builder::arg::Arg::help(v24, v10);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aVerbose_0, 7LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aExclude, 7LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::value_name(src, v10);
  clap_builder::builder::arg::Arg::help(v10, src);
  clap_builder::builder::arg::Arg::action(v24, v10, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aExcludeFrom, 12LL);
  clap_builder::builder::arg::Arg::short(v10, desta, 88LL);
  clap_builder::builder::arg::Arg::long(desta, v10);
  clap_builder::builder::arg::Arg::value_name(v10, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v10, 3LL);
  clap_builder::builder::arg::Arg::help(v10, desta);
  clap_builder::builder::arg::Arg::action(v24, v10, 1LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFiles0From_0, 11LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::value_name(src, v10);
  clap_builder::builder::arg::Arg::value_hint(v10, src, 3LL);
  clap_builder::builder::arg::Arg::help(src, v10);
  clap_builder::builder::arg::Arg::action(v10, src, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aTime, 4LL);
  clap_builder::builder::arg::Arg::long(v10, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v10);
  memcpy(v10, desta, sizeof(v10));
  v11 = desta[146] | 0x80;
  v12 = desta[147];
  clap_builder::builder::arg::Arg::num_args(desta, v10);
  *(_QWORD *)&v10[48] = aAtime_0;
  *(_QWORD *)&v10[56] = 5LL;
  *(_QWORD *)&v10[24] = 0x8000000000000000LL;
  *(_OWORD *)&v10[32] = v13;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 8LL;
  *(_QWORD *)&v10[16] = 0LL;
  v10[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v24,
    v10,
    aAccess_0,
    6LL);
  clap_builder::builder::possible_value::PossibleValue::alias(
    v20,
    v24,
    aUse_0,
    3LL,
    v3,
    v4,
    *(_QWORD *)v10,
    *(_QWORD *)&v10[8],
    *(_QWORD *)&v10[16],
    *(_QWORD *)&v10[24],
    *(_QWORD *)&v10[32],
    *(_QWORD *)&v10[40],
    *(_QWORD *)&v10[48],
    *(_QWORD *)&v10[56],
    *(_QWORD *)&v10[64]);
  *(_QWORD *)&v10[48] = aCtime_0;
  *(_QWORD *)&v10[56] = 5LL;
  *(_QWORD *)&v10[24] = 0x8000000000000000LL;
  *(_OWORD *)&v10[32] = v13;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 8LL;
  *(_QWORD *)&v10[16] = 0LL;
  v10[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v22,
    v10,
    aStatus_0,
    6LL,
    v5,
    v6);
  *(_QWORD *)&v10[48] = aCreation;
  *(_QWORD *)&v10[56] = 8LL;
  *(_QWORD *)&v10[24] = 0x8000000000000000LL;
  *(_OWORD *)&v10[32] = v13;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)&v10[8] = 8LL;
  *(_QWORD *)&v10[16] = 0LL;
  v10[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v24,
    v10,
    aBirth_0,
    5LL,
    v7,
    v8);
  *(_OWORD *)v10 = v20[0];
  *(_OWORD *)&v10[16] = v20[1];
  *(_OWORD *)&v10[32] = v20[2];
  *(_OWORD *)&v10[48] = v20[3];
  *(_QWORD *)&v10[64] = v21;
  *(_OWORD *)&v10[72] = v22[0];
  *(_OWORD *)&v10[88] = v22[1];
  *(_OWORD *)&v10[104] = v22[2];
  *(_OWORD *)&v10[120] = v22[3];
  *(_QWORD *)&v10[136] = v23;
  *(_QWORD *)&v10[208] = v25;
  *(_OWORD *)&v10[192] = v24[3];
  *(_OWORD *)&v10[176] = v24[2];
  *(_OWORD *)&v10[160] = v24[1];
  *(_OWORD *)&v10[144] = v24[0];
  ((void (__fastcall *)(_OWORD *, _BYTE *))<uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v24,
    v10);
  clap_builder::builder::arg::Arg::value_parser(v10, desta);
  clap_builder::builder::arg::Arg::help(v24, v10);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aTimeStyle_0, 10LL);
  clap_builder::builder::arg::Arg::long(v10, src);
  clap_builder::builder::arg::Arg::value_name(src, v10);
  clap_builder::builder::arg::Arg::help(v10, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile, 4LL);
  memcpy(v10, desta, sizeof(v10));
  v11 = desta[146] | 4;
  v12 = desta[147];
  clap_builder::builder::arg::Arg::value_hint(desta, v10, 2LL);
  clap_builder::builder::arg::Arg::action(v10, desta, 1LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
