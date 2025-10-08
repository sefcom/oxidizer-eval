__int64 __fastcall uu_ls::colors::color_name(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v11; // rbx
  unsigned __int8 v13; // al
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  __int64 metadata; // r13
  __int64 v17; // rsi
  _QWORD v19[22]; // [rsp+18h] [rbp-240h] BYREF
  _QWORD dest[22]; // [rsp+C8h] [rbp-190h] BYREF
  _QWORD src[28]; // [rsp+178h] [rbp-E0h] BYREF

  v11 = lscolors::LsColors::style_for_indicator(*a4, 17LL);
  if ( v11 )
  {
    xattr::list(v19, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
    if ( (unsigned __int8)core::result::Result<T,E>::is_ok_and(v19) )
      return uu_ls::colors::StyleManager::apply_style(a1, a4, v11, a2, a7);
  }
  v13 = *(_BYTE *)(a3 + 296);
  if ( !v13 && *(_QWORD *)(a3 + 256) )
    return uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a1, a4, a3 + 256, a2, a7);
  if ( !a6 )
  {
    metadata = uu_ls::PathData::get_metadata(a3, a5);
    v17 = *(_QWORD *)(a3 + 32);
    std::fs::symlink_metadata(v19);
    if ( LODWORD(v19[0]) == 2 )
    {
      dest[0] = 2LL;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v19, v17);
      v15 = 0LL;
    }
    else
    {
      memcpy(dest, v19, sizeof(dest));
      v15 = 0LL;
      if ( dest[0] != 2LL )
        v15 = dest;
    }
    if ( metadata )
      v15 = (_QWORD *)metadata;
    return uu_ls::colors::StyleManager::apply_style_based_on_metadata(a1, a4, a3, (__int64)v15, a2, a7);
  }
  uu_ls::get_metadata_with_deref_opt(src, *(_QWORD *)(a6 + 32), *(_QWORD *)(a6 + 40), v13);
  if ( LODWORD(src[0]) != 2 )
  {
    v14 = src;
    memcpy(dest, src, sizeof(dest));
    if ( dest[0] == 2LL )
      goto LABEL_10;
LABEL_14:
    memcpy(v19, dest, sizeof(v19));
    v15 = 0LL;
    if ( v19[0] != 2LL )
      v15 = v19;
    return uu_ls::colors::StyleManager::apply_style_based_on_metadata(a1, a4, a3, (__int64)v15, a2, a7);
  }
  v14 = *(_QWORD **)(a3 + 32);
  uu_ls::colors::color_name::{{closure}}(dest, v14, *(_QWORD *)(a3 + 40), src[1]);
  if ( dest[0] != 2LL )
    goto LABEL_14;
LABEL_10:
  v19[0] = 2LL;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v14);
  v15 = 0LL;
  return uu_ls::colors::StyleManager::apply_style_based_on_metadata(a1, a4, a3, (__int64)v15, a2, a7);
}