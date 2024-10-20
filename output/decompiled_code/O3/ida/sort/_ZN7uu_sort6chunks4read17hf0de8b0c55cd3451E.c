        __int64 a10)
{
  __int64 v12; // rcx
  __int128 v13; // xmm0
  unsigned __int64 v14; // rbx
  size_t v15; // r15
  unsigned __int64 v16; // rax
  char *v17; // r13
  __int64 v18; // r14
  char *v19; // r14
  char *v20; // rdi
  unsigned __int64 v21; // rbp
  __int64 v22; // r12
  unsigned __int64 v23; // r14
  char *v24; // rbx
  char *v25; // rbx
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r14
  char *v32; // r15
  __int64 v33; // r14
  char *v34; // rbp
  char *v35; // rdi
  void *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // r14
  __int128 v42; // kr00_16
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rbx
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rax
  _QWORD *v51; // r12
  unsigned __int64 v52; // rdi
  char *v53; // r15
  bool v54; // cf
  __int64 v55; // rbp
  void *v56; // r15
  __int64 v57; // r12
  _QWORD *v58; // rax
  _QWORD *v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rsi
  _OWORD *v62; // rax
  _OWORD *v63; // r15
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  __int64 (__fastcall **v67)(); // r14
  __int64 v68; // rax
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  __int64 v72; // rax
  char **v73; // rax
  char **v74; // rax
  char **v75; // rdx
  char v76; // [rsp+Fh] [rbp-269h]
  void *dest[2]; // [rsp+10h] [rbp-268h] BYREF
  unsigned __int64 v78; // [rsp+20h] [rbp-258h]
  __int64 *v79; // [rsp+30h] [rbp-248h]
  __int64 v80; // [rsp+38h] [rbp-240h]
  __int64 v81; // [rsp+40h] [rbp-238h]
  __int64 v82; // [rsp+48h] [rbp-230h]
  __int64 v83; // [rsp+50h] [rbp-228h]
  __int64 v84; // [rsp+58h] [rbp-220h]
  __int64 v85; // [rsp+60h] [rbp-218h]
  void *v86; // [rsp+68h] [rbp-210h]
  char **v87; // [rsp+70h] [rbp-208h]
  __int64 v88; // [rsp+78h] [rbp-200h]
  __int128 v89; // [rsp+80h] [rbp-1F8h]
  __int128 v90; // [rsp+90h] [rbp-1E8h] BYREF
  __int128 v91; // [rsp+A0h] [rbp-1D8h]
  __int128 v92; // [rsp+B0h] [rbp-1C8h]
  __int128 v93; // [rsp+C0h] [rbp-1B8h]
  __int64 v94; // [rsp+D0h] [rbp-1A8h]
  _QWORD *v95; // [rsp+D8h] [rbp-1A0h]
  __int128 v96; // [rsp+E0h] [rbp-198h] BYREF
  __int64 v97; // [rsp+F0h] [rbp-188h]
  __int64 v98; // [rsp+F8h] [rbp-180h]
  __int64 v99; // [rsp+100h] [rbp-178h]
  __int64 v100; // [rsp+108h] [rbp-170h]
  unsigned __int64 v101; // [rsp+110h] [rbp-168h] BYREF
  __int64 v102; // [rsp+118h] [rbp-160h]
  __int64 v103; // [rsp+120h] [rbp-158h]
  __int64 v104; // [rsp+128h] [rbp-150h]
  unsigned __int64 v105; // [rsp+130h] [rbp-148h]
  unsigned __int64 v106; // [rsp+138h] [rbp-140h]
  _QWORD *v107; // [rsp+140h] [rbp-138h]
  __int128 v108; // [rsp+148h] [rbp-130h] BYREF
  __m256i v109; // [rsp+158h] [rbp-120h]
  __int64 v110; // [rsp+178h] [rbp-100h]
  __int64 v111; // [rsp+180h] [rbp-F8h]
  __int64 v112; // [rsp+188h] [rbp-F0h]
  __int64 v113; // [rsp+190h] [rbp-E8h]
  __int64 v114; // [rsp+198h] [rbp-E0h]
  __int64 v115; // [rsp+1A0h] [rbp-D8h]
  unsigned __int64 *v116; // [rsp+1A8h] [rbp-D0h]
  unsigned int *v117; // [rsp+1B0h] [rbp-C8h]
  __int64 v118; // [rsp+1B8h] [rbp-C0h]
  __int128 v119; // [rsp+1C0h] [rbp-B8h] BYREF
  __int128 v120; // [rsp+1D0h] [rbp-A8h]
  __int128 v121; // [rsp+1E0h] [rbp-98h]
  __int128 v122; // [rsp+1F0h] [rbp-88h]
  __int64 v123; // [rsp+200h] [rbp-78h]
  __int128 v124; // [rsp+210h] [rbp-68h] BYREF
  __m256i v125; // [rsp+220h] [rbp-58h]

  v88 = a4;
  v103 = a2;
  v89 = *a3;
  v12 = *((_QWORD *)a3 + 2);
  v82 = *((_QWORD *)a3 + 3);
  v85 = *((_QWORD *)a3 + 4);
  v100 = *((_QWORD *)a3 + 5);
  v81 = *((_QWORD *)a3 + 6);
  v84 = *((_QWORD *)a3 + 7);
  v99 = *((_QWORD *)a3 + 8);
  v13 = a3[6];
  v80 = *((_QWORD *)a3 + 9);
  v83 = *((_QWORD *)a3 + 10);
  v98 = *((_QWORD *)a3 + 11);
  v14 = *((_QWORD *)a3 + 14);
  v78 = v14;
  *(_OWORD *)dest = v13;
  v15 = *(_QWORD *)(a6 + 16);
  v104 = v12;
  if ( v14 < v15 )
  {
    v16 = v15 + 10240;
    v17 = (char *)(v15 + 10240 - v14);
    if ( v15 + 10240 > v14 )
    {
      if ( (char *)dest[0] - v14 < v17 )
      {
        v18 = a6;
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v14, v15 + 10240 - v14);
        v14 = v78;
        a6 = v18;
      }
      v19 = (char *)dest[1];
      v20 = (char *)dest[1] + v14;
      if ( (unsigned __int64)v17 >= 2 )
      {
        v79 = a1;
        v21 = a5;
        v22 = a6;
        memset(v20, 0, (size_t)(v17 - 1));
        a6 = v22;
        a5 = v21;
        a1 = v79;
        v14 = (unsigned __int64)&v17[v14 - 1];
        v20 = &v19[v14];
      }
      *v20 = 0;
      v16 = v14 + 1;
    }
    v78 = v16;
    v14 = v16;
  }
  v23 = v14 - v15;
  if ( v14 < v15 )
    core::slice::index::slice_end_index_len_fail(v15, v14, &off_194CA0);
  v24 = (char *)dest[1];
  v95 = (_QWORD *)a6;
  memcpy(dest[1], *(const void **)(a6 + 8), v15);
  v76 = a9;
  v25 = &v24[v15];
  v86 = (void *)a5;
  v106 = a5 >> 1;
  v87 = &off_194E98;
  v105 = v23;
  v26 = v23;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = <std::process::ChildStdout as std::io::Read>::read(a7, v25, v26);
          v29 = v28;
          if ( !v27 )
            break;
          if ( (unsigned __int8)std::io::error::Error::kind(v28) != 35 )
          {
            *(_QWORD *)&v119 = v29;
            *(_QWORD *)&v90 = 0LL;
            *((_QWORD *)&v90 + 1) = 1LL;
            *(_QWORD *)&v91 = 0LL;
            v110 = 32LL;
            LOBYTE(v111) = 3;
            *(_QWORD *)&v108 = 0LL;
            v109.m256i_i64[0] = 0LL;
            v109.m256i_i64[2] = (__int64)&v90;
            v109.m256i_i64[3] = (__int64)&off_194B28;
            if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v119, &v108) )
              core::result::unwrap_failed(aADisplayImplem, 55LL, &v124, &unk_194B70, &off_194B58);
            v42 = v90;
            v43 = v91;
            v44 = _rust_alloc(32LL, 8LL);
            if ( !v44 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v45 = v44;
            *(_OWORD *)v44 = v42;
            *(_QWORD *)(v44 + 16) = v43;
            *(_DWORD *)(v44 + 24) = 2;
            core::ptr::drop_in_place<std::io::error::Error>(v119);
            *a1 = v45;
            a1[1] = (__int64)&off_194EE8;
            if ( dest[0] )
              _rust_dealloc(dest[1], dest[0], 1LL);
            v46 = v80;
            v47 = v82;
            if ( !v80 )
              goto LABEL_45;
            goto LABEL_44;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v29);
        }
        if ( !v28 )
          break;
        if ( v26 < v28 )
        {
          v30 = v28;
          goto LABEL_96;
        }
        v25 += v28;
        v26 -= v28;
      }
      if ( v26 )
      {
        v49 = v78;
        v50 = v105;
        v51 = v95;
        if ( v105 == v26 )
          goto LABEL_58;
        v52 = v78 - v26 - 1;
        if ( v52 >= v78 )
        {
          v75 = &off_194E50;
        }
        else
        {
          if ( *((_BYTE *)dest[1] + v52) == v76 )
            goto LABEL_57;
          if ( v78 >= v26 )
          {
            *((_BYTE *)dest[1] + v78 - v26--) = v76;
LABEL_57:
            v50 = v26;
            v30 = v49 - v26;
            if ( v49 < v26 )
            {
              v74 = &off_194E80;
              goto LABEL_103;
            }
LABEL_58:
            v30 = v49 - v50;
            LODWORD(v88) = 0;
            goto LABEL_61;
          }
          v75 = &off_194E68;
          v52 = v78 - v26;
        }
        core::panicking::panic_bounds_check(v52, v78, v75);
      }
      v30 = v78;
      if ( v88 != 1 || v78 >= (unsigned __int64)v86 )
        break;
      v31 = 2 * v78;
      if ( v78 >= v106 )
        v31 = (unsigned __int64)v86;
      v32 = (char *)(v31 - v78);
      if ( v31 > v78 )
      {
        v79 = a1;
        v33 = v78;
        if ( (char *)dest[0] - v78 < v32 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v78, v32);
          v33 = v78;
        }
        v34 = (char *)dest[1];
        v35 = (char *)dest[1] + v33;
        if ( (unsigned __int64)v32 >= 2 )
        {
          memset(v35, 0, (size_t)(v32 - 1));
          v33 = (__int64)&v32[v33 - 1];
          v35 = &v34[v33];
        }
        a1 = v79;
        *v35 = 0;
        v31 = v33 + 1;
      }
      v78 = v31;
      v26 = v31 - v30;
      if ( v31 < v30 )
      {
        v26 = v31;
        v73 = &off_194E08;
LABEL_95:
        v87 = v73;
        goto LABEL_96;
      }
      v25 = (char *)dest[1] + v30;
    }
    v79 = a1;
    v36 = dest[1];
    v38 = memchr::arch::x86_64::memchr::memrchr_raw::FN();
    if ( v38 )
      v102 = v37 - (_QWORD)v36;
    v39 = memchr::arch::x86_64::memchr::memrchr_raw::FN();
    a1 = v79;
    if ( v39 == 1 )
      break;
    v30 = v78;
    v40 = v78;
    if ( v78 <= 0xFFFFFFFFFFFFD7FFLL )
    {
      v40 = v78;
      if ( (char *)dest[0] - v78 <= (char *)&stru_27F8.r_offset + 7 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v78, 10240LL);
        v40 = v78;
        a1 = v79;
      }
      memset((char *)dest[1] + v40, 0, 0x2800uLL);
    }
    v41 = v40 + 10240;
    v78 = v41;
    v26 = v41 - v30;
    if ( v41 < v30 )
    {
      v26 = v41;
      v73 = &off_194E38;
      goto LABEL_95;
    }
    v25 = (char *)dest[1] + v30;
  }
  if ( !v38 )
    core::option::unwrap_failed(&off_194E20);
  v30 = v102 + 1;
  LOBYTE(v39) = 1;
  LODWORD(v88) = v39;
  v49 = v78;
  v51 = v95;
