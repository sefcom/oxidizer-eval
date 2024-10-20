        __int64 a10)
{
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned __int64 v13; // rbx
  size_t v14; // rbp
  unsigned __int64 v15; // rax
  char *v16; // r13
  __int64 v17; // r14
  char *v18; // r14
  char *v19; // rdi
  unsigned __int64 v20; // r15
  __int64 v21; // r12
  unsigned __int64 v22; // r15
  char *v23; // rbx
  char *v24; // rbx
  __int64 v25; // r13
  __int64 (__fastcall *v26)(__int64, char *, unsigned __int64); // r12
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
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rbx
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // rax
  _QWORD *v52; // r12
  unsigned __int64 v53; // rdi
  char *v54; // r15
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
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rax
  _QWORD *v75; // rax
  char **v76; // rdx
  char **v77; // rdx
  char v78; // [rsp+Fh] [rbp-259h]
  void *dest[2]; // [rsp+10h] [rbp-258h] BYREF
  unsigned __int64 v80; // [rsp+20h] [rbp-248h]
  __int64 v81; // [rsp+28h] [rbp-240h]
  __int64 v82; // [rsp+30h] [rbp-238h]
  __int64 v83; // [rsp+38h] [rbp-230h]
  __int64 v84; // [rsp+40h] [rbp-228h]
  __int64 v85; // [rsp+48h] [rbp-220h]
  __int64 v86; // [rsp+50h] [rbp-218h]
  void *v87; // [rsp+58h] [rbp-210h]
  __int64 v88; // [rsp+60h] [rbp-208h]
  __int64 v89; // [rsp+68h] [rbp-200h]
  __int128 v90; // [rsp+70h] [rbp-1F8h]
  __int128 v91; // [rsp+80h] [rbp-1E8h] BYREF
  __int128 v92; // [rsp+90h] [rbp-1D8h]
  __int128 v93; // [rsp+A0h] [rbp-1C8h]
  __int128 v94; // [rsp+B0h] [rbp-1B8h]
  __int64 v95; // [rsp+C0h] [rbp-1A8h]
  _QWORD *v96; // [rsp+C8h] [rbp-1A0h]
  __int128 v97; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-188h]
  __int64 v99; // [rsp+E8h] [rbp-180h]
  __int64 v100; // [rsp+F0h] [rbp-178h]
  __int64 v101; // [rsp+F8h] [rbp-170h]
  unsigned __int64 v102; // [rsp+100h] [rbp-168h] BYREF
  __int64 v103; // [rsp+108h] [rbp-160h]
  __int64 v104; // [rsp+110h] [rbp-158h]
  __int64 v105; // [rsp+118h] [rbp-150h]
  unsigned __int64 v106; // [rsp+120h] [rbp-148h]
  unsigned __int64 v107; // [rsp+128h] [rbp-140h]
  _QWORD *v108; // [rsp+130h] [rbp-138h]
  __int128 v109; // [rsp+138h] [rbp-130h] BYREF
  __m256i v110; // [rsp+148h] [rbp-120h]
  __int64 v111; // [rsp+168h] [rbp-100h]
  __int64 v112; // [rsp+170h] [rbp-F8h]
  __int64 v113; // [rsp+178h] [rbp-F0h]
  __int64 v114; // [rsp+180h] [rbp-E8h]
  __int64 v115; // [rsp+188h] [rbp-E0h]
  __int64 v116; // [rsp+190h] [rbp-D8h]
  unsigned __int64 *v117; // [rsp+198h] [rbp-D0h]
  unsigned int *v118; // [rsp+1A0h] [rbp-C8h]
  __int64 v119; // [rsp+1A8h] [rbp-C0h]
  __int128 v120; // [rsp+1B0h] [rbp-B8h] BYREF
  __int128 v121; // [rsp+1C0h] [rbp-A8h]
  __int128 v122; // [rsp+1D0h] [rbp-98h]
  __int128 v123; // [rsp+1E0h] [rbp-88h]
  __int64 v124; // [rsp+1F0h] [rbp-78h]
  __int128 v125; // [rsp+200h] [rbp-68h] BYREF
  __m256i v126; // [rsp+210h] [rbp-58h]

  v89 = a4;
  v104 = a2;
  v88 = a1;
  v90 = *a3;
  v11 = *((_QWORD *)a3 + 2);
  v83 = *((_QWORD *)a3 + 3);
  v86 = *((_QWORD *)a3 + 4);
  v101 = *((_QWORD *)a3 + 5);
  v82 = *((_QWORD *)a3 + 6);
  v85 = *((_QWORD *)a3 + 7);
  v100 = *((_QWORD *)a3 + 8);
  v12 = a3[6];
  v81 = *((_QWORD *)a3 + 9);
  v84 = *((_QWORD *)a3 + 10);
  v99 = *((_QWORD *)a3 + 11);
  v13 = *((_QWORD *)a3 + 14);
  v80 = v13;
  *(_OWORD *)dest = v12;
  v14 = *(_QWORD *)(a6 + 16);
  v105 = v11;
  if ( v13 < v14 )
  {
    v15 = v14 + 10240;
    v16 = (char *)(v14 + 10240 - v13);
    if ( v14 + 10240 > v13 )
    {
      if ( (char *)dest[0] - v13 < v16 )
      {
        v17 = a6;
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v13, v14 + 10240 - v13);
        v13 = v80;
        a6 = v17;
      }
      v18 = (char *)dest[1];
      v19 = (char *)dest[1] + v13;
      if ( (unsigned __int64)v16 >= 2 )
      {
        v20 = a5;
        v21 = a6;
        memset(v19, 0, (size_t)(v16 - 1));
        a6 = v21;
        a5 = v20;
        v13 = (unsigned __int64)&v16[v13 - 1];
        v19 = &v18[v13];
      }
      *v19 = 0;
      v15 = v13 + 1;
    }
    v80 = v15;
    v13 = v15;
  }
  v22 = v13 - v14;
  if ( v13 < v14 )
    core::slice::index::slice_end_index_len_fail(v14, v13, &off_194CA0);
  v23 = (char *)dest[1];
  v96 = (_QWORD *)a6;
  memcpy(dest[1], *(const void **)(a6 + 8), v14);
  v78 = a9;
  v24 = &v23[v14];
  v87 = (void *)a5;
  v107 = a5 >> 1;
  v25 = *a7;
  v26 = *(__int64 (__fastcall **)(__int64, char *, unsigned __int64))(a7[1] + 24);
  v106 = v22;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = v26(v25, v24, v22);
          v29 = v28;
          if ( !v27 )
            break;
          if ( (unsigned __int8)std::io::error::Error::kind(v28) != 35 )
          {
            *(_QWORD *)&v120 = v29;
            *(_QWORD *)&v91 = 0LL;
            *((_QWORD *)&v91 + 1) = 1LL;
            *(_QWORD *)&v92 = 0LL;
            v111 = 32LL;
            LOBYTE(v112) = 3;
            *(_QWORD *)&v109 = 0LL;
            v110.m256i_i64[0] = 0LL;
            v110.m256i_i64[2] = (__int64)&v91;
            v110.m256i_i64[3] = (__int64)&off_194B28;
            if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v120, &v109) )
              core::result::unwrap_failed(aADisplayImplem, 55LL, &v125, &unk_194B70, &off_194B58);
            v42 = v91;
            v43 = v92;
            v44 = _rust_alloc(32LL, 8LL);
            if ( !v44 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v45 = v44;
            *(_OWORD *)v44 = v42;
            *(_QWORD *)(v44 + 16) = v43;
            *(_DWORD *)(v44 + 24) = 2;
            core::ptr::drop_in_place<std::io::error::Error>(v120);
            v46 = v88;
            *(_QWORD *)v88 = v45;
            *(_QWORD *)(v46 + 8) = &off_194EE8;
            if ( dest[0] )
              _rust_dealloc(dest[1], dest[0], 1LL);
            v47 = v81;
            v48 = v83;
            if ( !v81 )
              goto LABEL_45;
            goto LABEL_44;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v29);
        }
        if ( !v28 )
          break;
        if ( v22 < v28 )
        {
          v76 = &off_194E98;
          v30 = v29;
          goto LABEL_95;
        }
        v24 += v28;
        v22 -= v28;
      }
      if ( v22 )
      {
        v50 = v80;
        v51 = v106;
        v52 = v96;
        if ( v106 == v22 )
          goto LABEL_58;
        v53 = v80 - v22 - 1;
        if ( v53 >= v80 )
        {
          v77 = &off_194E50;
        }
        else
        {
          if ( *((_BYTE *)dest[1] + v53) == v78 )
            goto LABEL_57;
          if ( v80 >= v22 )
          {
            *((_BYTE *)dest[1] + v80 - v22--) = v78;
LABEL_57:
            v51 = v22;
            v30 = v50 - v22;
            if ( v50 < v22 )
            {
              v76 = &off_194E80;
              goto LABEL_102;
            }
LABEL_58:
            v30 = v50 - v51;
            LODWORD(v89) = 0;
            goto LABEL_61;
          }
          v77 = &off_194E68;
          v53 = v80 - v22;
        }
        core::panicking::panic_bounds_check(v53, v80, v77);
      }
      v30 = v80;
      if ( v89 != 1 || v80 >= (unsigned __int64)v87 )
        break;
      v31 = 2 * v80;
      if ( v80 >= v107 )
        v31 = (unsigned __int64)v87;
      v32 = (char *)(v31 - v80);
      if ( v31 > v80 )
      {
        v33 = v80;
        if ( (char *)dest[0] - v80 < v32 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v80, v32);
          v33 = v80;
        }
        v34 = (char *)dest[1];
        v35 = (char *)dest[1] + v33;
        if ( (unsigned __int64)v32 >= 2 )
        {
          memset(v35, 0, (size_t)(v32 - 1));
          v33 = (__int64)&v32[v33 - 1];
          v35 = &v34[v33];
        }
        *v35 = 0;
        v31 = v33 + 1;
      }
      v80 = v31;
      v22 = v31 - v30;
      if ( v31 < v30 )
      {
        v22 = v31;
        v76 = &off_194E08;
        goto LABEL_95;
      }
      v24 = (char *)dest[1] + v30;
    }
    v36 = dest[1];
    v38 = memchr::arch::x86_64::memchr::memrchr_raw::FN();
    if ( v38 )
      v103 = v37 - (_QWORD)v36;
    v39 = memchr::arch::x86_64::memchr::memrchr_raw::FN();
    if ( v39 == 1 )
      break;
    v30 = v80;
    v40 = v80;
    if ( v80 <= 0xFFFFFFFFFFFFD7FFLL )
    {
      v40 = v80;
      if ( (char *)dest[0] - v80 <= (char *)&stru_27F8.r_offset + 7 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v80, 10240LL);
        v40 = v80;
      }
      memset((char *)dest[1] + v40, 0, 0x2800uLL);
    }
    v41 = v40 + 10240;
    v80 = v41;
    v22 = v41 - v30;
    if ( v41 < v30 )
    {
      v22 = v41;
      v76 = &off_194E38;
      goto LABEL_95;
    }
    v24 = (char *)dest[1] + v30;
  }
  if ( !v38 )
    core::option::unwrap_failed(&off_194E20);
  v30 = v103 + 1;
  LOBYTE(v39) = 1;
  LODWORD(v89) = v39;
  v50 = v80;
  v52 = v96;
