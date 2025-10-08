__int64 uu_dd::is_stdout_redirected_to_seekable_file()
{
  __int64 v0; // rbx
  unsigned int v1; // ebp
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v5; // r14
  unsigned int v6; // [rsp+4h] [rbp-54h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  _DWORD v9[4]; // [rsp+18h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  uu_dd::stdout_canonicalized((__int64)&v10);
  v0 = v11;
  std::fs::File::open(v9, v11, v12);
  v1 = v9[0];
  if ( v9[0] )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v9);
    v1 = 0;
  }
  else
  {
    v6 = v9[1];
    v7 = <std::fs::File as std::io::Seek>::stream_position(&v6);
    v8 = v2;
    if ( v7
      || (core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v7),
          v7 = <std::fs::File as std::io::Seek>::seek(&v6, 1LL, 0LL),
          v8 = v3,
          v7) )
    {
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v7);
      v1 = 0;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v7);
      v5 = std::io::Seek::rewind(&v6);
      v7 = v5;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v7);
      LOBYTE(v1) = v5 == 0;
    }
    core::ptr::drop_in_place<std::fs::File>(v6);
  }
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v10, v0);
  return v1;
}