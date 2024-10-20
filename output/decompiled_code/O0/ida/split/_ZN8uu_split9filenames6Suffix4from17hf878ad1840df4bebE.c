__int64 __fastcall uu_split::filenames::Suffix::from(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r15
  char v6; // bl
  int flag; // ebp
  char v8; // al
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  bool v21; // si
  char v22; // cl
  unsigned __int64 v23; // r12
  __m128d v24; // xmm1
  double v25; // xmm0_8
  double v26; // xmm0_8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  unsigned __int64 v31; // r13
  int v32; // edx
  char v33; // al
  __int64 v34; // rax
  char v36; // [rsp+0h] [rbp-1D8h]
  const char *v37; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v38; // [rsp+10h] [rbp-1C8h]
  int v39; // [rsp+1Ch] [rbp-1BCh]
  const char **v40; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+28h] [rbp-1B0h]
  __int128 *v42; // [rsp+30h] [rbp-1A8h]
  __int64 (__fastcall *v43)(); // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v44; // [rsp+40h] [rbp-198h]
  __int64 v45; // [rsp+48h] [rbp-190h]
  char **v46; // [rsp+50h] [rbp-188h] BYREF
  __int64 v47; // [rsp+58h] [rbp-180h]
  const char ***v48; // [rsp+60h] [rbp-178h]
  __int64 v49; // [rsp+68h] [rbp-170h]
  __int64 v50; // [rsp+70h] [rbp-168h]
  __int64 v51; // [rsp+80h] [rbp-158h] BYREF
  __int128 v52; // [rsp+88h] [rbp-150h]
  __int128 v53; // [rsp+98h] [rbp-140h]
  __int128 v54; // [rsp+A8h] [rbp-130h]
  __int128 v55; // [rsp+B8h] [rbp-120h]
  double x; // [rsp+C8h] [rbp-110h]
  __int128 v57; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-F8h]
  __int128 v59; // [rsp+F0h] [rbp-E8h]
  __int128 v60; // [rsp+100h] [rbp-D8h]
  __int128 v61; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+120h] [rbp-B8h]
  double v63; // [rsp+128h] [rbp-B0h]
  _BYTE v64[8]; // [rsp+130h] [rbp-A8h] BYREF
  unsigned __int64 v65; // [rsp+138h] [rbp-A0h]
  _BYTE v66[8]; // [rsp+140h] [rbp-98h] BYREF
  unsigned __int64 v67; // [rsp+148h] [rbp-90h]
  _BYTE v68[8]; // [rsp+150h] [rbp-88h] BYREF
  unsigned __int64 v69; // [rsp+158h] [rbp-80h]
  _QWORD v70[2]; // [rsp+160h] [rbp-78h] BYREF
  __int128 v71; // [rsp+170h] [rbp-68h]
  __int128 v72; // [rsp+180h] [rbp-58h]
  __int128 v73; // [rsp+190h] [rbp-48h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
    &v51,
    a2,
    anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846,
    16LL);
  v37 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
  v38 = 16LL;
  if ( (v51 & 1) != 0
    || (*(_QWORD *)&x = a3,
        v45 = a1,
        v5 = BYTE1(v51),
        clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
          &v51,
          a2,
          anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846,
          12LL),
        v37 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846,
        v38 = 12LL,
        (v51 & 1) != 0) )
  {
    v60 = v55;
    v59 = v54;
    v58 = v53;
    v57 = v52;
    v40 = &v37;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v57;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v46 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
    v47 = 2LL;
    v50 = 0LL;
    v48 = &v40;
    v49 = 2LL;
    core::panicking::panic_fmt(&v46, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
  }
  v6 = BYTE1(v51);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_4f04ac8a3ef9e065a432e2bbb7f80309_13_llvm_15963415444986902846,
           2LL,
           &off_136640);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a2,
         anon_4f04ac8a3ef9e065a432e2bbb7f80309_15_llvm_15963415444986902846,
         2LL,
         &off_136658);
  if ( (v5 & 1) != 0 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v51,
      a2,
      anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846,
      16LL);
    v37 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_12_llvm_15963415444986902846;
    v38 = 16LL;
    if ( v51 )
    {
      v60 = v55;
      v59 = v54;
      v58 = v53;
      v57 = v52;
      v40 = &v37;
      v41 = <&T as core::fmt::Display>::fmt;
      v42 = &v57;
      v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v46 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v47 = 2LL;
      v50 = 0LL;
      v48 = &v40;
      v49 = 2LL;
      core::panicking::panic_fmt(&v46, &off_136688);
    }
    v12 = v52;
    LOBYTE(flag) = 1;
    v11 = v45;
    if ( !(_QWORD)v52 )
    {
      v44 = 0LL;
      v36 = 1;
      goto LABEL_24;
    }
    if ( !*(_QWORD *)(v52 + 8) || *(__int64 *)(v52 + 16) < 0 )
      goto LABEL_70;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v64);
    if ( (v64[0] & 1) != 0 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v51, v12);
      v17 = v51;
      v71 = v52;
      *(_QWORD *)(v45 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v17;
      v18 = v71;
LABEL_65:
      *(_OWORD *)(v11 + 24) = v18;
      goto LABEL_66;
    }
    v13 = v65;
    goto LABEL_20;
  }
  if ( (v6 & 1) != 0 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v51,
      a2,
      anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846,
      12LL);
    v37 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_14_llvm_15963415444986902846;
    v38 = 12LL;
    if ( v51 )
    {
      v60 = v55;
      v59 = v54;
      v58 = v53;
      v57 = v52;
      v40 = &v37;
      v41 = <&T as core::fmt::Display>::fmt;
      v42 = &v57;
      v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v46 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
      v47 = 2LL;
      v50 = 0LL;
      v48 = &v40;
      v49 = 2LL;
      core::panicking::panic_fmt(&v46, &off_136670);
    }
    v14 = v52;
    LOBYTE(flag) = 2;
    v11 = v45;
    if ( !(_QWORD)v52 )
    {
      v36 = 1;
      v44 = 0LL;
      goto LABEL_24;
    }
    v15 = *(_QWORD *)(v52 + 8);
    if ( !v15 )
      goto LABEL_70;
    v16 = *(_QWORD *)(v52 + 16);
    if ( v16 < 0 )
      goto LABEL_70;
    core::num::<impl usize>::from_str_radix(v66, v15, v16, 16LL);
    if ( (v66[0] & 1) != 0 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v51, v14);
      v34 = v51;
      v72 = v52;
      *(_QWORD *)(v45 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v34;
      v18 = v72;
      goto LABEL_65;
    }
    v13 = v67;
