__int64 __fastcall uu_install::is_new_file_path(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  _DWORD dest[52]; // [rsp+8h] [rbp-D0h] BYREF

  std::fs::metadata(dest);
  v2 = dest[0];
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, a1);
  if ( v2 == 2 )
  {
    v3 = std::path::Path::parent(a1, a2);
    LOBYTE(v2) = 1;
    if ( v3 && !(unsigned __int8)std::path::Path::is_dir(v3, v4) )
    {
      if ( !std::path::Path::parent(a1, a2) )
        core::option::unwrap_failed(&off_102310);
      LOBYTE(v2) = v5 == 0;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}