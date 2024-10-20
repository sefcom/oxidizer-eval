__int64 __fastcall uu_expand::Options::new(__int64 a1, void *a2)
{
  __int64 v2; // rax
  __int64 started; // rax
  __int64 v4; // rdx
  int v5; // ebp
  int v6; // r15d
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int128 v10; // kr00_16
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r14
  char v22; // r13
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  char flag; // bl
  char v28; // al
  char v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // r12
  char v39; // bp
  _BYTE *v40; // r13
  __int64 v41; // rax
  __int128 v42; // xmm1
  __int64 v43; // rcx
  __int64 result; // rax
  __int64 v45; // r12
  void *v46; // r13
  size_t v47; // r13
  _BYTE *v48; // r14
  void *v49; // rbx
  size_t v50; // rdx
  size_t v51; // r12
  const void *v52; // rax
  size_t v53; // rdx
  size_t v54; // rdx
  const void *v55; // r15
  size_t v56; // rbp
  void *v57; // r13
  void *v58; // r15
  __int64 v59; // rax
  __int64 v60; // rcx
  __int128 v61; // xmm0
  __int64 v62; // rcx
  __int64 v63; // rsi
  int v64; // edx
  __int64 v65; // rax
  __int64 v66; // rcx
  char **v67; // rdx
  char **v68; // [rsp+8h] [rbp-300h] BYREF
  __int64 v69; // [rsp+10h] [rbp-2F8h]
  void *dest; // [rsp+18h] [rbp-2F0h]
  __int64 v71; // [rsp+20h] [rbp-2E8h]
  __int64 v72; // [rsp+28h] [rbp-2E0h]
  void *v73; // [rsp+38h] [rbp-2D0h]
  __int128 v74; // [rsp+40h] [rbp-2C8h] BYREF
  unsigned __int64 v75; // [rsp+50h] [rbp-2B8h]
  __int64 v76; // [rsp+58h] [rbp-2B0h] BYREF
  _BYTE v77[64]; // [rsp+60h] [rbp-2A8h]
  __int64 v78; // [rsp+A0h] [rbp-268h]
  size_t v79; // [rsp+A8h] [rbp-260h]
  __int64 v80; // [rsp+B0h] [rbp-258h]
  __int64 v81; // [rsp+B8h] [rbp-250h]
  _BYTE v82[24]; // [rsp+C0h] [rbp-248h]
  __int64 v83; // [rsp+D8h] [rbp-230h]
  __int128 v84; // [rsp+E0h] [rbp-228h]
  __int64 v85; // [rsp+F0h] [rbp-218h]
  const char *v86; // [rsp+F8h] [rbp-210h] BYREF
  __int128 src; // [rsp+100h] [rbp-208h]
  __int128 v88; // [rsp+110h] [rbp-1F8h] BYREF
  __m256i *v89; // [rsp+120h] [rbp-1E8h]
  __int64 (__fastcall *v90)(); // [rsp+128h] [rbp-1E0h]
  __int64 v91; // [rsp+130h] [rbp-1D8h]
  unsigned __int64 v92; // [rsp+138h] [rbp-1D0h] BYREF
  __int64 v93; // [rsp+140h] [rbp-1C8h]
  unsigned __int64 v94; // [rsp+148h] [rbp-1C0h]
  __int128 v95; // [rsp+150h] [rbp-1B8h]
  unsigned __int64 v96; // [rsp+160h] [rbp-1A8h]
  __int128 v97; // [rsp+168h] [rbp-1A0h] BYREF
  __int64 v98; // [rsp+178h] [rbp-190h]
  _BYTE v99[8]; // [rsp+180h] [rbp-188h] BYREF
  unsigned __int64 v100; // [rsp+188h] [rbp-180h]
  __m256i v101; // [rsp+190h] [rbp-178h] BYREF
  __int128 v102; // [rsp+1B0h] [rbp-158h]
  __int128 v103; // [rsp+1C0h] [rbp-148h]
  __int128 v104; // [rsp+1D8h] [rbp-130h] BYREF
  __int64 v105; // [rsp+1E8h] [rbp-120h]
  __int128 v106; // [rsp+1F0h] [rbp-118h]
  __int128 v107; // [rsp+200h] [rbp-108h]
  __int128 v108; // [rsp+210h] [rbp-F8h]
  __int64 v109; // [rsp+220h] [rbp-E8h]
  __int128 v110; // [rsp+230h] [rbp-D8h]
  __int128 v111; // [rsp+240h] [rbp-C8h]
  __int128 v112; // [rsp+250h] [rbp-B8h]
  __int64 v113; // [rsp+260h] [rbp-A8h]
  __int128 v114; // [rsp+270h] [rbp-98h]
  __int64 v115; // [rsp+280h] [rbp-88h]
  __int128 v116; // [rsp+288h] [rbp-80h]
  unsigned __int64 v117; // [rsp+298h] [rbp-70h]
  __int128 v118; // [rsp+2A0h] [rbp-68h]
  __int64 v119; // [rsp+2B0h] [rbp-58h]
  __int128 v120[4]; // [rsp+2C0h] [rbp-48h] BYREF

  v91 = a1;
  v73 = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v76,
    a2,
    &anon_aaac0ddc4ff511c8d0d06f52b75d74e5_45_llvm_5208339479224688215,
    4LL);
  v86 = (const char *)&anon_aaac0ddc4ff511c8d0d06f52b75d74e5_45_llvm_5208339479224688215;
  *(_QWORD *)&src = 4LL;
  if ( v76 )
  {
    v103 = *(_OWORD *)&v77[48];
    v102 = *(_OWORD *)&v77[32];
    v101 = *(__m256i *)v77;
    *(_QWORD *)&v88 = &v86;
    *((_QWORD *)&v88 + 1) = <&T as core::fmt::Display>::fmt;
    v89 = &v101;
    v90 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v68 = &anon_73956b1af7d4a202819aab566d5acd4a_5_llvm_8837819360504433751;
    v69 = 2LL;
    v72 = 0LL;
    dest = &v88;
    v71 = 2LL;
    core::panicking::panic_fmt(&v68, &off_10A868);
  }
  v2 = *(_QWORD *)v77;
  v106 = *(_OWORD *)&v77[8];
  v107 = *(_OWORD *)&v77[24];
  v108 = *(_OWORD *)&v77[40];
  v109 = *(_QWORD *)&v77[56];
  if ( !*(_QWORD *)v77 )
  {
    v20 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v20 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v17 = (unsigned __int64 *)v20;
    if ( (v20 & 7) == 0 )
    {
      *(_QWORD *)v20 = 8LL;
      v21 = 1LL;
      v22 = 0;
      v23 = 1LL;
LABEL_61:
      *(_QWORD *)&v95 = v21;
      *((_QWORD *)&v95 + 1) = v17;
      v96 = v23;
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               v73,
               anon_aaac0ddc4ff511c8d0d06f52b75d74e5_46_llvm_5208339479224688215,
               7LL,
               &off_10A898);
      v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              v73,
              anon_aaac0ddc4ff511c8d0d06f52b75d74e5_47_llvm_5208339479224688215,
              7LL,
              &off_10A8B0);
      if ( v17 )
      {
        v29 = v28;
        if ( ((unsigned __int8)v17 & 7) == 0 && v23 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v30 = *v17;
          if ( v23 == 1 )
          {
            v31 = *v17;
          }
          else
          {
            v32 = 8 * v23;
            v33 = 8LL;
            v31 = *v17;
            do
            {
              v34 = v30;
              v30 = v17[(unsigned __int64)v33 / 8];
              v35 = v30 - v34;
              if ( v30 < v34 )
                core::panicking::panic_const::panic_const_sub_overflow(
                  &anon_73956b1af7d4a202819aab566d5acd4a_58_llvm_8837819360504433751,
                  v35,
                  v33,
                  v31);
              if ( v31 <= v35 )
                v31 = v30 - v34;
              v33 += 8LL;
            }
            while ( v32 != v33 );
          }
          alloc::str::<impl str>::repeat(&v104, asc_1ECD5, 1LL, v31);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
            &v76,
            v73,
            anon_aaac0ddc4ff511c8d0d06f52b75d74e5_48_llvm_5208339479224688215,
            5LL);
          v86 = anon_aaac0ddc4ff511c8d0d06f52b75d74e5_48_llvm_5208339479224688215;
          *(_QWORD *)&src = 5LL;
          if ( v76 )
          {
            v103 = *(_OWORD *)&v77[48];
            v102 = *(_OWORD *)&v77[32];
            v101 = *(__m256i *)v77;
            *(_QWORD *)&v88 = &v86;
            *((_QWORD *)&v88 + 1) = <&T as core::fmt::Display>::fmt;
            v89 = &v101;
            v90 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v68 = &anon_73956b1af7d4a202819aab566d5acd4a_5_llvm_8837819360504433751;
            v69 = 2LL;
            v72 = 0LL;
            dest = &v88;
            v71 = 2LL;
            core::panicking::panic_fmt(&v68, &off_10A8E0);
          }
          v36 = *(_QWORD *)v77;
          v110 = *(_OWORD *)&v77[8];
          v111 = *(_OWORD *)&v77[24];
          v112 = *(_OWORD *)&v77[40];
          v113 = *(_QWORD *)&v77[56];
          if ( *(_QWORD *)v77 )
          {
            *(_QWORD *)&v77[48] = v113;
            *(_OWORD *)&v77[32] = v112;
            *(_OWORD *)&v77[16] = v111;
            *(_OWORD *)v77 = v110;
            v76 = v36;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v97, &v76);
          }
          else
          {
            v37 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
            if ( !v37 )
              alloc::alloc::handle_alloc_error(8LL, 24LL);
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v76, 1LL, 0LL);
            v38 = *(_QWORD *)v77;
            if ( v76 )
              alloc::raw_vec::handle_error(*(_QWORD *)v77, *(_QWORD *)&v77[8]);
            v39 = v22;
            v40 = *(_BYTE **)&v77[8];
            core::intrinsics::copy_nonoverlapping::precondition_check(asc_1ECD6, *(_QWORD *)&v77[8], 1LL, 1LL, 1LL);
            *v40 = 45;
            if ( (v37 & 7) != 0 )
              core::panicking::panic_misaligned_pointer_dereference(8LL, v37, &off_10A8F8);
            *(_QWORD *)v37 = v38;
            *(_QWORD *)(v37 + 8) = v40;
            *(_QWORD *)(v37 + 16) = 1LL;
            *(_QWORD *)&v97 = 1LL;
            *((_QWORD *)&v97 + 1) = v37;
            v98 = 1LL;
            v22 = v39;
          }
          v115 = v98;
          v114 = v97;
          v117 = v96;
          v116 = v95;
          v41 = v105;
          v119 = v105;
          v42 = v104;
          v118 = v104;
          v43 = v91;
          *(_OWORD *)v91 = v97;
          *(_QWORD *)(v43 + 64) = v41;
          *(_OWORD *)(v43 + 48) = v42;
          *(_QWORD *)(v43 + 16) = v115;
          *(_OWORD *)(v43 + 24) = v116;
          *(_QWORD *)(v43 + 40) = v117;
          *(_BYTE *)(v43 + 72) = flag;
          *(_BYTE *)(v43 + 73) = v29 ^ 1;
          result = v43;
          *(_BYTE *)(v43 + 74) = v22;
          return result;
        }
      }
