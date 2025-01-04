__int64 __fastcall uu_pwd::logical_path::looks_reasonable(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 v3; // al
  char v4; // bp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _OWORD dest[11]; // [rsp+8h] [rbp-2E0h] BYREF
  _OWORD v10[11]; // [rsp+B8h] [rbp-230h] BYREF
  _QWORD v11[22]; // [rsp+168h] [rbp-180h] BYREF
  _BYTE src[208]; // [rsp+218h] [rbp-D0h] BYREF

  std::path::Path::components(dest, a1, a2);
  if ( !BYTE10(dest[3]) && (unsigned __int8)(LOBYTE(dest[1]) - 5) < 2u )
    return 0;
  std::sys::os_str::bytes::Slice::to_string_lossy(v11, a1, a2);
  v2 = v11[2];
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&dest[1], v11[1], v11[2]);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = v2;
  WORD4(dest[3]) = 1;
  v3 = core::iter::traits::iterator::Iterator::try_fold(dest);
  v4 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v3);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v11);
  if ( !v4 )
  {
    std::fs::metadata(src, a1, a2);
    std::fs::metadata(v11, asc_1B81F, 1LL);
    memcpy(dest, src, sizeof(dest));
    memcpy(v10, v11, sizeof(v10));
    v5 = 0;
    if ( LODWORD(dest[0]) != 2 && *(_QWORD *)&v10[0] != 2LL )
    {
      v7 = *(_QWORD *)&v10[2] ^ *(_QWORD *)&dest[2] | *((_QWORD *)&v10[2] + 1) ^ *((_QWORD *)&dest[2] + 1);
      LOBYTE(v5) = v10[2] == dest[2];
    }
    core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(
      dest,
      v11,
      v6,
      v7);
  }
  else
  {
    return 0;
  }
  return v5;
}
