__int64 __fastcall alacritty::migrate::yaml::migrate(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int8 v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 *v15; // rdi
  __int64 v16; // rax
  __int128 v17; // [rsp+0h] [rbp-298h] BYREF
  __int64 v18; // [rsp+10h] [rbp-288h]
  __int128 v19; // [rsp+20h] [rbp-278h] BYREF
  __int64 v20; // [rsp+30h] [rbp-268h]
  __int128 v21; // [rsp+40h] [rbp-258h] BYREF
  __int64 v22; // [rsp+50h] [rbp-248h]
  __int128 v23; // [rsp+60h] [rbp-238h] BYREF
  __int128 v24; // [rsp+70h] [rbp-228h]
  __int64 v25; // [rsp+80h] [rbp-218h]
  _QWORD v26[2]; // [rsp+90h] [rbp-208h] BYREF
  __m256i v27; // [rsp+A0h] [rbp-1F8h] BYREF
  _BYTE src[168]; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v29; // [rsp+170h] [rbp-128h] BYREF
  __int64 v30; // [rsp+180h] [rbp-118h]
  __int128 v31; // [rsp+188h] [rbp-110h] BYREF
  __int64 v32; // [rsp+198h] [rbp-100h]
  __m256i v33[7]; // [rsp+1A0h] [rbp-F8h] BYREF

  v26[0] = a6;
  v26[1] = a7;
  v10 = a2[24];
  alacritty::config::deserialize_config((__int64)v33, a3, a4, v10 ^ 1);
  if ( v33[0].m256i_i32[0] != 7 )
  {
    *(_QWORD *)&src[48] = v33[2].m256i_i64[2];
    *(_OWORD *)&src[32] = *(_OWORD *)v33[2].m256i_i8;
    *(__m256i *)src = v33[1];
    v27 = v33[0];
    *(_QWORD *)&v17 = &v27;
    *((_QWORD *)&v17 + 1) = <alacritty::config::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &off_883280;
    *((_QWORD *)&v23 + 1) = 1LL;
    v25 = 0LL;
    *(_QWORD *)&v24 = &v17;
    *((_QWORD *)&v24 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v31, 0LL, v11, &v23);
    *(_QWORD *)(a1 + 24) = v32;
    *(_OWORD *)(a1 + 8) = v31;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<alacritty::config::Error>(&v27);
  }
  v24 = *(_OWORD *)&v33[0].m256i_u64[3];
  v23 = *(_OWORD *)&v33[0].m256i_u64[1];
  if ( a2[25]
    || (alacritty::migrate::yaml::migrate_imports(&v27, a2, &v23, a3, a4, a5), __OFSUB__(0LL, v27.m256i_i64[0])) )
  {
    toml::ser::to_string(&v27, &v23);
    if ( v27.m256i_i32[0] != 1 )
    {
      v21 = *(_OWORD *)&v27.m256i_u64[1];
      v22 = v27.m256i_i64[3];
      *(_QWORD *)&v17 = v26;
      *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
      v27.m256i_i64[0] = (__int64)&unk_883290;
      v27.m256i_i64[1] = 2LL;
      *(_QWORD *)src = 0LL;
      v27.m256i_i64[2] = (__int64)&v17;
      v27.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(v33, 0LL, v12, &v27);
      v19 = *(_OWORD *)v33[0].m256i_i8;
      v20 = v33[0].m256i_i64[2];
      alacritty::migrate::migrate_toml(&v27);
      v17 = *(_OWORD *)&v27.m256i_u64[1];
      v18 = v27.m256i_i64[3];
      if ( v27.m256i_i64[0] == 12 )
      {
        *(_QWORD *)(a1 + 24) = v18;
        *(_OWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = 1LL;
        v15 = &v19;
      }
      else
      {
        memcpy(&v33[1], src, 0xA8uLL);
        *(_OWORD *)&v33[0].m256i_u64[1] = v17;
        v33[0].m256i_i64[3] = v18;
        v33[0].m256i_i64[0] = v27.m256i_i64[0];
        <T as alloc::string::SpecToString>::spec_to_string(&v29, v33);
        v22 = v30;
        v21 = v29;
        core::ptr::drop_in_place<toml_edit::document::DocumentMut>(v33);
        alacritty::migrate::write_results(&v27, v10, (unsigned __int8)a2[27], &v19, *((_QWORD *)&v21 + 1), v22);
        v16 = v27.m256i_i64[0];
        if ( __OFSUB__(-v27.m256i_i64[0], 1LL) )
        {
          *(_QWORD *)(a1 + 24) = v20;
          *(_OWORD *)(a1 + 8) = v19;
          *(_QWORD *)a1 = 0LL;
        }
        else
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v27.m256i_u64[1];
          *(_QWORD *)(a1 + 8) = v16;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(&v19);
        }
        v15 = &v21;
      }
      core::ptr::drop_in_place<alloc::string::String>(v15);
      return core::ptr::drop_in_place<toml::value::Value>(&v23);
    }
    v33[0].m256i_i64[2] = v27.m256i_i64[3];
    *(_OWORD *)v33[0].m256i_i8 = *(_OWORD *)&v27.m256i_u64[1];
    alacritty::migrate::yaml::migrate::{{closure}}(&v17, v33);
    v13 = v17;
    v19 = v17;
    v20 = v18;
    *(_QWORD *)(a1 + 24) = v18;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v27.m256i_i64[2];
    v13 = *(_OWORD *)v27.m256i_i8;
  }
  *(_OWORD *)(a1 + 8) = v13;
  *(_QWORD *)a1 = 1LL;
  return core::ptr::drop_in_place<toml::value::Value>(&v23);
}