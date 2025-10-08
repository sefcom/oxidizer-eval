__m128i *__fastcall uu_fmt::FmtOptions::from_matches(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int8 v4; // r13
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __m128i **v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __m128i **v14; // rbp
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+7h] [rbp-141h]
  unsigned __int8 v17; // [rsp+8h] [rbp-140h]
  char v18; // [rsp+9h] [rbp-13Fh]
  unsigned __int8 v19; // [rsp+Ah] [rbp-13Eh]
  unsigned __int8 v20; // [rsp+Bh] [rbp-13Dh]
  unsigned __int8 v21; // [rsp+Ch] [rbp-13Ch]
  unsigned __int8 v22; // [rsp+Dh] [rbp-13Bh]
  unsigned __int8 flag; // [rsp+Eh] [rbp-13Ah]
  char v24; // [rsp+Fh] [rbp-139h] BYREF
  __m128i v25; // [rsp+10h] [rbp-138h] BYREF
  __m128i **v26; // [rsp+20h] [rbp-128h]
  __m128i v27; // [rsp+28h] [rbp-120h]
  __m128i **v28; // [rsp+38h] [rbp-110h]
  __m128i v29; // [rsp+48h] [rbp-100h] BYREF
  __m128i **v30; // [rsp+58h] [rbp-F0h]
  char v31; // [rsp+60h] [rbp-E8h]
  _BYTE v32[8]; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+78h] [rbp-D0h] BYREF
  __m128i v35; // [rsp+80h] [rbp-C8h] BYREF
  __m128i **v36; // [rsp+90h] [rbp-B8h]
  __m128i v37; // [rsp+98h] [rbp-B0h] BYREF
  __m128i **v38; // [rsp+A8h] [rbp-A0h]
  __m128i *v39; // [rsp+B0h] [rbp-98h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+B8h] [rbp-90h]
  char *v41; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall *v42)(); // [rsp+C8h] [rbp-80h]
  __m128i v43; // [rsp+D0h] [rbp-78h] BYREF
  __m128i **v44; // [rsp+E0h] [rbp-68h]
  __m128i v45; // [rsp+E8h] [rbp-60h] BYREF
  __m128i **v46; // [rsp+F8h] [rbp-50h]
  __m128i v47; // [rsp+100h] [rbp-48h] BYREF
  __m128i **v48; // [rsp+110h] [rbp-38h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTaggedParagrap, 16LL);
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCrownMargin, 12LL);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPreserveHeader, 16LL);
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUniformSpacing, 15LL);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuick, 5LL);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSplitOnly, 10LL);
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aExactPrefix, 12LL);
  v16 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aSkipPrefix, 11LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aPrefix, 6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, &v25);
  if ( v2 )
    <alloc::string::String as core::clone::Clone>::clone(&v37, v2);
  else
    v37.m128i_i64[0] = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aSkipPrefix, 11LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aSkipPrefix, 11LL, &v25);
  if ( v3 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v25, v3);
    v36 = v26;
    v35 = _mm_loadu_si128(&v25);
  }
  else
  {
    v35.m128i_i64[0] = 0x8000000000000000LL;
  }
  uu_fmt::extract_width(&v25, a2);
  v4 = v25.m128i_i8[8];
  v5 = (unsigned __int64)v26;
  if ( v25.m128i_i32[0] == 1 )
  {
    a1->m128i_i64[1] = v25.m128i_i64[1];
    a1[1].m128i_i64[0] = v5;
LABEL_24:
    a1->m128i_i64[0] = 0x8000000000000001LL;
    goto LABEL_25;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aGoal, 4LL);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aGoal, 4LL, &v25);
  if ( !v6 )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( v5 )
      {
        v9 = core::cmp::Ord::max(93 * v5 / 0x64, 1LL);
LABEL_21:
        v34 = v5;
        if ( v5 > 0x9C4 )
        {
          v29.m128i_i64[0] = (__int64)&v34;
          v29.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v25.m128i_i64[0] = (__int64)&off_F06C0;
          v25.m128i_i64[1] = 2LL;
          v26 = (__m128i **)&v29;
          v27 = (__m128i)1uLL;
          core::option::Option<T>::map_or_else(&v45, &v25);
          v27.m128i_i32[0] = 1;
          v25 = _mm_loadu_si128(&v45);
          v26 = v46;
          v10 = alloc::boxed::Box<T>::new(&v25);
          goto LABEL_23;
        }
LABEL_29:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aTabWidth, 9LL);
        v12 = clap_builder::parser::error::MatchesError::unwrap(aTabWidth, 9LL, &v25);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 8);
          v14 = *(__m128i ***)(v12 + 16);
          core::num::<impl usize>::from_ascii_radix(v32, v13, v14);
          if ( v32[0] == 1 )
          {
            v24 = v32[1];
            v29.m128i_i64[0] = 0LL;
            v29.m128i_i64[1] = v13;
            v30 = v14;
            v31 = 1;
            v39 = &v29;
            v40 = <os_display::Quoted as core::fmt::Display>::fmt;
            v41 = &v24;
            v42 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            v25.m128i_i64[0] = (__int64)&off_F06E0;
            v25.m128i_i64[1] = 2LL;
            v26 = &v39;
            v27 = (__m128i)2uLL;
            core::option::Option<T>::map_or_else(&v47, &v25);
            v27.m128i_i32[0] = 1;
            v25 = _mm_loadu_si128(&v47);
            v26 = v48;
            a1->m128i_i64[1] = alloc::boxed::Box<T>::new(&v25);
            a1[1].m128i_i64[0] = (__int64)&off_F0720;
            a1->m128i_i64[0] = 0x8000000000000001LL;
            goto LABEL_25;
          }
          v15 = v33;
        }
        else
        {
          v15 = 8LL;
        }
        v26 = v38;
        v25 = v37;
        v28 = v36;
        v27 = v35;
        *a1 = v37;
        a1[2].m128i_i64[0] = v27.m128i_i64[1];
        a1[2].m128i_i64[1] = (__int64)v28;
        a1[1].m128i_i64[0] = (__int64)v26;
        a1[1].m128i_i64[1] = v27.m128i_i64[0];
        a1[3].m128i_i64[0] = v5;
        a1[3].m128i_i64[1] = v9;
        a1[4].m128i_i64[0] = (v15 == 0) + v15;
        a1[4].m128i_i64[1] = _mm_insert_epi16(
                               _mm_insert_epi16(
                                 _mm_cvtsi32_si128(v18 & (v19 ^ 1) | ((((unsigned __int8)(v19 | v18) ^ 1) & flag) << 8) | (v21 << 16) | (v19 << 24)),
                                 v17 | (v16 << 8),
                                 2),
                               v22 | (v20 << 8),
                               3).m128i_u64[0];
        return a1;
      }
      v5 = 0LL;
      v9 = 0LL;
    }
    else
    {
      v9 = 70LL;
      v5 = 75LL;
    }
    v34 = v5;
    goto LABEL_29;
  }
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(__m128i ***)(v6 + 16);
  core::num::<impl usize>::from_ascii_radix(v32, v7, v8);
  if ( v32[0] != 1 )
  {
    v9 = v33;
    if ( (v4 & 1) != 0 )
    {
      if ( v33 > v5 )
      {
LABEL_17:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, aGoalCannotBeGr, 34LL);
        v26 = v30;
        v25 = _mm_loadu_si128(&v29);
        v27.m128i_i32[0] = 1;
        v10 = alloc::boxed::Box<T>::new(&v25);
LABEL_23:
        a1->m128i_i64[1] = v10;
        a1[1].m128i_i64[0] = (__int64)&off_F0720;
        goto LABEL_24;
      }
    }
    else
    {
      if ( v33 > 0x4B )
        goto LABEL_17;
      v5 = core::cmp::Ord::max(
             (((24665 * (unsigned int)(unsigned __int16)(100 * v33)) >> 16)
            + ((unsigned __int16)(100 * v33 - ((24665 * (unsigned int)(unsigned __int16)(100 * v33)) >> 16)) >> 1)) >> 6,
             v33 + 3);
    }
    goto LABEL_21;
  }
  v29.m128i_i64[0] = 0LL;
  v29.m128i_i64[1] = v7;
  v30 = v8;
  v31 = 1;
  v39 = &v29;
  v40 = <os_display::Quoted as core::fmt::Display>::fmt;
  v25.m128i_i64[0] = (__int64)&off_F06B0;
  v25.m128i_i64[1] = 1LL;
  v26 = &v39;
  v27 = (__m128i)1uLL;
  core::option::Option<T>::map_or_else(&v43, &v25);
  v27.m128i_i32[0] = 1;
  v25 = _mm_loadu_si128(&v43);
  v26 = v44;
  a1->m128i_i64[1] = alloc::boxed::Box<T>::new(&v25);
  a1[1].m128i_i64[0] = (__int64)&off_F0720;
  a1->m128i_i64[0] = 0x8000000000000001LL;
LABEL_25:
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v35);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v37);
  return a1;
}