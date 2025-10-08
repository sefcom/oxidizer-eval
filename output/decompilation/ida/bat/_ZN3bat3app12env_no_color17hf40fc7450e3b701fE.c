__int64 __fastcall bat::app::env_no_color()
{
  unsigned int v0; // ebx
  _QWORD v2[4]; // [rsp+8h] [rbp-20h] BYREF

  std::env::var_os(v2, aNoColor, 8LL);
  if ( __OFSUB__(-v2[0], 1LL) )
    return 0LL;
  LOBYTE(v0) = v2[2] != 0LL;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2[0], v2[1]);
  return v0;
}