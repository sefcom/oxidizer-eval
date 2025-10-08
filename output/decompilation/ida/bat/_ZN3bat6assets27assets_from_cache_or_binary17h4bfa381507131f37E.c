__int64 __fastcall bat::assets::assets_from_cache_or_binary(char *dest, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // [rsp+0h] [rbp-1B8h]
  __int128 v12; // [rsp+10h] [rbp-1A8h]
  _QWORD v13[2]; // [rsp+28h] [rbp-190h] BYREF
  _OWORD desta[9]; // [rsp+38h] [rbp-180h] BYREF
  __int128 v15; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-E0h]
  _BYTE v17[24]; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-C0h] BYREF
  _OWORD src[11]; // [rsp+100h] [rbp-B8h] BYREF

  bat::assets::assets_metadata::AssetsMetadata::load_from_folder(desta, a3, a4);
  result = LOBYTE(desta[0]);
  if ( LOBYTE(desta[0]) != 13 )
  {
    v7 = *(_DWORD *)((char *)desta + 1);
    *((_DWORD *)dest + 3) = DWORD1(desta[0]);
    *(_DWORD *)(dest + 9) = v7;
    v8 = *((_QWORD *)&desta[0] + 1);
    v11 = desta[1];
    v12 = desta[2];
    *(_OWORD *)(dest + 72) = desta[4];
    *(_OWORD *)(dest + 56) = desta[3];
    *(_OWORD *)(dest + 40) = v12;
    *(_OWORD *)(dest + 24) = v11;
    dest[8] = result;
    *((_QWORD *)dest + 2) = v8;
    *(_QWORD *)dest = 0x8000000000000001LL;
    return result;
  }
  if ( *((_QWORD *)&desta[0] + 1) != 0x8000000000000001LL )
  {
    v18 = *((_QWORD *)&desta[0] + 1);
    src[0] = desta[1];
    src[1] = desta[2];
    if ( !(unsigned __int8)bat::assets::assets_metadata::AssetsMetadata::is_compatible_with(&v18, a0250_0, 6LL) )
    {
      alloc::string::String::from_utf8_lossy(v17, a3, a4);
      v13[0] = v17;
      v13[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      *(_QWORD *)&desta[0] = &off_6C8520;
      *((_QWORD *)&desta[0] + 1) = 2LL;
      *(_QWORD *)&desta[2] = 0LL;
      *(_QWORD *)&desta[1] = v13;
      *((_QWORD *)&desta[1] + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v15, 0LL, desta);
      core::ptr::drop_in_place<regex::error::Error>(v17);
      *(_OWORD *)((char *)desta + 7) = v15;
      *(_QWORD *)((char *)&desta[1] + 7) = v16;
      dest[8] = 11;
      v9 = *(_QWORD *)((char *)desta + 15);
      v10 = *(_QWORD *)((char *)&desta[1] + 7);
      *(_OWORD *)(dest + 9) = desta[0];
      *((_QWORD *)dest + 3) = v9;
      *((_QWORD *)dest + 4) = v10;
      *(_QWORD *)dest = 0x8000000000000001LL;
      return core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v18);
    }
    core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v18);
  }
  if ( a2 )
  {
    bat::assets::HighlightingAssets::from_cache(&v18, a3, a4);
    if ( v18 != 0x8000000000000001LL )
    {
      memcpy((char *)desta + 8, src, 0x88uLL);
      *(_QWORD *)&desta[0] = v18;
      return (__int64)memcpy(dest, desta, 0x90uLL);
    }
    core::ptr::drop_in_place<core::result::Result<bat::assets::HighlightingAssets,bat::error::Error>>(&v18);
  }
  bat::assets::HighlightingAssets::from_binary(desta);
  return (__int64)memcpy(dest, desta, 0x90uLL);
}