__int64 __fastcall forc_crypto::args::checked_read_file(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-40h] BYREF
  __int128 v4; // [rsp+10h] [rbp-38h]
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]

  result = 0LL;
  if ( __OFSUB__(0LL, *a2) )
  {
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    std::fs::read(&v5);
    v4 = v6;
    v3 = v5;
    if ( v5 == 0x8000000000000000LL )
    {
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<u8>,std::io::error::Error>>(&v3);
    }
    else
    {
      a1[2] = *((_QWORD *)&v4 + 1);
      *a1 = v3;
      result = v4;
      a1[1] = v4;
    }
  }
  return result;
}