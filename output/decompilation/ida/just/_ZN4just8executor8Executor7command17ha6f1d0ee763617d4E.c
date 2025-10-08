void *__fastcall just::executor::Executor::command(
        _BYTE *dest,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        __int64 a9)
{
  void *result; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD src[34]; // [rsp+8h] [rbp-110h] BYREF

  if ( *a2 )
  {
    result = (void *)just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::set_execute_permission(
                       a4,
                       a5);
    if ( result )
    {
      dest[8] = 49;
      *((_QWORD *)dest + 2) = a6;
      *((_QWORD *)dest + 3) = a7;
      *((_QWORD *)dest + 4) = result;
LABEL_12:
      *(_QWORD *)dest = 0x8000000000000000LL;
      return result;
    }
    just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::make_shebang_command(
      src,
      a9);
    if ( src[0] == 0x8000000000000000LL )
    {
      *((_OWORD *)dest + 2) = *(_OWORD *)&src[1];
      dest[8] = 14;
      *((_QWORD *)dest + 2) = a6;
      result = a7;
      *((_QWORD *)dest + 3) = a7;
      goto LABEL_12;
    }
  }
  else
  {
    v13 = a2[1];
    std::process::Command::new(src, v13 + 24);
    if ( a8 )
      std::process::Command::current_dir(src, a8, a9);
    v14 = *(_QWORD *)(v13 + 16);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v13 + 8);
      v16 = 48 * v14;
      do
      {
        std::process::Command::arg(src, v15);
        v15 += 48LL;
        v16 -= 48LL;
      }
      while ( v16 );
    }
    std::process::Command::arg(src, a4, a5);
  }
  return memcpy(dest, src, 0xE0uLL);
}