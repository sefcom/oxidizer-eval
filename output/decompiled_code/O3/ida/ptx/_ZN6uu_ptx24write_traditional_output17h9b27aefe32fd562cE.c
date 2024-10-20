        __int64 a5)
{
  __int64 *v7; // rbp
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 (__fastcall **v11)(); // r13
  __m128i *v12; // rax
  __m128i *v13; // rbx
  __m128i v14; // xmm0
  __int32 v15; // ebp
  __int32 *v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx
  signed __int64 v21; // rsi
  _BOOL8 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  unsigned __int64 v27; // r14
  __m128i v28; // xmm0
  unsigned __int64 v30; // r14
  size_t v32; // r15
  __int64 v33; // r13
  void *v34; // r12
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // r15
  __m128i *v41; // rdx
  void *v42; // rbp
  __int64 v43; // rcx
  __int64 v44; // r14
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r12
  signed __int64 v48; // r12
  unsigned __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // r15
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r15
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // rbp
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // rcx
  __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  __int64 v67; // rsi
  unsigned __int64 v68; // rdx
  __int64 started; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  bool v73; // cc
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // r15
  __int64 v84; // r14
  __int64 v85; // r12
  __int64 v86; // rax
  __m128i *v87; // rax
  __int64 v88; // rdx
  __m128i v89; // xmm0
  __m128i *v90; // rax
  signed __int64 v91; // rsi
  unsigned __int64 v93; // rdi
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  __int64 v96; // rdi
  char v97; // [rsp+15h] [rbp-313h] BYREF
  char v98; // [rsp+16h] [rbp-312h]
  char v99; // [rsp+17h] [rbp-311h]
  __int64 v100; // [rsp+18h] [rbp-310h]
  char v101; // [rsp+27h] [rbp-301h]
  unsigned __int64 v102; // [rsp+28h] [rbp-300h]
  __m128i v103; // [rsp+30h] [rbp-2F8h]
  __m128i v104; // [rsp+40h] [rbp-2E8h] BYREF
  __m128i v105; // [rsp+50h] [rbp-2D8h]
  __int64 *v106; // [rsp+60h] [rbp-2C8h]
  __int64 (__fastcall *v107)(); // [rsp+68h] [rbp-2C0h]
  __int64 *v108; // [rsp+70h] [rbp-2B8h]
  __int64 (__fastcall *v109)(); // [rsp+78h] [rbp-2B0h]
  __m128i ***v110; // [rsp+80h] [rbp-2A8h]
  __int64 (__fastcall *v111)(); // [rsp+88h] [rbp-2A0h]
  __int64 v112; // [rsp+90h] [rbp-298h]
  unsigned __int64 v113; // [rsp+98h] [rbp-290h]
  __int64 *v114; // [rsp+A0h] [rbp-288h]
  __int64 v115; // [rsp+A8h] [rbp-280h]
  __int64 v116; // [rsp+B0h] [rbp-278h]
  __int64 (__fastcall *v117)(); // [rsp+B8h] [rbp-270h]
  __int64 v118; // [rsp+C0h] [rbp-268h]
  __int64 (__fastcall *v119)(); // [rsp+C8h] [rbp-260h]
  char **v120; // [rsp+D0h] [rbp-258h]
  char **v121; // [rsp+D8h] [rbp-250h]
  __m128i *v122; // [rsp+E0h] [rbp-248h]
  __m128i v123; // [rsp+E8h] [rbp-240h] BYREF
  __int64 v124; // [rsp+F8h] [rbp-230h]
  __m128i v125; // [rsp+100h] [rbp-228h] BYREF
  __m128i *v126; // [rsp+118h] [rbp-210h] BYREF
  __int64 (__fastcall *v127)(); // [rsp+120h] [rbp-208h]
  __m128i *v128; // [rsp+128h] [rbp-200h]
  __int64 v129; // [rsp+130h] [rbp-1F8h]
  __int64 v130; // [rsp+138h] [rbp-1F0h]
  __int64 v131; // [rsp+148h] [rbp-1E0h]
  unsigned __int64 v132; // [rsp+150h] [rbp-1D8h]
  signed __int64 v133; // [rsp+158h] [rbp-1D0h] BYREF
  __int64 v134; // [rsp+160h] [rbp-1C8h]
  unsigned __int64 v135; // [rsp+168h] [rbp-1C0h]
  __m128i **v136; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v137)(); // [rsp+178h] [rbp-1B0h]
  __int64 *v138; // [rsp+180h] [rbp-1A8h]
  __int64 (__fastcall *v139)(); // [rsp+188h] [rbp-1A0h]
  void *v140; // [rsp+190h] [rbp-198h]
  unsigned __int64 v141; // [rsp+198h] [rbp-190h] BYREF
  __int64 v142; // [rsp+1A0h] [rbp-188h]
  __int64 v143; // [rsp+1B0h] [rbp-178h] BYREF
  __int64 v144; // [rsp+1B8h] [rbp-170h]
  __int64 v145; // [rsp+1C8h] [rbp-160h] BYREF
  __int64 v146; // [rsp+1D0h] [rbp-158h]
  __int64 v147; // [rsp+1E0h] [rbp-148h] BYREF
  __int64 v148; // [rsp+1E8h] [rbp-140h]
  int v149; // [rsp+1FCh] [rbp-12Ch]
  __m128i v150; // [rsp+200h] [rbp-128h] BYREF
  __int64 v151; // [rsp+210h] [rbp-118h]
  char **v152; // [rsp+220h] [rbp-108h]
  char **v153; // [rsp+228h] [rbp-100h]
  char **v154; // [rsp+230h] [rbp-F8h]
  __int64 v155; // [rsp+238h] [rbp-F0h]
  __int64 v156; // [rsp+240h] [rbp-E8h]
  __int64 v157; // [rsp+248h] [rbp-E0h]
  __m128i v158; // [rsp+250h] [rbp-D8h] BYREF
  __int64 v159; // [rsp+260h] [rbp-C8h]
  __int64 v160; // [rsp+268h] [rbp-C0h]
  _BOOL8 v161; // [rsp+270h] [rbp-B8h]
  __int64 v162; // [rsp+278h] [rbp-B0h]
  __int64 v163; // [rsp+280h] [rbp-A8h]
  __int64 v164; // [rsp+288h] [rbp-A0h]
  signed __int64 v165; // [rsp+290h] [rbp-98h]
  _QWORD *v166; // [rsp+298h] [rbp-90h]
  _OWORD v167[2]; // [rsp+2A0h] [rbp-88h] BYREF
  _QWORD v168[3]; // [rsp+2C8h] [rbp-60h] BYREF
  char v169; // [rsp+2E0h] [rbp-48h]
  __int64 *v170; // [rsp+2E8h] [rbp-40h]
  __int64 (__fastcall **v171)(); // [rsp+2F0h] [rbp-38h]

  v122 = a1;
  if ( a5 == 1 && *a4 == 45 )
  {
    v7 = (__int64 *)a1;
    v8 = std::io::stdio::stdout();
    v9 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v10 = v9;
    *v9 = v8;
    v11 = (__int64 (__fastcall **)())&unk_27BA28;
  }
  else
  {
    v104.m128i_i64[0] = 0x1B600000000LL;
    v104.m128i_i32[2] = 16777472;
    v104.m128i_i16[6] = 1;
    std::fs::OpenOptions::_open(&v158, &v104, a4, a5);
    if ( v158.m128i_i32[0] )
    {
      v104.m128i_i64[0] = 0LL;
      v104.m128i_i64[1] = 1LL;
      v105.m128i_i64[0] = 0LL;
      v105.m128i_i64[1] = v158.m128i_i64[1];
      v12 = (__m128i *)_rust_alloc(32LL, 8LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v13 = v12;
      v14 = _mm_loadu_si128(&v104);
      v12[1] = v105;
      *v12 = v14;
      return v13;
    }
    v15 = v158.m128i_i32[1];
    v16 = (__int32 *)_rust_alloc(4LL, 4LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v10 = (__int64 *)v16;
    *v16 = v15;
    v11 = &off_27B9D8;
    v7 = (__int64 *)v122;
  }
  v17 = _rust_alloc(0x2000LL, 1LL);
  if ( !v17 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v168[0] = 0x2000LL;
  v168[1] = v17;
  v168[2] = 0LL;
  v169 = 0;
  v170 = v10;
  v171 = v11;
  regex::regex::string::Regex::new(&v104, v7[7], v7[8]);
  if ( !v104.m128i_i64[0] )
  {
    v159 = v105.m128i_i64[1];
    v158 = _mm_loadu_si128((const __m128i *)&v104.m128i_u64[1]);
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v158, &off_27B2C8, &off_27BA78);
  }
  v18 = _mm_loadu_si128(&v104);
  v167[1] = v105;
  v167[0] = v18;
  v19 = *a3;
  v20 = a3[1];
  v21 = *a3;
  v22 = *a3 != 0;
  if ( *a3 )
    v21 = a3[2];
  v158 = (__m128i)(*a3 != 0);
  v159 = v19;
  v160 = v20;
  v161 = v22;
  v162 = 0LL;
  v163 = v19;
  v164 = v20;
  v165 = v21;
  if ( !a2[3] )
  {
    if ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v158) )
LABEL_158:
      core::option::expect_failed(aMissingFileInF, 24LL, &off_27BA90);
LABEL_148:
    core::ptr::drop_in_place<regex::regex::string::Regex>(v167, v21, v25);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v168);
    return 0LL;
  }
  v166 = a2 + 4;
  v23 = *a2;
  v156 = a2[1];
  v155 = v23;
  v157 = v23 - 80;
  LOBYTE(v23) = *((_BYTE *)v7 + 89);
  v98 = *((_BYTE *)v7 + 90);
  v101 = v23;
  v99 = v23 | v98;
  v149 = *((unsigned __int8 *)v7 + 93);
  v102 = 0LL;
  v153 = &off_27B8E0;
  v121 = &off_27B8C8;
  v154 = &off_27BAD8;
  v152 = &off_27B790;
  v120 = &off_27B778;
  while ( 1 )
  {
    v24 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v158);
    v26 = (_QWORD *)v24;
    if ( !v24 )
      goto LABEL_148;
    v27 = core::hash::BuildHasher::hash_one(v166, v24 + 24);
    v28 = _mm_cvtsi32_si128(v27 >> 57);
    v103 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v28, v28), 0), 0);
    for ( _RAX = 0LL; ; _RAX = v100 + 16 )
    {
      v100 = _RAX;
      v30 = v156 & v27;
      HIDWORD(_RAX) = HIDWORD(v155);
      v125 = _mm_loadu_si128((const __m128i *)(v155 + v30));
      _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(v125, v103));
      if ( _EBP )
        break;
