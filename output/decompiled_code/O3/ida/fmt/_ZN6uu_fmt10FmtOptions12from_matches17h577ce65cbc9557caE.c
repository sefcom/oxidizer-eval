__int64 __fastcall uu_fmt::FmtOptions::from_matches(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+7h] [rbp-141h]
  unsigned __int8 v17; // [rsp+8h] [rbp-140h]
  unsigned __int8 v18; // [rsp+9h] [rbp-13Fh]
  char v19; // [rsp+Ah] [rbp-13Eh]
  unsigned __int8 v20; // [rsp+Bh] [rbp-13Dh]
  unsigned __int8 v21; // [rsp+Ch] [rbp-13Ch]
  unsigned __int8 v22; // [rsp+Dh] [rbp-13Bh]
  unsigned __int8 flag; // [rsp+Eh] [rbp-13Ah]
  char v24; // [rsp+Fh] [rbp-139h] BYREF
  __int128 v25; // [rsp+10h] [rbp-138h] BYREF
  __m256i v26; // [rsp+20h] [rbp-128h]
  __int128 v27; // [rsp+48h] [rbp-100h] BYREF
  __int64 v28; // [rsp+58h] [rbp-F0h]
  char v29; // [rsp+60h] [rbp-E8h]
  _BYTE v30[8]; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-D8h]
  __int64 v32; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-B8h]
  __int128 v35; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-A0h]
  __int128 *v37; // [rsp+B0h] [rbp-98h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+B8h] [rbp-90h]
  char *v39; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall *v40)(); // [rsp+C8h] [rbp-80h]
  __int128 v41; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-68h]
  __int128 v43; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-50h]
  __int128 v45; // [rsp+100h] [rbp-48h] BYREF
  __int64 v46; // [rsp+110h] [rbp-38h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTaggedParagrap, 16LL);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCrownMargin, 12LL);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPreserveHeader, 16LL);
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUniformSpacing, 15LL);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuick, 5LL);
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSplitOnly, 10LL);
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aExactPrefix, 12LL);
  v16 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aSkipPrefix, 11LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aPrefix, 6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aPrefix, 6LL, &v25);
  if ( v2 )
    core::ops::function::FnOnce::call_once(&v35, v2);
  else
    *(_QWORD *)&v35 = 0x8000000000000000LL;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aSkipPrefix, 11LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(aSkipPrefix, 11LL, &v25);
  if ( v3 )
  {
    core::ops::function::FnOnce::call_once(&v25, v3);
    v34 = v26.m256i_i64[0];
    v33 = v25;
  }
  else
  {
    *(_QWORD *)&v33 = 0x8000000000000000LL;
  }
  uu_fmt::extract_width((__int64 *)&v25, a2);
  v4 = *((_QWORD *)&v25 + 1);
  v5 = v26.m256i_i64[0];
  if ( !(_QWORD)v25 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aGoal, 4LL);
    v6 = clap_builder::parser::error::MatchesError::unwrap(aGoal, 4LL, &v25);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 16);
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v30, v7, v8);
      if ( v30[0] )
      {
        *(_QWORD *)&v27 = 0LL;
        *((_QWORD *)&v27 + 1) = v7;
        v28 = v8;
        v29 = 1;
        v37 = &v27;
        v38 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v25 = &off_127668;
        *((_QWORD *)&v25 + 1) = 1LL;
        v26.m256i_i64[0] = (__int64)&v37;
        *(_OWORD *)&v26.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(&v41, &v25);
        v26.m256i_i32[2] = 1;
        v25 = v41;
        v26.m256i_i64[0] = v42;
        v9 = alloc::boxed::Box<T>::new(&v25);
LABEL_25:
        *(_QWORD *)(a1 + 8) = v9;
        *(_QWORD *)(a1 + 16) = &off_1276B0;
        goto LABEL_26;
      }
      v10 = v31;
      if ( v4 )
      {
        if ( v31 > v5 )
        {
LABEL_16:
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, aGoalCannotBeGr, 34LL);
          v26.m256i_i64[0] = v28;
          v25 = v27;
          v26.m256i_i32[2] = 1;
          v9 = alloc::boxed::Box<T>::new(&v25);
          goto LABEL_25;
        }
      }
      else
      {
        if ( v31 > 0x4B )
          goto LABEL_16;
        v5 = core::cmp::max_by(
               (((24665 * (unsigned int)(unsigned __int16)(100 * v31)) >> 16)
              + ((unsigned __int16)(100 * v31 - ((24665 * (unsigned int)(unsigned __int16)(100 * v31)) >> 16)) >> 1)) >> 6,
               v31 + 3);
      }
    }
    else
    {
      if ( !v4 )
      {
        v32 = 75LL;
        v10 = 70LL;
        v5 = 75LL;
        goto LABEL_22;
      }
      v10 = core::cmp::max_by(93 * v5 / 0x64, v5 != 0);
    }
    v32 = v5;
    if ( v5 > 0x9C4 )
    {
      *(_QWORD *)&v27 = &v32;
      *((_QWORD *)&v27 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v25 = &off_127740;
      *((_QWORD *)&v25 + 1) = 2LL;
      v26.m256i_i64[0] = (__int64)&v27;
      *(_OWORD *)&v26.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v43, &v25);
      v26.m256i_i32[2] = 1;
      v25 = v43;
      v26.m256i_i64[0] = v44;
      v9 = alloc::boxed::Box<T>::new(&v25);
      goto LABEL_25;
    }
