__int64 __fastcall uu_rm::prompt_dir(__int64 (__fastcall *a1)(), __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  _DWORD v7[52]; // [rsp+8h] [rbp-D0h] BYREF

  if ( a3 )
  {
    std::fs::metadata(v7, a1, a2);
    LOBYTE(v3) = 1;
    if ( v7[0] != 2 )
    {
      LOBYTE(v5) = uu_rm::handle_writable_directory(a1, a2, a3, v7[14]);
      v3 = v5;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v7);
  }
  else
  {
    LOBYTE(v3) = 1;
  }
  return v3;
}
