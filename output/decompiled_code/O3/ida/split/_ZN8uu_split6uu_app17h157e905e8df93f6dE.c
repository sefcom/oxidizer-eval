void *__fastcall uu_split::uu_app(void *dest)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+8h] [rbp-AB0h]
  __int128 v4; // [rsp+18h] [rbp-AA0h]
  __int128 v5; // [rsp+28h] [rbp-A90h]
  __int128 v6; // [rsp+38h] [rbp-A80h]
  __int64 v7; // [rsp+58h] [rbp-A60h]
  _BYTE v8[584]; // [rsp+60h] [rbp-A58h] BYREF
  int v9; // [rsp+2A8h] [rbp-810h]
  int v10; // [rsp+2ACh] [rbp-80Ch]
  _DWORD src[175]; // [rsp+2B0h] [rbp-808h] BYREF
  __int64 v12; // [rsp+56Ch] [rbp-54Ch]
  int v13; // [rsp+574h] [rbp-544h]
  _DWORD desta[175]; // [rsp+578h] [rbp-540h] BYREF
  __int64 v15; // [rsp+834h] [rbp-284h]
  int v16; // [rsp+83Ch] [rbp-27Ch]
  __int128 v17; // [rsp+840h] [rbp-278h] BYREF
  __int128 v18; // [rsp+850h] [rbp-268h]
  __int128 v19; // [rsp+860h] [rbp-258h]
  __int128 v20; // [rsp+870h] [rbp-248h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::after_help(desta, src);
  uucore::format_usage(v8, aOptionInputPre, 31LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v15 = v12 | 0x8000000080LL;
  v16 = v13;
  clap_builder::builder::arg::Arg::new(src, anon_94f0aa2b13bdb41c7ee8957331b484de_12_llvm_15137177309397333750, 5LL);
  clap_builder::builder::arg::Arg::short(v8, src, 98LL);
  clap_builder::builder::arg::Arg::long(src, v8);
  memcpy(v8, src, sizeof(v8));
  v9 = src[146] | 0x20;
  v10 = src[147];
  clap_builder::builder::arg::Arg::value_name(src, v8);
  clap_builder::builder::arg::Arg::help(v8, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_94f0aa2b13bdb41c7ee8957331b484de_13_llvm_15137177309397333750, 10LL);
  clap_builder::builder::arg::Arg::short(v8, desta, 67LL);
  clap_builder::builder::arg::Arg::long(desta, v8);
  memcpy(v8, desta, sizeof(v8));
  v9 = desta[146] | 0x20;
  v10 = desta[147];
  clap_builder::builder::arg::Arg::value_name(desta, v8);
  clap_builder::builder::arg::Arg::help(v8, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_94f0aa2b13bdb41c7ee8957331b484de_14_llvm_15137177309397333750, 5LL);
  clap_builder::builder::arg::Arg::short(v8, src, 108LL);
  clap_builder::builder::arg::Arg::long(src, v8);
  memcpy(v8, src, sizeof(v8));
  v9 = src[146] | 0x20;
  v10 = src[147];
  clap_builder::builder::arg::Arg::value_name(src, v8);
  clap_builder::builder::arg::Arg::default_value(v8, src);
  clap_builder::builder::arg::Arg::help(&v17, v8);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_94f0aa2b13bdb41c7ee8957331b484de_17_llvm_15137177309397333750, 6LL);
  clap_builder::builder::arg::Arg::short(v8, desta, 110LL);
  clap_builder::builder::arg::Arg::long(desta, v8);
  memcpy(v8, desta, sizeof(v8));
  v9 = desta[146] | 0x20;
  v10 = desta[147];
  clap_builder::builder::arg::Arg::value_name(desta, v8);
  clap_builder::builder::arg::Arg::help(v8, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_94f0aa2b13bdb41c7ee8957331b484de_15_llvm_15137177309397333750, 17LL);
  clap_builder::builder::arg::Arg::long(v8, src);
  memcpy(src, v8, 0x248uLL);
  src[146] = v9 | 0x20;
  src[147] = v10;
  clap_builder::builder::arg::Arg::value_name(v8, src);
  clap_builder::builder::arg::Arg::default_value(src, v8);
  clap_builder::builder::arg::Arg::help(v8, src);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFilter, 6LL);
  clap_builder::builder::arg::Arg::long(v8, desta);
  memcpy(desta, v8, 0x248uLL);
  desta[146] = v9 | 0x20;
  desta[147] = v10;
  clap_builder::builder::arg::Arg::value_name(v8, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v8, 6LL);
  clap_builder::builder::arg::Arg::help(v8, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aElideEmptyFile, 17LL);
  clap_builder::builder::arg::Arg::long(v8, src);
  clap_builder::builder::arg::Arg::short(src, v8, 101LL);
  clap_builder::builder::arg::Arg::help(v8, src);
  clap_builder::builder::arg::Arg::action(&v17, v8, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_94f0aa2b13bdb41c7ee8957331b484de_19_llvm_15137177309397333750, 2LL);
  clap_builder::builder::arg::Arg::short(v8, desta, 100LL);
  clap_builder::builder::arg::Arg::action(desta, v8, 2LL);
  *(_QWORD *)&v3 = anon_94f0aa2b13bdb41c7ee8957331b484de_18_llvm_15137177309397333750;
  *((_QWORD *)&v3 + 1) = 16LL;
  *(_QWORD *)&v4 = anon_94f0aa2b13bdb41c7ee8957331b484de_19_llvm_15137177309397333750;
  *((_QWORD *)&v4 + 1) = 2LL;
  *(_QWORD *)&v5 = anon_94f0aa2b13bdb41c7ee8957331b484de_20_llvm_15137177309397333750;
  *((_QWORD *)&v5 + 1) = 12LL;
  *(_QWORD *)&v6 = anon_94f0aa2b13bdb41c7ee8957331b484de_21_llvm_15137177309397333750;
  *((_QWORD *)&v6 + 1) = 2LL;
  *(_QWORD *)&v20 = anon_94f0aa2b13bdb41c7ee8957331b484de_21_llvm_15137177309397333750;
  *((_QWORD *)&v20 + 1) = 2LL;
  *(_QWORD *)&v19 = anon_94f0aa2b13bdb41c7ee8957331b484de_20_llvm_15137177309397333750;
  *((_QWORD *)&v19 + 1) = 12LL;
  *(_QWORD *)&v18 = anon_94f0aa2b13bdb41c7ee8957331b484de_19_llvm_15137177309397333750;
  *((_QWORD *)&v18 + 1) = 2LL;
  v17 = v3;
  clap_builder::builder::arg::Arg::overrides_with_all(v8, desta);
  clap_builder::builder::arg::Arg::help(&v17, v8);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_94f0aa2b13bdb41c7ee8957331b484de_18_llvm_15137177309397333750, 16LL);
  clap_builder::builder::arg::Arg::long(v8, src);
  memcpy(src, v8, 0x248uLL);
  src[146] = v9 | 0x80;
  src[147] = v10;
  LOBYTE(v7) = 0;
  *(_QWORD *)&v18 = v7;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 1LL;
  clap_builder::builder::arg::Arg::num_args(v8, src);
  v20 = v6;
  v19 = v5;
  v18 = v4;
  v17 = v3;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v8);
  clap_builder::builder::arg::Arg::value_name(v8, src);
  clap_builder::builder::arg::Arg::help(&v17, v8);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_94f0aa2b13bdb41c7ee8957331b484de_21_llvm_15137177309397333750, 2LL);
  clap_builder::builder::arg::Arg::short(v8, desta, 120LL);
  clap_builder::builder::arg::Arg::action(desta, v8, 2LL);
  v20 = v6;
  v19 = v5;
  v18 = v4;
  v17 = v3;
  clap_builder::builder::arg::Arg::overrides_with_all(v8, desta);
  clap_builder::builder::arg::Arg::help(&v17, v8);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, anon_94f0aa2b13bdb41c7ee8957331b484de_20_llvm_15137177309397333750, 12LL);
  clap_builder::builder::arg::Arg::long(v8, src);
  memcpy(src, v8, 0x248uLL);
  src[146] = v9 | 0x80;
  src[147] = v10;
  clap_builder::builder::arg::Arg::num_args(v8, src);
  clap_builder::builder::arg::Arg::overrides_with_all(src, v8);
  clap_builder::builder::arg::Arg::value_name(v8, src);
  clap_builder::builder::arg::Arg::help(&v17, v8);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, anon_94f0aa2b13bdb41c7ee8957331b484de_22_llvm_15137177309397333750, 13LL);
  clap_builder::builder::arg::Arg::short(v8, desta, 97LL);
  clap_builder::builder::arg::Arg::long(desta, v8);
  memcpy(v8, desta, sizeof(v8));
  v9 = desta[146] | 0x20;
  v10 = desta[147];
  clap_builder::builder::arg::Arg::value_name(desta, v8);
  clap_builder::builder::arg::Arg::help(v8, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aVerbose, 7LL);
  clap_builder::builder::arg::Arg::long(v8, src);
  clap_builder::builder::arg::Arg::help(src, v8);
  clap_builder::builder::arg::Arg::action(v8, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSeparator, 9LL);
  clap_builder::builder::arg::Arg::short(v8, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, v8);
  memcpy(v8, desta, sizeof(v8));
  v9 = desta[146] | 0x20;
  v10 = desta[147];
  clap_builder::builder::arg::Arg::value_name(desta, v8);
  clap_builder::builder::arg::Arg::action(v8, desta, 1LL);
  clap_builder::builder::arg::Arg::help(&v17, v8);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aIoBlksize, 11LL);
  clap_builder::builder::arg::Arg::long(v8, src);
  clap_builder::builder::arg::Arg::alias(src, v8);
  memcpy(v8, src, sizeof(v8));
  v9 = src[146] | 4;
  v10 = src[147];
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aInput, 5LL);
  clap_builder::builder::arg::Arg::default_value(v8, desta);
  clap_builder::builder::arg::Arg::value_hint(&v17, v8, 3LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aPrefix, 6LL);
  clap_builder::builder::arg::Arg::default_value(v8, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
