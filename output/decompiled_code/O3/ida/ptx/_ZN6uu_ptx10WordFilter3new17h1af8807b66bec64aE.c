__int64 __fastcall uu_ptx::WordFilter::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rcx
  __int128 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __m128i v14; // xmm0
  const __m128i *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __m128i v22; // xmm0
  char v23; // bp
  const __m128i *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  __m128i *v42; // rax
  __m128i v43; // xmm0
  __m128i *v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __m128i *v47; // rax
  __m128i v48; // xmm0
  bool v49; // zf
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // r12
  const __m128i *v55; // rax
  __m128i v56; // xmm0
  unsigned __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __m128i si128; // xmm0
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // r14
  char v70; // si
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm1
  __m128i v74; // xmm2
  unsigned __int64 v75; // rax
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  __m128i v79; // [rsp+0h] [rbp-218h] BYREF
  __m128i v80; // [rsp+10h] [rbp-208h] BYREF
  __m128i v81; // [rsp+20h] [rbp-1F8h] BYREF
  __int16 v82; // [rsp+30h] [rbp-1E8h]
  __int64 v83; // [rsp+38h] [rbp-1E0h]
  __int64 v84; // [rsp+48h] [rbp-1D0h]
  __m128i v85; // [rsp+50h] [rbp-1C8h] BYREF
  unsigned __int128 v86; // [rsp+60h] [rbp-1B8h]
  __m128i v87; // [rsp+70h] [rbp-1A8h]
  __int64 v88; // [rsp+88h] [rbp-190h]
  int fd[4]; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int128 v90; // [rsp+A0h] [rbp-178h]
  __int64 v91; // [rsp+B0h] [rbp-168h]
  __m128i *v92; // [rsp+B8h] [rbp-160h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+C0h] [rbp-158h]
  __m128i *v94; // [rsp+C8h] [rbp-150h]
  __int64 (__fastcall *v95)(); // [rsp+D0h] [rbp-148h]
  __int64 v96; // [rsp+D8h] [rbp-140h]
  __m128i v97; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v98; // [rsp+F0h] [rbp-128h]
  __int64 v99; // [rsp+F8h] [rbp-120h]
  __int64 v100; // [rsp+100h] [rbp-118h]
  __int64 v101; // [rsp+108h] [rbp-110h]
  __m128i v102; // [rsp+110h] [rbp-108h]
  unsigned __int128 v103; // [rsp+120h] [rbp-F8h]
  __m128i v104; // [rsp+130h] [rbp-E8h]
  __int128 v105; // [rsp+148h] [rbp-D0h] BYREF
  __int128 v106; // [rsp+158h] [rbp-C0h]
  __m128i v107; // [rsp+168h] [rbp-B0h]
  __m128i v108; // [rsp+178h] [rbp-A0h] BYREF
  __int128 v109; // [rsp+188h] [rbp-90h]
  __m128i v110; // [rsp+198h] [rbp-80h]
  _QWORD v111[2]; // [rsp+1A8h] [rbp-70h] BYREF
  _QWORD v112[3]; // [rsp+1B8h] [rbp-60h] BYREF
  __m128i v113; // [rsp+1D0h] [rbp-48h]
  __int64 v114; // [rsp+1E0h] [rbp-38h]

  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  if ( !v8 )
  {
LABEL_8:
    v15 = (const __m128i *)core::ops::function::FnOnce::call_once(0LL);
    if ( !v15 )
      core::result::unwrap_failed(
        anon_0fac0acfa44b1c763f97960489e7b454_5_llvm_1023991217553494206,
        70LL,
        &v79,
        &anon_0fac0acfa44b1c763f97960489e7b454_9_llvm_1023991217553494206,
        &anon_0fac0acfa44b1c763f97960489e7b454_7_llvm_1023991217553494206);
    v14 = _mm_loadu_si128(v15);
    ++v15->m128i_i64[0];
    v10 = &anon_585b1728ec6435d03fbe081b5952853c_1_llvm_8033991318799290767;
    v3 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
LABEL_10:
    *(_QWORD *)&v105 = v10;
    *((_QWORD *)&v105 + 1) = v11;
    *(_QWORD *)&v106 = v13;
    *((_QWORD *)&v106 + 1) = v12;
    v107 = v14;
    v101 = v3;
    v96 = a3;
    if ( v8 )
    {
      v16 = 0LL;
      while ( *(_QWORD *)(v7 + v16 + 8) != 11LL
           || anon_e23289579c9441ef21ddb87efb4b8a29_21_llvm_16528050568364581840 ^ **(_QWORD **)(v7 + v16) | *(__int64 *)((char *)&anon_e23289579c9441ef21ddb87efb4b8a29_21_llvm_16528050568364581840 + 3) ^ *(_QWORD *)(*(_QWORD *)(v7 + v16) + 3LL) )
      {
        v16 += 16LL;
        if ( 16 * v8 == v16 )
          goto LABEL_17;
      }
      uu_ptx::read_word_filter_file(
        &v79,
        a2,
        (__int64)&anon_e23289579c9441ef21ddb87efb4b8a29_21_llvm_16528050568364581840,
        11LL);
      v19 = v79.m128i_i64[1];
      v18 = (__int128 *)v79.m128i_i64[0];
      if ( !v79.m128i_i64[0] )
      {
        v85.m128i_i64[0] = 0LL;
        v85.m128i_i64[1] = 1LL;
        v86 = __PAIR128__(v79.m128i_u64[1], 0LL);
        v44 = (__m128i *)_rust_alloc(32LL, 8LL);
        if ( !v44 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v45 = _mm_loadu_si128(&v85);
        v44[1] = (__m128i)v86;
        *v44 = v45;
        *(_QWORD *)(a1 + 8) = v44;
        *(_QWORD *)(a1 + 16) = &anon_0fac0acfa44b1c763f97960489e7b454_4_llvm_1023991217553494206;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_51;
      }
      v20 = v80.m128i_i64[1];
      v21 = v80.m128i_i64[0];
      v22 = _mm_loadu_si128(&v81);
      v23 = 1;
    }
    else
    {
LABEL_17:
      v24 = (const __m128i *)core::ops::function::FnOnce::call_once(0LL);
      if ( !v24 )
        core::result::unwrap_failed(
          anon_0fac0acfa44b1c763f97960489e7b454_5_llvm_1023991217553494206,
          70LL,
          &v79,
          &anon_0fac0acfa44b1c763f97960489e7b454_9_llvm_1023991217553494206,
          &anon_0fac0acfa44b1c763f97960489e7b454_7_llvm_1023991217553494206);
      v22 = _mm_loadu_si128(v24);
      ++v24->m128i_i64[0];
      v18 = &anon_585b1728ec6435d03fbe081b5952853c_1_llvm_8033991318799290767;
      v23 = 0;
      v20 = 0LL;
      v19 = 0LL;
      v21 = 0LL;
    }
    v108.m128i_i64[0] = (__int64)v18;
    v108.m128i_i64[1] = v19;
    *(_QWORD *)&v109 = v21;
    *((_QWORD *)&v109 + 1) = v20;
    v110 = v22;
    if ( v8 )
    {
      v25 = 16 * v8;
      v26 = 0LL;
      while ( *(_QWORD *)(v7 + v26 + 8) != 10LL
           || anon_e23289579c9441ef21ddb87efb4b8a29_18_llvm_16528050568364581840 ^ **(_QWORD **)(v7 + v26) | *(_WORD *)(*(_QWORD *)(v7 + v26) + 8LL) ^ 0x656Cu )
      {
        v26 += 16LL;
        if ( v25 == v26 )
          goto LABEL_28;
      }
      v27 = 0LL;
      do
      {
        if ( *(_QWORD *)(v7 + v27 + 8) == 11LL
          && !(anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840 ^ **(_QWORD **)(v7 + v27) | *(__int64 *)((char *)&anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840 + 3) ^ *(_QWORD *)(*(_QWORD *)(v7 + v27) + 3LL)) )
        {
          goto LABEL_28;
        }
        v27 += 16LL;
      }
      while ( v25 != v27 );
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(fd);
      v111[0] = &anon_e23289579c9441ef21ddb87efb4b8a29_18_llvm_16528050568364581840;
      v111[1] = 10LL;
      if ( fd[0] != 2 )
      {
        v87.m128i_i64[0] = v91;
        v78 = _mm_loadu_si128((const __m128i *)fd);
        v86 = v90;
        v85 = v78;
        v92 = (__m128i *)v111;
        v93 = <&T as core::fmt::Display>::fmt;
        v94 = &v85;
        v95 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v79.m128i_i64[0] = (__int64)&anon_982ebfe6603d1d7445e24895863ba0e8_2_llvm_17676394313059082282;
        v79.m128i_i64[1] = 2LL;
        v81.m128i_i64[0] = 0LL;
        v80.m128i_i64[0] = (__int64)&v92;
        v80.m128i_i64[1] = 2LL;
        ((void (__fastcall __noreturn *)(__m128i *, char **, __int64, __int64, __int64, __int64))core::panicking::panic_fmt)(
          &v79,
          &anon_982ebfe6603d1d7445e24895863ba0e8_4_llvm_17676394313059082282,
          v37,
          v38,
          v39,
          v40);
      }
      if ( !*(_QWORD *)&fd[2] )
        core::option::expect_failed(aParsingOptions, 23LL, &off_27B348);
      v79.m128i_i64[0] = 0x1B600000000LL;
      v79.m128i_i32[2] = 1;
      v79.m128i_i16[6] = 0;
      std::fs::OpenOptions::_open(
        &v85,
        &v79,
        *(_QWORD *)(*(_QWORD *)&fd[2] + 8LL),
        *(_QWORD *)(*(_QWORD *)&fd[2] + 16LL));
      if ( v85.m128i_i32[0] )
      {
        v41 = v85.m128i_i64[1];
LABEL_49:
        v79.m128i_i64[0] = 0LL;
        v79.m128i_i64[1] = 1LL;
        v80.m128i_i64[0] = 0LL;
        v80.m128i_i64[1] = v41;
        v47 = (__m128i *)_rust_alloc(32LL, 8LL);
        if ( !v47 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v48 = _mm_loadu_si128(&v79);
        v47[1] = v80;
        *v47 = v48;
        *(_QWORD *)(a1 + 8) = v47;
        *(_QWORD *)(a1 + 16) = &anon_0fac0acfa44b1c763f97960489e7b454_4_llvm_1023991217553494206;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v108);
LABEL_51:
        <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v105);
        return a1;
      }
      fd[0] = v85.m128i_i32[1];
      v85.m128i_i64[0] = 0LL;
      v85.m128i_i64[1] = 1LL;
      *(_QWORD *)&v86 = 0LL;
      if ( <std::fs::File as std::io::Read>::read_to_string(fd, &v85) )
      {
        v41 = v46;
        if ( v85.m128i_i64[0] )
          _rust_dealloc(v85.m128i_i64[1], v85.m128i_i64[0], 1LL);
        close(fd[0]);
        goto LABEL_49;
      }
      v100 = v86;
      v49 = *(_QWORD *)(__readfsqword(0) - 64) == 0LL;
      v99 = v85.m128i_i64[1];
      if ( v49 )
      {
        v84 = std::sys::pal::unix::rand::hashmap_random_keys();
        v88 = v52;
        v53 = (_QWORD *)(__readfsqword(0) - 64);
        *v53 = 1LL;
        v51 = v84;
        v53[1] = v84;
        v53[2] = v88;
      }
      else
      {
        v50 = __readfsqword(0) - 64;
        v51 = *(_QWORD *)(v50 + 8);
        v88 = *(_QWORD *)(v50 + 16);
      }
      v84 = v51;
      *(_QWORD *)(__readfsqword(0) - 64 + 8) = v51 + 1;
      v79 = *(__m128i *)&off_27B1D0;
      v80 = _mm_loadu_si128((const __m128i *)&xmmword_27B1E0);
      v81.m128i_i64[0] = v84;
      v81.m128i_i64[1] = v88;
      v54 = v100;
      if ( (unsigned __int64)(v100 + 3) >= 4 )
        hashbrown::raw::RawTable<T,A>::reserve_rehash(&v79, (unsigned __int64)(v100 + 3) >> 2, &v81);
      <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(v99, v99 + v54, &v79);
      v41 = v79.m128i_i64[1];
      v84 = v79.m128i_i64[0];
      v88 = v80.m128i_i64[0];
      v97 = _mm_loadu_si128((const __m128i *)&v80.m128i_u64[1]);
      v98 = v81.m128i_i64[1];
      if ( v85.m128i_i64[0] )
        _rust_dealloc(v85.m128i_i64[1], v85.m128i_i64[0], 1LL);
      close(fd[0]);
      if ( !v84 )
        goto LABEL_49;
      v114 = v98;
      v113 = _mm_load_si128(&v97);
      v112[0] = v84;
      v112[1] = v41;
      v112[2] = v88;
      if ( *(_BYTE *)(v96 + 88) )
      {
        v55 = (const __m128i *)core::ops::function::FnOnce::call_once(0LL);
        if ( !v55 )
          core::result::unwrap_failed(
            anon_0fac0acfa44b1c763f97960489e7b454_5_llvm_1023991217553494206,
            70LL,
            &v79,
            &anon_0fac0acfa44b1c763f97960489e7b454_9_llvm_1023991217553494206,
            &anon_0fac0acfa44b1c763f97960489e7b454_7_llvm_1023991217553494206);
        v56 = _mm_loadu_si128(v55);
        ++v55->m128i_i64[0];
        v86 = xmmword_27BCB8;
        v85 = *(__m128i *)&anon_585b1728ec6435d03fbe081b5952853c_2_llvm_8033991318799290767;
        v87 = v56;
      }
      else
      {
        if ( *(_QWORD *)(__readfsqword(0) - 64) )
        {
          v57 = __readfsqword(0) - 64;
          v58 = *(_QWORD *)(v57 + 8);
          v84 = *(_QWORD *)(v57 + 16);
        }
        else
        {
          v59 = std::sys::pal::unix::rand::hashmap_random_keys();
          v84 = v60;
          v58 = v59;
          v61 = (_QWORD *)(__readfsqword(0) - 64);
          *v61 = 1LL;
          v61[1] = v58;
          v61[2] = v84;
        }
        v88 = v58 + 1;
        *(_QWORD *)(__readfsqword(0) - 64 + 8) = v58 + 1;
        v79 = *(__m128i *)&off_27B1D0;
        v80 = _mm_loadu_si128((const __m128i *)&xmmword_27B1E0);
        v81.m128i_i64[0] = v58;
        v81.m128i_i64[1] = v84;
        hashbrown::raw::RawTable<T,A>::reserve_rehash(&v79, 3LL, &v81);
        hashbrown::map::HashMap<K,V,S,A>::insert(&v79, 32LL);
        hashbrown::map::HashMap<K,V,S,A>::insert(&v79, 9LL);
        hashbrown::map::HashMap<K,V,S,A>::insert(&v79, 10LL);
        v62 = _mm_load_si128(&v79);
        v87 = v81;
        v86 = (unsigned __int128)v80;
        v85 = v62;
      }
      <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v85, v112);
      v63 = _mm_load_si128(&v85);
      v104 = v87;
      v103 = v86;
      v102 = v63;
    }
    else
    {
LABEL_28:
      v102.m128i_i64[0] = 0LL;
      if ( !v8 )
        goto LABEL_68;
    }
    v28 = 16 * v8;
    v29 = 0LL;
    while ( *(_QWORD *)(v7 + v29 + 8) != 11LL
         || anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840 ^ **(_QWORD **)(v7 + v29) | *(__int64 *)((char *)&anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840 + 3) ^ *(_QWORD *)(*(_QWORD *)(v7 + v29) + 3LL) )
    {
      v29 += 16LL;
      if ( v28 == v29 )
        goto LABEL_68;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(fd);
    v97.m128i_i64[0] = (__int64)&anon_e23289579c9441ef21ddb87efb4b8a29_17_llvm_16528050568364581840;
    v97.m128i_i64[1] = 11LL;
    if ( fd[0] != 2 )
    {
      v87.m128i_i64[0] = v91;
      v77 = _mm_loadu_si128((const __m128i *)fd);
      v86 = v90;
      v85 = v77;
      v92 = &v97;
      v93 = <&T as core::fmt::Display>::fmt;
      v94 = &v85;
      v95 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v79.m128i_i64[0] = (__int64)&anon_982ebfe6603d1d7445e24895863ba0e8_2_llvm_17676394313059082282;
      v79.m128i_i64[1] = 2LL;
      v81.m128i_i64[0] = 0LL;
      v80.m128i_i64[0] = (__int64)&v92;
      v80.m128i_i64[1] = 2LL;
      ((void (__fastcall __noreturn *)(__m128i *, char **, __int64, __int64, __int64, __int64))core::panicking::panic_fmt)(
        &v79,
        &anon_982ebfe6603d1d7445e24895863ba0e8_4_llvm_17676394313059082282,
        v30,
        v31,
        v17,
        v32);
    }
    if ( *(_QWORD *)&fd[2] && *(_QWORD *)(*(_QWORD *)&fd[2] + 16LL) )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v79);
      v33 = v79.m128i_i64[1];
      v34 = v79.m128i_i64[0];
      v35 = v80.m128i_i64[0];
      v36 = v102.m128i_i64[0];
