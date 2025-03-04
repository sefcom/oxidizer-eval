void *__fastcall uu_tee::uu_app(void *dest)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+0h] [rbp-B38h]
  _BYTE desta[700]; // [rsp+10h] [rbp-B28h] BYREF
  __int64 v5; // [rsp+2CCh] [rbp-86Ch]
  int v6; // [rsp+2D4h] [rbp-864h]
  _OWORD v7[4]; // [rsp+2E0h] [rbp-858h] BYREF
  __int64 v8; // [rsp+320h] [rbp-818h]
  _OWORD v9[4]; // [rsp+328h] [rbp-810h] BYREF
  __int64 v10; // [rsp+368h] [rbp-7D0h]
  _OWORD v11[4]; // [rsp+370h] [rbp-7C8h] BYREF
  __int64 v12; // [rsp+3B0h] [rbp-788h]
  _BYTE v13[584]; // [rsp+3B8h] [rbp-780h] BYREF
  int v14; // [rsp+600h] [rbp-538h]
  int v15; // [rsp+604h] [rbp-534h]
  _BYTE src[700]; // [rsp+608h] [rbp-530h] BYREF
  __int64 v17; // [rsp+8C4h] [rbp-274h]
  int v18; // [rsp+8CCh] [rbp-26Ch]
  __int128 v19; // [rsp+8D0h] [rbp-268h] BYREF
  __int128 v20; // [rsp+8E0h] [rbp-258h]
  __int128 v21; // [rsp+8F0h] [rbp-248h]
  __int128 v22; // [rsp+900h] [rbp-238h]
  __int64 v23; // [rsp+910h] [rbp-228h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v13, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v5 = v17 | 0x4008000040080LL;
  v6 = v18;
  clap_builder::builder::arg::Arg::new(src, aHelp_0, 6LL);
  clap_builder::builder::arg::Arg::short(v13, src, 104LL);
  clap_builder::builder::arg::Arg::long(src, v13);
  clap_builder::builder::arg::Arg::help(v13, src);
  clap_builder::builder::arg::Arg::action(&v19, v13, 7LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aAppend_0, 6LL);
  clap_builder::builder::arg::Arg::long(v13, desta);
  clap_builder::builder::arg::Arg::short(desta, v13, 97LL);
  clap_builder::builder::arg::Arg::help(v13, desta);
  clap_builder::builder::arg::Arg::action(&v19, v13, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aIgnoreInterrup_0, 17LL);
  clap_builder::builder::arg::Arg::long(v13, src);
  clap_builder::builder::arg::Arg::short(src, v13, 105LL);
  clap_builder::builder::arg::Arg::help(v13, src);
  clap_builder::builder::arg::Arg::action(&v19, v13, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile, 4LL);
  clap_builder::builder::arg::Arg::action(v13, desta, 1LL);
  clap_builder::builder::arg::Arg::value_hint(&v19, v13, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aIgnorePipeErro_0, 18LL);
  clap_builder::builder::arg::Arg::short(v13, src, 112LL);
  clap_builder::builder::arg::Arg::help(src, v13);
  clap_builder::builder::arg::Arg::action(v13, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aOutputError_0, 12LL);
  clap_builder::builder::arg::Arg::long(v13, desta);
  memcpy(desta, v13, 0x248uLL);
  *(_DWORD *)&desta[584] = v14 | 0x80;
  *(_DWORD *)&desta[588] = v15;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 1LL;
  LOBYTE(v20) = 0;
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
  clap_builder::builder::possible_value::PossibleValue::help(&v19, desta, aExitOnWriteErr_0, 102LL);
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
  *(_QWORD *)&desta[280] = v23;
  *(_OWORD *)&desta[264] = v22;
  *(_OWORD *)&desta[248] = v21;
  *(_OWORD *)&desta[232] = v20;
  *(_OWORD *)&desta[216] = v19;
  <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v19, desta);
  clap_builder::builder::arg::Arg::value_parser(desta, v13);
  clap_builder::builder::arg::Arg::help(v13, desta);
  clap_builder::builder::arg::Arg::conflicts_with(desta, v13);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
