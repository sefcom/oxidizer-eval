__int64 uu_dd::is_stdout_redirected_to_seekable_file()
{
  int v0; // ebp
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned int v5; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v6; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+18h] [rbp-40h]
  _DWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  uu_dd::stdout_canonicalized((__int64)v9);
  std::fs::File::open(v8, v10, v11);
  v0 = v8[0];
  if ( v8[0] )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v5 = v8[1];
    v6 = <std::fs::File as std::io::Seek>::seek(&v5, 2LL, 0LL);
    v7 = v2;
    if ( v6
      || (core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v6),
          v6 = <std::fs::File as std::io::Seek>::seek(&v5, 1LL, 0LL),
          v7 = v3,
          v6) )
    {
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v6);
      LODWORD(v1) = 0;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v6);
      v1 = std::io::Seek::rewind(&v5);
      v6 = v1;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v6);
      LOBYTE(v1) = v1 == 0;
    }
    core::ptr::drop_in_place<std::fs::File>(v5);
  }
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v9);
  if ( v0 )
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v8);
  return (unsigned int)v1;
}