LABEL_20:
    v44 = v13;
    v36 = 0;
    goto LABEL_24;
  }
  v9 = (unsigned __int8)(2 * v8);
  v10 = (_BYTE)flag == 0;
  flag = 1;
  if ( v10 )
    flag = v9;
  v36 = 1;
  v44 = 0LL;
  v11 = v45;
LABEL_24:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v51,
    a2,
    anon_4f04ac8a3ef9e065a432e2bbb7f80309_16_llvm_15963415444986902846,
    13LL);
  v37 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_16_llvm_15963415444986902846;
  v38 = 13LL;
  if ( v51 )
  {
    v60 = v55;
    v59 = v54;
    v58 = v53;
    v57 = v52;
    v40 = &v37;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v57;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v46 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v47 = 2LL;
    v50 = 0LL;
    v48 = &v40;
    v49 = 2LL;
    core::panicking::panic_fmt(&v46, &off_1366A0);
  }
  v19 = v52;
  if ( !(_QWORD)v52 )
  {
    v39 = flag;
    v20 = 2LL;
    v21 = 1;
    goto LABEL_33;
  }
  if ( !*(_QWORD *)(v52 + 8) || *(__int64 *)(v52 + 16) < 0 )
    goto LABEL_70;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v68);
  if ( (v68[0] & 1) != 0 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v51, v19);
    v29 = v51;
    v73 = v52;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = v29;
    v18 = v73;
    goto LABEL_65;
  }
  v39 = flag;
  v20 = v69;
  v21 = v69 == 0;
  v22 = v36;
  if ( v69 )
    v22 = 0;
  v36 = v22;
