__int64 __fastcall uu_split::filenames::Suffix::from(__int64 a1, __int64 a2, __int64 *a3)
{
  char v3; // bp
  char v4; // r12
  char flag; // r13
  char v6; // al
  __int64 v7; // rax
  char v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // ebp
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __m128d v17; // xmm1
  double v18; // xmm0_8
  double v19; // xmm0_8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // al
  unsigned __int64 v26; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v27; // [rsp+14h] [rbp-94h]
  __int128 v28; // [rsp+18h] [rbp-90h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h]
  __int64 *v30; // [rsp+30h] [rbp-78h]
  int v31; // [rsp+3Ch] [rbp-6Ch]
  __int64 v32; // [rsp+40h] [rbp-68h] BYREF
  __int128 v33; // [rsp+48h] [rbp-60h]
  double v34; // [rsp+68h] [rbp-40h]
  double x; // [rsp+70h] [rbp-38h]

  v30 = a3;
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_18_llvm_15137177309397333750,
         16LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_20_llvm_15137177309397333750,
         12LL);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_94f0aa2b13bdb41c7ee8957331b484de_19_llvm_15137177309397333750,
           2LL);
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a2,
         anon_94f0aa2b13bdb41c7ee8957331b484de_21_llvm_15137177309397333750,
         2LL);
  if ( v3 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v32,
      a2,
      anon_94f0aa2b13bdb41c7ee8957331b484de_18_llvm_15137177309397333750,
      16LL);
    v7 = clap_builder::parser::error::MatchesError::unwrap(
           anon_94f0aa2b13bdb41c7ee8957331b484de_18_llvm_15137177309397333750,
           16LL,
           &v32);
    v8 = 1;
    if ( v7 )
    {
      v9 = v7;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(&v28, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
      if ( !(_BYTE)v28 )
        goto LABEL_8;
      goto LABEL_15;
    }
    v26 = 0LL;
    LOBYTE(v11) = 1;
  }
  else
  {
    if ( v4 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v32,
        a2,
        anon_94f0aa2b13bdb41c7ee8957331b484de_20_llvm_15137177309397333750,
        12LL);
      v10 = clap_builder::parser::error::MatchesError::unwrap(
              anon_94f0aa2b13bdb41c7ee8957331b484de_20_llvm_15137177309397333750,
              12LL,
              &v32);
      v8 = 2;
      if ( v10 )
      {
        v9 = v10;
        core::num::<impl usize>::from_str_radix(&v28, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), 16LL);
        if ( !(_BYTE)v28 )
        {
LABEL_8:
          v26 = *((_QWORD *)&v28 + 1);
          LOBYTE(v11) = 0;
          goto LABEL_13;
        }
LABEL_15:
        <alloc::string::String as core::clone::Clone>::clone(&v32, v9);
        v14 = v32;
        *(_OWORD *)(a1 + 24) = v33;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = v14;
        goto LABEL_41;
      }
    }
    else
    {
      v12 = 2 * v6;
      v8 = 1;
      if ( !flag )
        v8 = v12;
    }
    LOBYTE(v11) = 1;
    v26 = 0LL;
  }
LABEL_13:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v32,
    a2,
    anon_94f0aa2b13bdb41c7ee8957331b484de_22_llvm_15137177309397333750,
    13LL);
  v13 = clap_builder::parser::error::MatchesError::unwrap(
          anon_94f0aa2b13bdb41c7ee8957331b484de_22_llvm_15137177309397333750,
          13LL,
          &v32);
  v9 = v13;
  if ( v13 )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v28, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16));
    if ( (_BYTE)v28 )
      goto LABEL_15;
    v27 = v8;
    v15 = *((_QWORD *)&v28 + 1);
  }
  else
  {
    v27 = v8;
    v15 = 2LL;
  }
  v11 = (unsigned __int8)v11;
  if ( v9 != 0 && v15 != 0 )
    v11 = 0;
  v16 = *v30;
  if ( (unsigned __int64)*v30 >= 6 )
    goto LABEL_34;
  v31 = v11;
  v30 = *(__int64 **)((char *)v30 + qword_224C8[v16]);
  v17 = _mm_sub_pd(
          (__m128d)_mm_unpacklo_epi32((__m128i)((unsigned __int64)v30 + v26), (__m128i)xmmword_17FD0),
          (__m128d)xmmword_17F70);
  x = dbl_224F8[v27];
  v34 = log(_mm_unpackhi_pd(v17, v17).m128d_f64[0] + v17.m128d_f64[0]);
  v18 = log(x);
  v19 = ceil(v34 / v18);
  v20 = 0LL;
  if ( v19 >= 0.0 )
    v20 = (unsigned int)(int)v19;
  v21 = -1LL;
  if ( v19 <= 1.844674407370955e19 )
    v21 = v20;
  if ( v26 >= (unsigned __int64)v30 )
  {
    LOBYTE(v11) = v31;
    if ( v15 < v21 )
      goto LABEL_30;
LABEL_34:
    v22 = 2LL;
    if ( v15 )
      v22 = v15;
    if ( v9 )
      v15 = v22;
    goto LABEL_38;
  }
  if ( v9 == 0 || v15 == 0 )
  {
    if ( v15 <= v21 )
      v15 = v21;
    LOBYTE(v11) = 0;
    goto LABEL_34;
  }
  if ( v15 < v21 )
  {
LABEL_30:
    *(_QWORD *)(a1 + 8) = 2LL;
    *(_QWORD *)(a1 + 16) = v21;
    goto LABEL_41;
  }
  LOBYTE(v11) = 0;
LABEL_38:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v32,
    a2,
    anon_94f0aa2b13bdb41c7ee8957331b484de_15_llvm_15137177309397333750,
    17LL);
  v23 = clap_builder::parser::error::MatchesError::unwrap(
          anon_94f0aa2b13bdb41c7ee8957331b484de_15_llvm_15137177309397333750,
          17LL,
          &v32);
  if ( !v23 )
    core::option::unwrap_failed(&off_149110);
  <alloc::string::String as core::clone::Clone>::clone(&v28, v23);
  v32 = *((_QWORD *)&v28 + 1);
  *(_QWORD *)&v33 = *((_QWORD *)&v28 + 1) + v29;
  v24 = core::iter::traits::iterator::Iterator::try_fold(&v32);
  if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v24) )
  {
    *(_QWORD *)(a1 + 16) = v29;
    *(_OWORD *)a1 = v28;
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 32) = v26;
    *(_BYTE *)(a1 + 40) = v11;
    *(_BYTE *)(a1 + 41) = v27;
    return a1;
  }
  *(_QWORD *)(a1 + 32) = v29;
  *(_OWORD *)(a1 + 16) = v28;
  *(_QWORD *)(a1 + 8) = 1LL;
LABEL_41:
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
