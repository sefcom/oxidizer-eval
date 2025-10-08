__int64 __fastcall uu_more::Pager::draw_prompt(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 *v8; // rax
  __m128i v9; // xmm2
  __m128d v10; // xmm1
  double v11; // xmm0_8
  __m128d v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char ***v16; // rax
  char v17; // bp
  __int64 v18; // rax
  char **v20; // [rsp+0h] [rbp-108h] BYREF
  __int64 v21; // [rsp+8h] [rbp-100h]
  __int128 *v22; // [rsp+10h] [rbp-F8h]
  __int64 v23; // [rsp+18h] [rbp-F0h]
  __int64 v24; // [rsp+20h] [rbp-E8h]
  __int128 v25; // [rsp+30h] [rbp-D8h] BYREF
  char ***v26; // [rsp+40h] [rbp-C8h]
  __int128 v27; // [rsp+48h] [rbp-C0h] BYREF
  char ***v28; // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall *v29)(); // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int128 v32; // [rsp+80h] [rbp-88h] BYREF
  char ***v33; // [rsp+90h] [rbp-78h]
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  char ***v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  _BYTE v37[72]; // [rsp+C0h] [rbp-48h] BYREF

  v36 = a2;
  v5 = *(_QWORD *)(a1 + 112);
  if ( a3 == v5 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = 1LL;
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 96);
      v6 = *(_QWORD *)(a1 + 104);
    }
    *(_QWORD *)&v27 = v7;
    *((_QWORD *)&v27 + 1) = v6;
    *(_QWORD *)&v25 = &v27;
    *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
    v20 = &off_125360;
    v21 = 1LL;
    v24 = 0LL;
    v8 = &v25;
  }
  else
  {
    v9 = _mm_loadl_epi64((const __m128i *)&qword_1DEA0);
    v10 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, v9), unk_1DE40);
    v11 = _mm_unpackhi_pd(v10, v10).m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v5, v9), unk_1DE40);
    LOWORD(v25) = (int)fmin(
                         65535.0,
                         fmax(0.0, round(v11 / (_mm_unpackhi_pd(v12, v12).m128d_f64[0] + v12.m128d_f64[0]) * 100.0)));
    *(_QWORD *)&v27 = &v25;
    *((_QWORD *)&v27 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v20 = (char **)&unk_125370;
    v21 = 2LL;
    v24 = 0LL;
    v8 = &v27;
  }
  v22 = v8;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(v37, &v20);
  *(_QWORD *)&v25 = v37;
  *((_QWORD *)&v25 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v20 = &off_125390;
  v21 = 2LL;
  v24 = 0LL;
  v22 = &v25;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(&v27, &v20);
  v34 = v27;
  v35 = v28;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( a4 == 1114112 )
    {
      v33 = v35;
      v32 = v34;
      v17 = 0;
      goto LABEL_15;
    }
    *(_QWORD *)&v27 = &v34;
    *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v28 = (char ***)&off_125430;
    v29 = <&T as core::fmt::Display>::fmt;
    v20 = (char **)&unk_1F780;
    v21 = 2LL;
    v24 = 0LL;
    v22 = &v27;
    v23 = 2LL;
    core::option::Option<T>::map_or_else(&v25, &v20);
    goto LABEL_13;
  }
  if ( a4 != 1114112 )
  {
    v31 = a4;
    *(_QWORD *)&v27 = &v34;
    *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v28 = (char ***)&v31;
    v29 = <char as core::fmt::Display>::fmt;
    v20 = (char **)&unk_1253B0;
    v21 = 3LL;
    v24 = 0LL;
    v22 = &v27;
    v23 = 2LL;
    core::option::Option<T>::map_or_else(&v25, &v20);
LABEL_13:
    v32 = v25;
    v16 = v26;
    goto LABEL_14;
  }
  *(_QWORD *)&v25 = &v34;
  *((_QWORD *)&v25 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v20 = (char **)&unk_1253E0;
  v21 = 2LL;
  v24 = 0LL;
  v22 = &v25;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(&v27, &v20);
  v32 = v27;
  v16 = v28;
LABEL_14:
  v33 = v16;
  v17 = 1;
LABEL_15:
  *(_QWORD *)&v27 = &off_125400;
  *((_QWORD *)&v27 + 1) = 3LL;
  v30 = 0LL;
  v28 = &v20;
  v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v18 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(
          v36,
          &v27,
          v13,
          "",
          v14,
          v15,
          "\v",
          <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt,
          &v32,
          <alloc::string::String as core::fmt::Display>::fmt,
          "",
          <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt);
  core::result::Result<T,E>::unwrap(v18, &off_125440);
  core::ptr::drop_in_place<alloc::string::String>(&v32);
  if ( v17 )
    core::ptr::drop_in_place<alloc::string::String>(&v34);
  return core::ptr::drop_in_place<alloc::string::String>(v37);
}