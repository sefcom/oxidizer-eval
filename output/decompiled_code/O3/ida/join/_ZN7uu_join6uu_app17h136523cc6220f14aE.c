void *__fastcall uu_join::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A58h] BYREF
  int v4; // [rsp+248h] [rbp-810h]
  int v5; // [rsp+24Ch] [rbp-80Ch]
  _DWORD src[175]; // [rsp+250h] [rbp-808h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-54Ch]
  int v8; // [rsp+514h] [rbp-544h]
  _DWORD desta[175]; // [rsp+518h] [rbp-540h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-284h]
  int v11; // [rsp+7DCh] [rbp-27Ch]
  _QWORD v12[73]; // [rsp+7E0h] [rbp-278h] BYREF
  int v13; // [rsp+A28h] [rbp-30h]
  int v14; // [rsp+A2Ch] [rbp-2Ch]

  v1 = uucore::util_name(dest);
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v3, aOptionFile1Fil, 26LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src, aA, 1LL);
  clap_builder::builder::arg::Arg::short(v3, src, 97LL);
  clap_builder::builder::arg::Arg::action(src, v3, 1LL);
  clap_builder::builder::arg::Arg::num_args(v3, src);
  v12[0] = a1;
  v12[1] = 1LL;
  v12[2] = a2;
  v12[3] = 1LL;
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::value_name(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aV, 1LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 118LL);
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::num_args(v3, desta);
  v12[0] = a1;
  v12[1] = 1LL;
  v12[2] = a2;
  v12[3] = 1LL;
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::value_name(v3, desta);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aE, 1LL);
  clap_builder::builder::arg::Arg::short(v3, src, 101LL);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aI, 1LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aJ, 1LL);
  clap_builder::builder::arg::Arg::short(v3, src, 106LL);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aO, 1LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 111LL);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aT, 1LL);
  clap_builder::builder::arg::Arg::short(v3, src, 116LL);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  v12[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  clap_builder::builder::arg::Arg::help(v12, v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, a1, 1LL);
  clap_builder::builder::arg::Arg::short(v3, desta, 49LL);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, a2, 1LL);
  clap_builder::builder::arg::Arg::short(v3, src, 50LL);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aCheckOrder, 11LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aNocheckOrder, 13LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aHeader, 6LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aZ, 1LL);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile1_0, 5LL);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[146] | 1;
  v5 = desta[147];
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 3LL);
  memcpy(v12, v3, sizeof(v12));
  v13 = v4 | 4;
  v14 = v5;
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aFile2_0, 5LL);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 1;
  v5 = src[147];
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, src, 3LL);
  memcpy(src, v3, 0x248uLL);
  src[146] = v4 | 4;
  src[147] = v5;
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
