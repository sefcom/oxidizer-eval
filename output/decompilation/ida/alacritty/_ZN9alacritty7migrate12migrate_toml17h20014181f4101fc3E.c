__int64 __fastcall alacritty::migrate::migrate_toml(char *dest, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-208h] BYREF
  _BYTE src[200]; // [rsp+10h] [rbp-1F8h] BYREF
  __int128 v7; // [rsp+D8h] [rbp-130h] BYREF
  __int64 v8; // [rsp+E8h] [rbp-120h]
  _QWORD v9[6]; // [rsp+F0h] [rbp-118h] BYREF
  _OWORD desta[14]; // [rsp+120h] [rbp-E8h] BYREF

  <toml_edit::document::DocumentMut as core::str::traits::FromStr>::from_str(src);
  if ( *(_DWORD *)src != 12 )
  {
    memcpy(desta, src, 0xC8uLL);
    alacritty::migrate::move_value(src, desta, &off_8833A0, &off_8833B0);
    if ( __OFSUB__(0LL, *(_QWORD *)src)
      && (alacritty::migrate::move_value(src, desta, &off_8833D0, &off_8833E0), *(_QWORD *)src == 0x8000000000000000LL)
      && (alacritty::migrate::move_value(src, desta, &off_883400, &off_883410), *(_QWORD *)src == 0x8000000000000000LL) )
    {
      alacritty::migrate::move_value(src, desta, &off_883430, &off_883440);
      v3 = *(_QWORD *)src;
      if ( *(_QWORD *)src == 0x8000000000000000LL )
      {
        alacritty::migrate::move_value(src, desta, &off_883460, &off_883470);
        v3 = *(_QWORD *)src;
        if ( *(_QWORD *)src == 0x8000000000000000LL )
        {
          alacritty::migrate::move_value(src, desta, &off_883490, &off_8834A0);
          v3 = *(_QWORD *)src;
          if ( *(_QWORD *)src == 0x8000000000000000LL )
          {
            alacritty::migrate::move_value(src, desta, &off_8834C0, &off_8834D0);
            v3 = *(_QWORD *)src;
            if ( *(_QWORD *)src == 0x8000000000000000LL )
            {
              alacritty::migrate::move_value(src, desta, &off_8834F0, &off_883500);
              v3 = *(_QWORD *)src;
              if ( *(_QWORD *)src == 0x8000000000000000LL )
              {
                memcpy(dest, desta, 0xC8uLL);
                return core::ptr::drop_in_place<alloc::string::String>(a2);
              }
            }
          }
        }
      }
      *((_OWORD *)dest + 1) = *(_OWORD *)&src[8];
      *((_QWORD *)dest + 1) = v3;
    }
    else
    {
      *((_QWORD *)dest + 3) = *(_QWORD *)&src[16];
      *(_OWORD *)(dest + 8) = *(_OWORD *)src;
    }
    *(_QWORD *)dest = 12LL;
    core::ptr::drop_in_place<toml_edit::document::DocumentMut>(desta);
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  }
  *(_QWORD *)&desta[5] = *(_QWORD *)&src[88];
  desta[4] = *(_OWORD *)&src[72];
  desta[3] = *(_OWORD *)&src[56];
  desta[2] = *(_OWORD *)&src[40];
  desta[1] = *(_OWORD *)&src[24];
  desta[0] = *(_OWORD *)&src[8];
  v5[0] = desta;
  v5[1] = <toml_edit::error::TomlError as core::fmt::Display>::fmt;
  v9[0] = &off_883390;
  v9[1] = 1LL;
  v9[4] = 0LL;
  v9[2] = v5;
  v9[3] = 1LL;
  core::option::Option<T>::map_or_else(&v7, 0LL, v2, v9);
  *((_QWORD *)dest + 3) = v8;
  *(_OWORD *)(dest + 8) = v7;
  *(_QWORD *)dest = 12LL;
  core::ptr::drop_in_place<toml_edit::error::TomlError>(desta);
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}