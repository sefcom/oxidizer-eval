        unsigned __int8 a8)
{
  unsigned __int8 v11; // al
  _DWORD *metadata; // rbp
  _QWORD *v13; // rcx
  _QWORD dest[22]; // [rsp+18h] [rbp-240h] BYREF
  _QWORD v16[22]; // [rsp+C8h] [rbp-190h] BYREF
  _QWORD src[28]; // [rsp+178h] [rbp-E0h] BYREF

  v11 = *(_BYTE *)(a4 + 296);
  if ( v11 || !*(_QWORD *)(a4 + 256) )
  {
    if ( a7 )
    {
      uu_ls::get_metadata_with_deref_opt((__int64)src, *(_QWORD *)(a7 + 32), *(_QWORD *)(a7 + 40), v11);
      if ( LODWORD(src[0]) == 2 )
        uu_ls::colors::color_name::{{closure}}(dest, *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40), src[1]);
      else
        memcpy(dest, src, sizeof(dest));
      if ( dest[0] == 2LL )
      {
        v16[0] = 2LL;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest[1]);
        v13 = 0LL;
      }
      else
      {
        memcpy(&v16[2], &dest[2], 0xA0uLL);
        v16[0] = dest[0];
        v16[1] = dest[1];
        v13 = v16;
      }
    }
    else
    {
      metadata = uu_ls::PathData::get_metadata(a4, a6);
      std::fs::symlink_metadata(v16, *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40));
      if ( LODWORD(v16[0]) == 2 )
      {
        dest[0] = 2LL;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v16[1]);
        v13 = 0LL;
      }
      else
      {
        memcpy(dest, v16, sizeof(dest));
        v13 = 0LL;
        if ( dest[0] != 2LL )
          v13 = dest;
      }
      if ( metadata )
        v13 = metadata;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(a1, a5, a4, (__int64)v13, a2, a3, a8);
  }
  else
  {
    uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a1, a5, a4 + 256, a2, a3, a8);
  }
  return a1;
}