LABEL_61:
  v102 = v30;
  v52[2] = 0LL;
  if ( v30 > v50 )
  {
    v76 = &off_194CD0;
LABEL_102:
    v22 = v50;
LABEL_95:
    core::slice::index::slice_start_index_len_fail(v30, v22, v76);
  }
  v54 = (char *)dest[1] + v30;
  v87 = dest[1];
  if ( *v52 >= v50 - v30 )
  {
    v55 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v52, 0LL, v50 - v30);
    v52 = v96;
    v55 = v96[2];
  }
  memcpy((void *)(v55 + v52[1]), v54, v50 - v30);
  v52[2] = v50 - v30 + v55;
  if ( !v30 )
  {
    v68 = (_QWORD *)v88;
    *(_BYTE *)(v88 + 8) = v89;
    *v68 = 0LL;
    v48 = v83;
    if ( dest[0] )
      _rust_dealloc(v87, dest[0], 1LL);
    v47 = v81;
    if ( !v81 )
      goto LABEL_45;
LABEL_44:
    _rust_dealloc(v84, 16 * v47, 8LL);
LABEL_45:
    if ( v82 )
      _rust_dealloc(v85, 16 * v82, 8LL);
    if ( v48 )
      _rust_dealloc(v86, 16 * v48, 8LL);
    if ( (_QWORD)v90 )
      _rust_dealloc(*((_QWORD *)&v90 + 1), 24 * v90, 8LL);
    return v88;
  }
  v56 = dest[0];
  *(_QWORD *)&v109 = v83;
  *((_QWORD *)&v109 + 1) = v86;
  v110.m256i_i64[0] = v101;
  *(_OWORD *)&v110.m256i_u64[1] = v90;
  v110.m256i_i64[3] = v105;
  v117 = &v102;
  v111 = v82;
  v112 = v85;
  v113 = v100;
  v114 = v81;
  v115 = v84;
  v116 = v99;
  v118 = &a9;
  v57 = a10;
  v119 = a10;
  v58 = (_QWORD *)_rust_alloc(120LL, 8LL);
  if ( !v58 )
    core::option::unwrap_failed(&off_194F58);
  v59 = v58;
  *v58 = v56;
  v58[1] = v87;
  v58[2] = v50;
  v108 = v58;
  v126 = v110;
  v125 = v109;
  v98 = v110.m256i_i64[3];
  v97 = *(_OWORD *)&v110.m256i_u64[1];
  if ( v102 > v50 )
    core::slice::index::slice_end_index_len_fail(v102, v50, &off_194CE8);
  core::str::converts::from_utf8(&v91);
  v60 = *((_QWORD *)&v91 + 1);
  v61 = v92;
  if ( (_QWORD)v91 )
  {
    LOBYTE(v91) = 8;
    v62 = (_OWORD *)_rust_alloc(64LL, 8LL);
    if ( !v62 )
      alloc::alloc::handle_alloc_error(8LL, 64LL);
    v63 = v62;
    v64 = v91;
    v65 = v92;
    v66 = v93;
    v62[3] = v94;
    v62[2] = v66;
    v62[1] = v65;
    *v62 = v64;
    if ( (_QWORD)v97 )
      _rust_dealloc(*((_QWORD *)&v97 + 1), 24 * v97, 8LL);
    if ( v83 )
      _rust_dealloc(v86, 16 * v83, 8LL);
    if ( v82 )
      _rust_dealloc(v85, 16 * v82, 8LL);
    if ( v81 )
      _rust_dealloc(v84, 16 * v81, 8LL);
    v67 = &off_194D38;
LABEL_84:
    if ( *v59 )
      _rust_dealloc(v59[1], *v59, 1LL);
    _rust_dealloc(v59, 120LL, 8LL);
    v70 = v88;
    *(_QWORD *)v88 = v63;
    *(_QWORD *)(v70 + 8) = v67;
  }
  else
  {
    *(_QWORD *)&v91 = v83;
    *((_QWORD *)&v91 + 1) = v86;
    *(_QWORD *)&v92 = v101;
    *((_QWORD *)&v92 + 1) = v82;
    *(_QWORD *)&v93 = v85;
    *((_QWORD *)&v93 + 1) = v100;
    *(_QWORD *)&v94 = v81;
    *((_QWORD *)&v94 + 1) = v84;
    v95 = v99;
    uu_sort::chunks::parse_lines(v60, v61, &v97, &v91, a9, v57);
    v63 = (_OWORD *)*((_QWORD *)&v97 + 1);
    v69 = v97;
    v67 = (__int64 (__fastcall **)())v98;
    v120 = v91;
    v121 = v92;
    v122 = v93;
    v123 = v94;
    v124 = v95;
    if ( (_QWORD)v97 == 0x8000000000000000LL )
      goto LABEL_84;
    v59[14] = v124;
    v71 = v120;
    v72 = v121;
    v73 = v122;
    *((_OWORD *)v59 + 6) = v123;
    *((_OWORD *)v59 + 5) = v73;
    *((_OWORD *)v59 + 4) = v72;
    *((_OWORD *)v59 + 3) = v71;
    v59[3] = v69;
    v59[4] = v63;
    v59[5] = v67;
    v74 = std::sync::mpmc::Sender<T>::send(v104, v59);
    if ( v74 )
    {
      *(_QWORD *)&v109 = v74;
      core::result::unwrap_failed(aCalledResultUn_10, 43LL, &v109, &off_194B90, &off_194CB8);
    }
    v75 = (_QWORD *)v88;
    *(_BYTE *)(v88 + 8) = v89;
    *v75 = 0LL;
  }
  return v88;
}
