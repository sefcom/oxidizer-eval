_BOOL8 __fastcall uu_du::birth_u64(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-28h] BYREF
  __int64 v3; // [rsp+8h] [rbp-20h]
  __int64 v4; // [rsp+18h] [rbp-10h] BYREF
  int v5; // [rsp+20h] [rbp-8h]

  std::fs::Metadata::created(&v2, a1);
  if ( (_DWORD)v3 == 1000000000 )
  {
    core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&v2);
    return 0LL;
  }
  else
  {
    v4 = v2;
    v5 = v3;
    std::time::SystemTime::duration_since(&v2, &v4, 0LL, 0LL);
    return (v2 & 1) == 0;
  }
}