void *__fastcall uu_tee::uu_app(void *dest)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+0h] [rbp-BA8h]
  _BYTE desta[700]; // [rsp+10h] [rbp-B98h] BYREF
  __int64 v5; // [rsp+2CCh] [rbp-8DCh]
  int v6; // [rsp+2D4h] [rbp-8D4h]
  _OWORD v7[4]; // [rsp+2E0h] [rbp-8C8h] BYREF
  __int64 v8; // [rsp+320h] [rbp-888h]
  _OWORD v9[4]; // [rsp+328h] [rbp-880h] BYREF
  __int64 v10; // [rsp+368h] [rbp-840h]
  _OWORD v11[4]; // [rsp+370h] [rbp-838h] BYREF
  __int64 v12; // [rsp+3B0h] [rbp-7F8h]
  _BYTE v13[632]; // [rsp+3B8h] [rbp-7F0h] BYREF
  int v14; // [rsp+630h] [rbp-578h]
  int v15; // [rsp+634h] [rbp-574h]
  _BYTE src[700]; // [rsp+638h] [rbp-570h] BYREF
  __int64 v17; // [rsp+8F4h] [rbp-2B4h]
  int v18; // [rsp+8FCh] [rbp-2ACh]
  _OWORD v19[4]; // [rsp+900h] [rbp-2A8h] BYREF
  __int64 v20; // [rsp+940h] [rbp-268h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v13, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v17 | 0x8008000080080LL;
  v6 = v18;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v13, src, 104LL);
  clap_builder::builder::arg::Arg::long(src, v13);
  clap_builder::builder::arg::Arg::help(v13, src);
  clap_builder::builder::arg::Arg::action(v19, v13, 7LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v13, desta);
  clap_builder::builder::arg::Arg::short(desta, v13, 97LL);
  clap_builder::builder::arg::Arg::help(v13, desta);
  clap_builder::builder::arg::Arg::action(v19, v13, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v13, src);
  clap_builder::builder::arg::Arg::short(src, v13, 105LL);
  clap_builder::builder::arg::Arg::help(v13, src);
  clap_builder::builder::arg::Arg::action(v19, v13, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v13, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v19, v13);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v13, src, 112LL);
  clap_builder::builder::arg::Arg::help(src, v13);
  clap_builder::builder::arg::Arg::action(v13, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v13, desta);
  memcpy(desta, v13, 0x278uLL);
  *(_DWORD *)&desta[632] = v14 | 0x80;
  *(_DWORD *)&desta[636] = v15;
  clap_builder::builder::arg::Arg::num_args(v13, desta);
  *(_QWORD *)&desta[48] = aWarn;
  *(_QWORD *)&desta[56] = 4LL;
  *(_QWORD *)&desta[24] = 0x8000000000000000LL;
  *(_OWORD *)&desta[32] = v3;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 8LL;
  *(_QWORD *)&desta[16] = 0LL;
  desta[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::help(v7, desta, aProduceWarning, 49LL);
  *(_QWORD *)&desta[48] = aWarnNopipe_0;
  *(_QWORD *)&desta[56] = 11LL;
  *(_QWORD *)&desta[24] = 0x8000000000000000LL;
  *(_OWORD *)&desta[32] = v3;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 8LL;
  *(_QWORD *)&desta[16] = 0LL;
  desta[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::help(v9, desta, aProduceWarning_0, 84LL);
  *(_QWORD *)&desta[48] = aExit_0;
  *(_QWORD *)&desta[56] = 4LL;
  *(_QWORD *)&desta[24] = 0x8000000000000000LL;
  *(_OWORD *)&desta[32] = v3;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 8LL;
  *(_QWORD *)&desta[16] = 0LL;
  desta[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::help(v11, desta, aExitOnWriteErr, 34LL);
  *(_QWORD *)&desta[48] = aExitNopipe_0;
  *(_QWORD *)&desta[56] = 11LL;
  *(_QWORD *)&desta[24] = 0x8000000000000000LL;
  *(_OWORD *)&desta[32] = v3;
  *(_QWORD *)desta = 0LL;
  *(_QWORD *)&desta[8] = 8LL;
  *(_QWORD *)&desta[16] = 0LL;
  desta[64] = 0;
  clap_builder::builder::possible_value::PossibleValue::help(v19, desta, aExitOnWriteErr_0, 102LL);
  *(_OWORD *)desta = v7[0];
  *(_OWORD *)&desta[16] = v7[1];
  *(_OWORD *)&desta[32] = v7[2];
  *(_OWORD *)&desta[48] = v7[3];
  *(_QWORD *)&desta[64] = v8;
  *(_OWORD *)&desta[72] = v9[0];
  *(_OWORD *)&desta[88] = v9[1];
  *(_OWORD *)&desta[104] = v9[2];
  *(_OWORD *)&desta[120] = v9[3];
  *(_QWORD *)&desta[136] = v10;
  *(_QWORD *)&desta[208] = v12;
  *(_OWORD *)&desta[192] = v11[3];
  *(_OWORD *)&desta[176] = v11[2];
  *(_OWORD *)&desta[160] = v11[1];
  *(_OWORD *)&desta[144] = v11[0];
  *(_QWORD *)&desta[280] = v20;
  *(_OWORD *)&desta[264] = v19[3];
  *(_OWORD *)&desta[248] = v19[2];
  *(_OWORD *)&desta[232] = v19[1];
  *(_OWORD *)&desta[216] = v19[0];
  <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(v19, desta);
  clap_builder::builder::arg::Arg::value_parser(desta, v13);
  clap_builder::builder::arg::Arg::help(v13, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}