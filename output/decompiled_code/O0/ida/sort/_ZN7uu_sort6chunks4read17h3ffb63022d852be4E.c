        __int64 a10)
{
  __int64 v11; // rsi
  size_t v12; // rbx
  size_t v13; // rcx
  char *v14; // r14
  const void *v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  char *v19; // r13
  char *v20; // rsi
  __int128 v21; // rax
  void *v22; // rcx
  unsigned __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rax
  char *v27; // r13
  __int64 (__fastcall *v28)(_QWORD, char *, char *); // rax
  char *v29; // rbx
  char *v30; // rdx
  __int64 (__fastcall *v31)(_QWORD, char *, char *); // rax
  char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // kr10_16
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 *result; // rax
  __int64 v50; // r14
  __int64 v51; // rdi
  bool v52; // cf
  char *v53; // r14
  _QWORD *v54; // r12
  char v55; // bp
  size_t v56; // r14
  char *v57; // rbx
  __int64 v58; // r15
  void *v59; // r15
  __int64 (__fastcall *v60)(); // r12
  __int64 (__fastcall *v61)(); // r15
  __int64 v62; // rbx
  __int64 (__fastcall **v63)(); // rax
  __int64 (__fastcall **v64)(); // r14
  __int64 (__fastcall *v65)(); // rax
  __int64 (__fastcall *v66)(); // rbx
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 (__fastcall *v72)(); // rax
  __int64 (__fastcall **v73)(); // r15
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  char **v84; // rdx
  char **v85; // rax
  char **v86; // rdi
  unsigned __int8 v87; // [rsp+Fh] [rbp-369h]
  void *dest[2]; // [rsp+10h] [rbp-368h] BYREF
  __int64 v89; // [rsp+20h] [rbp-358h]
  __int128 v90; // [rsp+30h] [rbp-348h] BYREF
  __m256i v91; // [rsp+40h] [rbp-338h]
  __int128 v92; // [rsp+60h] [rbp-318h]
  __m256i v93; // [rsp+70h] [rbp-308h]
  __int128 v94; // [rsp+90h] [rbp-2E8h]
  __int64 v95; // [rsp+A0h] [rbp-2D8h]
  __int128 v96; // [rsp+B0h] [rbp-2C8h] BYREF
  __int128 v97; // [rsp+C0h] [rbp-2B8h]
  __int128 v98; // [rsp+D0h] [rbp-2A8h]
  __int128 v99; // [rsp+E0h] [rbp-298h]
  char **v100; // [rsp+F0h] [rbp-288h]
  __int64 *v101; // [rsp+F8h] [rbp-280h]
  __int128 v102; // [rsp+100h] [rbp-278h]
  __int64 v103; // [rsp+110h] [rbp-268h]
  __int128 v104; // [rsp+120h] [rbp-258h]
  __int64 v105; // [rsp+130h] [rbp-248h]
  __int128 v106; // [rsp+140h] [rbp-238h]
  __int64 v107; // [rsp+150h] [rbp-228h]
  __int128 v108; // [rsp+160h] [rbp-218h]
  __int64 v109; // [rsp+170h] [rbp-208h]
  __int128 v110; // [rsp+180h] [rbp-1F8h] BYREF
  __int64 v111; // [rsp+190h] [rbp-1E8h]
  __int64 v112; // [rsp+1A0h] [rbp-1D8h]
  char **v113; // [rsp+1A8h] [rbp-1D0h]
  __int64 v114; // [rsp+1B0h] [rbp-1C8h]
  _QWORD *v115; // [rsp+1B8h] [rbp-1C0h]
  unsigned __int64 v116; // [rsp+1C0h] [rbp-1B8h]
  char *v117; // [rsp+1C8h] [rbp-1B0h] BYREF
  __int64 v118; // [rsp+1D0h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v119)(); // [rsp+1D8h] [rbp-1A0h]
  __int128 v120; // [rsp+1E0h] [rbp-198h] BYREF
  _BYTE v121[56]; // [rsp+1F0h] [rbp-188h]
  __int128 v122; // [rsp+230h] [rbp-148h]
  __int64 v123; // [rsp+240h] [rbp-138h]
  unsigned __int64 v124; // [rsp+250h] [rbp-128h]
  unsigned __int64 v125; // [rsp+258h] [rbp-120h]
  __int64 v126; // [rsp+260h] [rbp-118h]
  __int64 v127; // [rsp+268h] [rbp-110h] BYREF
  __int64 v128; // [rsp+270h] [rbp-108h]
  __int64 v129; // [rsp+278h] [rbp-100h]
  __int128 v130; // [rsp+280h] [rbp-F8h]
  __int128 v131; // [rsp+290h] [rbp-E8h]
  __int128 v132; // [rsp+2A0h] [rbp-D8h]
  __int128 v133; // [rsp+2B0h] [rbp-C8h]
  __int64 (__fastcall *v134)(); // [rsp+2C0h] [rbp-B8h]
  __int128 v135; // [rsp+2D0h] [rbp-A8h]
  __m256i v136; // [rsp+2E0h] [rbp-98h]
  __int128 v137; // [rsp+300h] [rbp-78h]
  __m256i v138; // [rsp+310h] [rbp-68h]
  __int128 v139; // [rsp+330h] [rbp-48h]
  __int64 v140; // [rsp+340h] [rbp-38h]

  v116 = a5;
  v126 = a4;
  v114 = a2;
  v103 = *((_QWORD *)a3 + 2);
  v102 = *a3;
  v105 = *((_QWORD *)a3 + 5);
  v104 = *(__int128 *)((char *)a3 + 24);
  v107 = *((_QWORD *)a3 + 8);
  v106 = a3[3];
  v109 = *((_QWORD *)a3 + 11);
  v108 = *(__int128 *)((char *)a3 + 72);
  v89 = *((_QWORD *)a3 + 14);
  *(_OWORD *)dest = a3[6];
  v11 = v89;
  v12 = a6[2];
  if ( v89 < v12 )
  {
    v13 = v12 + 10240;
    if ( v12 >= 0xFFFFFFFFFFFFD800LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_1D5400, v89, a3, v13);
    if ( v13 <= v89 )
    {
      v89 = v12 + 10240;
      v11 = v12 + 10240;
    }
    else
    {
      alloc::vec::Vec<T,A>::extend_with(dest, v13 - v89, 0LL);
      v12 = a6[2];
      v11 = v89;
    }
  }
  v14 = (char *)dest[1];
  if ( !dest[1] || v11 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_39_llvm_17008735617955824143, 166LL);
  if ( v11 < v12 )
    core::slice::index::slice_end_index_len_fail(v12, v11, &off_1D5418);
  v101 = a1;
  v15 = (const void *)a6[1];
  if ( !v15 )
LABEL_162:
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  core::intrinsics::copy_nonoverlapping::precondition_check(a6[1], dest[1], 1LL, 1LL, v12);
  memcpy(v14, v15, v12);
  if ( !dest[1] )
    goto LABEL_161;
  v16 = v89;
  if ( v89 < 0 )
    goto LABEL_161;
  v115 = a6;
  v17 = a6[2];
  v18 = v89 - v17;
  if ( v89 < v17 )
  {
    v84 = &off_1D54D8;
    goto LABEL_166;
  }
  v87 = a9;
  v19 = (char *)dest[1] + v17;
  v125 = v116 >> 1;
  v113 = &off_1D5580;
  v100 = &off_1D55E0;
  v124 = v89 - v17;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = v19;
          *(_QWORD *)&v21 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64))(a7[1] + 24LL))(*a7, v19, v18);
          v23 = *((_QWORD *)&v21 + 1);
          v130 = v21;
          if ( !(_QWORD)v21 )
            break;
          switch ( BYTE8(v21) & 3 )
          {
            case 0:
              *(_QWORD *)&v21 = 16LL;
              goto LABEL_21;
            case 1:
              *(_QWORD *)&v21 = 15LL;
LABEL_21:
              v24 = *(_BYTE *)(*((_QWORD *)&v21 + 1) + v21);
              break;
            case 2:
              v14 = 0LL;
              v24 = std::sys::pal::unix::decode_error_kind(HIDWORD(*((_QWORD *)&v21 + 1)));
              break;
            case 3:
              v14 = 0LL;
              v24 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(*((_QWORD *)&v21 + 1)));
              if ( v24 == 41 )
                core::hint::unreachable_unchecked::precondition_check();
              return result;
          }
          if ( v24 != 35 )
          {
            *(_QWORD *)&v96 = v23;
            *(_QWORD *)&v120 = 0LL;
            *((_QWORD *)&v120 + 1) = 1LL;
            *(_QWORD *)v121 = 0LL;
            *(_QWORD *)&v92 = 32LL;
            BYTE8(v92) = 3;
            *(_QWORD *)&v90 = 0LL;
            v91.m256i_i64[0] = 0LL;
            v91.m256i_i64[2] = (__int64)&v120;
            v91.m256i_i64[3] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
            if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v96, &v90) )
              core::result::unwrap_failed(
                anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
                55LL,
                &v127,
                &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
            v36 = v120;
            v37 = *(_QWORD *)v121;
            v38 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            v39 = v38;
            if ( !v38 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_OWORD *)v38 = v36;
            *(_QWORD *)(v38 + 16) = v37;
            *(_DWORD *)(v38 + 24) = 2;
            std::io::error::repr_bitpacked::decode_repr(&v90, v96);
            if ( (unsigned __int8)v90 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v90 + 8);
            v40 = v101;
            *v101 = v39;
            v40[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
            goto LABEL_58;
          }
          LOBYTE(v14) = 1;
          std::io::error::repr_bitpacked::decode_repr(&v90, v23);
          if ( (unsigned __int8)v90 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v90 + 8);
        }
        if ( !*((_QWORD *)&v21 + 1) )
          break;
        if ( v18 < *((_QWORD *)&v21 + 1) )
          goto LABEL_174;
        v19 += *((_QWORD *)&v21 + 1);
        v18 -= *((_QWORD *)&v21 + 1);
      }
      if ( v18 )
      {
        v50 = v89;
        v40 = v101;
        if ( v124 == v18 )
        {
          v18 = v124;
LABEL_101:
          v52 = v50 < v18;
          v53 = (char *)(v50 - v18);
          v54 = v115;
          if ( v52 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_1D5550, v20, *((_QWORD *)&v21 + 1), v22);
          v55 = 0;
          goto LABEL_107;
        }
        *(_QWORD *)&v21 = v89 - v18;
        if ( v89 < v18 )
        {
          v86 = &off_1D54F0;
        }
        else
        {
          *((_QWORD *)&v21 + 1) = v87;
          if ( v89 == v18 )
          {
            v86 = &off_1D5508;
          }
          else
          {
            if ( v89 < 0 )
              goto LABEL_175;
            v22 = dest[1];
            if ( !dest[1] )
              goto LABEL_175;
            v51 = v21 - 1;
            if ( v89 <= (unsigned __int64)(v21 - 1) )
              core::panicking::panic_bounds_check(v51, v89, &off_1D5520);
            if ( *((_BYTE *)dest[1] + v51) != v87 )
            {
              *((_BYTE *)dest[1] + v21) = BYTE8(v21);
              --v18;
              v50 = v89;
            }
            if ( v50 >= v18 )
            {
              if ( v50 >= 0 && dest[1] )
                goto LABEL_101;
LABEL_161:
              core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
            }
            v86 = &off_1D5538;
          }
        }
        core::panicking::panic_const::panic_const_sub_overflow(v86, v20, *((_QWORD *)&v21 + 1), v22);
      }
      v23 = v89;
      if ( v126 != 1 )
        break;
      v25 = v116 - v89;
      if ( v116 <= v89 )
        break;
      if ( v89 < v125 && (v25 = v89, v89 <= 0) )
      {
        v26 = 2 * v89;
        v89 *= 2LL;
      }
      else
      {
        alloc::vec::Vec<T,A>::extend_with(dest, v25, 0LL);
        v26 = v89;
      }
      if ( !dest[1] || v26 < 0 )
        goto LABEL_161;
      v18 = v26 - v23;
      if ( v26 < v23 )
      {
        v18 = v26;
        v85 = &off_1D5568;
LABEL_173:
        v100 = v85;
LABEL_174:
        core::slice::index::slice_start_index_len_fail(v23, v18, v100);
      }
      v19 = (char *)dest[1] + v23;
    }
    v27 = (char *)dest[1];
    if ( !dest[1] || v89 < 0 )
      goto LABEL_162;
    v28 = (__int64 (__fastcall *)(_QWORD, char *, char *))core::sync::atomic::atomic_load(
                                                            &memchr::arch::x86_64::memchr::memrchr_raw::FN,
                                                            0LL);
    v29 = &v27[v23];
    v112 = v28(v87, v27, v29);
    if ( v112 )
    {
      v14 = (char *)(v30 - v27);
      if ( v30 - v27 < 0 )
        goto LABEL_192;
      v29 = v30;
    }
    v31 = (__int64 (__fastcall *)(_QWORD, char *, char *))core::sync::atomic::atomic_load(
                                                            &memchr::arch::x86_64::memchr::memrchr_raw::FN,
                                                            0LL);
    v32 = v27;
    if ( v31(v87, v27, v29) )
      break;
    v23 = v89;
    v35 = v89 + 10240;
    if ( (unsigned __int64)v89 >= 0xFFFFFFFFFFFFD800LL )
      goto LABEL_190;
    if ( v35 <= (unsigned __int64)v89 )
    {
      v89 += 10240LL;
    }
    else
    {
      alloc::vec::Vec<T,A>::extend_with(dest, 10240LL, 0LL);
      v35 = v89;
    }
    if ( !dest[1] || v35 < 0 )
      goto LABEL_161;
    v18 = v35 - v23;
    if ( v35 < v23 )
    {
      v18 = v35;
      v85 = &off_1D5598;
      goto LABEL_173;
    }
    v19 = (char *)dest[1] + v23;
  }
  if ( v33 - (__int64)v27 < 0 )
