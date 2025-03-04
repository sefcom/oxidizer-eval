_QWORD *__fastcall uu_tail::paths::Input::resolve(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  char v4; // bp
  __int128 v7; // [rsp+8h] [rbp-90h] BYREF
  __int64 v8; // [rsp+18h] [rbp-80h]
  __int128 v9; // [rsp+20h] [rbp-78h] BYREF
  __int64 v10; // [rsp+30h] [rbp-68h]
  __int128 v11; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  _BYTE v13[8]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]

  if ( a2[3] == 0x8000000000000000LL
    || (std::sys::os_str::bytes::Slice::to_owned(&v7, "/dev/stdin/dev/fd/0 <==\n\n", 10LL),
        v2 = a2[4],
        v3 = a2[5],
        v4 = <std::path::PathBuf as core::cmp::PartialEq>::eq(v2, v3, *((_QWORD *)&v7 + 1), v8),
        core::ptr::drop_in_place<std::path::PathBuf>(&v7),
        v4) )
  {
    std::sys::os_str::bytes::Slice::to_owned(v13, "/dev/stdin/dev/fd/0 <==\n\n", 10LL);
    std::fs::canonicalize(&v7, v14, v15);
    if ( (_QWORD)v7 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v9 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v7);
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v9 = v7;
      v10 = v8;
      std::sys::os_str::bytes::Slice::to_owned(&v7, "/dev/fd/0 <==\n\n", 9LL);
      v12 = v8;
      v11 = v7;
      if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                              *((_QWORD *)&v9 + 1),
                              v10,
                              *((_QWORD *)&v7 + 1),
                              v8) )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v11);
        *a1 = 0x8000000000000000LL;
        if ( (_QWORD)v9 != 0x8000000000000000LL )
          core::ptr::drop_in_place<std::path::PathBuf>(&v9);
      }
      else
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v11);
        a1[2] = v10;
        *(_OWORD *)a1 = v9;
      }
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v13);
  }
  else
  {
    std::fs::canonicalize(&v7, v2, v3);
    if ( (_QWORD)v7 == 0x8000000000000000LL )
    {
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v7);
    }
    else
    {
      a1[2] = v8;
      *(_OWORD *)a1 = v7;
    }
  }
  return a1;
}
