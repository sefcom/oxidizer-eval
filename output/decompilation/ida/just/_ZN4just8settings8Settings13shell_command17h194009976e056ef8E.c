void *__fastcall just::settings::Settings::shell_command(void *dest)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // r12
  _QWORD v5[3]; // [rsp+0h] [rbp-118h] BYREF
  _QWORD src[32]; // [rsp+18h] [rbp-100h] BYREF

  just::settings::Settings::shell(src);
  v1 = src[2];
  v2 = src[3];
  v3 = src[4];
  std::process::Command::new(src, src[0], src[1]);
  v5[0] = v1;
  v5[1] = v2;
  v5[2] = v3;
  ((void (__fastcall *)(_QWORD *, _QWORD *))std::process::Command::args)(src, v5);
  return memcpy(dest, src, 0xE0uLL);
}