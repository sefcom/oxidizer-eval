        __int64 a10)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int128 v14; // xmm0
  __int64 v15; // rdi
  unsigned __int64 v16; // r15
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  char *v19; // r12
  __int64 v20; // r14
  char *v21; // r14
  char *v22; // rdi
  __int64 v23; // r13
  unsigned __int64 v24; // rbp
  char *v25; // r13
  char *v26; // r13
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // r14
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbp
  char *v35; // rbx
  __int64 v36; // rbp
  char *v37; // r12
  char *v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  bool v41; // cf
  void *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rax
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rdi
  char *v50; // r13
  __int64 v51; // rsi
  __int64 v52; // r12
  __int64 (__fastcall **v53)(); // rbp
  __int64 v54; // rsi
  __int128 v55; // kr00_16
  __int64 v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // r12
  __int64 v60; // r14
  __int64 v61; // rax
  _QWORD *v63; // r14
  char *v64; // r12
  __int64 v65; // r13
  void *v66; // r15
  __int64 v67; // r13
  _QWORD *v68; // rax
  _QWORD *v69; // rbx
  __int64 v70; // r14
  __int64 v71; // r15
  __int64 v72; // rdi
  __int64 v73; // rsi
  _OWORD *v74; // rax
  _OWORD *v75; // r14
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 (__fastcall **v79)(); // r15
  _QWORD *v80; // rax
  __int64 v81; // r15
  __int64 v82; // rax
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm2
  __int64 v86; // rax
  char **v87; // rax
  char v88; // [rsp+7h] [rbp-271h]
  __int64 v89; // [rsp+8h] [rbp-270h]
  __int64 v90; // [rsp+10h] [rbp-268h]
  __int64 v91; // [rsp+18h] [rbp-260h]
  void *dest[2]; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int64 v93; // [rsp+30h] [rbp-248h]
  __int64 v94; // [rsp+40h] [rbp-238h]
  __int64 v95; // [rsp+48h] [rbp-230h]
  __int64 v96; // [rsp+50h] [rbp-228h]
  void *v97; // [rsp+58h] [rbp-220h]
  char **v98; // [rsp+60h] [rbp-218h]
  __int64 v99; // [rsp+68h] [rbp-210h]
  unsigned __int64 v100; // [rsp+70h] [rbp-208h]
  __int64 v101; // [rsp+78h] [rbp-200h]
  __int64 v102; // [rsp+80h] [rbp-1F8h]
  __int128 v103; // [rsp+88h] [rbp-1F0h] BYREF
  __int128 v104; // [rsp+98h] [rbp-1E0h]
  __int128 v105; // [rsp+A8h] [rbp-1D0h]
  __int128 v106; // [rsp+B8h] [rbp-1C0h]
  __int64 v107; // [rsp+C8h] [rbp-1B0h]
  __int128 v108; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v109; // [rsp+E0h] [rbp-198h]
  char **v110; // [rsp+E8h] [rbp-190h]
  __int64 v111; // [rsp+F0h] [rbp-188h]
  __int64 v112; // [rsp+F8h] [rbp-180h]
  __int64 v113; // [rsp+100h] [rbp-178h]
  _QWORD *v114; // [rsp+108h] [rbp-170h]
  unsigned __int64 v115; // [rsp+110h] [rbp-168h] BYREF
  __int128 v116; // [rsp+118h] [rbp-160h] BYREF
  __m256i v117; // [rsp+128h] [rbp-150h]
  __int64 v118; // [rsp+148h] [rbp-130h]
  __int64 v119; // [rsp+150h] [rbp-128h]
  __int64 v120; // [rsp+158h] [rbp-120h]
  __int64 v121; // [rsp+160h] [rbp-118h]
  __int64 v122; // [rsp+168h] [rbp-110h]
  __int64 v123; // [rsp+170h] [rbp-108h]
  unsigned __int64 *v124; // [rsp+178h] [rbp-100h]
  unsigned int *v125; // [rsp+180h] [rbp-F8h]
  __int64 v126; // [rsp+188h] [rbp-F0h]
  __int64 v127; // [rsp+190h] [rbp-E8h]
  __int64 v128; // [rsp+198h] [rbp-E0h]
  __int64 *v129; // [rsp+1A0h] [rbp-D8h]
  unsigned __int64 v130; // [rsp+1A8h] [rbp-D0h]
  __int64 v131; // [rsp+1B0h] [rbp-C8h]
  _QWORD *v132; // [rsp+1B8h] [rbp-C0h]
  __int128 v133; // [rsp+1C0h] [rbp-B8h] BYREF
  __int128 v134; // [rsp+1D0h] [rbp-A8h]
  __int128 v135; // [rsp+1E0h] [rbp-98h]
  __int128 v136; // [rsp+1F0h] [rbp-88h]
  __int64 v137; // [rsp+200h] [rbp-78h]
  __int128 v138; // [rsp+210h] [rbp-68h] BYREF
  __m256i v139; // [rsp+220h] [rbp-58h]

  v10 = (unsigned __int64)a5;
  v131 = a4;
  v127 = a2;
  v99 = a1;
  v102 = *(_QWORD *)a3;
  v101 = *(_QWORD *)(a3 + 8);
  v128 = *(_QWORD *)(a3 + 16);
  v11 = *(_QWORD *)(a3 + 24);
  v12 = *(_QWORD *)(a3 + 32);
  v113 = *(_QWORD *)(a3 + 40);
  v13 = *(_QWORD *)(a3 + 48);
  v94 = *(_QWORD *)(a3 + 56);
  v112 = *(_QWORD *)(a3 + 64);
  v14 = *(_OWORD *)(a3 + 96);
  v15 = *(_QWORD *)(a3 + 72);
  v95 = *(_QWORD *)(a3 + 80);
  v111 = *(_QWORD *)(a3 + 88);
  v16 = *(_QWORD *)(a3 + 112);
  v93 = v16;
  *(_OWORD *)dest = v14;
  v17 = *(_QWORD *)(a6 + 16);
  v97 = a5;
  v91 = v11;
  v96 = v12;
  v90 = v13;
  v89 = v15;
  if ( v16 < v17 )
  {
    v18 = v17 + 10240;
    v19 = (char *)(v17 + 10240 - v16);
    if ( v17 + 10240 > v16 )
    {
      if ( (char *)dest[0] - v16 < v19 )
      {
        v20 = a6;
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v16, v17 + 10240 - v16);
        v16 = v93;
        a6 = v20;
      }
      v21 = (char *)dest[1];
      v22 = (char *)dest[1] + v16;
      if ( (unsigned __int64)v19 >= 2 )
      {
        v23 = a6;
        memset(v22, 0, (size_t)(v19 - 1));
        a6 = v23;
        v16 = (unsigned __int64)&v19[v16 - 1];
        v22 = &v21[v16];
      }
      *v22 = 0;
      v18 = v16 + 1;
    }
    v93 = v18;
    v16 = v18;
    v10 = (unsigned __int64)v97;
  }
  v24 = v16 - v17;
  if ( v16 < v17 )
    core::slice::index::slice_end_index_len_fail(v17, v16, &off_194CA0);
  v25 = (char *)dest[1];
  v114 = (_QWORD *)a6;
  memcpy(dest[1], *(const void **)(a6 + 8), v17);
  v88 = a9;
  v26 = &v25[v17];
  v100 = v10 >> 1;
  v129 = *a8;
  v110 = &off_194E50;
  v98 = &off_194E98;
