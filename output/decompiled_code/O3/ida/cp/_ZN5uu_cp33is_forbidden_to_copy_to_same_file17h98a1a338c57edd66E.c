        char a6)
{
  unsigned __int8 is_symlink; // r15
  unsigned __int8 v11; // al
  unsigned __int8 v12; // dl
  char v13; // al
  char v15; // [rsp+Eh] [rbp-BAh]
  unsigned __int8 v16; // [rsp+Fh] [rbp-B9h]
  _BYTE v17[64]; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v18[112]; // [rsp+58h] [rbp-70h] BYREF

  v16 = ((__int64 (*)(void))std::path::Path::is_symlink)();
  is_symlink = std::path::Path::is_symlink(a3, a4);
  v11 = 1;
  v15 = *(_BYTE *)(a5 + 65);
  if ( !v15 && (!a6 || !*(_BYTE *)(a5 + 64)) )
    v11 = is_symlink & v16 ^ 1;
  if ( !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a1, a2, a3, a4, v11) )
    return 0;
  v12 = v16;
  if ( *(_BYTE *)(a5 + 76) )
  {
    if ( *(_WORD *)(a5 + 60) )
    {
      if ( is_symlink | v16 & (v15 == 0) )
        return 0;
    }
    else if ( is_symlink | (v15 == 0) | v16 ^ 1 )
    {
      return 0;
    }
    if ( !v16 )
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
    return !is_symlink;
  return v15 || (is_symlink & v12) == 0;
}
