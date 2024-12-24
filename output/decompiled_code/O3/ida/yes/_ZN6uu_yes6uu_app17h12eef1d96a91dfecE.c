char *__fastcall uu_yes::uu_app(char *dest)
{
  __int64 v1; // rax
  int v2; // ecx
  _BYTE v4[700]; // [rsp+0h] [rbp-A48h] BYREF
  __int64 v5; // [rsp+2BCh] [rbp-78Ch]
  int v6; // [rsp+2C4h] [rbp-784h]
  _BYTE v7[592]; // [rsp+2C8h] [rbp-780h] BYREF
  _BYTE desta[712]; // [rsp+518h] [rbp-530h] BYREF
  __int64 v9[77]; // [rsp+7E0h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v4, v1);
  clap_builder::builder::command::Command::version(desta, v4);
  clap_builder::builder::command::Command::about(v4, desta);
  uucore::format_usage(v7, aString_0, 14LL);
  clap_builder::builder::command::Command::override_usage(desta, v4);
  clap_builder::builder::arg::Arg::new(v4, aString_1, 6LL);
  v9[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(v7, v4);
  clap_builder::builder::arg::Arg::action(v9, v7);
  clap_builder::builder::command::Command::arg(v4, desta);
  memcpy(dest, v4, 0x2BCuLL);
  v2 = v6;
  *(_QWORD *)(dest + 700) = v5 | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v2;
  return dest;
}
