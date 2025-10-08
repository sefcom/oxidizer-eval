__int64 __fastcall alacritty::migrate::migrate_config(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r13
  __int128 v10; // xmm0
  __int128 v12; // [rsp+10h] [rbp-248h] BYREF
  __int64 v13; // [rsp+20h] [rbp-238h]
  __int64 v14; // [rsp+30h] [rbp-228h] BYREF
  __int64 v15; // [rsp+38h] [rbp-220h]
  char v16[8]; // [rsp+40h] [rbp-218h] BYREF
  __int64 v17; // [rsp+48h] [rbp-210h]
  __int64 v18; // [rsp+50h] [rbp-208h]
  _BYTE v19[24]; // [rsp+58h] [rbp-200h] BYREF
  __int64 v20; // [rsp+70h] [rbp-1E8h]
  _QWORD src[21]; // [rsp+78h] [rbp-1E0h] BYREF
  _BYTE v22[24]; // [rsp+120h] [rbp-138h] BYREF
  __int64 v23; // [rsp+138h] [rbp-120h]
  _BYTE dest[168]; // [rsp+140h] [rbp-118h] BYREF
  __int128 v25; // [rsp+1F0h] [rbp-68h]
  __int64 v26; // [rsp+200h] [rbp-58h]
  __int128 v27; // [rsp+210h] [rbp-48h]
  __int64 v28; // [rsp+220h] [rbp-38h]

  v6 = a4;
  v7 = a3;
  v14 = a3;
  v15 = a4;
  alloc::string::String::from_utf8_lossy(v16, a3, a4);
  core::str::<impl str>::rsplit_once(v19, v17, v18);
  v8 = *(_QWORD *)v19;
  if ( !*(_QWORD *)v19 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, aMissingFileExt);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v22[16];
    v10 = *(_OWORD *)v22;
LABEL_6:
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<crossfont::Style>(v16);
  }
  v9 = *(_QWORD *)&v19[8];
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)&v19[16], v20, aYml, 3LL) )
  {
    alacritty::migrate::yaml::migrate((__int64)v19, (_BYTE *)a2, v7, v6, a5, v8, v9);
    *(_OWORD *)v22 = *(_OWORD *)&v19[8];
    *(_QWORD *)&v22[16] = v20;
    if ( *(_DWORD *)v19 != 1 )
    {
      *(_QWORD *)(a1 + 40) = *(_QWORD *)&v22[16];
      *(_OWORD *)(a1 + 24) = *(_OWORD *)v22;
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = v6;
      *(_QWORD *)a1 = 0LL;
      return core::ptr::drop_in_place<crossfont::Style>(v16);
    }
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v22[16];
    v10 = *(_OWORD *)v22;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(a2 + 26) )
  {
    std::fs::read_to_string(v22);
    if ( __OFSUB__(0LL, *(_QWORD *)v22) )
    {
      alacritty::migrate::migrate_config::{{closure}}(v19, *(_QWORD *)&v22[8]);
      v10 = *(_OWORD *)v19;
      v27 = *(_OWORD *)v19;
      v28 = *(_QWORD *)&v19[16];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v19[16];
    }
    else
    {
      v25 = *(_OWORD *)v22;
      v26 = *(_QWORD *)&v22[16];
      alacritty::migrate::migrate_toml(v19);
      v12 = *(_OWORD *)&v19[8];
      v13 = v20;
      if ( *(_QWORD *)v19 != 12LL )
      {
        memcpy(dest, src, sizeof(dest));
        *(_OWORD *)&v22[8] = v12;
        v23 = v13;
        *(_QWORD *)v22 = *(_QWORD *)v19;
        alacritty::migrate::migrate_imports(v19, a2, v7, v6, v22, a5);
        if ( *(_QWORD *)v19 == 0x8000000000000000LL )
        {
          <T as alloc::string::SpecToString>::spec_to_string(v19, v22);
          alacritty::migrate::write_results(
            (unsigned int)&v12,
            *(_DWORD *)(a2 + 24),
            *(unsigned __int8 *)(a2 + 27),
            v7,
            v6,
            *(_DWORD *)&v19[8],
            *(__int64 *)&v19[16]);
          if ( (_QWORD)v12 == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place<alloc::string::String>(v19);
            *(_QWORD *)(a1 + 8) = v7;
            *(_QWORD *)(a1 + 16) = v6;
            *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
            *(_QWORD *)a1 = 0LL;
            core::ptr::drop_in_place<toml_edit::document::DocumentMut>(v22);
            return core::ptr::drop_in_place<crossfont::Style>(v16);
          }
          *(_QWORD *)(a1 + 24) = v13;
          *(_OWORD *)(a1 + 8) = v12;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(v19);
        }
        else
        {
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v19[16];
          *(_OWORD *)(a1 + 8) = *(_OWORD *)v19;
          *(_QWORD *)a1 = 1LL;
        }
        core::ptr::drop_in_place<toml_edit::document::DocumentMut>(v22);
        return core::ptr::drop_in_place<crossfont::Style>(v16);
      }
      *(_QWORD *)(a1 + 24) = v13;
      v10 = v12;
    }
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a2 + 24) )
  {
    *(_QWORD *)v22 = &v14;
    *(_QWORD *)&v22[8] = <&T as core::fmt::Debug>::fmt;
    *(_QWORD *)v19 = &off_883370;
    *(_QWORD *)&v19[8] = 2LL;
    src[0] = 0LL;
    *(_QWORD *)&v19[16] = v22;
    v20 = 1LL;
    std::io::stdio::_eprint(v19);
    v7 = v14;
    v6 = v15;
  }
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0LL;
  return core::ptr::drop_in_place<crossfont::Style>(v16);
}