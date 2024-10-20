        __int64 a10)
{
  __int64 v11; // rsi
  size_t v12; // rbx
  size_t v13; // rcx
  char *v14; // r14
  const void *v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r13
  char *v19; // r15
  char *v20; // rsi
  __int128 v21; // rax
  void *v22; // rcx
  unsigned __int64 v23; // rbp
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rax
  char *v27; // r15
  __int64 (__fastcall *v28)(_QWORD, char *, char *); // rax
  char *v29; // rbp
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
  __int64 *v40; // r12
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
  _QWORD *v51; // r15
  __int64 v52; // rdi
  bool v53; // cf
  char *v54; // r14
  char v55; // bp
  size_t v56; // r14
  char *v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // r13
  __int64 v60; // r15
  void *v61; // r15
  __int64 (__fastcall *v62)(); // r12
  __int64 (__fastcall *v63)(); // r15
  __int64 v64; // rbx
  __int64 (__fastcall **v65)(); // rax
  __int64 (__fastcall **v66)(); // r14
  __int64 (__fastcall *v67)(); // rax
  __int64 (__fastcall *v68)(); // rbx
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 (__fastcall *v74)(); // rax
  __int64 (__fastcall **v75)(); // r15
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  char **v86; // rdx
  char **v87; // rax
  char **v88; // rdi
  unsigned __int8 v89; // [rsp+Fh] [rbp-359h]
  void *dest[2]; // [rsp+10h] [rbp-358h] BYREF
  __int64 v91; // [rsp+20h] [rbp-348h]
  __int128 v92; // [rsp+30h] [rbp-338h] BYREF
  __m256i v93; // [rsp+40h] [rbp-328h]
  __int128 v94; // [rsp+60h] [rbp-308h]
  __m256i v95; // [rsp+70h] [rbp-2F8h]
  __int128 v96; // [rsp+90h] [rbp-2D8h]
  __int64 v97; // [rsp+A0h] [rbp-2C8h]
  __int64 *v98; // [rsp+A8h] [rbp-2C0h]
  __int128 v99; // [rsp+B0h] [rbp-2B8h] BYREF
  __int128 v100; // [rsp+C0h] [rbp-2A8h]
  __int128 v101; // [rsp+D0h] [rbp-298h]
  __int128 v102; // [rsp+E0h] [rbp-288h]
  char **v103; // [rsp+F0h] [rbp-278h]
  _QWORD *v104; // [rsp+F8h] [rbp-270h]
  __int128 v105; // [rsp+100h] [rbp-268h]
  __int64 v106; // [rsp+110h] [rbp-258h]
  __int128 v107; // [rsp+120h] [rbp-248h]
  __int64 v108; // [rsp+130h] [rbp-238h]
  __int128 v109; // [rsp+140h] [rbp-228h]
  __int64 v110; // [rsp+150h] [rbp-218h]
  __int128 v111; // [rsp+160h] [rbp-208h]
  __int64 v112; // [rsp+170h] [rbp-1F8h]
  __int128 v113; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v114; // [rsp+190h] [rbp-1D8h]
  __int64 v115; // [rsp+198h] [rbp-1D0h]
  char **v116; // [rsp+1A0h] [rbp-1C8h]
  __int64 v117; // [rsp+1A8h] [rbp-1C0h]
  unsigned __int64 v118; // [rsp+1B0h] [rbp-1B8h]
  char *v119; // [rsp+1B8h] [rbp-1B0h] BYREF
  __int64 v120; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v121)(); // [rsp+1C8h] [rbp-1A0h]
  __int128 v122; // [rsp+1D0h] [rbp-198h] BYREF
  _BYTE v123[56]; // [rsp+1E0h] [rbp-188h]
  __int128 v124; // [rsp+220h] [rbp-148h]
  __int64 v125; // [rsp+230h] [rbp-138h]
  unsigned __int64 v126; // [rsp+240h] [rbp-128h]
  unsigned __int64 v127; // [rsp+248h] [rbp-120h]
  __int64 v128; // [rsp+250h] [rbp-118h]
  __int64 v129; // [rsp+258h] [rbp-110h] BYREF
  __int64 v130; // [rsp+260h] [rbp-108h]
  __int64 v131; // [rsp+268h] [rbp-100h]
  __int128 v132; // [rsp+270h] [rbp-F8h]
  __int128 v133; // [rsp+280h] [rbp-E8h]
  __int128 v134; // [rsp+290h] [rbp-D8h]
  __int128 v135; // [rsp+2A0h] [rbp-C8h]
  __int64 (__fastcall *v136)(); // [rsp+2B0h] [rbp-B8h]
  __int128 v137; // [rsp+2C0h] [rbp-A8h]
  __m256i v138; // [rsp+2D0h] [rbp-98h]
  __int128 v139; // [rsp+2F0h] [rbp-78h]
  __m256i v140; // [rsp+300h] [rbp-68h]
  __int128 v141; // [rsp+320h] [rbp-48h]
  __int64 v142; // [rsp+330h] [rbp-38h]

  v118 = a5;
  v128 = a4;
  v117 = a2;
  v106 = *((_QWORD *)a3 + 2);
  v105 = *a3;
  v108 = *((_QWORD *)a3 + 5);
  v107 = *(__int128 *)((char *)a3 + 24);
  v110 = *((_QWORD *)a3 + 8);
  v109 = a3[3];
  v112 = *((_QWORD *)a3 + 11);
  v111 = *(__int128 *)((char *)a3 + 72);
  v91 = *((_QWORD *)a3 + 14);
  *(_OWORD *)dest = a3[6];
  v11 = v91;
  v12 = a6[2];
  if ( v91 < v12 )
  {
    v13 = v12 + 10240;
    if ( v12 >= 0xFFFFFFFFFFFFD800LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_1D5400, v91, a3, v13);
    if ( v13 <= v91 )
    {
      v91 = v12 + 10240;
      v11 = v12 + 10240;
    }
    else
    {
      alloc::vec::Vec<T,A>::extend_with(dest, v13 - v91, 0LL);
      v12 = a6[2];
      v11 = v91;
    }
  }
  v14 = (char *)dest[1];
  if ( !dest[1] || v11 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_39_llvm_17008735617955824143, 166LL);
  if ( v11 < v12 )
    core::slice::index::slice_end_index_len_fail(v12, v11, &off_1D5418);
  v104 = a6;
  v15 = (const void *)a6[1];
  if ( !v15 )