LABEL_117:
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    }
    v67 = &off_10A880;
    goto LABEL_131;
  }
  *(_QWORD *)&v77[48] = v109;
  *(_OWORD *)&v77[32] = v108;
  *(_OWORD *)&v77[16] = v107;
  *(_OWORD *)v77 = v106;
  v76 = v2;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v92, &v76);
  if ( !v93 || (v93 & 7) != 0 || v94 >> 59 )
    goto LABEL_117;
  alloc::str::join_generic_copy(&v76, v93, v94, asc_1ECD4, 1LL);
  if ( !*(_QWORD *)v77 || *(__int64 *)&v77[8] < 0 )
    core::panicking::panic_nounwind(anon_aaac0ddc4ff511c8d0d06f52b75d74e5_33_llvm_5208339479224688215, 162LL);
  v80 = v76;
  v85 = *(_QWORD *)v77;
  started = core::str::<impl str>::trim_start_matches();
  if ( !v4 )
  {
    v24 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v24 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    if ( (v24 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v24, &off_10A850);
    *(_QWORD *)v24 = 8LL;
    v82[0] = 0;
    *(_QWORD *)&v82[8] = 1LL;
    *(_QWORD *)&v82[16] = v24;
    v83 = 1LL;
    goto LABEL_52;
  }
  *(_QWORD *)&v74 = 0LL;
  *((_QWORD *)&v74 + 1) = 8LL;
  v75 = 0LL;
  v76 = 0LL;
  *(_QWORD *)v77 = v4;
  *(_QWORD *)&v77[8] = started;
  *(_QWORD *)&v77[16] = v4;
  *(_QWORD *)&v77[24] = started;
  *(_QWORD *)&v77[32] = v4 + started;
  *(_QWORD *)&v77[40] = 0LL;
  *(_WORD *)&v77[48] = 1;
  v5 = 0;
  v79 = 0x8000000000000003LL;
  LODWORD(v78) = 0;
  while ( 2 )
  {
    v6 = v5;
    do
    {
LABEL_11:
      v7 = (unsigned __int8 *)core::str::iter::SplitInternal<P>::next(&v76);
      if ( !v7 )
      {
        if ( v75 == 1 )
        {
LABEL_50:
          LOBYTE(v6) = 0;
          goto LABEL_51;
        }
        if ( v75 )
        {
LABEL_51:
          *(_OWORD *)((char *)&v101.m256i_u32[1] + 3) = v74;
          *(__int64 *)((char *)&v101.m256i_i64[2] + 7) = v75;
          v82[0] = v6;
          *(_OWORD *)&v82[1] = *(_OWORD *)v101.m256i_i8;
          *(_QWORD *)&v82[16] = *((_QWORD *)&v74 + 1);
          v83 = v75;
LABEL_52:
          v81 = 0LL;
          v22 = v82[0];
          v21 = *(_QWORD *)&v82[8];
          v17 = *(unsigned __int64 **)&v82[16];
          v23 = v83;
          if ( v80 )
            _rust_dealloc(v85);
          if ( v92 )
          {
            if ( v92 > 0xFFFFFFFFFFFFFFFLL )
              goto LABEL_121;
            v25 = 16 * v92;
            v76 = v93;
            *(_QWORD *)v77 = 8LL;
            v26 = 16LL;
          }
          else
          {
            v26 = 8LL;
            v25 = 0LL;
          }
          *(_QWORD *)&v77[v26 - 8] = v25;
          if ( *(_QWORD *)v77 && *(_QWORD *)&v77[8] )
            _rust_dealloc(v76);
          goto LABEL_61;
        }
        v16 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
        v17 = (unsigned __int64 *)v16;
        if ( !v16 )
          alloc::alloc::handle_alloc_error(8LL, 8LL);
        if ( (v16 & 7) == 0 )
        {
          *(_QWORD *)v16 = 8LL;
          if ( (_QWORD)v74 )
          {
            if ( (unsigned __int64)v74 >> 61 )
              goto LABEL_133;
            v18 = 8 * v74;
            v68 = (char **)*((_QWORD *)&v74 + 1);
            v69 = 8LL;
            v19 = 2LL;
          }
          else
          {
            v19 = 1LL;
            v18 = 0LL;
          }
          (&v68)[v19] = (char **)v18;
          if ( v69 && dest )
            _rust_dealloc(v68);
          *(_QWORD *)&v74 = 1LL;
          *((_QWORD *)&v74 + 1) = v17;
          v75 = 1LL;
          goto LABEL_50;
        }
        v67 = &off_10A808;
LABEL_131:
        core::panicking::panic_misaligned_pointer_dereference(8LL, v17, v67);
      }
    }
    while ( !v8 );
    v5 = v6;
    while ( 1 )
    {
      v9 = *v7;
      LOBYTE(v6) = 2;
      if ( v9 == 43 )
        goto LABEL_15;
      if ( v9 != 47 )
        break;
      LOBYTE(v6) = 1;
LABEL_15:
      ++v7;
      v5 = v6;
      if ( !--v8 )
        goto LABEL_11;
    }
    core::str::converts::from_utf8(&v86, v7);
    if ( v86 )
    {
      v120[0] = src;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, v120, &unk_10A748, &off_10A820);
    }
    v10 = src;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v99, src, *((_QWORD *)&src + 1));
    if ( (v99[0] & 1) == 0 )
    {
      v11 = v100;
      v12 = 32LL;
      if ( !v100 )
      {
        v47 = v79;
        goto LABEL_98;
      }
      v13 = *((_QWORD *)&v74 + 1);
      if ( !*((_QWORD *)&v74 + 1) )
        goto LABEL_117;
      if ( (BYTE8(v74) & 7) != 0 )
        goto LABEL_117;
      v14 = v75;
      if ( v75 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_117;
      if ( v75 && *(_QWORD *)(*((_QWORD *)&v74 + 1) + 8 * v75 - 8) >= v100 )
      {
        v47 = 0x8000000000000005LL;
        goto LABEL_98;
      }
      if ( (v78 & 1) != 0 )
      {
        if ( (_BYTE)v5 == 1 )
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v68, 1LL, 0LL);
          v45 = v69;
          if ( !v68 )
          {
            v48 = dest;
            core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1ECD3, dest, 1LL, 1LL, 1LL);
            *v48 = 47;
            goto LABEL_96;
          }
LABEL_134:
          alloc::raw_vec::handle_error(v45, dest);
        }
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v68, 1LL, 0LL);
        v45 = v69;
        if ( v68 )
          goto LABEL_134;
        v48 = dest;
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1ECD2, dest, 1LL, 1LL, 1LL);
        *v48 = 43;
