        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // r12
  __int64 v11; // rdx
  char v12; // r15
  char flag; // bp
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // r12
  char v19; // r15
  unsigned __int64 v20; // r13
  int v21; // ebp
  char v22; // al
  char **v23; // rax
  __int64 v24; // r13
  bool v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __m128d v28; // xmm1
  double v29; // xmm0_8
  double v30; // xmm0_8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 *v34; // rax
  int v35; // edx
  int v36; // esi
  int v37; // r8d
  int v38; // edi
  __int128 *v40; // rax
  unsigned __int8 v41; // [rsp+4h] [rbp-134h]
  char **v42; // [rsp+8h] [rbp-130h] BYREF
  __int128 v43; // [rsp+10h] [rbp-128h]
  __int64 v44; // [rsp+20h] [rbp-118h]
  __int64 v45; // [rsp+28h] [rbp-110h]
  __int128 v46; // [rsp+38h] [rbp-100h] BYREF
  __int64 v47; // [rsp+48h] [rbp-F0h]
  __int128 v48; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v49; // [rsp+60h] [rbp-D8h]
  __int64 v50; // [rsp+70h] [rbp-C8h]
  _QWORD v51[4]; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-88h]
  __int64 v54; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-70h]
  __int64 *v56; // [rsp+D0h] [rbp-68h]
  int v57; // [rsp+DCh] [rbp-5Ch]
  unsigned __int64 v58; // [rsp+E0h] [rbp-58h]
  double v59; // [rsp+E8h] [rbp-50h]
  double x; // [rsp+F0h] [rbp-48h]
  _QWORD v61[8]; // [rsp+F8h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v56 = a3;
  if ( v7 )
  {
    a4 = *(_QWORD *)(a2 + 8);
    v8 = 16 * v7;
    v9 = 0LL;
    do
    {
      if ( *(_QWORD *)(a4 + v9 + 8) == 16LL
        && _mm_movemask_epi8(
             _mm_cmpeq_epi8(
               _mm_loadu_si128((const __m128i *)anon_80a68c298b3244c7b6f64951acf55080_16_llvm_4507047988568940441),
               _mm_loadu_si128((const __m128i *)*(_QWORD *)(a4 + v9)))) == 0xFFFF )
      {
        v10 = 1;
        goto LABEL_8;
      }
      v9 += 16LL;
    }
    while ( v8 != v9 );
    v10 = 0;
LABEL_8:
    v11 = 0LL;
    while ( *(_QWORD *)(a4 + v11 + 8) != 12LL
         || anon_80a68c298b3244c7b6f64951acf55080_18_llvm_4507047988568940441 ^ **(_QWORD **)(a4 + v11) | *(_DWORD *)(*(_QWORD *)(a4 + v11) + 8LL) ^ 0x73657869u )
    {
      v11 += 16LL;
      if ( v8 == v11 )
        goto LABEL_14;
    }
    v12 = 1;
  }
  else
  {
    v10 = 0;
LABEL_14:
    v12 = 0;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_80a68c298b3244c7b6f64951acf55080_17_llvm_4507047988568940441,
           2LL,
           a4,
           a5,
           a6);
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_80a68c298b3244c7b6f64951acf55080_19_llvm_4507047988568940441,
          2LL,
          v14,
          v15,
          v16);
  if ( !v10 )
  {
    if ( v12 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v52,
        a2,
        &anon_80a68c298b3244c7b6f64951acf55080_18_llvm_4507047988568940441,
        12LL);
      *(_QWORD *)&v46 = &anon_80a68c298b3244c7b6f64951acf55080_18_llvm_4507047988568940441;
      *((_QWORD *)&v46 + 1) = 12LL;
      if ( (_DWORD)v52 != 2 )
        goto LABEL_72;
      v18 = *((_QWORD *)&v52 + 1);
      v19 = 2;
      if ( *((_QWORD *)&v52 + 1) )
      {
        core::num::<impl usize>::from_str_radix(
          &v48,
          *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL),
          *(_QWORD *)(*((_QWORD *)&v52 + 1) + 16LL),
          16LL);
        if ( !(_BYTE)v48 )
        {
LABEL_24:
          v20 = *((_QWORD *)&v48 + 1);
          LOBYTE(v21) = 0;
          goto LABEL_29;
        }
LABEL_32:
        <alloc::string::String as core::clone::Clone>::clone(&v42, v18);
        v23 = v42;
        *(_OWORD *)(a1 + 24) = v43;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = v23;
        goto LABEL_70;
      }
    }
    else
    {
      v22 = 2 * v17;
      v19 = 1;
      if ( !flag )
        v19 = v22;
    }
    LOBYTE(v21) = 1;
    v20 = 0LL;
    goto LABEL_29;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v52,
    a2,
    anon_80a68c298b3244c7b6f64951acf55080_16_llvm_4507047988568940441,
    16LL);
  *(_QWORD *)&v46 = anon_80a68c298b3244c7b6f64951acf55080_16_llvm_4507047988568940441;
  *((_QWORD *)&v46 + 1) = 16LL;
  if ( (_DWORD)v52 != 2 )
  {
LABEL_72:
    v50 = v54;
    v49 = v53;
    v48 = v52;
    v40 = &v46;
    goto LABEL_73;
  }
  v18 = *((_QWORD *)&v52 + 1);
  v19 = 1;
  if ( *((_QWORD *)&v52 + 1) )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(
      &v48,
      *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v52 + 1) + 16LL));
    if ( !(_BYTE)v48 )
      goto LABEL_24;
    goto LABEL_32;
  }
  v20 = 0LL;
  LOBYTE(v21) = 1;