LABEL_162:
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  core::intrinsics::copy_nonoverlapping::precondition_check(v15, dest[1], 1LL, 1LL, v12);
  memcpy(v14, v15, v12);
  if ( !dest[1] )
    goto LABEL_161;
  v16 = v91;
  if ( v91 < 0 )
    goto LABEL_161;
  v98 = a1;
  v17 = v104[2];
  v18 = v91 - v17;
  if ( v91 < v17 )
  {
    v86 = &off_1D54D8;
    goto LABEL_166;
  }
  v89 = a9;
  v19 = (char *)dest[1] + v17;
  v127 = v118 >> 1;
  v116 = &off_1D5580;
  v103 = &off_1D55E0;
  v126 = v91 - v17;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = v19;
          *(_QWORD *)&v21 = <std::fs::File as std::io::Read>::read(a7, v19, v18);
          v23 = *((_QWORD *)&v21 + 1);
          v132 = v21;
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
            *(_QWORD *)&v99 = v23;
            *(_QWORD *)&v122 = 0LL;
            *((_QWORD *)&v122 + 1) = 1LL;
            *(_QWORD *)v123 = 0LL;
            *(_QWORD *)&v94 = 32LL;
            BYTE8(v94) = 3;
            *(_QWORD *)&v92 = 0LL;
            v93.m256i_i64[0] = 0LL;
            v93.m256i_i64[2] = (__int64)&v122;
            v93.m256i_i64[3] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_5_llvm_5503381581801417789;
            if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v99, &v92) )
              core::result::unwrap_failed(
                anon_f907210316a4f48a9c7de5c93e2a79ff_7_llvm_5503381581801417789,
                55LL,
                &v129,
                &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                &anon_f907210316a4f48a9c7de5c93e2a79ff_9_llvm_5503381581801417789);
            v36 = v122;
            v37 = *(_QWORD *)v123;
            v38 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            v39 = v38;
            if ( !v38 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_OWORD *)v38 = v36;
            *(_QWORD *)(v38 + 16) = v37;
            *(_DWORD *)(v38 + 24) = 2;
            std::io::error::repr_bitpacked::decode_repr(&v92, v99);
            if ( (unsigned __int8)v92 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v92 + 8);
            v40 = v98;
            *v98 = v39;
            v40[1] = (__int64)&anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
            goto LABEL_58;
          }
          LOBYTE(v14) = 1;
          std::io::error::repr_bitpacked::decode_repr(&v92, v23);
          if ( (unsigned __int8)v92 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v92 + 8);
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
        v50 = v91;
        v51 = v104;
        if ( v126 == v18 )
        {
          v18 = v126;
LABEL_101:
          v53 = v50 < v18;
          v54 = (char *)(v50 - v18);
          v40 = v98;
          if ( v53 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_1D5550, v20, *((_QWORD *)&v21 + 1), v22);
          v55 = 0;
          goto LABEL_107;
        }
        *(_QWORD *)&v21 = v91 - v18;
        if ( v91 < v18 )
        {
          v88 = &off_1D54F0;
        }
        else
        {
          *((_QWORD *)&v21 + 1) = v89;
          if ( v91 == v18 )
          {
            v88 = &off_1D5508;
          }
          else
          {
            if ( v91 < 0 )
              goto LABEL_175;
            v22 = dest[1];
            if ( !dest[1] )
              goto LABEL_175;
            v52 = v21 - 1;
            if ( v91 <= (unsigned __int64)(v21 - 1) )
              core::panicking::panic_bounds_check(v52, v91, &off_1D5520);
            if ( *((_BYTE *)dest[1] + v52) != v89 )
            {
              *((_BYTE *)dest[1] + v21) = BYTE8(v21);
              --v18;
              v50 = v91;
            }
            if ( v50 >= v18 )
            {
              if ( v50 >= 0 && dest[1] )
                goto LABEL_101;
LABEL_161:
              core::panicking::panic_nounwind(anon_60fe5ecc8a5a6f6a64f7c14fee2afab1_17_llvm_16066862953719322457, 166LL);
            }
            v88 = &off_1D5538;
          }
        }
        core::panicking::panic_const::panic_const_sub_overflow(v88, v20, *((_QWORD *)&v21 + 1), v22);
      }
      v23 = v91;
      if ( v128 != 1 )
        break;
      v25 = v118 - v91;
      if ( v118 <= v91 )
        break;
      if ( v91 < v127 && (v25 = v91, v91 <= 0) )
      {
        v26 = 2 * v91;
        v91 *= 2LL;
      }
      else
      {
        alloc::vec::Vec<T,A>::extend_with(dest, v25, 0LL);
        v26 = v91;
      }
      if ( !dest[1] || v26 < 0 )
        goto LABEL_161;
      v18 = v26 - v23;
      if ( v26 < v23 )
      {
        v18 = v26;
        v87 = &off_1D5568;
LABEL_173:
        v103 = v87;
LABEL_174:
        core::slice::index::slice_start_index_len_fail(v23, v18, v103);
      }
      v19 = (char *)dest[1] + v23;
    }
    v27 = (char *)dest[1];
    if ( !dest[1] || v91 < 0 )
      goto LABEL_162;
    v28 = (__int64 (__fastcall *)(_QWORD, char *, char *))core::sync::atomic::atomic_load(
                                                            &memchr::arch::x86_64::memchr::memrchr_raw::FN,
                                                            0LL);
    v29 = &v27[v23];
    v115 = v28(v89, v27, v29);
    if ( v115 )
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
    if ( v31(v89, v27, v29) )
      break;
    v23 = v91;
    v35 = v91 + 10240;
    if ( (unsigned __int64)v91 >= 0xFFFFFFFFFFFFD800LL )
      goto LABEL_190;
    if ( v35 <= (unsigned __int64)v91 )
    {
      v91 += 10240LL;
    }
    else
    {
      alloc::vec::Vec<T,A>::extend_with(dest, 10240LL, 0LL);
      v35 = v91;
    }
    if ( !dest[1] || v35 < 0 )
      goto LABEL_161;
    v18 = v35 - v23;
    if ( v35 < v23 )
    {
      v18 = v35;
      v87 = &off_1D5598;
      goto LABEL_173;
    }
    v19 = (char *)dest[1] + v23;
  }
  if ( v33 - (__int64)v27 < 0 )
