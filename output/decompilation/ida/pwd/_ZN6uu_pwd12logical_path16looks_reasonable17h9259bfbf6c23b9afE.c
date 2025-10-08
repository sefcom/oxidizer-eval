__int64 __fastcall uu_pwd::logical_path::looks_reasonable(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int8 v5; // al
  char v6; // bp
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD dest[11]; // [rsp+8h] [rbp-2F0h] BYREF
  _OWORD v12[11]; // [rsp+B8h] [rbp-240h] BYREF
  _QWORD v13[22]; // [rsp+168h] [rbp-190h] BYREF
  _BYTE src[224]; // [rsp+218h] [rbp-E0h] BYREF

  std::path::Path::components(dest, a1, a2);
  if ( !BYTE10(dest[3]) && (unsigned __int8)(LOBYTE(dest[1]) - 5) < 2u )
    return 0;
  alloc::string::String::from_utf8_lossy(v13, a1, a2);
  v2 = v13[0];
  v3 = v13[1];
  v4 = v13[2];
  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&dest[1], v13[1], v13[2]);
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = v4;
  WORD4(dest[3]) = 1;
  v5 = core::iter::traits::iterator::Iterator::try_fold(dest);
  v6 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v5);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v2, v3);
  if ( !v6 )
  {
    std::fs::metadata(src);
    std::fs::metadata(v13);
    memcpy(dest, src, sizeof(dest));
    memcpy(v12, v13, sizeof(v12));
    v7 = 0;
    if ( LODWORD(dest[0]) != 2 && *(_QWORD *)&v12[0] != 2LL )
    {
      v9 = *(_QWORD *)&v12[2] ^ *(_QWORD *)&dest[2] | *((_QWORD *)&dest[2] + 1) ^ *((_QWORD *)&v12[2] + 1);
      LOBYTE(v7) = v12[2] == dest[2];
    }
    core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(
      dest,
      v13,
      v8,
      v9);
  }
  else
  {
    return 0;
  }
  return v7;
}