LABEL_11:
  v130 = v24;
  v27 = v24;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, char *, unsigned __int64))(a7[1] + 24))(*a7, v26, v27);
        v30 = v29;
        if ( !v28 )
          break;
LABEL_13:
        if ( (unsigned __int8)std::io::error::Error::kind(v30) != 35 )
        {
          *(_QWORD *)&v133 = v30;
          *(_QWORD *)&v103 = 0LL;
          *((_QWORD *)&v103 + 1) = 1LL;
          *(_QWORD *)&v104 = 0LL;
          v118 = 32LL;
          LOBYTE(v119) = 3;
          *(_QWORD *)&v116 = 0LL;
          v117.m256i_i64[0] = 0LL;
          v117.m256i_i64[2] = (__int64)&v103;
          v117.m256i_i64[3] = (__int64)&off_194B28;
          if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v133, &v116) )
            core::result::unwrap_failed(aADisplayImplem, 55LL, &v138, &unk_194B70, &off_194B58);
          v55 = v103;
          v56 = v104;
          v57 = _rust_alloc(32LL, 8LL);
          if ( !v57 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v52 = v57;
          *(_OWORD *)v57 = v55;
          *(_QWORD *)(v57 + 16) = v56;
          *(_DWORD *)(v57 + 24) = 2;
          core::ptr::drop_in_place<std::io::error::Error>(v133);
          v53 = &off_194EE8;
LABEL_61:
          v58 = (_QWORD *)v99;
          *(_QWORD *)v99 = v52;
          v59 = v58;
          v58[1] = v53;
          if ( dest[0] )
            _rust_dealloc(dest[1], dest[0], 1LL);
          v60 = v96;
          if ( v89 )
            _rust_dealloc(v95, 16 * v89, 8LL);
          if ( v90 )
            _rust_dealloc(v94, 16 * v90, 8LL);
          if ( v91 )
            _rust_dealloc(v60, 16 * v91, 8LL);
          v61 = v102;
          if ( !v102 )
            return v59;
LABEL_70:
          _rust_dealloc(v101, 24 * v61, 8LL);
          return v59;
        }
        core::ptr::drop_in_place<std::io::error::Error>(v30);
      }
      v31 = *a7;
      v32 = a7[1];
      if ( v131 == 1 )
      {
        while ( 1 )
        {
          if ( v30 )
            goto LABEL_31;
          if ( v27 )
            goto LABEL_43;
          v33 = v93;
          if ( v93 >= (unsigned __int64)v97 )
            goto LABEL_34;
          v34 = 2 * v93;
          if ( v93 >= v100 )
            v34 = (unsigned __int64)v97;
          v35 = (char *)(v34 - v93);
          if ( v34 > v93 )
          {
            v36 = v93;
            if ( (char *)dest[0] - v93 < v35 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v93, v35);
              v36 = v93;
            }
            v37 = (char *)dest[1];
            v38 = (char *)dest[1] + v36;
            if ( (unsigned __int64)v35 >= 2 )
            {
              memset(v38, 0, (size_t)(v35 - 1));
              v36 = (__int64)&v35[v36 - 1];
              v38 = &v37[v36];
            }
            *v38 = 0;
            v34 = v36 + 1;
          }
          v93 = v34;
          v27 = v34 - v33;
          if ( v34 < v33 )
            break;
          v26 = (char *)dest[1] + v33;
          v39 = (*(__int64 (__fastcall **)(__int64, char *, unsigned __int64))(v32 + 24))(v31, v26, v27);
          v30 = v40;
          if ( v39 )
            goto LABEL_13;
        }
        v30 = v33;
        v87 = &off_194E08;
        goto LABEL_110;
      }
      if ( !v29 )
        break;