LABEL_29:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v52,
    a2,
    anon_80a68c298b3244c7b6f64951acf55080_20_llvm_4507047988568940441,
    13LL);
  *(_QWORD *)&v46 = anon_80a68c298b3244c7b6f64951acf55080_20_llvm_4507047988568940441;
  *((_QWORD *)&v46 + 1) = 13LL;
  if ( (_DWORD)v52 != 2 )
    goto LABEL_72;
  v18 = *((_QWORD *)&v52 + 1);
  if ( *((_QWORD *)&v52 + 1) )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(
      &v48,
      *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL),
      *(_QWORD *)(*((_QWORD *)&v52 + 1) + 16LL));
    if ( (_BYTE)v48 )
      goto LABEL_32;
    v55 = v20;
    v41 = v19;
    v24 = *((_QWORD *)&v48 + 1);
  }
  else
  {
    v55 = v20;
    v41 = v19;
    v24 = 2LL;
  }
  v25 = v18 != 0 && v24 != 0;
  v21 = (unsigned __int8)v21;
  if ( v25 )
    v21 = 0;
  v26 = *v56;
  if ( (unsigned __int64)*v56 < 6 )
  {
    v57 = v21;
    v58 = v24;
    v56 = *(__int64 **)((char *)v56 + qword_1E350[v26]);
    v27 = v55;
    v28 = _mm_sub_pd(
            (__m128d)_mm_unpacklo_epi32((__m128i)((unsigned __int64)v56 + v55), (__m128i)xmmword_13C60),
            (__m128d)xmmword_13BE0);
    x = dbl_1E380[v41];
    v59 = log(_mm_unpackhi_pd(v28, v28).m128d_f64[0] + v28.m128d_f64[0]);
    v29 = log(x);
    v30 = ceil(v59 / v29);
    v31 = 0LL;
    if ( v30 >= 0.0 )
      v31 = (unsigned int)(int)v30;
    v32 = -1LL;
    if ( v30 <= 1.844674407370955e19 )
      v32 = v31;
    if ( v27 >= (unsigned __int64)v56 )
    {
      v24 = v58;
      LOBYTE(v21) = v57;
      if ( v58 < v32 )
        goto LABEL_47;
    }
    else
    {
      v24 = v58;
      if ( v25 )
      {
        if ( v58 >= v32 )
        {
          LOBYTE(v21) = 0;
          goto LABEL_55;
        }
LABEL_47:
        *(_QWORD *)(a1 + 8) = 2LL;
        *(_QWORD *)(a1 + 16) = v32;
        goto LABEL_70;
      }
      if ( v58 <= v32 )
        v24 = v32;
      LOBYTE(v21) = 0;
    }
  }
  v33 = 2LL;
  if ( v24 )
    v33 = v24;
  if ( v18 )
    v24 = v33;
LABEL_55:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v52,
    a2,
    anon_80a68c298b3244c7b6f64951acf55080_13_llvm_4507047988568940441,
    17LL);
  v61[0] = anon_80a68c298b3244c7b6f64951acf55080_13_llvm_4507047988568940441;
  v61[1] = 17LL;
  if ( (_DWORD)v52 != 2 )
  {
    v50 = v54;
    v49 = v53;
    v48 = v52;
    v40 = (__int128 *)v61;
LABEL_73:
    v51[0] = v40;
    v51[1] = <&T as core::fmt::Display>::fmt;
    v51[2] = &v48;
    v51[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v42 = &anon_fd2000c1cd6eb4266a2a957d594896cc_2_llvm_17375974497823408223;
    *(_QWORD *)&v43 = 2LL;
    v45 = 0LL;
    *((_QWORD *)&v43 + 1) = v51;
    v44 = 2LL;
    core::panicking::panic_fmt(&v42, &anon_fd2000c1cd6eb4266a2a957d594896cc_4_llvm_17375974497823408223);
  }
  if ( !*((_QWORD *)&v52 + 1) )
    core::option::unwrap_failed(&off_10C678);
  <alloc::string::String as core::clone::Clone>::clone(&v46, *((_QWORD *)&v52 + 1));
  v34 = (unsigned __int8 *)*((_QWORD *)&v46 + 1);
  do
  {
    if ( v34 == (unsigned __int8 *)(*((_QWORD *)&v46 + 1) + v47) )
    {
LABEL_68:
      *(_QWORD *)(a1 + 16) = v47;
      *(_OWORD *)a1 = v46;
      *(_QWORD *)(a1 + 24) = v24;
      *(_QWORD *)(a1 + 32) = v55;
      *(_BYTE *)(a1 + 40) = v21;
      *(_BYTE *)(a1 + 41) = v41;
      return a1;
    }
    v35 = *v34;
    if ( (v35 & 0x80u) == 0 )
    {
      ++v34;
    }
    else
    {
      v36 = v35 & 0x1F;
      v37 = v34[1] & 0x3F;
      if ( (unsigned __int8)v35 <= 0xDFu )
      {
        v34 += 2;
        v35 = v37 | (v36 << 6);
      }
      else
      {
        v38 = (v37 << 6) | v34[2] & 0x3F;
        if ( (unsigned __int8)v35 < 0xF0u )
        {
          v34 += 3;
          v35 = (v36 << 12) | v38;
        }
        else
        {
          v35 = ((v35 & 7) << 18) | (v38 << 6) | v34[3] & 0x3F;
          if ( v35 == (_DWORD)&socketpair_ptr )
            goto LABEL_68;
          v34 += 4;
        }
      }
    }
  }
  while ( v35 != 47 );
  *(_QWORD *)(a1 + 32) = v47;
  *(_OWORD *)(a1 + 16) = v46;
  *(_QWORD *)(a1 + 8) = 1LL;
LABEL_70:
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
