__int64 __fastcall uu_rm::is_dir_empty(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int8 v5; // [rsp+8h] [rbp-10h]

  std::fs::read_dir(&v4, a1, a2);
  if ( v5 == 2 )
  {
    v2 = 0;
LABEL_4:
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v4);
    return v2;
  }
  LOBYTE(v2) = core::iter::traits::iterator::Iterator::fold(v4, v5) == 0;
  if ( v5 == 2 )
    goto LABEL_4;
  return v2;
}