LABEL_24:
      if ( _mm_movemask_epi8(
             _mm_cmpeq_epi8(
               _mm_load_si128(&v125),
               (__m128i)anon_585b1728ec6435d03fbe081b5952853c_1_llvm_8033991318799290767)) )
      {
        goto LABEL_158;
      }
      v27 = v100 + v30 + 16;
    }
    v32 = v26[5];
    while ( 1 )
    {
      __asm { tzcnt   eax, ebp }
      v33 = -80LL * (v156 & (v30 + _RAX));
      if ( v32 == *(_QWORD *)(v157 - 80 * (v156 & (v30 + _RAX)) + 16) )
      {
        v34 = (void *)v26[4];
        if ( !bcmp(v34, *(const void **)(v33 + v157 + 8), v32) )
          break;
      }
      _RAX = (unsigned int)(_EBP - 1);
      LOWORD(_RAX) = _EBP & (_EBP - 1);
      _EBP = _RAX;
      if ( !(_WORD)_RAX )
        goto LABEL_24;
    }
    v35 = v26[7];
    v36 = *(_QWORD *)(v155 + v33 - 40);
    if ( v35 >= v36 )
      core::panicking::panic_bounds_check(v26[7], v36, &off_27BAA8);
    v37 = v155 + v33;
    v38 = *(_QWORD *)(v37 - 48);
    v39 = 3 * v35;
    if ( !v101 )
    {
      if ( !v98 )
      {
        v40 = v26[7];
        v133 = 0LL;
        v134 = 1LL;
        v135 = 0LL;
        v41 = v122;
        v42 = v140;
        goto LABEL_51;
      }
      v43 = *(_QWORD *)(v38 + 24 * v35 + 8);
      v100 = 3 * v35;
      v125.m128i_i64[0] = v38;
      v44 = v43;
      v45 = *(_QWORD *)(v38 + 24 * v35 + 16);
      regex::regex::string::Regex::find_at(&v104, *(_QWORD *)&v167[0], *((_QWORD *)&v167[0] + 1));
      v46 = v104.m128i_i64[0];
      v47 = v104.m128i_i64[0];
      if ( v104.m128i_i64[0] )
      {
        v47 = v105.m128i_u64[1];
        v46 = v105.m128i_i64[0];
      }
      if ( v47 < v46 )
LABEL_162:
        core::str::slice_error_fail(v44, v45, v46, v47, &off_27B588);
      if ( v46 )
      {
        if ( v46 >= v45 )
        {
          if ( v46 != v45 )
            goto LABEL_162;
        }
        else if ( *(char *)(v44 + v46) <= -65 )
        {
          goto LABEL_162;
        }
      }
      if ( v47 )
      {
        if ( v47 >= v45 )
        {
          if ( v47 != v45 )
            goto LABEL_162;
        }
        else if ( *(char *)(v44 + v47) <= -65 )
        {
          goto LABEL_162;
        }
      }
      v103.m128i_i64[0] = v44;
      v48 = v47 - v46;
      if ( v48 )
      {
        if ( v48 < 0 )
        {
          v96 = 0LL;
        }
        else
        {
          v49 = v46;
          v40 = v35;
          v50 = _rust_alloc(v48, 1LL);
          if ( v50 )
          {
            v42 = (void *)v50;
            v46 = v49;
LABEL_49:
            memcpy(v42, (const void *)(v46 + v103.m128i_i64[0]), v48);
            v133 = v48;
            v134 = (__int64)v42;
            v135 = v48;
            v41 = v122;
            v39 = v100;
            goto LABEL_50;
          }
          v96 = 1LL;
          v140 = (void *)v48;
        }
        alloc::raw_vec::handle_error(v96, v140);
      }
      v40 = v35;
      v42 = &dword_0 + 1;
      goto LABEL_49;
    }
    v125.m128i_i64[0] = *(_QWORD *)(v37 - 48);
    v126 = 0LL;
    v127 = (__int64 (__fastcall *)())v34;
    v128 = (__m128i *)v32;
    LOBYTE(v129) = 0;
    v141 = v35 + 1;
    v136 = &v126;
    v137 = <os_display::Quoted as core::fmt::Display>::fmt;
    v138 = (__int64 *)&v141;
    v139 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v104.m128i_i64[0] = (__int64)&unk_27B5A0;
    v104.m128i_i64[1] = 2LL;
    v106 = 0LL;
    v105.m128i_i64[0] = (__int64)&v136;
    v105.m128i_i64[1] = 2LL;
    alloc::fmt::format::format_inner(&v133, &v104);
    v40 = v35;
    v41 = v122;
    v42 = v140;
