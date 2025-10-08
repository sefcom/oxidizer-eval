__int64 __fastcall uu_dd::stdout_canonicalized(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h]
  __int128 v4; // [rsp+18h] [rbp-20h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  std::fs::canonicalize(&v2);
  if ( __OFSUB__(0LL, (_QWORD)v2) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, aDevStdout, 11LL);
    *(_QWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v2);
  }
  else
  {
    result = v3;
    *(_QWORD *)(a1 + 16) = v3;
    *(_OWORD *)a1 = v2;
  }
  return result;
}