LABEL_96:
        *(_QWORD *)v82 = v45;
        *(_QWORD *)&v82[8] = v48;
        *(_QWORD *)&v82[16] = 1LL;
        v47 = 0x8000000000000002LL;
LABEL_97:
        v12 = 32LL;
        goto LABEL_98;
      }
      v15 = (unsigned __int8)v78;
      if ( (_BYTE)v5 )
        v15 = 1;
      LODWORD(v78) = v15;
      if ( v75 == (_QWORD)v74 )
      {
        alloc::raw_vec::RawVec<T,A>::grow_one(&v74);
        v13 = *((_QWORD *)&v74 + 1);
      }
      *(_QWORD *)(v13 + 8 * v14) = v11;
      v75 = v14 + 1;
      continue;
    }
    break;
  }
  if ( v99[1] == 2 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v68, *((_QWORD *)&v10 + 1), 0LL);
    v45 = v69;
    if ( v68 )
      goto LABEL_134;
    v46 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v10, dest, 1LL, 1LL, *((_QWORD *)&v10 + 1));
    memcpy(v46, (const void *)v10, *((size_t *)&v10 + 1));
    *(_QWORD *)v82 = v45;
    *(_QWORD *)&v82[8] = v46;
    *(_QWORD *)&v82[16] = *((_QWORD *)&v10 + 1);
    v47 = 0x8000000000000004LL;
    goto LABEL_97;
  }
  v49 = (void *)core::str::<impl str>::trim_start_matches(v10, *((_QWORD *)&v10 + 1));
  v51 = v50;
  LODWORD(v68) = 0;
  v52 = (const void *)core::char::methods::encode_utf8_raw(47LL, &v68, 4LL);
  if ( (v53 > v51 || bcmp(v52, v49, v53)) && !(unsigned __int8)core::str::<impl str>::starts_with(v49) )
  {
    <str as alloc::string::ToString>::to_string(&v88, v49, v51);
    *(_QWORD *)&v82[16] = v89;
    *(_OWORD *)v82 = v88;
    v12 = 32LL;
    v47 = 0x8000000000000000LL;
  }
  else
  {
    v55 = (const void *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          0LL,
                          1LL,
                          v49,
                          v51);
    if ( !v55 )
      core::str::slice_error_fail(v49, v51, 0LL, 1LL, &off_10A838);
    v56 = v54;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v68, v54, 0LL);
    v79 = v51;
    v45 = v69;
    if ( v68 )
      goto LABEL_134;
    v57 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v55, dest, 1LL, 1LL, v56);
    v73 = v57;
    memcpy(v57, v55, v56);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v68, v79, 0LL);
    v78 = v69;
    if ( v68 )
      alloc::raw_vec::handle_error(v78, dest);
    v58 = dest;
    v47 = v79;
    core::intrinsics::copy_nonoverlapping::precondition_check(v49, dest, 1LL, 1LL, v79);
    memcpy(v58, v49, v47);
    *(_QWORD *)v82 = v45;
    *(_QWORD *)&v82[8] = v73;
    *(_QWORD *)&v82[16] = v56;
    v83 = v78;
    *(_QWORD *)&v84 = v58;
    v12 = 48LL;
  }
