char *__fastcall uu_whoami::uu_app(char *dest)
{
  __int64 v1; // rax
  int v2; // ecx
  _BYTE v4[24]; // [rsp+8h] [rbp-5C0h] BYREF
  _BYTE src[700]; // [rsp+20h] [rbp-5A8h] BYREF
  __int64 v6; // [rsp+2DCh] [rbp-2ECh]
  int v7; // [rsp+2E4h] [rbp-2E4h]
  _BYTE desta[736]; // [rsp+2E8h] [rbp-2E0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::version(src, desta);
  clap_builder::builder::command::Command::about(desta, src);
  uucore::format_usage(v4, asc_1B957, 2LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(dest, src, 0x2BCuLL);
  v2 = v7;
  *(_QWORD *)(dest + 700) = v6 | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v2;
  return dest;
}
