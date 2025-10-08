__int64 __fastcall bat::assets::build_assets::write_assets(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-B0h]
  __int64 v19; // [rsp+10h] [rbp-A8h]
  __int128 v20; // [rsp+28h] [rbp-90h] BYREF
  __m256i v21; // [rsp+38h] [rbp-80h]
  __int128 v22; // [rsp+58h] [rbp-60h]
  __int128 v23; // [rsp+68h] [rbp-50h]
  _QWORD v24[8]; // [rsp+78h] [rbp-40h] BYREF

  *(_QWORD *)&v20 = std::fs::create_dir_all(a5, a6);
  core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v20);
  std::path::Path::join(&v17, a5, a6, aThemesBin_0, 10LL);
  bat::assets::build_assets::asset_to_cache(&v20, a2, v18, v19);
  if ( (_BYTE)v20 != 13 )
    goto LABEL_8;
  core::ptr::drop_in_place<std::path::PathBuf>(&v17);
  std::path::Path::join(&v17, a5, a6, aSyntaxesBin_0, 12LL);
  bat::assets::build_assets::asset_to_cache(&v20, a3, v18, v19);
  if ( (_BYTE)v20 != 13 )
    goto LABEL_8;
  core::ptr::drop_in_place<std::path::PathBuf>(&v17);
  if ( __OFSUB__(0LL, *a4) )
    goto LABEL_6;
  std::path::Path::join(&v17, a5, a6, aAcknowledgemen_1, 20LL);
  bat::assets::build_assets::asset_to_cache(&v20, a4[1], a4[2], v18, v19);
  if ( (_BYTE)v20 != 13 )
  {
LABEL_8:
    a1[4] = v23;
    v11 = v20;
    v12 = *(_OWORD *)v21.m256i_i8;
    v13 = *(_OWORD *)&v21.m256i_u64[2];
    a1[3] = v22;
    a1[2] = v13;
    a1[1] = v12;
    *a1 = v11;
    return core::ptr::drop_in_place<std::path::PathBuf>(&v17);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(&v17);
LABEL_6:
  alloc::string::String::from_utf8_lossy(&v17, a5, a6);
  v24[0] = &v17;
  v24[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  *(_QWORD *)&v20 = &off_6CE0D8;
  *((_QWORD *)&v20 + 1) = 2LL;
  v21.m256i_i64[0] = (__int64)v24;
  *(_OWORD *)&v21.m256i_u64[1] = 1uLL;
  std::io::stdio::_print(&v20);
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v17);
  bat::assets::assets_metadata::AssetsMetadata::new((__int64)&v17);
  bat::assets::assets_metadata::AssetsMetadata::save_to_folder((__int64)&v20, (__int64)&v17, a5, a6);
  if ( (_BYTE)v20 == 13 )
  {
    core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v17);
    *(_QWORD *)&v20 = &off_6CE0F8;
    *((_QWORD *)&v20 + 1) = 1LL;
    v21.m256i_i64[0] = 8LL;
    *(_OWORD *)&v21.m256i_u64[1] = 0LL;
    result = std::io::stdio::_print(&v20);
    *(_BYTE *)a1 = 13;
  }
  else
  {
    a1[4] = v23;
    v14 = v20;
    v15 = *(_OWORD *)v21.m256i_i8;
    v16 = *(_OWORD *)&v21.m256i_u64[2];
    a1[3] = v22;
    a1[2] = v16;
    a1[1] = v15;
    *a1 = v14;
    return core::ptr::drop_in_place<bat::assets::assets_metadata::AssetsMetadata>(&v17);
  }
  return result;
}