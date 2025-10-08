void *__fastcall uu_du::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v9[632]; // [rsp+0h] [rbp-B58h] BYREF
  int v10; // [rsp+278h] [rbp-8E0h]
  int v11; // [rsp+27Ch] [rbp-8DCh]
  __int128 v12; // [rsp+288h] [rbp-8D0h]
  _DWORD src[175]; // [rsp+298h] [rbp-8C0h] BYREF
  __int64 v14; // [rsp+554h] [rbp-604h]
  int v15; // [rsp+55Ch] [rbp-5FCh]
  _DWORD desta[175]; // [rsp+560h] [rbp-5F8h] BYREF
  __int64 v17; // [rsp+81Ch] [rbp-33Ch]
  int v18; // [rsp+824h] [rbp-334h]
  _OWORD v19[4]; // [rsp+828h] [rbp-330h] BYREF
  __int64 v20; // [rsp+868h] [rbp-2F0h]
  _OWORD v21[4]; // [rsp+870h] [rbp-2E8h] BYREF
  __int64 v22; // [rsp+8B0h] [rbp-2A8h]
  _OWORD v23[4]; // [rsp+8B8h] [rbp-2A0h] BYREF
  __int64 v24; // [rsp+8F8h] [rbp-260h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v9, aOptionFileOpti, 55LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v17 = v14 | 0x8008000080080LL;
  v18 = v15;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 5LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 97LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 66LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::value_name(v9, desta);
  clap_builder::builder::arg::Arg::help(v23, v9);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::short(desta, v9, 99LL);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::value_name(v9, src);
  clap_builder::builder::arg::Arg::help(v23, v9);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::short(desta, v9, 104LL);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 107LL);
  clap_builder::builder::arg::Arg::help(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 76LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 68LL);
  clap_builder::builder::arg::Arg::visible_short_alias(src, v9);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 80LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::overrides_with(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 109LL);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 48LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 83LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 115LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 120LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v9, src, 116LL);
  clap_builder::builder::arg::Arg::long(src, v9);
  clap_builder::builder::arg::Arg::value_name(v9, src);
  clap_builder::builder::arg::Arg::num_args(src, v9);
  memcpy(v9, src, sizeof(v9));
  v10 = src[158] | 0x20;
  v11 = src[159];
  clap_builder::builder::arg::Arg::help(v23, v9);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::value_name(src, v9);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::arg::Arg::action(v23, v9, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v9, desta, 88LL);
  clap_builder::builder::arg::Arg::long(desta, v9);
  clap_builder::builder::arg::Arg::value_name(v9, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v9);
  clap_builder::builder::arg::Arg::help(v9, desta);
  clap_builder::builder::arg::Arg::action(v23, v9, 1LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::value_name(src, v9);
  clap_builder::builder::arg::Arg::value_hint(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 1LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v9, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v9);
  memcpy(v9, desta, sizeof(v9));
  v10 = desta[158] | 0x80;
  v11 = desta[159];
  clap_builder::builder::arg::Arg::num_args(desta, v9);
  *(_QWORD *)&v9[48] = aAtime_0;
  *(_QWORD *)&v9[56] = 5LL;
  *(_QWORD *)&v9[24] = 0x8000000000000000LL;
  *(_OWORD *)&v9[32] = v12;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 8LL;
  *(_QWORD *)&v9[16] = 0LL;
  v9[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v23,
    v9,
    aAccess_0,
    6LL);
  clap_builder::builder::possible_value::PossibleValue::alias(
    v19,
    v23,
    aUse_0,
    3LL,
    v2,
    v3,
    *(_QWORD *)v9,
    *(_QWORD *)&v9[8],
    *(_QWORD *)&v9[16],
    *(_QWORD *)&v9[24],
    *(_QWORD *)&v9[32],
    *(_QWORD *)&v9[40],
    *(_QWORD *)&v9[48],
    *(_QWORD *)&v9[56],
    *(_QWORD *)&v9[64]);
  *(_QWORD *)&v9[48] = aCtime_0;
  *(_QWORD *)&v9[56] = 5LL;
  *(_QWORD *)&v9[24] = 0x8000000000000000LL;
  *(_OWORD *)&v9[32] = v12;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 8LL;
  *(_QWORD *)&v9[16] = 0LL;
  v9[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v21,
    v9,
    aStatus_0,
    6LL,
    v4,
    v5);
  *(_QWORD *)&v9[48] = aCreation;
  *(_QWORD *)&v9[56] = 8LL;
  *(_QWORD *)&v9[24] = 0x8000000000000000LL;
  *(_OWORD *)&v9[32] = v12;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 8LL;
  *(_QWORD *)&v9[16] = 0LL;
  v9[64] = 0;
  ((void (__fastcall *)(_OWORD *, _BYTE *, const char *, __int64, __int64, __int64))clap_builder::builder::possible_value::PossibleValue::alias)(
    v23,
    v9,
    aBirth_0,
    5LL,
    v6,
    v7);
  *(_OWORD *)v9 = v19[0];
  *(_OWORD *)&v9[16] = v19[1];
  *(_OWORD *)&v9[32] = v19[2];
  *(_OWORD *)&v9[48] = v19[3];
  *(_QWORD *)&v9[64] = v20;
  *(_OWORD *)&v9[72] = v21[0];
  *(_OWORD *)&v9[88] = v21[1];
  *(_OWORD *)&v9[104] = v21[2];
  *(_OWORD *)&v9[120] = v21[3];
  *(_QWORD *)&v9[136] = v22;
  *(_QWORD *)&v9[208] = v24;
  *(_OWORD *)&v9[192] = v23[3];
  *(_OWORD *)&v9[176] = v23[2];
  *(_OWORD *)&v9[160] = v23[1];
  *(_OWORD *)&v9[144] = v23[0];
  ((void (__fastcall *)(_OWORD *, _BYTE *))<uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from)(
    v23,
    v9);
  clap_builder::builder::arg::Arg::value_parser(v9, desta);
  clap_builder::builder::arg::Arg::help(v23, v9);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::value_name(src, v9);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  memcpy(v9, desta, sizeof(v9));
  v10 = desta[158] | 4;
  v11 = desta[159];
  clap_builder::builder::arg::Arg::value_hint(desta, v9);
  clap_builder::builder::arg::Arg::action(v9, desta, 1LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}