LABEL_192:
    core::hint::unreachable_unchecked::precondition_check();
  v51 = v104;
  if ( !v115 )
    core::option::unwrap_failed(&off_1D55B0);
  v54 = v14 + 1;
  if ( !v54 )
  {
    v116 = &off_1D55C8;
LABEL_190:
    core::panicking::panic_const::panic_const_add_overflow(v116, v32, v33, v34);
  }
  v55 = 1;
  v40 = v98;
LABEL_107:
  v119 = v54;
  if ( !v51[1] || (__int64)v51[2] < 0 )
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
  v51[2] = 0LL;
  if ( !dest[1] || (v16 = v91, v91 < 0) )
LABEL_175:
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_8_llvm_976352915506230263, 162LL);
  v17 = (unsigned __int64)v54;
  v56 = v91 - (_QWORD)v54;
  if ( v91 < v17 )
  {
    v86 = &off_1D5430;
LABEL_166:
    core::slice::index::slice_start_index_len_fail(v17, v16, v86);
  }
  v57 = (char *)dest[1] + v17;
  core::slice::raw::from_raw_parts::precondition_check((char *)dest[1] + v17, 1LL, 1LL, v56);
  v58 = *v51;
  v59 = v51;
  v60 = v51[2];
  if ( v58 - v60 < v56 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v59, v60, v56);
    v60 = v59[2];
  }
  v61 = (void *)(v59[1] + v60);
  core::intrinsics::copy_nonoverlapping::precondition_check(v57, v61, 1LL, 1LL, v56);
  memcpy(v61, v57, v56);
  v59[2] += v56;
  if ( !v119 )
  {
    *((_BYTE *)v40 + 8) = v55;
    *v40 = 0LL;
LABEL_58:
    if ( dest[0] )
      _rust_dealloc(dest[1], dest[0], 1LL);
    if ( (_QWORD)v111 )
    {
      if ( (unsigned __int64)v111 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v41 = 16 * v111;
      *(_QWORD *)&v92 = *((_QWORD *)&v111 + 1);
      *((_QWORD *)&v92 + 1) = 8LL;
      v42 = 16LL;
    }
    else
    {
      v42 = 8LL;
      v41 = 0LL;
    }
    *(_QWORD *)((char *)&v92 + v42) = v41;
    if ( *((_QWORD *)&v92 + 1) && v93.m256i_i64[0] )
      _rust_dealloc(v92, v93.m256i_i64[0], *((_QWORD *)&v92 + 1));
    if ( (_QWORD)v109 )
    {
      if ( (unsigned __int64)v109 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_160;
      v43 = 16 * v109;
      *(_QWORD *)&v92 = *((_QWORD *)&v109 + 1);
      *((_QWORD *)&v92 + 1) = 8LL;
      v44 = 16LL;
    }
    else
    {
      v44 = 8LL;
      v43 = 0LL;
    }
    *(_QWORD *)((char *)&v92 + v44) = v43;
    if ( *((_QWORD *)&v92 + 1) && v93.m256i_i64[0] )
      _rust_dealloc(v92, v93.m256i_i64[0], *((_QWORD *)&v92 + 1));
    if ( !(_QWORD)v107 )
    {
      v46 = 8LL;
      v45 = 0LL;
LABEL_78:
      *(_QWORD *)((char *)&v92 + v46) = v45;
      if ( *((_QWORD *)&v92 + 1) && v93.m256i_i64[0] )
        _rust_dealloc(v92, v93.m256i_i64[0], *((_QWORD *)&v92 + 1));
      if ( !(_QWORD)v105 )
      {
        v48 = 8LL;
        v47 = 0LL;
        goto LABEL_85;
      }
      if ( (unsigned __int64)v105 <= 0xAAAAAAAAAAAAAAALL )
      {
        v47 = 24 * v105;
        *(_QWORD *)&v92 = *((_QWORD *)&v105 + 1);
        *((_QWORD *)&v92 + 1) = 8LL;
        v48 = 16LL;
LABEL_85:
        *(_QWORD *)((char *)&v92 + v48) = v47;
        if ( *((_QWORD *)&v92 + 1) && v93.m256i_i64[0] )
          _rust_dealloc(v92, v93.m256i_i64[0], *((_QWORD *)&v92 + 1));
        return v40;
      }
LABEL_160:
      core::panicking::panic_nounwind(anon_bbfa63c375300e8ec948f413288f2077_22_llvm_2503978504656084376, 69LL);
    }
    if ( (unsigned __int64)v107 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v45 = 16 * v107;
      *(_QWORD *)&v92 = *((_QWORD *)&v107 + 1);
      *((_QWORD *)&v92 + 1) = 8LL;
      v46 = 16LL;
      goto LABEL_78;
    }
LABEL_169:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
  }
  v62 = (__int64 (__fastcall *)())dest[0];
  v63 = (__int64 (__fastcall *)())dest[1];
  v64 = v91;
  v137 = v107;
  v138.m256i_i64[0] = v108;
  *(_OWORD *)&v138.m256i_u64[1] = v105;
  v138.m256i_i64[3] = v106;
  *(_QWORD *)&v141 = &v119;
  v139 = v109;
  v140.m256i_i64[0] = v110;
  *(_OWORD *)&v140.m256i_u64[1] = v111;
  v140.m256i_i64[3] = v112;
  *((_QWORD *)&v141 + 1) = &a9;
  v142 = a10;
  v65 = (__int64 (__fastcall **)())_rust_alloc(120LL, 8LL);
  if ( !v65 )
    core::option::unwrap_failed(&off_1D55F8);
  v66 = v65;
  *v65 = v62;
  v65[1] = v63;
  v65[2] = (__int64 (__fastcall *)())v64;
  v121 = v65;
  v92 = v137;
  v93 = v138;
  v94 = v139;
  v95 = v140;
  v96 = v141;
  v97 = v142;
  v125 = v138.m256i_i64[0];
  v124 = v137;
  v114 = v138.m256i_i64[3];
  v113 = *(_OWORD *)&v138.m256i_u64[1];
  if ( !v63 || v64 < 0 )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  v40 = v98;
  if ( (unsigned __int64)v64 < *(_QWORD *)v96 )
    core::slice::index::slice_end_index_len_fail(*(_QWORD *)v96, v64, &off_1D5460);
  core::str::converts::from_utf8(&v129, v63, *(_QWORD *)v96);
  if ( !v129 )
  {
    *(_QWORD *)v123 = v125;
    v122 = v124;
    *(_OWORD *)&v123[8] = v94;
    *(__m256i *)&v123[24] = v95;
    uu_sort::chunks::parse_lines(v130, v131, &v113, &v122, (unsigned __int8)**((_BYTE **)&v96 + 1), v97);
    v68 = (__int64 (__fastcall *)())*((_QWORD *)&v113 + 1);
    v74 = (__int64 (__fastcall *)())v113;
    v75 = (__int64 (__fastcall **)())v114;
    v132 = v122;
    v133 = *(_OWORD *)v123;
    v134 = *(_OWORD *)&v123[16];
    v135 = *(_OWORD *)&v123[32];
    v136 = *(__int64 (__fastcall **)())&v123[48];
    if ( (_QWORD)v113 == 0x8000000000000000LL )
      goto LABEL_153;
    v66[14] = v136;
    v76 = v132;
    v77 = v133;
    v78 = v134;
    *((_OWORD *)v66 + 6) = v135;
    *((_OWORD *)v66 + 5) = v78;
    *((_OWORD *)v66 + 4) = v77;
    *((_OWORD *)v66 + 3) = v76;
    v66[3] = v74;
    v66[4] = v68;
    v66[5] = (__int64 (__fastcall *)())v75;
    goto LABEL_158;
  }
  LOBYTE(v99) = 8;
  *((_QWORD *)&v99 + 1) = v130;
  *(_QWORD *)&v100 = v131;
  v67 = (__int64 (__fastcall *)())alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  v68 = v67;
  if ( !v67 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v69 = v99;
  v70 = v100;
  v71 = v101;
  *((_OWORD *)v67 + 3) = v102;
  *((_OWORD *)v67 + 2) = v71;
  *((_OWORD *)v67 + 1) = v70;
  *(_OWORD *)v67 = v69;
  if ( !(_QWORD)v113 )
  {
    v73 = 8LL;
    v72 = 0LL;
    goto LABEL_128;
  }
  if ( (unsigned __int64)v113 > 0xAAAAAAAAAAAAAAALL )
    goto LABEL_160;
  v72 = 24 * v113;
  *(_QWORD *)&v99 = *((_QWORD *)&v113 + 1);
  *((_QWORD *)&v99 + 1) = 8LL;
  v73 = 16LL;
LABEL_128:
  *(_QWORD *)((char *)&v99 + v73) = v72;
  if ( *((_QWORD *)&v99 + 1) && (_QWORD)v100 )
    _rust_dealloc(v99, v100, *((_QWORD *)&v99 + 1));
  if ( !(_QWORD)v124 )
  {
    v80 = 8LL;
    v79 = 0LL;
    goto LABEL_135;
  }
  if ( (unsigned __int64)v124 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_169;
  v79 = 16 * v124;
  *(_QWORD *)&v99 = *((_QWORD *)&v124 + 1);
  *((_QWORD *)&v99 + 1) = 8LL;
  v80 = 16LL;
LABEL_135:
  *(_QWORD *)((char *)&v99 + v80) = v79;
  if ( *((_QWORD *)&v99 + 1) && (_QWORD)v100 )
    _rust_dealloc(v99, v100, *((_QWORD *)&v99 + 1));
  if ( !(_QWORD)v94 )
  {
    v82 = 8LL;
    v81 = 0LL;
    goto LABEL_142;
  }
  if ( (unsigned __int64)v94 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_160;
  v81 = 16 * v94;
  *(_QWORD *)&v99 = *((_QWORD *)&v94 + 1);
  *((_QWORD *)&v99 + 1) = 8LL;
  v82 = 16LL;
LABEL_142:
  *(_QWORD *)((char *)&v99 + v82) = v81;
  if ( *((_QWORD *)&v99 + 1) && (_QWORD)v100 )
    _rust_dealloc(v99, v100, *((_QWORD *)&v99 + 1));
  if ( !v95.m256i_i64[1] )
  {
    v84 = 8LL;
    v83 = 0LL;
    goto LABEL_149;
  }
  if ( v95.m256i_i64[1] > 0xFFFFFFFFFFFFFFFuLL )
    goto LABEL_160;
  v83 = 16 * v95.m256i_i64[1];
  *(_QWORD *)&v99 = v95.m256i_i64[2];
  *((_QWORD *)&v99 + 1) = 8LL;
  v84 = 16LL;
LABEL_149:
  *(_QWORD *)((char *)&v99 + v84) = v83;
  if ( *((_QWORD *)&v99 + 1) && (_QWORD)v100 )
    _rust_dealloc(v99, v100, *((_QWORD *)&v99 + 1));
  v75 = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
  v66 = v121;
LABEL_153:
  if ( *v66 )
    _rust_dealloc(v66[1], *v66, 1LL);
  _rust_dealloc(v66, 120LL, 8LL);
  if ( v68 )
  {
    *v40 = (__int64)v68;
    v40[1] = (__int64)v75;
    return v40;
  }
  v66 = v75;
LABEL_158:
  v85 = std::sync::mpmc::Sender<T>::send(v117, v66);
  if ( v85 )
  {
    v120 = v85;
    core::result::unwrap_failed(aCalledResultUn_7, 43LL, &v120, &off_1D52E0, &off_1D5448);
  }
  *((_BYTE *)v40 + 8) = v55;
  *v40 = 0LL;
  return v40;
}