LABEL_33:
  if ( (unsigned __int64)(**(_QWORD **)&x - 9LL) <= 0xFFFFFFFFFFFFFFFCLL )
  {
    v23 = *(_QWORD *)(*(_QWORD *)&x + qword_24EE8[**(_QWORD **)&x]);
    if ( __CFADD__(v23, v44) )
      core::panicking::panic_const::panic_const_add_overflow(&off_1366B8);
    v24 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)(v23 + v44), (__m128i)xmmword_19BF0), (__m128d)xmmword_19B90);
    x = dbl_24F18[(unsigned __int8)v39];
    v63 = log(_mm_unpackhi_pd(v24, v24).m128d_f64[0] + v24.m128d_f64[0]);
    v25 = log(x);
    v26 = ceil(v63 / v25);
    v27 = 0LL;
    if ( v26 >= 0.0 )
      v27 = (unsigned int)(int)v26;
    v28 = -1LL;
    if ( v26 <= 1.844674407370955e19 )
      v28 = v27;
    if ( v44 < v23 && v21 )
    {
      if ( v20 <= v28 )
        v20 = v28;
      v36 = 0;
      v11 = v45;
    }
    else
    {
      v11 = v45;
      if ( v20 < v28 )
      {
        *(_QWORD *)(v45 + 8) = 2LL;
        *(_QWORD *)(v11 + 16) = v28;
LABEL_66:
        *(_QWORD *)v11 = 0x8000000000000000LL;
        return v11;
      }
    }
  }
  v30 = 2LL;
  if ( v20 )
    v30 = v20;
  if ( !v19 )
    v30 = v20;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v51,
    a2,
    anon_4f04ac8a3ef9e065a432e2bbb7f80309_9_llvm_15963415444986902846,
    17LL);
  v37 = anon_4f04ac8a3ef9e065a432e2bbb7f80309_9_llvm_15963415444986902846;
  v38 = 17LL;
  if ( v51 )
  {
    v60 = v55;
    v59 = v54;
    v58 = v53;
    v57 = v52;
    v40 = &v37;
    v41 = <&T as core::fmt::Display>::fmt;
    v42 = &v57;
    v43 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v46 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v47 = 2LL;
    v50 = 0LL;
    v48 = &v40;
    v49 = 2LL;
    core::panicking::panic_fmt(&v46, &off_1366D0);
  }
  v31 = v44;
  if ( !(_QWORD)v52 )
    core::option::unwrap_failed(&off_1366E8);
  <alloc::string::String as core::clone::Clone>::clone(&v61, v52);
  if ( !*((_QWORD *)&v61 + 1) || v62 < 0 )
LABEL_70:
    core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
  v70[0] = *((_QWORD *)&v61 + 1);
  v70[1] = *((_QWORD *)&v61 + 1) + v62;
  while ( (unsigned int)core::str::validations::next_code_point(v70) )
  {
    if ( (v32 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
      core::panicking::panic_nounwind(anon_f1287c7fdd0bdb771238559a83dec725_21_llvm_9029318952859596258, 57LL);
    if ( v32 == 1114112 )
      break;
    if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::branch(v32 == 47) )
    {
      v33 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual>::from_residual();
      goto LABEL_61;
    }
  }
  v33 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::from_output();
LABEL_61:
  LOBYTE(v51) = v33;
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                          &v51,
                          &anon_a1369f34f0af36e085eaa2e09186d83a_14_llvm_8562216672536282045) )
  {
    *(_QWORD *)(v11 + 8) = 1LL;
    *(_OWORD *)(v11 + 16) = v61;
    *(_QWORD *)(v11 + 32) = v62;
    goto LABEL_66;
  }
  *(_QWORD *)(v11 + 16) = v62;
  *(_OWORD *)v11 = v61;
  *(_QWORD *)(v11 + 24) = v30;
  *(_QWORD *)(v11 + 32) = v31;
  *(_BYTE *)(v11 + 40) = v36;
  *(_BYTE *)(v11 + 41) = v39;
  return v11;
}
