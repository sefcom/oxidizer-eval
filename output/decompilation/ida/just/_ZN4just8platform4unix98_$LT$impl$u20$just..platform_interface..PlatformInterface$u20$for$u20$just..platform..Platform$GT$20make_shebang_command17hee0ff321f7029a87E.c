void *__fastcall just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::make_shebang_command(
        void *dest,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE src[240]; // [rsp+8h] [rbp-F0h] BYREF

  std::process::Command::new(src, a3, a4);
  if ( a6 )
    std::process::Command::current_dir(src, a6, a7);
  memcpy(dest, src, 0xE0uLL);
  return dest;
}