LABEL_22:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, a2, aTabWidth, 9LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap(aTabWidth, 9LL, &v25);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v30, v12, v13);
      if ( v30[0] )
      {
        v24 = v30[1];
        *(_QWORD *)&v27 = 0LL;
        *((_QWORD *)&v27 + 1) = v12;
        v28 = v13;
        v29 = 1;
        v37 = &v27;
        v38 = <os_display::Quoted as core::fmt::Display>::fmt;
        v39 = &v24;
        v40 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        *(_QWORD *)&v25 = &off_127720;
        *((_QWORD *)&v25 + 1) = 2LL;
        v26.m256i_i64[0] = (__int64)&v37;
        *(_OWORD *)&v26.m256i_u64[1] = 2uLL;
        core::option::Option<T>::map_or_else(&v45, &v25);
        v26.m256i_i32[2] = 1;
        v25 = v45;
        v26.m256i_i64[0] = v46;
        v9 = alloc::boxed::Box<T>::new(&v25);
        goto LABEL_25;
      }
      v15 = v31;
    }
    else
    {
      v15 = 8LL;
    }
    v26.m256i_i64[0] = v36;
    v25 = v35;
    *(_OWORD *)&v26.m256i_u64[1] = v33;
    v26.m256i_i64[3] = v34;
    *(_OWORD *)a1 = v35;
    *(__m256i *)(a1 + 16) = v26;
    *(_QWORD *)(a1 + 48) = v5;
    *(_QWORD *)(a1 + 56) = v10;
    *(_QWORD *)(a1 + 64) = (v15 == 0) + v15;
    *(_QWORD *)(a1 + 72) = _mm_insert_epi16(
                             _mm_insert_epi16(
                               _mm_cvtsi32_si128(v19 & (v18 ^ 1) | ((((unsigned __int8)(v18 | v19) ^ 1) & flag) << 8) | (v21 << 16) | (v18 << 24)),
                               v17 | (v16 << 8),
                               2),
                             v22 | (v20 << 8),
                             3).m128i_u64[0];
    return a1;
  }
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v25 + 1);
  *(_QWORD *)(a1 + 16) = v5;
LABEL_26:
  *(_QWORD *)a1 = 0x8000000000000001LL;
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v33);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v35);
  return a1;
}