LABEL_31:
      v34 = v27;
      v41 = v27 < v30;
      v27 -= v30;
      if ( v41 )
        goto LABEL_111;
      v26 += v30;
    }
    if ( v27 )
    {
LABEL_43:
      v48 = v130;
      if ( v130 != v27 )
      {
        v34 = v93;
        v30 = v93 - v27;
        v49 = v93 - v27 - 1;
        if ( v49 >= v93 )
          goto LABEL_118;
        v50 = (char *)dest[1];
        if ( *((_BYTE *)dest[1] + v49) != v88 )
        {
          if ( v93 < v27 )
          {
            v49 = v93 - v27;
            v110 = &off_194E68;
LABEL_118:
            core::panicking::panic_bounds_check(v49, v93, v110);
          }
          *((_BYTE *)dest[1] + v30) = v88;
          --v27;
          v30 = v34 - v27;
        }
        if ( v27 > v34 )
        {
          v87 = &off_194E80;
          goto LABEL_110;
        }
        v26 = &v50[v30];
        v48 = v27;
      }
      v51 = *v129;
      if ( *v129 == v129[1] || (*v129 = v51 + 24, uu_sort::open(&v116, v51), (_QWORD)v116 == 2LL) )
      {
        v34 = v93;
        v30 = v93 - v48;
        LODWORD(v100) = 0;
        goto LABEL_75;
      }
      v52 = *((_QWORD *)&v116 + 1);
      v53 = (__int64 (__fastcall **)())v117.m256i_i64[0];
      if ( (_QWORD)v116 )
        goto LABEL_61;
      if ( *(_QWORD *)v32 )
        (*(void (__fastcall **)(__int64))v32)(v31);
      v54 = *(_QWORD *)(v32 + 8);
      if ( v54 )
        _rust_dealloc(v31, v54, *(_QWORD *)(v32 + 16));
      *a7 = v52;
      a7[1] = (__int64)v53;
      v24 = v48;
      goto LABEL_11;
    }