LABEL_50:
    v38 = v125.m128i_i64[0];
LABEL_51:
    v51 = v38 + 8 * v39;
    v140 = v42;
    if ( v149 != 1 )
      break;
    v52 = *(_QWORD *)(v37 - 16);
    if ( v40 >= v52 )
    {
      v93 = v40;
      v154 = &off_27BAC0;
LABEL_166:
      core::panicking::panic_bounds_check(v93, v52, v154);
    }
    v59 = *(_QWORD *)(v37 - 24);
    v100 = *(_QWORD *)(v51 + 8);
    v103.m128i_i64[0] = *(_QWORD *)(v51 + 16);
    v60 = *(_QWORD *)(v59 + 8 * v39 + 8);
    v61 = *(_QWORD *)(v59 + 8 * v39 + 16);
    v125.m128i_i64[0] = v134;
    v132 = v135;
    v62 = v26[8];
    v63 = v26[9];
    v123.m128i_i64[0] = 0LL;
    v123.m128i_i64[1] = 1LL;
    v124 = 0LL;
    v126 = v41;
    v127 = <alloc::string::String as core::fmt::Display>::fmt;
    v104.m128i_i64[0] = (__int64)&off_27B888;
    v104.m128i_i64[1] = 1LL;
    v106 = 0LL;
    v105.m128i_i64[0] = (__int64)&v126;
    v105.m128i_i64[1] = 1LL;
    if ( (unsigned __int8)core::fmt::write(&v123, &off_27B300, &v104) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v97, &unk_27B2A8, &off_27B898);
    v64 = v62;
    if ( v98 )
    {
      if ( v62 )
      {
        if ( v62 >= v103.m128i_i64[0] )
        {
          if ( v62 != v103.m128i_i64[0] )
            goto LABEL_170;
        }
        else if ( *(char *)(v100 + v62) <= -65 )
        {
          goto LABEL_170;
        }
      }
      started = core::str::<impl str>::trim_start_matches(v100, v62, v125.m128i_i64[0], v132);
      core::str::<impl str>::trim_start_matches(started, v70);
      v64 = v62;
      v72 = v62 - v71;
      v73 = v62 <= v62 - v71;
      v95 = v62 - v71;
      if ( !v73 )
        v95 = v62;
      if ( v95 > v61 )
        goto LABEL_180;
      v66 = v95 - v72;
      v65 = v60 + 4 * v72;
      v64 = v62;
    }
    else
    {
      v65 = v60;
      v66 = v62;
      if ( v62 > v61 )
      {
        v95 = v62;
        v153 = &off_27B8B0;
LABEL_180:
        core::slice::index::slice_end_index_len_fail(v95, v61, v153, v64);
      }
    }
    v74 = v63 - v64;
    if ( v63 < v64 )
    {
      v102 = v64;
      goto LABEL_169;
    }
    if ( v64 )
    {
      if ( v62 >= v103.m128i_i64[0] )
      {
        if ( v62 != v103.m128i_i64[0] )
          goto LABEL_161;
      }
      else if ( *(char *)(v100 + v62) <= -65 )
      {
        goto LABEL_161;
      }
    }
    if ( v63 )
    {
      if ( v63 >= v103.m128i_i64[0] )
      {
        if ( v63 != v103.m128i_i64[0] )
        {
LABEL_161:
          v102 = v62;
LABEL_169:
          v62 = v63;
          v121 = &off_27B8F8;
LABEL_170:
          core::str::slice_error_fail(v100, v103.m128i_i64[0], v102, v62, v121);
        }
      }
      else if ( *(char *)(v100 + v63) <= -65 )
      {
        goto LABEL_161;
      }
    }
    if ( v61 < v63 )
      core::slice::index::slice_index_order_fail(v63, v61, &off_27B910);
    uu_ptx::get_output_chunks((__int64)&v104, v65, v66, v74, v60 + 4 * v63, v61 - v63, v122);
    v116 = v104.m128i_i64[0];
    v115 = v105.m128i_i64[1];
    v103.m128i_i64[0] = (__int64)v106;
    v75 = (unsigned __int64)v107;
    v114 = v108;
    v119 = v109;
    v76 = (unsigned __int64)v110;
    v117 = v111;
    v118 = v112;
    v77 = v113;
    v131 = v104.m128i_i64[1];
    uu_ptx::format_roff_field((__int64)&v143, v104.m128i_i64[1], v105.m128i_u64[0]);
    uu_ptx::format_roff_field((__int64)&v145, v103.m128i_i64[0], v75);
    uu_ptx::format_roff_field((__int64)&v147, v62 + v100, v74);
    uu_ptx::format_roff_field((__int64)&v141, (__int64)v119, v76);
    uu_ptx::format_roff_field((__int64)&v136, v118, v77);
    v104.m128i_i64[0] = (__int64)&v143;
    v104.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v105.m128i_i64[0] = (__int64)&v145;
    v105.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v106 = &v147;
    v107 = <alloc::string::String as core::fmt::Display>::fmt;
    v108 = (__int64 *)&v141;
    v109 = <alloc::string::String as core::fmt::Display>::fmt;
    v110 = &v136;
    v111 = <alloc::string::String as core::fmt::Display>::fmt;
    v126 = (__m128i *)&off_27B928;
    v127 = (__int64 (__fastcall *)())&byte_6;
    v130 = 0LL;
    v128 = &v104;
    v129 = 5LL;
    if ( (unsigned __int8)core::fmt::write(&v123, &off_27B300, &v126) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v97, &unk_27B2A8, &off_27B988);
    if ( v136 )
      _rust_dealloc(v137, v136, 1LL);
    if ( v141 )
      _rust_dealloc(v142, v141, 1LL);
    if ( v147 )
      _rust_dealloc(v148, v147, 1LL);
    if ( v145 )
      _rust_dealloc(v146, v145, 1LL);
    if ( v143 )
      _rust_dealloc(v144, v143, 1LL);
    if ( v99 )
    {
      uu_ptx::format_roff_field((__int64)&v126, v125.m128i_i64[0], v132);
      v136 = &v126;
      v137 = <alloc::string::String as core::fmt::Display>::fmt;
      v104.m128i_i64[0] = (__int64)&off_27B9A0;
      v104.m128i_i64[1] = 2LL;
      v106 = 0LL;
      v105.m128i_i64[0] = (__int64)&v136;
      v105.m128i_i64[1] = 1LL;
      if ( (unsigned __int8)core::fmt::write(&v123, &off_27B300, &v104) )
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v97, &unk_27B2A8, &off_27B9C0);
      goto LABEL_132;
    }
