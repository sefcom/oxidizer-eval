__int64 __fastcall uu_more::Pager::draw_prompt(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // rax
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rcx
  __int128 *v8; // rax
  __m128i si128; // xmm2
  __m128d v10; // xmm1
  double v11; // xmm0_8
  __m128d v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // r15
  __int64 v18; // rax
  char **v20; // [rsp+0h] [rbp-148h] BYREF
  __int64 v21; // [rsp+8h] [rbp-140h]
  __int128 **v22; // [rsp+10h] [rbp-138h]
  __int64 v23; // [rsp+18h] [rbp-130h]
  __int64 v24; // [rsp+20h] [rbp-128h]
  __int128 v25; // [rsp+30h] [rbp-118h] BYREF
  __int64 v26; // [rsp+40h] [rbp-108h]
  __int128 *v27; // [rsp+48h] [rbp-100h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-F8h]
  char ***v29; // [rsp+58h] [rbp-F0h]
  __int64 (__fastcall *v30)(); // [rsp+60h] [rbp-E8h]
  __int64 v31; // [rsp+68h] [rbp-E0h]
  int v32; // [rsp+7Ch] [rbp-CCh] BYREF
  __int128 v33; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-B8h]
  _BYTE v35[24]; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-80h]
  __int128 v38; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-68h]
  __int128 v40; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-50h]
  __int128 v42; // [rsp+100h] [rbp-48h] BYREF
  __int64 v43; // [rsp+110h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 == a3 )
  {
    v6 = *(__int64 (__fastcall **)())(a1 + 32);
    v7 = 1LL;
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 32);
      v6 = *(__int64 (__fastcall **)())(a1 + 40);
    }
    v27 = (__int128 *)v7;
    v28 = v6;
    *(_QWORD *)&v25 = &v27;
    *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
    v20 = &off_162A88;
    v21 = 1LL;
    v24 = 0LL;
    v8 = &v25;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_E6D0);
    v10 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, si128), (__m128d)xmmword_E660);
    v11 = _mm_unpackhi_pd(v10, v10).m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v5, si128), (__m128d)xmmword_E660);
    LOWORD(v25) = (int)fmin(
                         65535.0,
                         fmax(0.0, round(v11 / (_mm_unpackhi_pd(v12, v12).m128d_f64[0] + v12.m128d_f64[0]) * 100.0)));
    v27 = &v25;
    v28 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v20 = (char **)&unk_162A98;
    v21 = 2LL;
    v24 = 0LL;
    v8 = (__int128 *)&v27;
  }
  v22 = (__int128 **)v8;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(v35, &v20);
  v27 = (__int128 *)v35;
  v28 = <alloc::string::String as core::fmt::Display>::fmt;
  v20 = &off_162AB8;
  v21 = 2LL;
  v24 = 0LL;
  v22 = &v27;
  v23 = 1LL;
  core::option::Option<T>::map_or_else(&v36, &v20);
  v33 = v36;
  v34 = v37;
  if ( *(_BYTE *)(a1 + 66) )
  {
    if ( a4 == (_DWORD)<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter )
    {
      v27 = &v33;
      v28 = <alloc::string::String as core::fmt::Display>::fmt;
      v20 = (char **)&unk_162B08;
      v21 = 2LL;
      v24 = 0LL;
      v22 = &v27;
      v23 = 1LL;
      core::option::Option<T>::map_or_else(&v40, &v20);
      v25 = v40;
      v16 = v41;
    }
    else
    {
      v32 = a4;
      v27 = &v33;
      v28 = <alloc::string::String as core::fmt::Display>::fmt;
      v29 = (char ***)&v32;
      v30 = <char as core::fmt::Display>::fmt;
      v20 = (char **)&unk_162AD8;
      v21 = 3LL;
      v24 = 0LL;
      v22 = &v27;
      v23 = 2LL;
      core::option::Option<T>::map_or_else(&v38, &v20);
      v25 = v38;
      v16 = v39;
    }
  }
  else
  {
    if ( a4 == (_DWORD)<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter )
    {
      v26 = v37;
      v25 = v36;
      v17 = 1;
      goto LABEL_14;
    }
    v27 = &v33;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    v29 = (char ***)&off_162B58;
    v30 = <&T as core::fmt::Display>::fmt;
    v20 = (char **)&unk_13510;
    v21 = 2LL;
    v24 = 0LL;
    v22 = &v27;
    v23 = 2LL;
    core::option::Option<T>::map_or_else(&v42, &v20);
    v25 = v42;
    v16 = v43;
  }
  v26 = v16;
  v17 = 0;
LABEL_14:
  v27 = (__int128 *)&off_162B28;
  v28 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v31 = 0LL;
  v29 = &v20;
  v30 = (__int64 (__fastcall *)())(&dword_0 + 3);
  v18 = ((__int64 (__fastcall *)(__int64, __int128 **, __int64, void *, __int64, __int64, const char *, __int64 (__fastcall *)(), __int128 *, __int64 (__fastcall *)(), void *, __int64 (__fastcall *)()))<std::io::stdio::Stdout as std::io::Write>::write_fmt)(
          a2,
          &v27,
          v13,
          &unk_18B38,
          v14,
          v15,
          asc_18AAC,
          <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt,
          &v25,
          <alloc::string::String as core::fmt::Display>::fmt,
          &unk_18B38,
          <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt);
  core::result::Result<T,E>::unwrap(v18, &off_162B68);
  core::ptr::drop_in_place<alloc::string::String>(&v25);
  if ( !v17 )
    core::ptr::drop_in_place<alloc::string::String>(&v33);
  return core::ptr::drop_in_place<alloc::string::String>(v35);
}
