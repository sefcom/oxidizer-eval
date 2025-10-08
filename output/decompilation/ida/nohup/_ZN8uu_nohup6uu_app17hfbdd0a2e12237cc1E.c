char *__fastcall uu_nohup::uu_app(char *dest)
{
  __int64 v1; // rax
  int v2; // ecx
  _DWORD v4[175]; // [rsp+0h] [rbp-828h] BYREF
  __int64 v5; // [rsp+2BCh] [rbp-56Ch]
  int v6; // [rsp+2C4h] [rbp-564h]
  _BYTE desta[632]; // [rsp+2C8h] [rbp-560h] BYREF
  int v8; // [rsp+540h] [rbp-2E8h]
  int v9; // [rsp+544h] [rbp-2E4h]
  _BYTE src[736]; // [rsp+548h] [rbp-2E0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(v4, src);
  clap_builder::builder::command::Command::about(src, v4);
  clap_builder::builder::command::Command::after_help(v4, src);
  uucore::format_usage(desta, aCommandArgOpti, 29LL);
  clap_builder::builder::command::Command::override_usage(src, v4);
  clap_builder::builder::arg::Arg::new(v4);
  memcpy(desta, v4, sizeof(desta));
  v8 = v4[158] | 5;
  v9 = v4[159];
  clap_builder::builder::arg::Arg::action(v4, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, v4);
  clap_builder::builder::command::Command::arg(v4, src);
  memcpy(dest, v4, 0x2BCuLL);
  v2 = v6;
  *(_QWORD *)(dest + 700) = v5 | 0x80000000A0LL;
  *((_DWORD *)dest + 177) = v2;
  return dest;
}