LABEL_192:
    core::hint::unreachable_unchecked::precondition_check();
  v40 = v101;
  if ( !v112 )
    core::option::unwrap_failed(&off_1D55B0);
  v53 = v14 + 1;
  if ( !v53 )
  {
    v113 = &off_1D55C8;
LABEL_190:
    core::panicking::panic_const::panic_const_add_overflow(v113, v32, v33, v34);
  }
  v55 = 1;
  v54 = v115;
LABEL_107:
  v117 = v53;
  if ( !v54[1] || (__int64)v54[2] < 0 )
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
  v54[2] = 0LL;
  if ( !dest[1] || (v16 = v89, v89 < 0) )
LABEL_175:
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_8_llvm_976352915506230263, 162LL);
  v17 = (unsigned __int64)v53;
  v56 = v89 - (_QWORD)v53;
  if ( v89 < v17 )
  {
    v84 = &off_1D5430;
LABEL_166:
    core::slice::index::slice_start_index_len_fail(v17, v16, v84);
  }
  v57 = (char *)dest[1] + v17;
  core::slice::raw::from_raw_parts::precondition_check((char *)dest[1] + v17, 1LL, 1LL, v56);
  v58 = v54[2];
  if ( *v54 - v58 < v56 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v54, v54[2], v56);
    v58 = v54[2];
  }
  v59 = (void *)(v54[1] + v58);
  core::intrinsics::copy_nonoverlapping::precondition_check(v57, v59, 1LL, 1LL, v56);
  memcpy(v59, v57, v56);
  v54[2] += v56;
  if ( !v117 )
  {
    *((_BYTE *)v40 + 8) = v55;
    *v40 = 0LL;
LABEL_58:
    if ( dest[0] )
      _rust_dealloc(dest[1], dest[0], 1LL);
    if ( (_QWORD)v108 )
    {
      if ( (unsigned __int64)v108 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v41 = 16 * v108;
      *(_QWORD *)&v90 = *((_QWORD *)&v108 + 1);
      *((_QWORD *)&v90 + 1) = 8LL;
      v42 = 16LL;
    }
    else
    {
      v42 = 8LL;
      v41 = 0LL;
    }
    *(_QWORD *)((char *)&v90 + v42) = v41;
    if ( *((_QWORD *)&v90 + 1) && v91.m256i_i64[0] )
      _rust_dealloc(v90, v91.m256i_i64[0], *((_QWORD *)&v90 + 1));
    if ( (_QWORD)v106 )
    {
      if ( (unsigned __int64)v106 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v43 = 16 * v106;
      *(_QWORD *)&v90 = *((_QWORD *)&v106 + 1);
      *((_QWORD *)&v90 + 1) = 8LL;
      v44 = 16LL;
    }
    else
    {
      v44 = 8LL;
      v43 = 0LL;
    }
    *(_QWORD *)((char *)&v90 + v44) = v43;
    if ( *((_QWORD *)&v90 + 1) && v91.m256i_i64[0] )
      _rust_dealloc(v90, v91.m256i_i64[0], *((_QWORD *)&v90 + 1));
    if ( !(_QWORD)v104 )
    {
      v46 = 8LL;
      v45 = 0LL;
LABEL_78:
      *(_QWORD *)((char *)&v90 + v46) = v45;
      if ( *((_QWORD *)&v90 + 1) && v91.m256i_i64[0] )
        _rust_dealloc(v90, v91.m256i_i64[0], *((_QWORD *)&v90 + 1));
      if ( !(_QWORD)v102 )
      {
        v48 = 8LL;
        v47 = 0LL;
        goto LABEL_85;
      }
      if ( (unsigned __int64)v102 <= 0xAAAAAAAAAAAAAAALL )
      {
        v47 = 24 * v102;
        *(_QWORD *)&v90 = *((_QWORD *)&v102 + 1);
        *((_QWORD *)&v90 + 1) = 8LL;
        v48 = 16LL;
LABEL_85:
        *(_QWORD *)((char *)&v90 + v48) = v47;
        if ( *((_QWORD *)&v90 + 1) && v91.m256i_i64[0] )
          _rust_dealloc(v90, v91.m256i_i64[0], *((_QWORD *)&v90 + 1));
        return v40;
      }
LABEL_160:
      core::panicking::panic_nounwind(anon_bbfa63c375300e8ec948f413288f2077_22_llvm_2503978504656084376, 69LL);
    }
    if ( (unsigned __int64)v104 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v45 = 16 * v104;
      *(_QWORD *)&v90 = *((_QWORD *)&v104 + 1);
      *((_QWORD *)&v90 + 1) = 8LL;
      v46 = 16LL;
      goto LABEL_78;
    }
LABEL_169:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
  }
  v60 = (__int64 (__fastcall *)())dest[0];
  v61 = (__int64 (__fastcall *)())dest[1];
  v62 = v89;
  v135 = v104;
  v136.m256i_i64[0] = v105;
  *(_OWORD *)&v136.m256i_u64[1] = v102;
  v136.m256i_i64[3] = v103;
  *(_QWORD *)&v139 = &v117;
  v137 = v106;
  v138.m256i_i64[0] = v107;
  *(_OWORD *)&v138.m256i_u64[1] = v108;
  v138.m256i_i64[3] = v109;
  *((_QWORD *)&v139 + 1) = &a9;
  v140 = a10;
  v63 = (__int64 (__fastcall **)())_rust_alloc(120LL, 8LL);
  if ( !v63 )
    core::option::unwrap_failed(&off_1D55F8);
  v64 = v63;
  *v63 = v60;
  v63[1] = v61;
  v63[2] = (__int64 (__fastcall *)())v62;
  v119 = v63;
  v90 = v135;
  v91 = v136;
  v92 = v137;
  v93 = v138;
  v94 = v139;
  v95 = v140;
  v123 = v136.m256i_i64[0];
  v122 = v135;
  v111 = v136.m256i_i64[3];
  v110 = *(_OWORD *)&v136.m256i_u64[1];
  if ( !v61 || v62 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  if ( (unsigned __int64)v62 < *(_QWORD *)v94 )
    core::slice::index::slice_end_index_len_fail(*(_QWORD *)v94, v62, &off_1D5460);
  core::str::converts::from_utf8(&v127, v61, *(_QWORD *)v94);
  if ( !v127 )
  {
    *(_QWORD *)v121 = v123;
    v120 = v122;
    *(_OWORD *)&v121[8] = v92;
    *(__m256i *)&v121[24] = v93;
    uu_sort::chunks::parse_lines(v128, v129, &v110, &v120, (unsigned __int8)**((_BYTE **)&v94 + 1), v95);
    v66 = (__int64 (__fastcall *)())*((_QWORD *)&v110 + 1);
    v72 = (__int64 (__fastcall *)())v110;
    v73 = (__int64 (__fastcall **)())v111;
    v130 = v120;
    v131 = *(_OWORD *)v121;
    v132 = *(_OWORD *)&v121[16];
    v133 = *(_OWORD *)&v121[32];
    v134 = *(__int64 (__fastcall **)())&v121[48];
    if ( (_QWORD)v110 == 0x8000000000000000LL )
      goto LABEL_153;
    v64[14] = v134;
    v74 = v130;
    v75 = v131;
    v76 = v132;
    *((_OWORD *)v64 + 6) = v133;
    *((_OWORD *)v64 + 5) = v76;
    *((_OWORD *)v64 + 4) = v75;
    *((_OWORD *)v64 + 3) = v74;
    v64[3] = v72;
    v64[4] = v66;
    v64[5] = (__int64 (__fastcall *)())v73;
    goto LABEL_158;
  }
  LOBYTE(v96) = 8;
  *((_QWORD *)&v96 + 1) = v128;
  *(_QWORD *)&v97 = v129;
  v65 = (__int64 (__fastcall *)())alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  v66 = v65;
  if ( !v65 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v67 = v96;
  v68 = v97;
  v69 = v98;
  *((_OWORD *)v65 + 3) = v99;
  *((_OWORD *)v65 + 2) = v69;
  *((_OWORD *)v65 + 1) = v68;
  *(_OWORD *)v65 = v67;
  if ( !(_QWORD)v110 )
  {
    v71 = 8LL;
    v70 = 0LL;
    goto LABEL_128;
  }
  if ( (unsigned __int64)v110 > 0xAAAAAAAAAAAAAAALL )
    goto LABEL_160;
  v70 = 24 * v110;
  *(_QWORD *)&v96 = *((_QWORD *)&v110 + 1);
  *((_QWORD *)&v96 + 1) = 8LL;
  v71 = 16LL;
LABEL_128:
  *(_QWORD *)((char *)&v96 + v71) = v70;
  if ( *((_QWORD *)&v96 + 1) && (_QWORD)v97 )
    _rust_dealloc(v96, v97, *((_QWORD *)&v96 + 1));
  if ( !(_QWORD)v122 )
  {
    v78 = 8LL;
    v77 = 0LL;
    goto LABEL_135;
  }
  if ( (unsigned __int64)v122 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_169;
  v77 = 16 * v122;
  *(_QWORD *)&v96 = *((_QWORD *)&v122 + 1);
  *((_QWORD *)&v96 + 1) = 8LL;
  v78 = 16LL;
LABEL_135:
  *(_QWORD *)((char *)&v96 + v78) = v77;
  if ( *((_QWORD *)&v96 + 1) && (_QWORD)v97 )
    _rust_dealloc(v96, v97, *((_QWORD *)&v96 + 1));
  if ( !(_QWORD)v92 )
  {
    v80 = 8LL;
    v79 = 0LL;
    goto LABEL_142;
  }
  if ( (unsigned __int64)v92 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_160;
  v79 = 16 * v92;
  *(_QWORD *)&v96 = *((_QWORD *)&v92 + 1);
  *((_QWORD *)&v96 + 1) = 8LL;
  v80 = 16LL;
LABEL_142:
  *(_QWORD *)((char *)&v96 + v80) = v79;
  if ( *((_QWORD *)&v96 + 1) && (_QWORD)v97 )
    _rust_dealloc(v96, v97, *((_QWORD *)&v96 + 1));
  if ( !v93.m256i_i64[1] )
  {
    v82 = 8LL;
    v81 = 0LL;
    goto LABEL_149;
  }
  if ( v93.m256i_i64[1] > 0xFFFFFFFFFFFFFFFuLL )
    goto LABEL_160;
  v81 = 16 * v93.m256i_i64[1];
  *(_QWORD *)&v96 = v93.m256i_i64[2];
  *((_QWORD *)&v96 + 1) = 8LL;
  v82 = 16LL;
LABEL_149:
  *(_QWORD *)((char *)&v96 + v82) = v81;
  if ( *((_QWORD *)&v96 + 1) && (_QWORD)v97 )
    _rust_dealloc(v96, v97, *((_QWORD *)&v96 + 1));
  v73 = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
  v64 = v119;
LABEL_153:
  if ( *v64 )
    _rust_dealloc(v64[1], *v64, 1LL);
  _rust_dealloc(v64, 120LL, 8LL);
  if ( v66 )
  {
    *v40 = (__int64)v66;
    v40[1] = (__int64)v73;
    return v40;
  }
  v64 = v73;
LABEL_158:
  v83 = std::sync::mpmc::Sender<T>::send(v114, v64);
  if ( v83 )
  {
    v118 = v83;
    core::result::unwrap_failed(aCalledResultUn_7, 43LL, &v118, &off_1D52E0, &off_1D5448);
  }
  *((_BYTE *)v40 + 8) = v55;
  *v40 = 0LL;
  return v40;
}