LABEL_61:
  v101 = v30;
  v51[2] = 0LL;
  if ( v30 > v49 )
  {
    v74 = &off_194CD0;
LABEL_103:
    v87 = v74;
    v26 = v49;
LABEL_96:
    core::slice::index::slice_start_index_len_fail(v30, v26, v87);
  }
  v53 = (char *)dest[1] + v30;
  v86 = dest[1];
  v54 = *v51 < v49 - v30;
  v79 = a1;
  if ( v54 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v51, 0LL, v49 - v30);
    v51 = v95;
    v55 = v95[2];
  }
  else
  {
    v55 = 0LL;
  }
  memcpy((void *)(v55 + v51[1]), v53, v49 - v30);
  v51[2] = v49 - v30 + v55;
  if ( !v30 )
  {
    a1 = v79;
    *((_BYTE *)v79 + 8) = v88;
    *a1 = 0LL;
    v47 = v82;
    if ( dest[0] )
      _rust_dealloc(v86, dest[0], 1LL);
    v46 = v80;
    if ( !v80 )
      goto LABEL_45;
LABEL_44:
    _rust_dealloc(v83, 16 * v46, 8LL);
LABEL_45:
    if ( v81 )
      _rust_dealloc(v84, 16 * v81, 8LL);
    if ( v47 )
      _rust_dealloc(v85, 16 * v47, 8LL);
    if ( (_QWORD)v89 )
      _rust_dealloc(*((_QWORD *)&v89 + 1), 24 * v89, 8LL);
    return a1;
  }
  v56 = dest[0];
  *(_QWORD *)&v108 = v82;
  *((_QWORD *)&v108 + 1) = v85;
  v109.m256i_i64[0] = v100;
  *(_OWORD *)&v109.m256i_u64[1] = v89;
  v109.m256i_i64[3] = v104;
  v116 = &v101;
  v110 = v81;
  v111 = v84;
  v112 = v99;
  v113 = v80;
  v114 = v83;
  v115 = v98;
  v117 = &a9;
  v57 = a10;
  v118 = a10;
  v58 = (_QWORD *)_rust_alloc(120LL, 8LL);
  a1 = v79;
  if ( !v58 )
    core::option::unwrap_failed(&off_194F58);
  v59 = v58;
  *v58 = v56;
  v58[1] = v86;
  v58[2] = v49;
  v107 = v58;
  v125 = v109;
  v124 = v108;
  v97 = v109.m256i_i64[3];
  v96 = *(_OWORD *)&v109.m256i_u64[1];
  if ( v101 > v49 )
    core::slice::index::slice_end_index_len_fail(v101, v49, &off_194CE8);
  core::str::converts::from_utf8(&v90);
  v60 = *((_QWORD *)&v90 + 1);
  v61 = v91;
  if ( (_QWORD)v90 )
  {
    LOBYTE(v90) = 8;
    v62 = (_OWORD *)_rust_alloc(64LL, 8LL);
    if ( !v62 )
      alloc::alloc::handle_alloc_error(8LL, 64LL);
    v63 = v62;
    v64 = v90;
    v65 = v91;
    v66 = v92;
    v62[3] = v93;
    v62[2] = v66;
    v62[1] = v65;
    *v62 = v64;
    if ( (_QWORD)v96 )
      _rust_dealloc(*((_QWORD *)&v96 + 1), 24 * v96, 8LL);
    if ( v82 )
      _rust_dealloc(v85, 16 * v82, 8LL);
    if ( v81 )
      _rust_dealloc(v84, 16 * v81, 8LL);
    if ( v80 )
      _rust_dealloc(v83, 16 * v80, 8LL);
    v67 = &off_194D38;
LABEL_84:
    if ( *v59 )
      _rust_dealloc(v59[1], *v59, 1LL);
    _rust_dealloc(v59, 120LL, 8LL);
    *a1 = (__int64)v63;
    a1[1] = (__int64)v67;
  }
  else
  {
    *(_QWORD *)&v90 = v82;
    *((_QWORD *)&v90 + 1) = v85;
    *(_QWORD *)&v91 = v100;
    *((_QWORD *)&v91 + 1) = v81;
    *(_QWORD *)&v92 = v84;
    *((_QWORD *)&v92 + 1) = v99;
    *(_QWORD *)&v93 = v80;
    *((_QWORD *)&v93 + 1) = v83;
    v94 = v98;
    uu_sort::chunks::parse_lines(v60, v61, &v96, &v90, a9, v57);
    v63 = (_OWORD *)*((_QWORD *)&v96 + 1);
    v68 = v96;
    v67 = (__int64 (__fastcall **)())v97;
    v119 = v90;
    v120 = v91;
    v121 = v92;
    v122 = v93;
    v123 = v94;
    if ( (_QWORD)v96 == 0x8000000000000000LL )
      goto LABEL_84;
    v59[14] = v123;
    v69 = v119;
    v70 = v120;
    v71 = v121;
    *((_OWORD *)v59 + 6) = v122;
    *((_OWORD *)v59 + 5) = v71;
    *((_OWORD *)v59 + 4) = v70;
    *((_OWORD *)v59 + 3) = v69;
    v59[3] = v68;
    v59[4] = v63;
    v59[5] = v67;
    v72 = std::sync::mpmc::Sender<T>::send(v103, v59);
    if ( v72 )
    {
      *(_QWORD *)&v108 = v72;
      core::result::unwrap_failed(aCalledResultUn_10, 43LL, &v108, &off_194B90, &off_194CB8);
    }
    *((_BYTE *)a1 + 8) = v88;
    *a1 = 0LL;
  }
  return a1;
}
