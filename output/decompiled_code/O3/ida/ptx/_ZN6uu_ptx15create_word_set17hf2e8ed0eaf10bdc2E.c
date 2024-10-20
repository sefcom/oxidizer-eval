_QWORD *__fastcall uu_ptx::create_word_set(_QWORD *a1, __int64 a2, __int64 a3, const __m128i **a4)
{
  __m128i v7; // xmm0
  __int64 v8; // rsi
  const __m128i *v9; // rdx
  __m128i v10; // xmm0
  const __m128i *v11; // rcx
  bool v12; // al
  char v13; // dl
  __int64 v14; // rsi
  char v15; // r12
  __int64 v16; // rax
  const __m128i *v17; // rax
  int v18; // esi
  int v19; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  void ***v24; // r8
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rdx
  _OWORD *v29; // rbx
  char *v30; // rbx
  unsigned __int128 v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rsi
  unsigned __int64 v34; // r15
  void ***v35; // rbp
  unsigned __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // xmm0
  void ***v42; // r13
  char *v43; // r15
  __int64 v44; // rbp
  __int64 v45; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // rbp
  __m128i v48; // xmm0
  __int64 i; // r14
  unsigned __int64 v50; // rbp
  __int64 v53; // rax
  void *v54; // rbp
  unsigned __int64 v55; // rbp
  __m128i v56; // xmm0
  __int64 j; // r14
  unsigned __int64 v58; // rbp
  __int64 v61; // rax
  __int64 v62; // rbx
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  char *v66; // rsi
  char v67; // [rsp+Ch] [rbp-29Ch]
  bool v68; // [rsp+Dh] [rbp-29Bh]
  bool v69; // [rsp+Dh] [rbp-29Bh]
  char v70; // [rsp+Eh] [rbp-29Ah]
  char v71; // [rsp+Fh] [rbp-299h]
  void *s1[2]; // [rsp+10h] [rbp-298h] BYREF
  size_t n; // [rsp+20h] [rbp-288h]
  __int64 v74; // [rsp+28h] [rbp-280h]
  __m128i v75; // [rsp+30h] [rbp-278h] BYREF
  void ***v76; // [rsp+40h] [rbp-268h] BYREF
  __m128i v77; // [rsp+48h] [rbp-260h]
  __int64 v78; // [rsp+58h] [rbp-250h]
  __int64 v79; // [rsp+60h] [rbp-248h]
  __int64 v80; // [rsp+68h] [rbp-240h]
  __int64 v81; // [rsp+70h] [rbp-238h]
  void ***v82; // [rsp+78h] [rbp-230h]
  void ***v83; // [rsp+88h] [rbp-220h]
  __m128i v84; // [rsp+90h] [rbp-218h] BYREF
  __int128 v85; // [rsp+A0h] [rbp-208h]
  __int64 v86; // [rsp+B0h] [rbp-1F8h] BYREF
  void ***v87; // [rsp+B8h] [rbp-1F0h]
  int v88; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-1E0h]
  void ***v90; // [rsp+D0h] [rbp-1D8h]
  void ***v91; // [rsp+D8h] [rbp-1D0h]
  void ***v92; // [rsp+E0h] [rbp-1C8h]
  char v93; // [rsp+E8h] [rbp-1C0h]
  _BYTE v94[7]; // [rsp+E9h] [rbp-1BFh]
  _OWORD *v95; // [rsp+F0h] [rbp-1B8h]
  __int64 v96; // [rsp+F8h] [rbp-1B0h]
  void ***v97; // [rsp+100h] [rbp-1A8h]
  __int64 v98; // [rsp+108h] [rbp-1A0h]
  void **v99; // [rsp+110h] [rbp-198h] BYREF
  __m128i v100; // [rsp+118h] [rbp-190h]
  __int64 (__fastcall *v101)(); // [rsp+128h] [rbp-180h]
  _QWORD *v102; // [rsp+130h] [rbp-178h]
  __int64 m128i_i64; // [rsp+138h] [rbp-170h]
  char *v104; // [rsp+140h] [rbp-168h]
  __int128 v105; // [rsp+148h] [rbp-160h]
  __int64 v106; // [rsp+158h] [rbp-150h]
  __int64 v107; // [rsp+160h] [rbp-148h]
  __int64 v108; // [rsp+168h] [rbp-140h]
  __int64 v109; // [rsp+170h] [rbp-138h]
  _QWORD v110[2]; // [rsp+178h] [rbp-130h] BYREF
  __int64 v111; // [rsp+188h] [rbp-120h]
  __m128i v112; // [rsp+190h] [rbp-118h]
  __m128i v113; // [rsp+1A0h] [rbp-108h] BYREF
  __int64 v114; // [rsp+1B8h] [rbp-F0h]
  const __m128i *v115; // [rsp+1C0h] [rbp-E8h]
  const __m128i *v116; // [rsp+1C8h] [rbp-E0h]
  __int64 v117; // [rsp+1D0h] [rbp-D8h]
  __int64 v118; // [rsp+1D8h] [rbp-D0h]
  __int64 v119; // [rsp+1E0h] [rbp-C8h]
  __int64 v120; // [rsp+1E8h] [rbp-C0h]
  __int64 v121; // [rsp+1F0h] [rbp-B8h]
  __int64 v122; // [rsp+1F8h] [rbp-B0h]
  __int64 v123; // [rsp+200h] [rbp-A8h]
  __int64 v124; // [rsp+208h] [rbp-A0h]
  __int64 v125; // [rsp+210h] [rbp-98h]
  __int64 v126; // [rsp+218h] [rbp-90h]
  __int64 v127; // [rsp+220h] [rbp-88h]
  unsigned __int64 v128; // [rsp+228h] [rbp-80h] BYREF
  _OWORD v129[2]; // [rsp+230h] [rbp-78h] BYREF
  _OWORD v130[5]; // [rsp+250h] [rbp-58h] BYREF

  v102 = a1;
  regex::regex::string::Regex::new(&v84, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  if ( !v84.m128i_i64[0] )
  {
    v76 = (void ***)*((_QWORD *)&v85 + 1);
    v75 = _mm_loadu_si128((const __m128i *)&v84.m128i_u64[1]);
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v75, &off_27B2C8, &off_27B540);
  }
  v7 = _mm_loadu_si128(&v84);
  v129[1] = v85;
  v129[0] = v7;
  v8 = *(_QWORD *)(a2 + 56);
  regex::regex::string::Regex::new(&v84, v8, *(_QWORD *)(a2 + 64));
  if ( !v84.m128i_i64[0] )
  {
    v76 = (void ***)*((_QWORD *)&v85 + 1);
    v75 = _mm_loadu_si128((const __m128i *)&v84.m128i_u64[1]);
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v75, &off_27B2C8, &off_27B558);
  }
  v10 = _mm_loadu_si128(&v84);
  v130[1] = v85;
  v130[0] = v10;
  v110[0] = 0LL;
  v111 = 0LL;
  v11 = a4[3];
  v68 = *(_BYTE *)(a3 + 121) == 0;
  v12 = *(_QWORD *)(a3 + 96) == 0LL;
  if ( v11 )
  {
    v13 = *(_BYTE *)(a2 + 90);
    v70 = *(_BYTE *)(a2 + 92);
    v71 = *(_BYTE *)(a3 + 120);
    v124 = *(_QWORD *)(a3 + 48);
    v120 = a3 + 56;
    v14 = *(_QWORD *)(a3 + 24);
    v107 = *(_QWORD *)(a3 + 32);
    v127 = v14;
    v109 = v14 - 24;
    v119 = a3 + 104;
    v106 = *(_QWORD *)(a3 + 80);
    v8 = *(_QWORD *)(a3 + 72);
    v15 = v13;
    v126 = v8;
    v108 = v8 - 24;
    v69 = v12 || v68;
    v9 = *a4;
    LODWORD(v8) = ~_mm_movemask_epi8(_mm_load_si128(*a4));
    m128i_i64 = (__int64)(*a4)[1].m128i_i64;
    v67 = v15;
    while ( 1 )
    {
      v116 = v11;
      if ( (_WORD)v8 )
      {
        v16 = (unsigned int)v8 & ((_DWORD)v8 - 1);
      }
      else
      {
        v17 = (const __m128i *)m128i_i64;
        do
        {
          v18 = _mm_movemask_epi8(_mm_load_si128(v17));
          v9 -= 80;
          ++v17;
        }
        while ( v18 == 0xFFFF );
        m128i_i64 = (__int64)v17;
        v19 = -2 - v18;
        LODWORD(v8) = ~v18;
        v16 = v19 & (unsigned int)v8;
      }
      _RCX = (unsigned int)v8;
      __asm { tzcnt   ecx, ecx }
      v114 = v16;
      v21 = -5 * _RCX;
      v22 = *((_QWORD *)&v9[-5 * _RCX - 2] - 1);
      v115 = v9;
      if ( v22 )
        break;
LABEL_5:
      v11 = (const __m128i *)((char *)v116 - 1);
      v9 = v115;
      v8 = v114;
      if ( v116 == (const __m128i *)((char *)&dword_0 + 1) )
        goto LABEL_104;
    }
    v121 = (__int64)v9[v21 - 5].m128i_i64;
    v118 = v9[v21 - 1].m128i_i64[1];
    v23 = v9[v21 - 3].m128i_i64[0];
    v117 = v23 + 24 * v22;
    v98 = 0LL;
LABEL_15:
    v24 = *(void ****)(v23 + 16);
    v74 = *(_QWORD *)(v23 + 8);
    v83 = v24;
    regex::regex::string::Regex::find_at(&v84, *(_QWORD *)&v130[0], *((_QWORD *)&v130[0] + 1));
    *(_QWORD *)&v105 = v84.m128i_i64[0];
    *((_QWORD *)&v105 + 1) = v84.m128i_i64[0];
    if ( v84.m128i_i64[0] )
    {
      *(_QWORD *)&v105 = *((_QWORD *)&v85 + 1);
      *((_QWORD *)&v105 + 1) = v85;
    }
    v25 = *((_QWORD *)&v129[0] + 1);
    v26 = (_QWORD *)(__readfsqword(0) - 16);
    if ( *v26 )
      v27 = v26 + 1;
    else
      v27 = (__int64 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 16, 0LL);
    v28 = *v27;
    if ( *v27 == *(_QWORD *)(v25 + 40) )
    {
      *(_QWORD *)(v25 + 40) = 1LL;
      v76 = (void ***)v25;
      v75.m128i_i64[0] = 1LL;
      v75.m128i_i64[1] = v28;
      v77.m128i_i8[0] = 0;
    }
    else
    {
      regex_automata::util::pool::inner::Pool<T,F>::get_slow(&v75, v25);
    }
    v122 = v23 + 24;
    *(_QWORD *)&v85 = v76;
    BYTE8(v85) = v77.m128i_i8[0];
    *(_DWORD *)((char *)&v85 + 9) = *(__int32 *)((char *)v77.m128i_i32 + 1);
    *(_WORD *)((char *)&v85 + 13) = *(__int16 *)((char *)&v77.m128i_i16[2] + 1);
    HIBYTE(v85) = v77.m128i_i8[7];
    v84 = v75;
    v88 = 0;
    v89 = v74;
    v90 = v83;
    v91 = 0LL;
    v92 = v83;
    v93 = 0;
    *(_DWORD *)&v94[3] = *(__int32 *)((char *)v75.m128i_i32 + 3);
    *(_DWORD *)v94 = v75.m128i_i32[0];
    v86 = 0LL;
    v29 = v129;
    v95 = v129;
    v96 = v74;
    v97 = v83;
    v123 = v98 + v118;
    while ( 1 )
    {
      *(_QWORD *)&v31 = v84.m128i_i64[0];
      if ( v84.m128i_i64[0] )
        *((_QWORD *)&v31 + 1) = v85 + 48;
      else
        v31 = __PAIR128__(v84.m128i_u64[1], 0LL);
      v32 = *(_QWORD *)v29;
      v33 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)v29 + 32LL) + 168LL);
      if ( v91 && (*((_BYTE *)v33 + 60) & 1) != 0 )
        goto LABEL_99;
      v34 = (unsigned __int64)v90;
      v35 = v92;
      if ( v92 < v90 && (v33[8] & 2) != 0 )
        goto LABEL_99;
      if ( *v33 )
      {
        v36 = 0LL;
        if ( v92 >= v91 )
          v36 = (char *)v92 - (char *)v91;
        if ( v36 < v33[1]
          || ((unsigned int)(v88 - 1) < 2 || (*((_BYTE *)v33 + 60) & 1) != 0)
          && (v33[8] & 2) != 0
          && v33[2]
          && v36 > v33[3] )
        {
          goto LABEL_99;
        }
      }
      v37 = *(_QWORD *)(v32 + 24);
      v33 = (__int64 *)(*(_QWORD *)(v32 + 16) + ((*(_QWORD *)(v37 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      (*(void (__fastcall **)(__m128i *, __int64 *, _QWORD, int *))(v37 + 104))(&v75, v33, *((_QWORD *)&v31 + 1), &v88);
      if ( !v75.m128i_i64[0] )
        goto LABEL_98;
      *((_QWORD *)&v31 + 1) = v75.m128i_i64[1];
      if ( v75.m128i_i64[0] == 2 )
      {
LABEL_105:
        s1[0] = *((void **)&v31 + 1);
        v99 = s1;
        v100.m128i_i64[0] = (__int64)<regex_automata::util::search::MatchError as core::fmt::Display>::fmt;
        v75.m128i_i64[0] = (__int64)&off_27B1F0;
        v75.m128i_i64[1] = 2LL;
        v76 = &v99;
        v77 = (__m128i)1uLL;
        core::panicking::panic_fmt(&v75, &off_27B210, *((_QWORD *)&v31 + 1), v38, v39, v40);
      }
      v41 = _mm_loadu_si128((const __m128i *)&v76);
      v42 = (void ***)v41.m128i_i64[0];
      if ( v41.m128i_i64[0] <= (unsigned __int64)v75.m128i_i64[1] && v86 && (void ***)v41.m128i_i64[0] == v87 )
      {
        v99 = (void **)v75.m128i_i64[1];
        v100 = v41;
        v33 = &v86;
        regex_automata::util::iter::Searcher::handle_overlapping_empty_match(&v75, &v86, &v99, v29, &v84);
        *((_QWORD *)&v31 + 1) = v75.m128i_i64[1];
        if ( v75.m128i_i64[0] == 2 )
          goto LABEL_105;
        if ( !v75.m128i_i64[0] )
        {
LABEL_98:
          *(_QWORD *)&v31 = v84.m128i_i64[0];
LABEL_99:
          v62 = v84.m128i_i64[1];
          v84.m128i_i64[0] = 1LL;
          v84.m128i_i64[1] = 2LL;
          v23 = v122;
          if ( (_QWORD)v31 )
          {
            v99 = (void **)v62;
            if ( v62 == 2 )
            {
              v75.m128i_i64[0] = 0LL;
              core::panicking::assert_failed(
                1LL,
                &regex_automata::util::pool::inner::THREAD_ID_DROPPED,
                &v99,
                &v75,
                &off_27B258);
            }
            *(_QWORD *)(v85 + 40) = v62;
          }
          else if ( BYTE8(v85) )
          {
            core::ptr::drop_in_place<regex_automata::meta::regex::Cache>(v62, v33, *((_QWORD *)&v31 + 1));
            _rust_dealloc(v62, 1400LL, 8LL);
          }
          else
          {
            regex_automata::util::pool::inner::Pool<T,F>::put_value(v85, v62);
          }
          ++v98;
          if ( v23 == v117 )
            goto LABEL_5;
          goto LABEL_15;
        }
        v42 = v76;
        v34 = (unsigned __int64)v90;
        v35 = v92;
      }
      s1[0] = v42;
      s1[1] = v35;
      if ( v34 < (unsigned __int64)v35 || (void ***)((char *)v35 + 1) < v42 )
      {
        v128 = v34;
        v99 = s1;
        v100.m128i_i64[0] = (__int64)<regex_automata::util::search::Span as core::fmt::Debug>::fmt;
        v100.m128i_i64[1] = (__int64)&v128;
        v101 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v75.m128i_i64[0] = (__int64)&off_27B270;
        v75.m128i_i64[1] = 2LL;
        v76 = &v99;
        v77 = (__m128i)2uLL;
        core::panicking::panic_fmt(&v75, &off_27B290, *((_QWORD *)&v31 + 1), v38, v39, v40);
      }
      v91 = v42;
      v92 = v35;
      v86 = 1LL;
      v87 = v42;
      if ( !v15 || __PAIR128__(*((unsigned __int64 *)&v31 + 1), (unsigned __int64)v42) != v105 )
      {
        if ( (unsigned __int64)v42 < *((_QWORD *)&v31 + 1) )
          goto LABEL_106;
        if ( *((_QWORD *)&v31 + 1) )
        {
          if ( *((_QWORD *)&v31 + 1) >= (unsigned __int64)v83 )
          {
            if ( *((void ****)&v31 + 1) != v83 )
              goto LABEL_106;
          }
          else if ( *(char *)(v74 + *((_QWORD *)&v31 + 1)) <= -65 )
          {
            goto LABEL_106;
          }
        }
        if ( v42 )
        {
          if ( v42 >= v83 )
          {
            if ( v42 != v83 )
LABEL_106:
              core::str::slice_error_fail(v74, v83, *((_QWORD *)&v31 + 1), v42, &off_27B570);
          }
          else if ( *((char *)v42 + v74) <= -65 )
          {
            goto LABEL_106;
          }
        }
        v43 = (char *)v42 - *((_QWORD *)&v31 + 1);
        if ( v42 == *((void ****)&v31 + 1) )
        {
          v30 = (_BYTE *)(&dword_0 + 1);
        }
        else
        {
          if ( (__int64)v42 - *((_QWORD *)&v31 + 1) < 0 )
          {
            v45 = 0LL;
            v66 = v104;
LABEL_110:
            alloc::raw_vec::handle_error(v45, v66);
          }
          v44 = *((_QWORD *)&v31 + 1);
          v45 = 1LL;
          v46 = _rust_alloc((char *)v42 - *((_QWORD *)&v31 + 1), 1LL);
          if ( !v46 )
          {
            v66 = v43;
            goto LABEL_110;
          }
          v30 = (char *)v46;
          *((_QWORD *)&v31 + 1) = v44;
        }
        v125 = *((_QWORD *)&v31 + 1);
        memcpy(v30, (const void *)(v74 + *((_QWORD *)&v31 + 1)), (size_t)v43);
        s1[0] = v43;
        s1[1] = v30;
        n = (size_t)v43;
        v104 = v30;
        if ( v71 )
        {
          if ( v124 )
          {
            v47 = core::hash::BuildHasher::hash_one(v120, s1);
            v48 = _mm_cvtsi32_si128(v47 >> 57);
            v112 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v48, v48), 0), 0);
            v30 = (char *)s1[1];
            v43 = (char *)n;
            for ( i = 0LL; ; i += 16LL )
            {
              v50 = v107 & v47;
              HIDWORD(_RAX) = HIDWORD(v127);
              v113 = _mm_loadu_si128((const __m128i *)(v127 + v50));
              _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v113, v112));
              if ( _R12D )
              {
                while ( 1 )
                {
                  __asm { tzcnt   eax, r12d }
                  v53 = -3LL * (v107 & (v50 + _RAX));
                  if ( v43 == *(char **)(v109 + 8 * v53 + 16)
                    && !bcmp(v30, *(const void **)(v109 + 8 * v53 + 8), (size_t)v43) )
                  {
                    break;
                  }
                  _RAX = (unsigned int)(_R12D - 1);
                  LOWORD(_RAX) = _R12D & (_R12D - 1);
                  _R12D = _RAX;
                  if ( !(_WORD)_RAX )
                    goto LABEL_75;
                }
                v15 = v67;
                goto LABEL_81;
              }
LABEL_75:
              if ( _mm_movemask_epi8(
                     _mm_cmpeq_epi8(
                       _mm_load_si128(&v113),
                       (__m128i)anon_585b1728ec6435d03fbe081b5952853c_1_llvm_8033991318799290767)) )
              {
                break;
              }
              v47 = i + v50 + 16;
            }
LABEL_94:
            v43 = (char *)s1[0];
            v15 = v67;
            if ( s1[0] )
              goto LABEL_25;
          }
          else
          {
            v30 = v104;
            if ( v43 )
LABEL_25:
              _rust_dealloc(v30, v43, 1LL);
          }
        }
        else
        {
LABEL_81:
          if ( v69 )
          {
            if ( v70 )
            {
LABEL_83:
              alloc::str::<impl str>::to_lowercase(&v75, v30, v43);
              if ( s1[0] )
                _rust_dealloc(s1[1], s1[0], 1LL);
              v43 = (char *)v76;
              n = (size_t)v76;
              *(__m128i *)s1 = _mm_loadu_si128(&v75);
              v30 = (char *)s1[1];
            }
          }
          else
          {
            v55 = core::hash::BuildHasher::hash_one(v119, s1);
            v56 = _mm_cvtsi32_si128(v55 >> 57);
            v112 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v56, v56), 0), 0);
            v30 = (char *)s1[1];
            v43 = (char *)n;
            for ( j = 0LL; ; j += 16LL )
            {
              v58 = v106 & v55;
              HIDWORD(_RAX) = HIDWORD(v126);
              v113 = _mm_loadu_si128((const __m128i *)(v126 + v58));
              _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v113, v112));
              if ( _R12D )
              {
                do
                {
                  __asm { tzcnt   eax, r12d }
                  v61 = -3LL * (v106 & (v58 + _RAX));
                  if ( v43 == *(char **)(v108 + 8 * v61 + 16)
                    && !bcmp(v30, *(const void **)(v108 + 8 * v61 + 8), (size_t)v43) )
                  {
                    goto LABEL_94;
                  }
                  _RAX = (unsigned int)(_R12D - 1);
                  LOWORD(_RAX) = _R12D & (_R12D - 1);
                  _R12D = _RAX;
                }
                while ( (_WORD)_RAX );
              }
              if ( _mm_movemask_epi8(
                     _mm_cmpeq_epi8(
                       _mm_load_si128(&v113),
                       (__m128i)anon_585b1728ec6435d03fbe081b5952853c_1_llvm_8033991318799290767)) )
              {
                break;
              }
              v55 = j + v58 + 16;
            }
            v15 = v67;
            if ( v70 )
              goto LABEL_83;
          }
          v54 = s1[0];
          <alloc::string::String as core::clone::Clone>::clone(&v99);
          v75.m128i_i64[0] = (__int64)v54;
          v75.m128i_i64[1] = (__int64)v30;
          v76 = (void ***)v43;
          v79 = v123;
          v80 = v98;
          v81 = v125;
          v82 = v42;
          v78 = v100.m128i_i64[1];
          v77 = _mm_loadu_si128((const __m128i *)&v99);
          alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v110, &v75);
        }
      }
      v29 = v95;
    }
  }
LABEL_104:
  v63 = v102;
  v102[2] = v111;
  *v63 = v110[0];
  v63[1] = v110[1];
  core::ptr::drop_in_place<regex::regex::string::Regex>(v130, v8, v9);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v129, v8, v64);
  return v102;
}
