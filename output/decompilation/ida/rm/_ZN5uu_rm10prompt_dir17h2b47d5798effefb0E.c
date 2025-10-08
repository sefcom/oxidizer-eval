__int64 __fastcall uu_rm::prompt_dir(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rbx
  _QWORD v8[7]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-A0h]

  v4 = a4;
  if ( (_BYTE)a4 )
  {
    std::fs::metadata(v8);
    v6 = v8[0];
    if ( v8[0] == 2LL )
    {
      LOBYTE(v4) = 1;
      v6 = 2LL;
    }
    else
    {
      v4 = uu_rm::handle_writable_directory(a1, a2, a3, (unsigned __int8)v4, v9);
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v6, v8[1]);
  }
  else
  {
    LOBYTE(v4) = 1;
  }
  return v4;
}