LABEL_84:
      v70 = 0;
LABEL_85:
      v71 = v105;
      v72 = v106;
      *(__m128i *)(a1 + 56) = v107;
      *(_OWORD *)(a1 + 40) = v72;
      *(_OWORD *)(a1 + 24) = v71;
      v73 = v109;
      v74 = v110;
      *(__m128i *)(a1 + 72) = _mm_loadu_si128(&v108);
      *(_OWORD *)(a1 + 88) = v73;
      *(__m128i *)(a1 + 104) = v74;
      *(_QWORD *)a1 = v34;
      *(_QWORD *)(a1 + 8) = v33;
      *(_QWORD *)(a1 + 16) = v35;
      *(_BYTE *)(a1 + 120) = v101;
      *(_BYTE *)(a1 + 121) = v23;
      if ( !v70 )
      {
        if ( v36 )
        {
          if ( v102.m128i_i64[1] )
          {
            v75 = (4 * v102.m128i_i64[1] + 19) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v75 + v102.m128i_i64[1] != -17LL )
              _rust_dealloc(v36 - v75, v75 + v102.m128i_i64[1] + 17, 16LL);
          }
        }
      }
      return a1;
    }
LABEL_68:
    v36 = v102.m128i_i64[0];
    if ( v102.m128i_i64[0] )
    {
      v64 = v102.m128i_u64[1];
      v65 = v102.m128i_i64[1] + 1;
      si128 = _mm_load_si128((const __m128i *)v102.m128i_i64[0]);
      v67 = 0LL;
      if ( v102.m128i_i64[1] )
      {
        v68 = v65 >> 62;
        if ( !(v65 >> 62) )
        {
          v68 = 4 * v65;
          if ( 4 * v65 <= 0xFFFFFFFFFFFFFFF0LL )
          {
            v68 = (v68 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            v64 = v68 + v102.m128i_i64[1] + 17;
            if ( __CFADD__(v68, v102.m128i_i64[1] + 17) || (v67 = 16LL, v64 > 0x7FFFFFFFFFFFFFF0LL) )
              v67 = 0LL;
          }
        }
        v17 = v102.m128i_i64[0] - v68;
      }
      v79.m128i_i64[0] = v67;
      v79.m128i_i64[1] = v64;
      v80.m128i_i64[0] = v17;
      v80.m128i_i64[1] = v102.m128i_i64[0];
      v81.m128i_i64[0] = v102.m128i_i64[0] + 16;
      v81.m128i_i64[1] = v102.m128i_i64[0] + v65;
      v82 = ~(unsigned __int16)_mm_movemask_epi8(si128);
      v83 = *((_QWORD *)&v103 + 1);
      ((void (__fastcall *)(__m128i *, __m128i *))<alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter)(
        &v85,
        &v79);
      v92 = &v85;
      v93 = <alloc::string::String as core::fmt::Display>::fmt;
      v79.m128i_i64[0] = (__int64)&off_27B360;
      v79.m128i_i64[1] = 2LL;
      v81.m128i_i64[0] = 0LL;
      v80.m128i_i64[0] = (__int64)&v92;
      v80.m128i_i64[1] = 1LL;
      alloc::fmt::format::format_inner(fd, &v79);
      if ( v85.m128i_i64[0] )
        _rust_dealloc(v85.m128i_i64[1], v85.m128i_i64[0], 1LL);
      v34 = *(_QWORD *)fd;
      v33 = *(_QWORD *)&fd[2];
      v35 = v90;
      v70 = 1;
      goto LABEL_85;
    }
    if ( *(_BYTE *)(v96 + 88) )
    {
      v69 = 3LL;
      v33 = _rust_alloc(3LL, 1LL);
      if ( v33 )
      {
        *(_BYTE *)(v33 + 2) = 43;
        *(_WORD *)v33 = 30556;
        v35 = 3LL;
        v36 = 0LL;
        v34 = 3LL;
        goto LABEL_84;
      }
    }
    else
    {
      v69 = 7LL;
      v33 = _rust_alloc(7LL, 1LL);
      if ( v33 )
      {
        *(_DWORD *)(v33 + 3) = 727517705;
        *(_DWORD *)v33 = 153116251;
        v35 = 7LL;
        v36 = 0LL;
        v34 = 7LL;
        goto LABEL_84;
      }
    }
    alloc::raw_vec::handle_error(1LL, v69);
  }
  v9 = 0LL;
  while ( *(_QWORD *)(v7 + v9 + 8) != 9LL
       || anon_e23289579c9441ef21ddb87efb4b8a29_22_llvm_16528050568364581840 ^ **(_QWORD **)(v7 + v9) | *(_BYTE *)(*(_QWORD *)(v7 + v9) + 8LL) ^ 0x65u )
  {
    v9 += 16LL;
    if ( 16 * v8 == v9 )
      goto LABEL_8;
  }
  uu_ptx::read_word_filter_file(
    &v79,
    a2,
    (__int64)&anon_e23289579c9441ef21ddb87efb4b8a29_22_llvm_16528050568364581840,
    9LL);
  v11 = v79.m128i_i64[1];
  v10 = (__int128 *)v79.m128i_i64[0];
  if ( v79.m128i_i64[0] )
  {
    v12 = v80.m128i_i64[1];
    v13 = v80.m128i_i64[0];
    v14 = _mm_loadu_si128(&v81);
    LOBYTE(v3) = 1;
    goto LABEL_10;
  }
  v85.m128i_i64[0] = 0LL;
  v85.m128i_i64[1] = 1LL;
  v86 = __PAIR128__(v79.m128i_u64[1], 0LL);
  v42 = (__m128i *)_rust_alloc(32LL, 8LL);
  if ( !v42 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v43 = _mm_loadu_si128(&v85);
  v42[1] = (__m128i)v86;
  *v42 = v43;
  *(_QWORD *)(a1 + 8) = v42;
  *(_QWORD *)(a1 + 16) = &anon_0fac0acfa44b1c763f97960489e7b454_4_llvm_1023991217553494206;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
