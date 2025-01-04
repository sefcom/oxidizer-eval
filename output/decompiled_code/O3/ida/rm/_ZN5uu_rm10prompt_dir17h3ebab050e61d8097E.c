__int64 __fastcall uu_rm::prompt_dir(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  _DWORD v6[52]; // [rsp+8h] [rbp-D0h] BYREF

  if ( a3 )
  {
    std::fs::metadata(v6, a1, a2);
    LOBYTE(v3) = 1;
    if ( v6[0] != 2 )
      v3 = uu_rm::handle_writable_directory(a1, a2, a3, v6[14]);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v6);
  }
  else
  {
    LOBYTE(v3) = 1;
  }
  return v3;
}
