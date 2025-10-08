bool __fastcall uu_cp::is_forbidden_to_copy_to_same_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int8 v9; // al
  __int64 v10; // r14
  unsigned __int8 v11; // bl
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // bp
  __int64 v14; // r13
  unsigned __int8 v15; // cl
  char v16; // al
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int8 is_symlink; // [rsp+Fh] [rbp-C9h]
  __int64 v24; // [rsp+18h] [rbp-C0h]
  _BYTE v26[64]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v27[112]; // [rsp+68h] [rbp-70h] BYREF

  is_symlink = std::path::Path::is_symlink(a1, a2);
  v24 = a4;
  v9 = std::path::Path::is_symlink(a3, a4);
  v10 = a5;
  v11 = *(_BYTE *)(a5 + 89);
  v12 = 1;
  if ( !v11 && (!a6 || !*(_BYTE *)(a5 + 88)) )
    v12 = v9 & is_symlink ^ 1;
  v13 = v9;
  v14 = a3;
  if ( !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, a2, a3, v24, v12) )
    return 0;
  v15 = v13;
  if ( *(_BYTE *)(v10 + 101) )
  {
    if ( *(_WORD *)(v10 + 84) )
    {
      if ( is_symlink )
      {
        if ( v13 | v11 ^ 1 )
          return 0;
      }
      else
      {
        if ( v13 )
          return 0;
        std::path::Path::components(v26, a3, v24);
        std::path::Path::components(v27, a1, a2);
        v16 = <std::path::Components as core::cmp::PartialEq>::eq(v26, v27);
        v15 = 0;
        if ( !v16 )
          return 0;
      }
    }
    else if ( v13 | (unsigned __int8)(v11 & is_symlink) ^ 1 )
    {
      return 0;
    }
  }
  if ( *(_BYTE *)(v10 + 103) )
  {
    if ( *(_BYTE *)(v10 + 103) == 1 )
      return !v15;
    if ( (v15 & is_symlink) == 0 )
      return 1;
    v17 = std::path::Path::file_name(a1, a2);
    v19 = v18;
    v20 = std::path::Path::file_name(v14, v24);
    if ( v17 )
    {
      if ( !v20 )
        return v11 != 0;
      if ( v11 | (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, v20, v21) )
        return 1;
    }
    else if ( v11 | (v20 == 0) )
    {
      return 1;
    }
  }
  return 0;
}