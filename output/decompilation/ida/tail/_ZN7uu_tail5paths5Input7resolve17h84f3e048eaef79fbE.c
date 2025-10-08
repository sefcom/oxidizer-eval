_QWORD *__fastcall uu_tail::paths::Input::resolve(_QWORD *a1, _QWORD *a2)
{
  __int128 v2; // kr00_16
  __int64 v3; // r14
  __int64 v4; // r15
  char v5; // bp
  __int128 v6; // kr10_16
  __int128 v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]

  if ( __OFSUB__(0LL, a2[3])
    || (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, aDevStdin, 10LL),
        v2 = v8,
        v3 = a2[4],
        v4 = a2[5],
        v5 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v3, v4, *((_QWORD *)&v8 + 1), v9),
        core::ptr::drop_in_place<std::path::PathBuf>(v2, *((_QWORD *)&v2 + 1)),
        v5) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, aDevFd0, 9LL);
    v6 = v8;
    std::fs::canonicalize(&v8, *((_QWORD *)&v8 + 1), v9);
    if ( (_QWORD)v8 == 0x8000000000000000LL )
    {
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v8);
    }
    else
    {
      a1[2] = v9;
      *(_OWORD *)a1 = v8;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v6, *((_QWORD *)&v6 + 1));
  }
  else
  {
    std::fs::canonicalize(&v8, v3, v4);
    if ( (_QWORD)v8 == 0x8000000000000000LL )
    {
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v8);
    }
    else
    {
      a1[2] = v9;
      *(_OWORD *)a1 = v8;
    }
  }
  return a1;
}