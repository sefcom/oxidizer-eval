__int64 __fastcall fd::hyperlink::PathUrl::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]

  fd::filesystem::absolute_path(&v5, a2, a3);
  v3 = v5;
  result = -v5;
  if ( __OFSUB__(-v5, 1LL) )
    result = core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v5);
  else
    *(_OWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = v3;
  return result;
}