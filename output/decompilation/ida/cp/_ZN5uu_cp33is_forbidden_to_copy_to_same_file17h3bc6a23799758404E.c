bool __fastcall uu_cp::is_forbidden_to_copy_to_same_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // al
  unsigned __int8 v12; // dl
  char v13; // al
  char v15; // [rsp+Eh] [rbp-BAh]
  unsigned __int8 is_symlink; // [rsp+Fh] [rbp-B9h]
  _BYTE v17[64]; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v18[112]; // [rsp+58h] [rbp-70h] BYREF

  is_symlink = std::path::Path::is_symlink(a1, a2);
  v10 = std::path::Path::is_symlink(a3, a4);
  v11 = 1;
  v15 = *(_BYTE *)(a5 + 65);
  if ( !v15 && (!a6 || !*(_BYTE *)(a5 + 64)) )
    v11 = v10 & is_symlink ^ 1;
  if ( !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, a2, a3, a4, v11) )
    return 0;
  v12 = is_symlink;
  if ( *(_BYTE *)(a5 + 76) )
  {
    if ( *(_WORD *)(a5 + 60) )
    {
      if ( v10 | is_symlink & (v15 == 0) )
        return 0;
    }
    else if ( v10 | (v15 == 0) | is_symlink ^ 1 )
    {
      return 0;
    }
    if ( !is_symlink )
    {
      std::path::Path::components(v17, a3, a4);
      std::path::Path::components(v18, a1, a2);
      v13 = <std::path::Components as core::cmp::PartialEq>::eq(v17, v18);
      v12 = 0;
      if ( !v13 )
        return 0;
    }
  }
  if ( !*(_BYTE *)(a5 + 78) )
    return 0;
  if ( *(_BYTE *)(a5 + 78) == 1 )
    return !v10;
  return v15 || (v10 & v12) == 0;
}