LABEL_34:
    v42 = dest[1];
    v44 = memchr::arch::x86_64::memchr::memrchr_raw::FN();
    if ( v44 )
      v30 = v43 - (_QWORD)v42;
    v45 = memchr::arch::x86_64::memchr::memrchr_raw::FN();
    if ( v45 == 1 )
      break;
    v46 = v93;
    v47 = v93;
    if ( v93 <= 0xFFFFFFFFFFFFD7FFLL )
    {
      v47 = v93;
      if ( (char *)dest[0] - v93 <= (char *)&stru_27F8.r_offset + 7 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, v93, 10240LL);
        v47 = v93;
      }
      memset((char *)dest[1] + v47, 0, 0x2800uLL);
    }
    v34 = v47 + 10240;
    v93 = v34;
    v27 = v34 - v46;
    if ( v34 < v46 )
    {
      v30 = v46;
      v87 = &off_194E38;
LABEL_110:
      v98 = v87;
LABEL_111:
      core::slice::index::slice_start_index_len_fail(v30, v34, v98);
    }
    v26 = (char *)dest[1] + v46;
  }
  if ( !v44 )
    core::option::unwrap_failed(&off_194E20);
  ++v30;
  LOBYTE(v45) = 1;
  LODWORD(v100) = v45;
  v34 = v93;
