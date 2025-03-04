void *__fastcall uu_fold::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[584]; // [rsp+0h] [rbp-A48h] BYREF
  int v4; // [rsp+248h] [rbp-800h]
  int v5; // [rsp+24Ch] [rbp-7FCh]
  _DWORD src[175]; // [rsp+250h] [rbp-7F8h] BYREF
  __int64 v7; // [rsp+50Ch] [rbp-53Ch]
  int v8; // [rsp+514h] [rbp-534h]
  _DWORD desta[175]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v10; // [rsp+7D4h] [rbp-274h]
  int v11; // [rsp+7DCh] [rbp-26Ch]
  _BYTE v12[616]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  uucore::format_usage(v3, aOptionFile, 24LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src, aBytes_1, 5LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 98LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aSpaces_0, 6LL);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::short(desta, v3, 115LL);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(v12, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src, aWidth_0, 5LL);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::short(src, v3, 119LL);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = src[146] | 0x20;
  v5 = src[147];
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta, aFile, 4LL);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[146] | 4;
  v5 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, v3, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v3, desta, 3LL);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
