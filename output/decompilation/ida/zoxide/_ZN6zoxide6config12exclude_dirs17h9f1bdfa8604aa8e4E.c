__int64 __fastcall zoxide::config::exclude_dirs(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r15
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+10h] [rbp-58h]
  _QWORD v7[4]; // [rsp+18h] [rbp-50h] BYREF
  char v8; // [rsp+38h] [rbp-30h]

  std::env::var_os(&v4, aZoExcludeDirs, 16LL);
  v1 = v4;
  if ( __OFSUB__(-v4, 1LL) )
  {
    zoxide::config::exclude_dirs::{{closure}}(v7);
    return core::iter::traits::iterator::Iterator::collect(a1, v7);
  }
  else
  {
    v3 = v5;
    v7[0] = &std::path::Path::to_path_buf;
    v7[1] = v5;
    v7[2] = v6;
    v7[3] = std::sys::pal::unix::os::split_paths::is_separator;
    v8 = 0;
    core::iter::traits::iterator::Iterator::collect(a1, v7);
    return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1, v3);
  }
}