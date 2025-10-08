__int64 __fastcall bat::assets::build_assets::build_theme_set(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  __int32 v9; // r13d
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-1B8h]
  _BYTE v14[8]; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v15; // [rsp+20h] [rbp-1A8h]
  __int64 v16; // [rsp+28h] [rbp-1A0h]
  char **v17; // [rsp+30h] [rbp-198h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+38h] [rbp-190h]
  _QWORD *v19; // [rsp+40h] [rbp-188h]
  __int64 v20; // [rsp+48h] [rbp-180h]
  __int64 v21; // [rsp+50h] [rbp-178h]
  __m256i v22; // [rsp+60h] [rbp-168h] BYREF
  __int128 v23; // [rsp+80h] [rbp-148h]
  __int128 v24; // [rsp+90h] [rbp-138h]
  __int64 v25; // [rsp+A0h] [rbp-128h]
  __m256i dest; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v27; // [rsp+D0h] [rbp-F8h]
  __int128 v28; // [rsp+E0h] [rbp-E8h]
  __int128 v29; // [rsp+F0h] [rbp-D8h]
  _QWORD v30[4]; // [rsp+168h] [rbp-60h] BYREF
  _BYTE v31[64]; // [rsp+188h] [rbp-40h] BYREF

  if ( a4 )
  {
    v4 = a3;
    bat::assets::get_integrated_themeset(&v17);
    bat::assets::lazy_theme_set::<impl core::convert::TryFrom<bat::assets::lazy_theme_set::LazyThemeSet> for syntect::highlighting::theme_set::ThemeSet>::try_from(
      &dest,
      &v17);
    result = dest.m256i_u8[0];
    if ( dest.m256i_i8[0] != 13 )
    {
      v10 = v27;
      v11 = v28;
      *(_OWORD *)((char *)&v22.m256i_u64[1] + 7) = *(_OWORD *)&dest.m256i_u64[2];
      *(_OWORD *)v22.m256i_i8 = *(_OWORD *)&dest.m256i_i8[1];
      *(_OWORD *)(a1 + 64) = v29;
      *(_OWORD *)(a1 + 48) = v11;
      *(_OWORD *)(a1 + 32) = v10;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v22.m256i_u64[1] + 7);
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v22.m256i_i8;
      *(_BYTE *)a1 = result;
      return result;
    }
    v12 = *(_OWORD *)&dest.m256i_u64[1];
    v13 = dest.m256i_i64[3];
    a3 = v4;
  }
  else
  {
    *(_QWORD *)&v12 = 0LL;
    v13 = 0LL;
  }
  std::path::Path::join(v14, a2, a3, aThemes_0, 6LL);
  v6 = v15;
  v7 = v16;
  v8 = v15;
  std::fs::metadata(&dest);
  v9 = dest.m256i_i32[0];
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v8);
  if ( v9 == 2 )
  {
    alloc::string::String::from_utf8_lossy(&v22, v6, v7);
    v17 = (char **)&v22;
    v18 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    dest.m256i_i64[0] = (__int64)&off_6CE050;
    dest.m256i_i64[1] = 2LL;
    *(_QWORD *)&v27 = 0LL;
    dest.m256i_i64[2] = (__int64)&v17;
    dest.m256i_i64[3] = 1LL;
    std::io::stdio::_print(&dest);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v22);
  }
  else
  {
    syntect::highlighting::theme_set::ThemeSet::add_from_folder(&v22, &v12, v14);
    if ( v22.m256i_i64[0] != 0x8000000000000006LL )
    {
      *(_QWORD *)&v29 = v25;
      v28 = v24;
      v27 = v23;
      dest = v22;
      alloc::string::String::from_utf8_lossy(v31, v6, v7);
      v30[0] = v31;
      v30[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      v30[2] = &dest;
      v30[3] = <syntect::LoadingError as core::fmt::Display>::fmt;
      v17 = &off_6CE020;
      v18 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v21 = 0LL;
      v19 = v30;
      v20 = 2LL;
      std::io::stdio::_print(&v17);
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(v31);
      core::ptr::drop_in_place<syntect::LoadingError>(&dest);
    }
  }
  dest.m256i_i64[2] = v13;
  *(_OWORD *)dest.m256i_i8 = v12;
  <bat::assets::lazy_theme_set::LazyThemeSet as core::convert::TryFrom<syntect::highlighting::theme_set::ThemeSet>>::try_from(
    a1,
    &dest);
  return core::ptr::drop_in_place<std::path::PathBuf>(v14);
}