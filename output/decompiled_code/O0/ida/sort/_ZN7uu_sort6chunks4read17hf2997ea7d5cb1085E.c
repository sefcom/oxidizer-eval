        __int64 a10)
{
  __int64 v12; // rsi
  size_t v13; // rbx
  size_t v14; // rcx
  void *v16; // r14
  const void *v17; // r15
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  char *v21; // r12
  unsigned __int64 v22; // rbx
  __int128 v23; // rax
  void *v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  char v30; // al
  char *v31; // r12
  __int64 (__fastcall *v32)(_QWORD, char *, char *); // rax
  char *v33; // r14
  char *v34; // rdx
  __int64 (__fastcall *v35)(_QWORD, char *, char *); // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 (__fastcall **v44)(); // r13
  __int64 v45; // rax
  __int64 v46; // rsi
  __int128 v47; // kr10_16
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  char v59; // bp
  _QWORD *v60; // rax
  size_t v61; // r15
  char *v62; // r14
  _QWORD *v63; // r12
  __int64 v64; // rbx
  void *v65; // rbx
  __int64 (__fastcall *v66)(); // r12
  __int64 (__fastcall *v67)(); // r15
  __int64 v68; // rbx
  __int64 (__fastcall **v69)(); // rax
  __int64 (__fastcall **v70)(); // r14
  __int64 (__fastcall *v71)(); // rax
  __int64 (__fastcall *v72)(); // rbx
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  __int64 v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 (__fastcall *v79)(); // rax
  __int64 (__fastcall **v80)(); // r15
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 result; // rax
  char **v94; // rdx
  char **v95; // rax
  char **v96; // rdx
  unsigned __int8 v97; // [rsp+Fh] [rbp-359h]
  void *dest[2]; // [rsp+10h] [rbp-358h] BYREF
  unsigned __int64 v99; // [rsp+20h] [rbp-348h]
  __int64 v100; // [rsp+30h] [rbp-338h]
  _QWORD *v101; // [rsp+38h] [rbp-330h]
  __int128 v102; // [rsp+40h] [rbp-328h] BYREF
  __m256i v103; // [rsp+50h] [rbp-318h]
  __int128 v104; // [rsp+70h] [rbp-2F8h]
  __m256i v105; // [rsp+80h] [rbp-2E8h]
  __int128 v106; // [rsp+A0h] [rbp-2C8h]
  __int64 v107; // [rsp+B0h] [rbp-2B8h]
  __int128 v108; // [rsp+C0h] [rbp-2A8h] BYREF
  __int128 v109; // [rsp+D0h] [rbp-298h]
  __int128 v110; // [rsp+E0h] [rbp-288h]
  __int128 v111; // [rsp+F0h] [rbp-278h]
  char **v112; // [rsp+100h] [rbp-268h]
  unsigned __int64 v113; // [rsp+108h] [rbp-260h]
  __int128 v114; // [rsp+110h] [rbp-258h]
  __int64 v115; // [rsp+120h] [rbp-248h]
  __int128 v116; // [rsp+130h] [rbp-238h]
  __int64 v117; // [rsp+140h] [rbp-228h]
  __int128 v118; // [rsp+150h] [rbp-218h]
  __int64 v119; // [rsp+160h] [rbp-208h]
  __int128 v120; // [rsp+170h] [rbp-1F8h]
  __int64 v121; // [rsp+180h] [rbp-1E8h]
  __int128 v122; // [rsp+190h] [rbp-1D8h] BYREF
  __int64 v123; // [rsp+1A0h] [rbp-1C8h]
  char **v124; // [rsp+1B0h] [rbp-1B8h]
  __int64 v125; // [rsp+1B8h] [rbp-1B0h]
  __int64 v126; // [rsp+1C0h] [rbp-1A8h]
  unsigned __int64 v127; // [rsp+1C8h] [rbp-1A0h] BYREF
  __int64 v128; // [rsp+1D0h] [rbp-198h] BYREF
  __int64 (__fastcall **v129)(); // [rsp+1D8h] [rbp-190h]
  __int128 v130; // [rsp+1E0h] [rbp-188h] BYREF
  _BYTE v131[56]; // [rsp+1F0h] [rbp-178h]
  __int128 v132; // [rsp+230h] [rbp-138h]
  __int64 v133; // [rsp+240h] [rbp-128h]
  unsigned __int64 v134; // [rsp+248h] [rbp-120h]
  __int64 v135; // [rsp+250h] [rbp-118h]
  unsigned __int64 v136; // [rsp+258h] [rbp-110h]
  __int128 v137; // [rsp+260h] [rbp-108h]
  __int128 v138; // [rsp+270h] [rbp-F8h]
  __int128 v139; // [rsp+280h] [rbp-E8h]
  __int128 v140; // [rsp+290h] [rbp-D8h]
  __int64 (__fastcall *v141)(); // [rsp+2A0h] [rbp-C8h]
  __int64 v142; // [rsp+2A8h] [rbp-C0h] BYREF
  __int64 v143; // [rsp+2B0h] [rbp-B8h]
  __int64 v144; // [rsp+2B8h] [rbp-B0h]
  __int128 v145; // [rsp+2C0h] [rbp-A8h]
  __m256i v146; // [rsp+2D0h] [rbp-98h]
  __int128 v147; // [rsp+2F0h] [rbp-78h]
  __m256i v148; // [rsp+300h] [rbp-68h]
  __int128 v149; // [rsp+320h] [rbp-48h]
  __int64 v150; // [rsp+330h] [rbp-38h]

  v125 = a2;
  v100 = a1;
  v115 = *((_QWORD *)a3 + 2);
  v114 = *a3;
  v117 = *((_QWORD *)a3 + 5);
  v116 = *(__int128 *)((char *)a3 + 24);
  v119 = *((_QWORD *)a3 + 8);
  v118 = a3[3];
  v121 = *((_QWORD *)a3 + 11);
  v120 = *(__int128 *)((char *)a3 + 72);
  v99 = *((_QWORD *)a3 + 14);
  *(_OWORD *)dest = a3[6];
  v12 = v99;
  v13 = a6[2];
  v101 = a6;
  if ( v99 < v13 )
  {
    v14 = v13 + 10240;
    if ( v13 >= 0xFFFFFFFFFFFFD800LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_1D5400, v99, a3, v14);
    if ( v14 <= v99 )
    {
      v99 = v13 + 10240;
      v12 = v13 + 10240;
    }
    else
    {
      alloc::vec::Vec<T,A>::extend_with(dest, v14 - v99, 0LL);
      v13 = a6[2];
      v12 = v99;
    }
  }
  v16 = dest[1];
  if ( !dest[1] || v12 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_39_llvm_17008735617955824143, 166LL);
  if ( v12 < v13 )
    core::slice::index::slice_end_index_len_fail(v13, v12, &off_1D5418);
  v17 = (const void *)v101[1];
  if ( !v17 )
LABEL_176:
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  core::intrinsics::copy_nonoverlapping::precondition_check(v101[1], dest[1], 1LL, 1LL, v13);
  memcpy(v16, v17, v13);
  if ( !dest[1] || (v18 = v99, (v99 & 0x8000000000000000LL) != 0LL) )
LABEL_173:
    core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
  v135 = a4;
  v19 = v101[2];
  v20 = v99 - v19;
  if ( v99 < v19 )
  {
    v96 = &off_1D54D8;
    goto LABEL_195;
  }
  v97 = a9;
  v21 = (char *)dest[1] + v19;
  v136 = a5 >> 1;
  v124 = &off_1D5580;
  v112 = &off_1D54F0;
  v113 = a5;
LABEL_14:
  v134 = v20;
  v22 = v20;
LABEL_16:
  while ( 2 )
  {
    while ( 1 )
    {
      *(_QWORD *)&v23 = (*(__int64 (__fastcall **)(__int64, char *, unsigned __int64))(a7[1] + 24))(*a7, v21, v22);
      v25 = *((_QWORD *)&v23 + 1);
      v137 = v23;
      v26 = v135;
      if ( !(_QWORD)v23 )
        break;
LABEL_17:
      switch ( v25 & 3 )
      {
        case 0uLL:
          v27 = 16LL;
          goto LABEL_36;
        case 1uLL:
          v27 = 15LL;
LABEL_36:
          v30 = *(_BYTE *)(v25 + v27);
          break;
        case 2uLL:
          v30 = std::sys::pal::unix::decode_error_kind(HIDWORD(v25));
          break;
        case 3uLL:
          v30 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v25));
          if ( v30 == 41 )
            core::hint::unreachable_unchecked::precondition_check();
          return result;
      }
      if ( v30 != 35 )
      {
        *(_QWORD *)&v108 = v25;
        *(_QWORD *)&v130 = 0LL;
        *((_QWORD *)&v130 + 1) = 1LL;
        *(_QWORD *)v131 = 0LL;
        *(_QWORD *)&v104 = 32LL;
        BYTE8(v104) = 3;
        *(_QWORD *)&v102 = 0LL;
        v103.m256i_i64[0] = 0LL;
        v103.m256i_i64[2] = (__int64)&v130;
        v103.m256i_i64[3] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
        if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v108, &v102) )
          core::result::unwrap_failed(
            anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
            55LL,
            &v142,
            &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
            &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
        v47 = v130;
        v48 = *(_QWORD *)v131;
        v49 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        v43 = v49;
        if ( !v49 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        *(_OWORD *)v49 = v47;
        *(_QWORD *)(v49 + 16) = v48;
        *(_DWORD *)(v49 + 24) = 2;
        std::io::error::repr_bitpacked::decode_repr(&v102, v108);
        if ( (unsigned __int8)v102 >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v102 + 8);
        v44 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
        goto LABEL_81;
      }
      std::io::error::repr_bitpacked::decode_repr(&v102, v25);
      if ( (unsigned __int8)v102 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v102 + 8);
      a5 = v113;
    }
    while ( 1 )
    {
      if ( v25 )
      {
        if ( v22 < v25 )
        {
          v94 = &off_1D55E0;
          goto LABEL_175;
        }
        v21 += v25;
        v22 -= v25;
        goto LABEL_16;
      }
      if ( v22 )
      {
        v39 = v134;
        if ( v134 != v22 )
        {
          v40 = v99;
          *(_QWORD *)&v23 = v99 - v22;
          if ( v99 < v22 )
            goto LABEL_185;
          *((_QWORD *)&v23 + 1) = v97;
          if ( v99 == v22 )
          {
            v95 = &off_1D5508;
            goto LABEL_184;
          }
          if ( (v99 & 0x8000000000000000LL) != 0LL )
            goto LABEL_180;
          v24 = dest[1];
          if ( !dest[1] )
            goto LABEL_180;
          v41 = v23 - 1;
          if ( v99 <= (__int64)v23 - 1 )
            core::panicking::panic_bounds_check(v41, v99, &off_1D5520);
          if ( *((_BYTE *)dest[1] + v41) != v97 )
          {
            *((_BYTE *)dest[1] + v23) = BYTE8(v23);
            --v22;
            v40 = v99;
          }
          v39 = v22;
          if ( v40 < v22 )
          {
            v95 = &off_1D5538;
LABEL_184:
            v112 = v95;
LABEL_185:
            core::panicking::panic_const::panic_const_sub_overflow(v112, v40, *((_QWORD *)&v23 + 1), v24);
          }
          if ( v40 < 0 || !dest[1] )
            goto LABEL_173;
          v21 = (char *)dest[1] + v40 - v22;
        }
        v42 = **a8;
        if ( v42 == (*a8)[1] )
          goto LABEL_113;
        v24 = (void *)(v42 + 24);
        **a8 = v42 + 24;
        if ( !v42 )
          goto LABEL_113;
        uu_sort::open((__int64 *)&v102, v42);
        v43 = *((_QWORD *)&v102 + 1);
        v44 = (__int64 (__fastcall **)())v103.m256i_i64[0];
        if ( (_QWORD)v102 )
        {
          if ( (_QWORD)v102 == 2LL )
          {
LABEL_113:
            v19 = v99 - v39;
            if ( v99 < v39 )
              core::panicking::panic_const::panic_const_sub_overflow(&off_1D5550, v42, *((_QWORD *)&v23 + 1), v24);
            v59 = 0;
            v60 = v101;
            goto LABEL_119;
          }
LABEL_81:
          v50 = v100;
          *(_QWORD *)v100 = v43;
          *(_QWORD *)(v50 + 8) = v44;
LABEL_82:
          if ( dest[0] )
            _rust_dealloc(dest[1], dest[0], 1LL);
          if ( !(_QWORD)v120 )
          {
            v52 = 8LL;
            v51 = 0LL;
            goto LABEL_88;
          }
          if ( (unsigned __int64)v120 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_179;
          v51 = 16 * v120;
          *(_QWORD *)&v102 = *((_QWORD *)&v120 + 1);
          *((_QWORD *)&v102 + 1) = 8LL;
          v52 = 16LL;
LABEL_88:
          *(_QWORD *)((char *)&v102 + v52) = v51;
          if ( *((_QWORD *)&v102 + 1) && v103.m256i_i64[0] )
            _rust_dealloc(v102, v103.m256i_i64[0], *((_QWORD *)&v102 + 1));
          if ( !(_QWORD)v118 )
          {
            v54 = 8LL;
            v53 = 0LL;
            goto LABEL_95;
          }
          if ( (unsigned __int64)v118 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_179;
          v53 = 16 * v118;
          *(_QWORD *)&v102 = *((_QWORD *)&v118 + 1);
          *((_QWORD *)&v102 + 1) = 8LL;
          v54 = 16LL;
LABEL_95:
          *(_QWORD *)((char *)&v102 + v54) = v53;
          if ( *((_QWORD *)&v102 + 1) && v103.m256i_i64[0] )
            _rust_dealloc(v102, v103.m256i_i64[0], *((_QWORD *)&v102 + 1));
          if ( !(_QWORD)v116 )
          {
            v56 = 8LL;
            v55 = 0LL;
            goto LABEL_102;
          }
          if ( (unsigned __int64)v116 <= 0xFFFFFFFFFFFFFFFLL )
          {
            v55 = 16 * v116;
            *(_QWORD *)&v102 = *((_QWORD *)&v116 + 1);
            *((_QWORD *)&v102 + 1) = 8LL;
            v56 = 16LL;
LABEL_102:
            *(_QWORD *)((char *)&v102 + v56) = v55;
            if ( *((_QWORD *)&v102 + 1) && v103.m256i_i64[0] )
              _rust_dealloc(v102, v103.m256i_i64[0], *((_QWORD *)&v102 + 1));
            if ( !(_QWORD)v114 )
            {
              v58 = 8LL;
              v57 = 0LL;
              goto LABEL_109;
            }
            if ( (unsigned __int64)v114 <= 0xAAAAAAAAAAAAAAALL )
            {
              v57 = 24 * v114;
              *(_QWORD *)&v102 = *((_QWORD *)&v114 + 1);
              *((_QWORD *)&v102 + 1) = 8LL;
              v58 = 16LL;
LABEL_109:
              *(_QWORD *)((char *)&v102 + v58) = v57;
              if ( *((_QWORD *)&v102 + 1) && v103.m256i_i64[0] )
                _rust_dealloc(v102, v103.m256i_i64[0], *((_QWORD *)&v102 + 1));
              return v100;
            }
LABEL_179:
            core::panicking::panic_nounwind(anon_bbfa63c375300e8ec948f413288f2077_22_llvm_2503978504656084376, 69LL);
          }
LABEL_191:
          core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
        }
        v45 = a7[1];
        if ( *(_QWORD *)v45 )
        {
          (*(void (__fastcall **)(__int64))v45)(*a7);
          v45 = a7[1];
        }
        v46 = *(_QWORD *)(v45 + 8);
        if ( v46 )
          _rust_dealloc(*a7, v46, *(_QWORD *)(v45 + 16));
        *a7 = v43;
        a7[1] = (__int64)v44;
        a5 = v113;
        v20 = v39;
        goto LABEL_14;
      }
      v25 = v99;
      if ( v26 != 1 )
        break;
      v29 = a5 - v99;
      if ( a5 <= v99 )
        break;
      if ( v99 < v136 && (v29 = v99, (__int64)v99 <= 0) )
      {
        v28 = 2 * v99;
        v99 *= 2LL;
      }
      else
      {
        alloc::vec::Vec<T,A>::extend_with(dest, v29, 0LL);
        v28 = v99;
      }
      if ( !dest[1] || v28 < 0 )
        goto LABEL_173;
      v22 = v28 - v25;
      if ( v28 < v25 )
      {
        v22 = v28;
        v94 = &off_1D5568;
        goto LABEL_175;
      }
      v21 = (char *)dest[1] + v25;
      *(_QWORD *)&v23 = (*(__int64 (__fastcall **)(__int64, char *, unsigned __int64))(a7[1] + 24))(
                          *a7,
                          (char *)dest[1] + v25,
                          v22);
      v25 = *((_QWORD *)&v23 + 1);
      v137 = v23;
      if ( (_QWORD)v23 )
        goto LABEL_17;
    }
    v31 = (char *)dest[1];
    if ( !dest[1] || (v99 & 0x8000000000000000LL) != 0LL )
      goto LABEL_176;
    v32 = (__int64 (__fastcall *)(_QWORD, char *, char *))core::sync::atomic::atomic_load(
                                                            &memchr::arch::x86_64::memchr::memrchr_raw::FN,
                                                            0LL);
    v33 = &v31[v25];
    v126 = v32(v97, v31, v33);
    if ( !v126 )
      goto LABEL_47;
    v22 = v34 - v31;
    if ( v34 - v31 < 0 )
      goto LABEL_205;
    v33 = v34;
LABEL_47:
    v35 = (__int64 (__fastcall *)(_QWORD, char *, char *))core::sync::atomic::atomic_load(
                                                            &memchr::arch::x86_64::memchr::memrchr_raw::FN,
                                                            0LL);
    if ( !v35(v97, v31, v33) )
    {
      v25 = v99;
      v38 = v99 + 10240;
      if ( v99 >= 0xFFFFFFFFFFFFD800LL )
        goto LABEL_204;
      if ( v38 <= v99 )
      {
        v99 += 10240LL;
      }
      else
      {
        alloc::vec::Vec<T,A>::extend_with(dest, 10240LL, 0LL);
        v38 = v99;
      }
      if ( !dest[1] || v38 < 0 )
        goto LABEL_173;
      v22 = v38 - v25;
      a5 = v113;
      if ( v38 >= v25 )
      {
        v21 = (char *)dest[1] + v25;
        continue;
      }
      v22 = v38;
      v94 = &off_1D5598;
LABEL_175:
      core::slice::index::slice_start_index_len_fail(v25, v22, v94);
    }
    break;
  }
  v60 = v101;
  if ( v36 - (__int64)v31 < 0 )
LABEL_205:
    core::hint::unreachable_unchecked::precondition_check();
  if ( !v126 )
    core::option::unwrap_failed(&off_1D55B0);
  v19 = v22 + 1;
  if ( !v19 )
  {
    v124 = &off_1D55C8;
LABEL_204:
    core::panicking::panic_const::panic_const_add_overflow(v124, v31, v36, v37);
  }
  v59 = 1;
LABEL_119:
  v127 = v19;
  if ( !v60[1] || (__int64)v60[2] < 0 )
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
  v60[2] = 0LL;
  if ( !dest[1] || (v18 = v99, (v99 & 0x8000000000000000LL) != 0LL) )
LABEL_180:
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_8_llvm_976352915506230263, 162LL);
  v61 = v99 - v19;
  if ( v99 < v19 )
  {
    v96 = &off_1D5430;
LABEL_195:
    core::slice::index::slice_start_index_len_fail(v19, v18, v96);
  }
  v62 = (char *)dest[1] + v19;
  core::slice::raw::from_raw_parts::precondition_check((char *)dest[1] + v19, 1LL, 1LL, v61);
  v63 = v101;
  v64 = v101[2];
  if ( *v101 - v64 < v61 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v101, v101[2], v61);
    v64 = v63[2];
  }
  v65 = (void *)(v63[1] + v64);
  core::intrinsics::copy_nonoverlapping::precondition_check(v62, v65, 1LL, 1LL, v61);
  memcpy(v65, v62, v61);
  v63[2] += v61;
  if ( !v127 )
  {
    v78 = (_QWORD *)v100;
    *(_BYTE *)(v100 + 8) = v59;
    *v78 = 0LL;
    goto LABEL_82;
  }
  v66 = (__int64 (__fastcall *)())dest[0];
  v67 = (__int64 (__fastcall *)())dest[1];
  v68 = v99;
  v145 = v116;
  v146.m256i_i64[0] = v117;
  *(_OWORD *)&v146.m256i_u64[1] = v114;
  v146.m256i_i64[3] = v115;
  *(_QWORD *)&v149 = &v127;
  v147 = v118;
  v148.m256i_i64[0] = v119;
  *(_OWORD *)&v148.m256i_u64[1] = v120;
  v148.m256i_i64[3] = v121;
  *((_QWORD *)&v149 + 1) = &a9;
  v150 = a10;
  v69 = (__int64 (__fastcall **)())_rust_alloc(120LL, 8LL);
  if ( !v69 )
    core::option::unwrap_failed(&off_1D55F8);
  v70 = v69;
  *v69 = v66;
  v69[1] = v67;
  v69[2] = (__int64 (__fastcall *)())v68;
  v129 = v69;
  v102 = v145;
  v103 = v146;
  v104 = v147;
  v105 = v148;
  v106 = v149;
  v107 = v150;
  v133 = v146.m256i_i64[0];
  v132 = v145;
  v123 = v146.m256i_i64[3];
  v122 = *(_OWORD *)&v146.m256i_u64[1];
  if ( !v67 || v68 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  if ( (unsigned __int64)v68 < *(_QWORD *)v106 )
    core::slice::index::slice_end_index_len_fail(*(_QWORD *)v106, v68, &off_1D5460);
  core::str::converts::from_utf8(&v142, v67, *(_QWORD *)v106);
  if ( !v142 )
  {
    *(_QWORD *)v131 = v133;
    v130 = v132;
    *(_OWORD *)&v131[8] = v104;
    *(__m256i *)&v131[24] = v105;
    uu_sort::chunks::parse_lines(v143, v144, &v122, &v130, (unsigned __int8)**((_BYTE **)&v106 + 1), v107);
    v72 = (__int64 (__fastcall *)())*((_QWORD *)&v122 + 1);
    v79 = (__int64 (__fastcall *)())v122;
    v80 = (__int64 (__fastcall **)())v123;
    v137 = v130;
    v138 = *(_OWORD *)v131;
    v139 = *(_OWORD *)&v131[16];
    v140 = *(_OWORD *)&v131[32];
    v141 = *(__int64 (__fastcall **)())&v131[48];
    if ( (_QWORD)v122 == 0x8000000000000000LL )
      goto LABEL_165;
    v70[14] = v141;
    v81 = v137;
    v82 = v138;
    v83 = v139;
    *((_OWORD *)v70 + 6) = v140;
    *((_OWORD *)v70 + 5) = v83;
    *((_OWORD *)v70 + 4) = v82;
    *((_OWORD *)v70 + 3) = v81;
    v70[3] = v79;
    v70[4] = v72;
    v70[5] = (__int64 (__fastcall *)())v80;
    goto LABEL_170;
  }
  LOBYTE(v108) = 8;
  *((_QWORD *)&v108 + 1) = v143;
  *(_QWORD *)&v109 = v144;
  v71 = (__int64 (__fastcall *)())alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  v72 = v71;
  if ( !v71 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v73 = v108;
  v74 = v109;
  v75 = v110;
  *((_OWORD *)v71 + 3) = v111;
  *((_OWORD *)v71 + 2) = v75;
  *((_OWORD *)v71 + 1) = v74;
  *(_OWORD *)v71 = v73;
  if ( !(_QWORD)v122 )
  {
    v77 = 8LL;
    v76 = 0LL;
    goto LABEL_140;
  }
  if ( (unsigned __int64)v122 > 0xAAAAAAAAAAAAAAALL )
    goto LABEL_179;
  v76 = 24 * v122;
  *(_QWORD *)&v108 = *((_QWORD *)&v122 + 1);
  *((_QWORD *)&v108 + 1) = 8LL;
  v77 = 16LL;
LABEL_140:
  *(_QWORD *)((char *)&v108 + v77) = v76;
  if ( *((_QWORD *)&v108 + 1) && (_QWORD)v109 )
    _rust_dealloc(v108, v109, *((_QWORD *)&v108 + 1));
  if ( !(_QWORD)v132 )
  {
    v85 = 8LL;
    v84 = 0LL;
    goto LABEL_147;
  }
  if ( (unsigned __int64)v132 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_191;
  v84 = 16 * v132;
  *(_QWORD *)&v108 = *((_QWORD *)&v132 + 1);
  *((_QWORD *)&v108 + 1) = 8LL;
  v85 = 16LL;
LABEL_147:
  *(_QWORD *)((char *)&v108 + v85) = v84;
  if ( *((_QWORD *)&v108 + 1) && (_QWORD)v109 )
    _rust_dealloc(v108, v109, *((_QWORD *)&v108 + 1));
  if ( !(_QWORD)v104 )
  {
    v87 = 8LL;
    v86 = 0LL;
    goto LABEL_154;
  }
  if ( (unsigned __int64)v104 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_179;
  v86 = 16 * v104;
  *(_QWORD *)&v108 = *((_QWORD *)&v104 + 1);
  *((_QWORD *)&v108 + 1) = 8LL;
  v87 = 16LL;
LABEL_154:
  *(_QWORD *)((char *)&v108 + v87) = v86;
  if ( *((_QWORD *)&v108 + 1) && (_QWORD)v109 )
    _rust_dealloc(v108, v109, *((_QWORD *)&v108 + 1));
  if ( !v105.m256i_i64[1] )
  {
    v89 = 8LL;
    v88 = 0LL;
    goto LABEL_161;
  }
  if ( v105.m256i_i64[1] > 0xFFFFFFFFFFFFFFFuLL )
    goto LABEL_179;
  v88 = 16 * v105.m256i_i64[1];
  *(_QWORD *)&v108 = v105.m256i_i64[2];
  *((_QWORD *)&v108 + 1) = 8LL;
  v89 = 16LL;
LABEL_161:
  *(_QWORD *)((char *)&v108 + v89) = v88;
  if ( *((_QWORD *)&v108 + 1) && (_QWORD)v109 )
    _rust_dealloc(v108, v109, *((_QWORD *)&v108 + 1));
  v80 = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
  v70 = v129;
LABEL_165:
  if ( *v70 )
    _rust_dealloc(v70[1], *v70, 1LL);
  _rust_dealloc(v70, 120LL, 8LL);
  if ( v72 )
  {
    v90 = v100;
    *(_QWORD *)v100 = v72;
    *(_QWORD *)(v90 + 8) = v80;
    return v100;
  }
  v70 = v80;
LABEL_170:
  v91 = std::sync::mpmc::Sender<T>::send(v125, v70);
  if ( v91 )
  {
    v128 = v91;
    core::result::unwrap_failed(aCalledResultUn_7, 43LL, &v128, &off_1D52E0, &off_1D5448);
  }
  v92 = (_QWORD *)v100;
  *(_BYTE *)(v100 + 8) = v59;
  *v92 = 0LL;
  return v100;
}