LABEL_134:
    v151 = v124;
    v150 = _mm_loadu_si128(&v123);
    if ( v117 )
      _rust_dealloc(v118, v117, 1LL);
    if ( v114 )
      _rust_dealloc(v119, v114, 1LL);
    if ( v115 )
      _rust_dealloc(v103.m128i_i64[0], v115, 1LL);
    if ( v116 )
      _rust_dealloc(v131, v116, 1LL);
    v126 = &v150;
    v127 = <alloc::string::String as core::fmt::Display>::fmt;
    v104.m128i_i64[0] = (__int64)&unk_27BAF0;
    v104.m128i_i64[1] = 2LL;
    v106 = 0LL;
    v105.m128i_i64[0] = (__int64)&v126;
    v105.m128i_i64[1] = 1LL;
    v86 = std::io::Write::write_fmt(v168, &v104);
    if ( v86 )
    {
      v104.m128i_i64[0] = 0LL;
      v104.m128i_i64[1] = 1LL;
      v105.m128i_i64[0] = 0LL;
      v105.m128i_i64[1] = v86;
      v87 = (__m128i *)_rust_alloc(32LL, 8LL);
      if ( !v87 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v13 = v87;
      v89 = _mm_loadu_si128(&v104);
      v87[1] = v105;
      *v87 = v89;
      if ( v150.m128i_i64[0] )
        _rust_dealloc(v150.m128i_i64[1], v150.m128i_i64[0], 1LL);
      goto LABEL_154;
    }
    if ( v150.m128i_i64[0] )
      _rust_dealloc(v150.m128i_i64[1], v150.m128i_i64[0], 1LL);
    v21 = v133;
    if ( v133 )
      _rust_dealloc(v125.m128i_i64[0], v133, 1LL);
  }
  if ( v149 == 2 )
  {
    v52 = *(_QWORD *)(v37 - 16);
    if ( v40 >= v52 )
    {
      v93 = v40;
      goto LABEL_166;
    }
    v53 = *(_QWORD *)(v37 - 24);
    v100 = *(_QWORD *)(v51 + 8);
    v103.m128i_i64[0] = *(_QWORD *)(v51 + 16);
    v54 = *(_QWORD *)(v53 + 8 * v39 + 8);
    v55 = *(_QWORD *)(v53 + 8 * v39 + 16);
    v125.m128i_i64[0] = v134;
    v132 = v135;
    v56 = v26[8];
    v57 = v26[9];
    v123.m128i_i64[0] = 0LL;
    v123.m128i_i64[1] = 1LL;
    v124 = 0LL;
    v126 = v41;
    v127 = <alloc::string::String as core::fmt::Display>::fmt;
    v104.m128i_i64[0] = (__int64)&off_27B728;
    v104.m128i_i64[1] = 2LL;
    v106 = 0LL;
    v105.m128i_i64[0] = (__int64)&v126;
    v105.m128i_i64[1] = 1LL;
    if ( (unsigned __int8)core::fmt::write(&v123, &off_27B300, &v104) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v97, &unk_27B2A8, &off_27B748);
    v58 = v56;
    if ( v98 )
    {
      if ( v56 )
      {
        if ( v56 >= v103.m128i_i64[0] )
        {
          if ( v56 != v103.m128i_i64[0] )
            goto LABEL_177;
        }
        else if ( *(char *)(v100 + v56) <= -65 )
        {
          goto LABEL_177;
        }
      }
      v78 = core::str::<impl str>::trim_start_matches(v100, v56, v125.m128i_i64[0], v132);
      core::str::<impl str>::trim_start_matches(v78, v79);
      v58 = v56;
      v81 = v56 - v80;
      v73 = v56 <= v56 - v80;
      v94 = v56 - v80;
      if ( !v73 )
        v94 = v56;
      if ( v94 > v55 )
        goto LABEL_179;
      v68 = v94 - v81;
      v67 = v54 + 4 * v81;
      v58 = v56;
    }
    else
    {
      v67 = v54;
      v68 = v56;
      if ( v56 > v55 )
      {
        v94 = v56;
        v152 = &off_27B760;
LABEL_179:
        core::slice::index::slice_end_index_len_fail(v94, v55, v152, v58);
      }
    }
    v82 = v57 - v58;
    if ( v57 < v58 )
    {
      v102 = v58;
      goto LABEL_176;
    }
    if ( v58 )
    {
      if ( v56 >= v103.m128i_i64[0] )
      {
        if ( v56 != v103.m128i_i64[0] )
          goto LABEL_160;
      }
      else if ( *(char *)(v100 + v56) <= -65 )
      {
        goto LABEL_160;
      }
    }
    if ( v57 )
    {
      if ( v57 >= v103.m128i_i64[0] )
      {
        if ( v57 != v103.m128i_i64[0] )
        {
LABEL_160:
          v102 = v56;
LABEL_176:
          v56 = v57;
          v120 = &off_27B7A8;
LABEL_177:
          core::str::slice_error_fail(v100, v103.m128i_i64[0], v102, v56, v120);
        }
      }
      else if ( *(char *)(v100 + v57) <= -65 )
      {
        goto LABEL_160;
      }
    }
    if ( v55 < v57 )
      core::slice::index::slice_index_order_fail(v57, v55, &off_27B7C0);
    uu_ptx::get_output_chunks((__int64)&v104, v67, v68, v82, v54 + 4 * v57, v55 - v57, v122);
    v116 = v104.m128i_i64[0];
    v115 = v105.m128i_i64[1];
    v103.m128i_i64[0] = (__int64)v106;
    v83 = (__int64)v107;
    v114 = v108;
    v119 = v109;
    v84 = (__int64)v110;
    v117 = v111;
    v118 = v112;
    v85 = v113;
    v131 = v104.m128i_i64[1];
    uu_ptx::format_tex_field((__int64)&v143, v104.m128i_i64[1], v105.m128i_i64[0]);
    uu_ptx::format_tex_field((__int64)&v145, v103.m128i_i64[0], v83);
    uu_ptx::format_tex_field((__int64)&v147, v56 + v100, v82);
    uu_ptx::format_tex_field((__int64)&v141, (__int64)v119, v84);
    uu_ptx::format_tex_field((__int64)&v136, v118, v85);
    v104.m128i_i64[0] = (__int64)&v143;
    v104.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v105.m128i_i64[0] = (__int64)&v145;
    v105.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v106 = &v147;
    v107 = <alloc::string::String as core::fmt::Display>::fmt;
    v108 = (__int64 *)&v141;
    v109 = <alloc::string::String as core::fmt::Display>::fmt;
    v110 = &v136;
    v111 = <alloc::string::String as core::fmt::Display>::fmt;
    v126 = (__m128i *)&off_27B7D8;
    v127 = (__int64 (__fastcall *)())&byte_6;
    v130 = 0LL;
    v128 = &v104;
    v129 = 5LL;
    if ( (unsigned __int8)core::fmt::write(&v123, &off_27B300, &v126) )
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v97, &unk_27B2A8, &off_27B838);
    if ( v136 )
      _rust_dealloc(v137, v136, 1LL);
    if ( v141 )
      _rust_dealloc(v142, v141, 1LL);
    if ( v147 )
      _rust_dealloc(v148, v147, 1LL);
    if ( v145 )
      _rust_dealloc(v146, v145, 1LL);
    if ( v143 )
      _rust_dealloc(v144, v143, 1LL);
    if ( v99 )
    {
      uu_ptx::format_tex_field((__int64)&v126, v125.m128i_i64[0], v132);
      v136 = &v126;
      v137 = <alloc::string::String as core::fmt::Display>::fmt;
      v104.m128i_i64[0] = (__int64)&off_27B850;
      v104.m128i_i64[1] = 2LL;
      v106 = 0LL;
      v105.m128i_i64[0] = (__int64)&v136;
      v105.m128i_i64[1] = 1LL;
      if ( (unsigned __int8)core::fmt::write(&v123, &off_27B300, &v104) )
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v97, &unk_27B2A8, &off_27B870);
LABEL_132:
      if ( v126 )
        _rust_dealloc(v127, v126, 1LL);
      goto LABEL_134;
    }
    goto LABEL_134;
  }
  v90 = (__m128i *)_rust_alloc(24LL, 8LL);
  if ( !v90 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v13 = v90;
  v90->m128i_i8[0] = 0;
LABEL_154:
  v91 = v133;
  if ( v133 )
    _rust_dealloc(v134, v133, 1LL);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v167, v91, v88);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v168);
  return v13;
}