LABEL_98:
  *(_QWORD *)&v82[v12 - 8] = v47;
  if ( !(_QWORD)v74 )
  {
    v60 = 1LL;
    v59 = 0LL;
    goto LABEL_102;
  }
  if ( (unsigned __int64)v74 >> 61 )
LABEL_133:
    core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_7_llvm_11417008648433573330, 69LL);
  v59 = 8 * v74;
  v68 = (char **)*((_QWORD *)&v74 + 1);
  v69 = 8LL;
  v60 = 2LL;
LABEL_102:
  (&v68)[v60] = (char **)v59;
  if ( v69 && dest )
    _rust_dealloc(v68);
  v61 = *(_OWORD *)&v82[8];
  v62 = v83;
  v63 = v91;
  *(_BYTE *)(v91 + 8) = v82[0];
  v64 = *(_DWORD *)&v82[4];
  *(_DWORD *)(v63 + 9) = *(_DWORD *)&v82[1];
  *(_DWORD *)(v63 + 12) = v64;
  *(_OWORD *)(v63 + 16) = v61;
  *(_QWORD *)(v63 + 32) = v62;
  *(_OWORD *)(v63 + 40) = v84;
  *(_QWORD *)v63 = 0x8000000000000000LL;
  if ( v80 )
    _rust_dealloc(v85);
  if ( !v92 )
  {
    v66 = 8LL;
    v65 = 0LL;
    goto LABEL_111;
  }
  if ( v92 > 0xFFFFFFFFFFFFFFFLL )
LABEL_121:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
  v65 = 16 * v92;
  v76 = v93;
  *(_QWORD *)v77 = 8LL;
  v66 = 16LL;
LABEL_111:
  *(_QWORD *)&v77[v66 - 8] = v65;
  if ( *(_QWORD *)v77 && *(_QWORD *)&v77[8] )
    _rust_dealloc(v76);
  return v63;
}
