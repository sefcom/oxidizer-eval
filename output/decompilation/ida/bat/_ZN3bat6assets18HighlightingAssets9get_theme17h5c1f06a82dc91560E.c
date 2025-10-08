__int64 __fastcall bat::assets::HighlightingAssets::get_theme(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int128 v16; // [rsp+0h] [rbp-E8h] BYREF
  __int128 *v17; // [rsp+10h] [rbp-D8h]
  char **v18; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+20h] [rbp-C8h]
  __int128 *v20; // [rsp+28h] [rbp-C0h]
  __int64 v21; // [rsp+30h] [rbp-B8h]
  __int64 v22; // [rsp+38h] [rbp-B0h]
  __int128 v23; // [rsp+48h] [rbp-A0h] BYREF
  __int128 *v24; // [rsp+58h] [rbp-90h]
  __int64 (__fastcall *v25)(); // [rsp+60h] [rbp-88h]
  unsigned __int64 v26; // [rsp+68h] [rbp-80h] BYREF
  const char *v27; // [rsp+70h] [rbp-78h]
  __int64 v28; // [rsp+78h] [rbp-70h]
  unsigned __int64 v29; // [rsp+80h] [rbp-68h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  char v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+A1h] [rbp-47h]
  _QWORD v33[7]; // [rsp+B0h] [rbp-38h] BYREF

  v33[0] = a2;
  v33[1] = a3;
  v4 = a1 + 13;
  result = bat::assets::lazy_theme_set::LazyThemeSet::get(a1 + 13, a2, a3);
  if ( !result )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aAnsiLight, 10LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, aAnsiDark, 9LL) )
    {
      v31 = 0;
      v30 = 0LL;
      v32 = 0x1500000006LL;
      v26 = 0x8000000000000000LL;
      v27 = aBatWarning_0;
      v28 = 13LL;
      v29 = 0x8000000000000002LL;
      *(_QWORD *)&v16 = v33;
      *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
      v18 = &off_6CE178;
      v19 = 2LL;
      v22 = 0LL;
      v20 = &v16;
      v21 = 1LL;
      core::option::Option<T>::map_or_else(&v23, 0LL, v6, &v18);
      v16 = v23;
      v17 = v24;
      *(_QWORD *)&v23 = &v26;
      *((_QWORD *)&v23 + 1) = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
      v24 = &v16;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      v18 = (char **)&unk_6CE198;
      v19 = 3LL;
      v22 = 0LL;
      v20 = &v23;
      v21 = 2LL;
      std::io::stdio::_eprint(&v18, 0LL, v7, v8, v9, v10, v16, *((_QWORD *)&v16 + 1), v17);
      core::ptr::drop_in_place<alloc::string::String>(&v16);
      core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v26);
      return bat::assets::HighlightingAssets::get_theme(a1, aAnsi, 4LL);
    }
    if ( a3 )
    {
      v31 = 0;
      v30 = 0LL;
      v32 = 0x1500000006LL;
      v26 = 0x8000000000000000LL;
      v27 = aBatWarning_0;
      v28 = 13LL;
      v29 = 0x8000000000000002LL;
      *(_QWORD *)&v16 = v33;
      *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
      v18 = &off_6CE1C8;
      v19 = 2LL;
      v22 = 0LL;
      v20 = &v16;
      v21 = 1LL;
      core::option::Option<T>::map_or_else(&v23, 0LL, v6, &v18);
      v16 = v23;
      v17 = v24;
      *(_QWORD *)&v23 = &v26;
      *((_QWORD *)&v23 + 1) = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
      v24 = &v16;
      v25 = <alloc::string::String as core::fmt::Display>::fmt;
      v18 = (char **)&unk_6CE198;
      v19 = 3LL;
      v22 = 0LL;
      v20 = &v23;
      v21 = 2LL;
      std::io::stdio::_eprint(&v18, 0LL, v11, v12, v13, v14, v16, *((_QWORD *)&v16 + 1), v17);
      core::ptr::drop_in_place<alloc::string::String>(&v16);
      core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v26);
    }
    v15 = a1[16];
    if ( v15 )
    {
      result = bat::assets::lazy_theme_set::LazyThemeSet::get(v4, v15, a1[17]);
      if ( result )
        return result;
LABEL_11:
      core::option::expect_failed(aSomethingIsVer, 55LL, &off_6CE1E8);
    }
    result = bat::assets::lazy_theme_set::LazyThemeSet::get(v4, (__int64)aMonokaiExtende, 16LL);
    if ( !result )
      goto LABEL_11;
  }
  return result;
}