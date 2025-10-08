char *__fastcall uu_arch::uu_app(char *dest)
{
  __int64 v1; // rax
  int v2; // ecx
  _BYTE v4[700]; // [rsp+0h] [rbp-5A8h] BYREF
  __int64 v5; // [rsp+2BCh] [rbp-2ECh]
  int v6; // [rsp+2C4h] [rbp-2E4h]
  _BYTE src[736]; // [rsp+2C8h] [rbp-2E0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(v4, src);
  clap_builder::builder::command::Command::about(src, v4);
  clap_builder::builder::command::Command::after_help(v4, src);
  memcpy(dest, v4, 0x2BCuLL);
  v2 = v6;
  *(_QWORD *)(dest + 700) = v5 | 0x8000000080LL;
  *((_DWORD *)dest + 177) = v2;
  return dest;
}