LABEL_75:
  v115 = v30;
  v63 = v114;
  v114[2] = 0LL;
  if ( v30 > v34 )
  {
    v87 = &off_194CD0;
    goto LABEL_110;
  }
  v64 = (char *)dest[1] + v30;
  v97 = dest[1];
  if ( *v63 >= v34 - v30 )
  {
    v65 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v63, 0LL, v34 - v30);
    v63 = v114;
    v65 = v114[2];
  }
  memcpy((void *)(v65 + v63[1]), v64, v34 - v30);
  v63[2] = v34 - v30 + v65;
  if ( !v30 )
  {
    v80 = (_QWORD *)v99;
    *(_BYTE *)(v99 + 8) = v100;
    *v80 = 0LL;
    v81 = v96;
    if ( dest[0] )
      _rust_dealloc(v97, dest[0], 1LL);
    if ( v89 )
      _rust_dealloc(v95, 16 * v89, 8LL);
    if ( v90 )
      _rust_dealloc(v94, 16 * v90, 8LL);
    if ( v91 )
      _rust_dealloc(v81, 16 * v91, 8LL);
    v61 = v102;
    v59 = (_QWORD *)v99;
    if ( !v102 )
      return v59;
    goto LABEL_70;
  }
  v66 = dest[0];
  *(_QWORD *)&v116 = v91;
  *((_QWORD *)&v116 + 1) = v96;
  v117.m256i_i64[0] = v113;
  v117.m256i_i64[1] = v102;
  v117.m256i_i64[2] = v101;
  v117.m256i_i64[3] = v128;
  v124 = &v115;
  v118 = v90;
  v119 = v94;
  v120 = v112;
  v121 = v89;
  v122 = v95;
  v123 = v111;
  v125 = &a9;
  v67 = a10;
  v126 = a10;
  v68 = (_QWORD *)_rust_alloc(120LL, 8LL);
  if ( !v68 )
    core::option::unwrap_failed(&off_194F58);
  v69 = v68;
  *v68 = v66;
  v68[1] = v97;
  v68[2] = v34;
  v132 = v68;
  v139 = v117;
  v138 = v116;
  v109 = v117.m256i_i64[3];
  v108 = *(_OWORD *)&v117.m256i_u64[1];
  if ( v115 > v34 )
    core::slice::index::slice_end_index_len_fail(v115, v34, &off_194CE8);
  v70 = v94;
  v71 = v95;
  core::str::converts::from_utf8(&v103);
  v72 = *((_QWORD *)&v103 + 1);
  v73 = v104;
  if ( (_QWORD)v103 )
  {
    LOBYTE(v103) = 8;
    v74 = (_OWORD *)_rust_alloc(64LL, 8LL);
    if ( !v74 )
      alloc::alloc::handle_alloc_error(8LL, 64LL);
    v75 = v74;
    v76 = v103;
    v77 = v104;
    v78 = v105;
    v74[3] = v106;
    v74[2] = v78;
    v74[1] = v77;
    *v74 = v76;
    if ( (_QWORD)v108 )
      _rust_dealloc(*((_QWORD *)&v108 + 1), 24 * v108, 8LL);
    if ( v91 )
      _rust_dealloc(v96, 16 * v91, 8LL);
    if ( v90 )
      _rust_dealloc(v94, 16 * v90, 8LL);
    if ( v89 )
      _rust_dealloc(v95, 16 * v89, 8LL);
    v79 = &off_194D38;
    v59 = (_QWORD *)v99;
LABEL_104:
    if ( *v69 )
      _rust_dealloc(v69[1], *v69, 1LL);
    _rust_dealloc(v69, 120LL, 8LL);
    *v59 = v75;
    v59[1] = v79;
  }
  else
  {
    *(_QWORD *)&v103 = v91;
    *((_QWORD *)&v103 + 1) = v96;
    *(_QWORD *)&v104 = v113;
    *((_QWORD *)&v104 + 1) = v90;
    *(_QWORD *)&v105 = v70;
    *((_QWORD *)&v105 + 1) = v112;
    *(_QWORD *)&v106 = v89;
    *((_QWORD *)&v106 + 1) = v71;
    v107 = v111;
    uu_sort::chunks::parse_lines(v72, v73, &v108, &v103, a9, v67);
    v75 = (_OWORD *)*((_QWORD *)&v108 + 1);
    v82 = v108;
    v79 = (__int64 (__fastcall **)())v109;
    v133 = v103;
    v134 = v104;
    v135 = v105;
    v136 = v106;
    v137 = v107;
    v59 = (_QWORD *)v99;
    if ( (_QWORD)v108 == 0x8000000000000000LL )
      goto LABEL_104;
    v69[14] = v137;
    v83 = v133;
    v84 = v134;
    v85 = v135;
    *((_OWORD *)v69 + 6) = v136;
    *((_OWORD *)v69 + 5) = v85;
    *((_OWORD *)v69 + 4) = v84;
    *((_OWORD *)v69 + 3) = v83;
    v69[3] = v82;
    v69[4] = v75;
    v69[5] = v79;
    v86 = std::sync::mpmc::Sender<T>::send(v127, v69);
    if ( v86 )
    {
      *(_QWORD *)&v116 = v86;
      core::result::unwrap_failed(aCalledResultUn_10, 43LL, &v116, &off_194B90, &off_194CB8);
    }
    *((_BYTE *)v59 + 8) = v100;
    *v59 = 0LL;
  }
  return v59;
}
