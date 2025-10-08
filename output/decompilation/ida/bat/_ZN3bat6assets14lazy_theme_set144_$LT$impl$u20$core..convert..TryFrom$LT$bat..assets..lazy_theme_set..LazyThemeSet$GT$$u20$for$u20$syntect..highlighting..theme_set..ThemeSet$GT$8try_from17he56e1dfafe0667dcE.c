__int64 __fastcall bat::assets::lazy_theme_set::<impl core::convert::TryFrom<bat::assets::lazy_theme_set::LazyThemeSet> for syntect::highlighting::theme_set::ThemeSet>::try_from(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v8; // [rsp+8h] [rbp-4F0h] BYREF
  __int64 v9; // [rsp+18h] [rbp-4E0h]
  __int128 v10; // [rsp+20h] [rbp-4D8h]
  __int128 v11; // [rsp+30h] [rbp-4C8h]
  __int128 v12; // [rsp+40h] [rbp-4B8h]
  __int128 v13; // [rsp+50h] [rbp-4A8h]
  __int128 v14; // [rsp+60h] [rbp-498h]
  _BYTE v15[72]; // [rsp+70h] [rbp-488h] BYREF
  _QWORD v16[3]; // [rsp+B8h] [rbp-440h] BYREF
  _BYTE v17[8]; // [rsp+D0h] [rbp-428h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-420h]
  __int64 v19; // [rsp+1E0h] [rbp-318h] BYREF
  __int128 v20; // [rsp+1E8h] [rbp-310h]
  __int128 v21; // [rsp+1F8h] [rbp-300h]
  __int128 v22; // [rsp+208h] [rbp-2F0h]
  __int128 v23; // [rsp+218h] [rbp-2E0h]
  __int128 v24; // [rsp+228h] [rbp-2D0h]
  _BYTE src[160]; // [rsp+238h] [rbp-2C0h] BYREF
  __int64 v26; // [rsp+2D8h] [rbp-220h]
  __int128 v27; // [rsp+2E0h] [rbp-218h]
  __int128 v28; // [rsp+2F0h] [rbp-208h]
  __int128 v29; // [rsp+300h] [rbp-1F8h]
  __int128 v30; // [rsp+310h] [rbp-1E8h]
  __int128 v31; // [rsp+320h] [rbp-1D8h]
  _BYTE dest[160]; // [rsp+330h] [rbp-1C8h] BYREF
  _BYTE v33[296]; // [rsp+3D0h] [rbp-128h] BYREF

  *(_QWORD *)&v8 = 0LL;
  v9 = 0LL;
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v15, a2);
  while ( 1 )
  {
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v16, v15);
    if ( v16[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<alloc::string::String,bat::assets::lazy_theme_set::LazyTheme>>(v15);
      v3 = a1;
      *(_QWORD *)(a1 + 24) = v9;
      *(_OWORD *)(a1 + 8) = v8;
      *(_BYTE *)a1 = 13;
      return v3;
    }
    v2 = v18;
    bat::assets::lazy_theme_set::LazyTheme::deserialize(&v19);
    v10 = v20;
    v11 = v21;
    v12 = v22;
    v13 = v23;
    v14 = v24;
    if ( v19 == 0x8000000000000000LL )
      break;
    memcpy(dest, src, sizeof(dest));
    v26 = v19;
    v31 = v14;
    v30 = v13;
    v29 = v12;
    v28 = v11;
    v27 = v10;
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v33);
    core::ptr::drop_in_place<core::option::Option<syntect::highlighting::theme::Theme>>(v33, &v8);
    core::ptr::drop_in_place<bat::assets::lazy_theme_set::LazyTheme>(v17, &v8);
  }
  v3 = a1;
  *(_OWORD *)(a1 + 64) = v14;
  v4 = v10;
  v5 = v11;
  v6 = v12;
  *(_OWORD *)(a1 + 48) = v13;
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  core::ptr::drop_in_place<alloc::string::String>(v16);
  core::ptr::drop_in_place<bat::assets::lazy_theme_set::LazyTheme>(v17, v2);
  core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<alloc::string::String,bat::assets::lazy_theme_set::LazyTheme>>(v15);
  core::ptr::drop_in_place<syntect::highlighting::theme_set::ThemeSet>(&v8);
  return v3;
}