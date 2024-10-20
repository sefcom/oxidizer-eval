__int64 __fastcall uu_tsort::Graph::run_tsort(__int64 a1, const __m128i **a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  const __m128i *v5; // rcx
  __int64 v6; // rdx
  const __m128i *v7; // roff
  __int16 v8; // si
  __m128i v9; // xmm0
  __int64 contiguous; // rax
  unsigned __int64 v11; // rdx
  const __m128i *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r14
  char *v16; // r13
  const void *v17; // r12
  size_t v18; // rbp
  size_t v19; // rdx
  __int64 v20; // r13
  int v21; // eax
  char *v22; // r13
  size_t v23; // rdx
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r12
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  const __m128i *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  size_t v42; // rbp
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  const __m128i *v45; // r12
  unsigned __int64 v46; // r14
  __m128i v47; // xmm0
  __int64 v48; // r15
  __int64 v51; // r14
  __int64 v52; // r13
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // r15
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // r15
  __int64 v66; // rax
  const __m128i *v67; // rdx
  const __m128i *v68; // rbx
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rax
  size_t v73; // rbp
  unsigned __int64 v74; // rax
  __int64 v76; // r14
  __int64 v77; // r15
  __m128i v78; // xmm0
  __int64 v79; // r13
  __int64 v81; // r15
  int v82; // eax
  char *s1; // [rsp+8h] [rbp-180h]
  void *s1a; // [rsp+8h] [rbp-180h]
  void *s1b; // [rsp+8h] [rbp-180h]
  char v88; // [rsp+17h] [rbp-171h] BYREF
  __m128i v89; // [rsp+18h] [rbp-170h] BYREF
  __int64 v90; // [rsp+28h] [rbp-160h]
  __int64 v91; // [rsp+30h] [rbp-158h]
  __int64 v92; // [rsp+38h] [rbp-150h]
  const __m128i *v93; // [rsp+40h] [rbp-148h]
  const __m128i *v94; // [rsp+48h] [rbp-140h]
  __int64 v95; // [rsp+50h] [rbp-138h]
  __int128 v96; // [rsp+58h] [rbp-130h] BYREF
  __int64 v97; // [rsp+68h] [rbp-120h]
  const __m128i *v98; // [rsp+70h] [rbp-118h]
  __int64 v99; // [rsp+78h] [rbp-110h]
  const __m128i *v100; // [rsp+80h] [rbp-108h]
  __int128 v101; // [rsp+88h] [rbp-100h] BYREF
  __int64 v102; // [rsp+98h] [rbp-F0h]
  __m128i v103; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v104; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v105; // [rsp+C0h] [rbp-C8h]
  _QWORD v106[3]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v107; // [rsp+E8h] [rbp-A0h]
  __m128i v108; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v109; // [rsp+108h] [rbp-80h]
  __int128 v110; // [rsp+110h] [rbp-78h]
  __int64 v111; // [rsp+120h] [rbp-68h]
  _QWORD v112[3]; // [rsp+130h] [rbp-58h] BYREF
  __int16 v113; // [rsp+148h] [rbp-40h]
  const __m128i *v114; // [rsp+150h] [rbp-38h]

  v2 = (unsigned __int64)a2[3];
  if ( v2 )
  {
    if ( v2 > 0x7FFFFFFFFFFFFFFLL )
    {
      v3 = 0LL;
    }
    else
    {
      v3 = 8LL;
      v4 = _rust_alloc(16 * v2, 8LL);
      if ( v4 )
      {
        v5 = a2[3];
        goto LABEL_6;
      }
    }
    alloc::raw_vec::handle_error(v3, 16 * v2);
  }
  v4 = 8LL;
  v5 = 0LL;
LABEL_6:
  v107 = a1;
  *(_QWORD *)&v96 = v2;
  *((_QWORD *)&v96 + 1) = v4;
  v97 = 0LL;
  v6 = (__int64)a2[1]->m128i_i64 + (_QWORD)*a2 + 1;
  v7 = *a2;
  v8 = _mm_movemask_epi8(_mm_load_si128(*a2));
  v112[0] = v7;
  v112[1] = v7 + 1;
  v112[2] = v6;
  v113 = ~v8;
  v114 = v5;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v104, v112);
  v9 = _mm_loadu_si128(&v104);
  v90 = 0LL;
  v91 = v105.m128i_i64[0];
  v89 = v9;
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v89);
  if ( v11 >= 2 )
  {
    v13 = contiguous;
    if ( v11 >= 0x15 )
    {
      core::slice::sort::unstable::ipnsort(contiguous, v11, &v88);
    }
    else
    {
      v14 = contiguous + 16 * v11;
      v15 = contiguous + 16;
      s1 = (char *)&word_10;
      v103.m128i_i64[0] = v14;
      do
      {
        v17 = *(const void **)v15;
        v18 = *(_QWORD *)(v15 + 8);
        v19 = *(_QWORD *)(v15 - 8);
        v20 = v18 - v19;
        if ( v18 < v19 )
          v19 = *(_QWORD *)(v15 + 8);
        v21 = memcmp(*(const void **)v15, *(const void **)(v15 - 16), v19);
        if ( v21 )
          v20 = v21;
        if ( v20 < 0 )
        {
          v22 = s1;
          do
          {
            *(__m128i *)&v22[v13] = _mm_loadu_si128((const __m128i *)&v22[v13 - 16]);
            if ( v22 == (char *)&word_10 )
            {
              v16 = (char *)v13;
              goto LABEL_10;
            }
            v23 = *(_QWORD *)&v22[v13 - 24];
            v24 = v18 - v23;
            if ( v18 < v23 )
              v23 = v18;
            v25 = memcmp(v17, *(const void **)&v22[v13 - 32], v23);
            if ( v25 )
              v24 = v25;
            v22 -= 16;
          }
          while ( v24 < 0 );
          v16 = &v22[v13];
LABEL_10:
          v14 = v103.m128i_i64[0];
          *(_QWORD *)v16 = v17;
          *((_QWORD *)v16 + 1) = v18;
        }
        v15 += 16LL;
        s1 += 16;
      }
      while ( v15 != v14 );
    }
  }
  v26 = v91;
  if ( v91 )
  {
    v94 = (const __m128i *)(a2 + 4);
    v27 = 0x8000000000000000LL;
    v109 = 0x8000000000000000LL;
    do
    {
      v28 = v90;
      v29 = v89.m128i_i64[0];
      if ( (unsigned __int64)(v90 + 1) < v89.m128i_i64[0] )
        v29 = 0LL;
      v90 = v90 - v29 + 1;
      v91 = v26 - 1;
      v30 = 16 * v28;
      v31 = *(_QWORD *)(v89.m128i_i64[1] + v30);
      v32 = *(_QWORD *)(v89.m128i_i64[1] + v30 + 8);
      v33 = v97;
      if ( v97 == (_QWORD)v96 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v96);
      v34 = *((_QWORD *)&v96 + 1);
      v35 = 16 * v33;
      *(_QWORD *)(*((_QWORD *)&v96 + 1) + v35) = v31;
      *(_QWORD *)(v34 + v35 + 8) = v32;
      v97 = v33 + 1;
      v36 = core::hash::BuildHasher::hash_one(v94, v31, v32);
      hashbrown::raw::RawTable<T,A>::remove_entry(&v104, a2, v36, v31, v32);
      v99 = v105.m128i_i64[0];
      if ( v105.m128i_i64[0] != v27 )
      {
        v98 = (const __m128i *)v105.m128i_i64[1];
        v12 = (const __m128i *)v106[0];
        if ( v106[0] )
        {
          v37 = v98;
          v93 = &v98[v106[0]];
          do
          {
            if ( !a2[3] )
LABEL_88:
              core::option::unwrap_failed(&off_E7730);
            v100 = v37 + 1;
            v42 = v37->m128i_u64[1];
            s1a = (void *)v37->m128i_i64[0];
            v43 = core::hash::BuildHasher::hash_one(v94, v37->m128i_i64[0], v42);
            v44 = (__int64)*a2;
            v45 = a2[1];
            v46 = v43 & (unsigned __int64)v45;
            v47 = _mm_cvtsi32_si128(v43 >> 57);
            v108 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v47, v47), 0), 0);
            v95 = v44;
            v48 = v44 - 48;
            v92 = 0LL;
            while ( 1 )
            {
              HIDWORD(_RAX) = HIDWORD(v95);
              v103 = _mm_loadu_si128((const __m128i *)(v95 + v46));
              _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v103, v108));
              if ( _EBX )
                break;
LABEL_43:
              if ( _mm_movemask_epi8(
                     _mm_cmpeq_epi8(
                       _mm_load_si128(&v103),
                       (__m128i)anon_c57a7805e9a900e622496ec0d4f4cf5c_4_llvm_6768286536187217038)) )
              {
                goto LABEL_88;
              }
              v51 = v92 + v46 + 16;
              v92 += 16LL;
              v46 = (unsigned __int64)v45 & v51;
            }
            while ( 1 )
            {
              __asm { tzcnt   eax, ebx }
              v52 = -48LL * ((unsigned __int64)v45 & (v46 + _RAX));
              if ( *(_QWORD *)(v48 - 48 * ((unsigned __int64)v45 & (v46 + _RAX)) + 8) == v42
                && !bcmp(s1a, *(const void **)(v48 - 48 * ((unsigned __int64)v45 & (v46 + _RAX))), v42) )
              {
                break;
              }
              _RAX = (unsigned int)(_EBX - 1);
              LOWORD(_RAX) = _EBX & (_EBX - 1);
              _EBX = _RAX;
              if ( !(_WORD)_RAX )
                goto LABEL_43;
            }
            if ( (*(_QWORD *)(v95 + v52 - 8))-- == 1LL )
            {
              v54 = v89.m128i_i64[0];
              v55 = v91;
              if ( v91 == v89.m128i_i64[0] )
              {
                alloc::collections::vec_deque::VecDeque<T,A>::grow(&v89);
                v54 = v89.m128i_i64[0];
                v55 = v91;
              }
              v38 = v90 + v55;
              v39 = 0LL;
              if ( v38 >= v54 )
                v39 = v54;
              v40 = v89.m128i_i64[1];
              v41 = 16 * (v38 - v39);
              *(_QWORD *)(v89.m128i_i64[1] + v41) = s1a;
              *(_QWORD *)(v40 + v41 + 8) = v42;
              ++v91;
            }
            v12 = v100;
            v37 = v100;
          }
          while ( v100 != v93 );
        }
        v27 = v109;
        if ( v99 )
          _rust_dealloc(v98, 16 * v99, 8LL);
      }
      v26 = v91;
    }
    while ( v91 );
  }
  v56 = (unsigned __int64)a2[3];
  if ( v56 )
  {
    if ( *(_QWORD *)(__readfsqword(0) - 48) )
    {
      v57 = __readfsqword(0) - 48;
      v58 = *(_QWORD *)(v57 + 8);
      v59 = *(_QWORD *)(v57 + 16);
    }
    else
    {
      v58 = std::sys::pal::unix::rand::hashmap_random_keys();
      v59 = v63;
      v64 = (_QWORD *)(__readfsqword(0) - 48);
      *v64 = 1LL;
      v64[2] = v63;
      v56 = (unsigned __int64)a2[3];
    }
    *(_QWORD *)(__readfsqword(0) - 48 + 8) = v58 + 1;
    v106[0] = v58;
    v106[1] = v59;
    v104 = *(__m128i *)&anon_c57a7805e9a900e622496ec0d4f4cf5c_5_llvm_6768286536187217038;
    v105 = _mm_loadu_si128((const __m128i *)&xmmword_E7770);
    if ( v56 )
    {
      if ( v56 > 0x7FFFFFFFFFFFFFFLL )
      {
        v65 = 0LL;
      }
      else
      {
        v65 = 8LL;
        v66 = _rust_alloc(16 * v56, 8LL);
        if ( v66 )
        {
          v12 = a2[3];
          *(_QWORD *)&v101 = v56;
          *((_QWORD *)&v101 + 1) = v66;
          v102 = 0LL;
          if ( v12 )
          {
            v67 = *a2;
            v68 = *a2 + 1;
            _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(*a2));
            do
            {
              v100 = v12;
              if ( (_WORD)_RAX )
              {
                LODWORD(v93) = _RAX & (_RAX - 1);
              }
              else
              {
                do
                {
                  v70 = _mm_movemask_epi8(_mm_load_si128(v68));
                  v67 -= 48;
                  ++v68;
                }
                while ( v70 == 0xFFFF );
                v71 = -2 - v70;
                _RAX = (unsigned int)~v70;
                LODWORD(v93) = v71 & _RAX;
              }
              __asm { tzcnt   eax, eax }
              v72 = -3 * _RAX;
              s1b = (void *)v67[v72 - 3].m128i_i64[0];
              v94 = v67;
              v73 = *((_QWORD *)&v67[v72 - 2] - 1);
              if ( v105.m128i_i64[1] )
              {
                v74 = core::hash::BuildHasher::hash_one(v106, s1b, *((_QWORD *)&v67[v72 - 2] - 1));
                v76 = v104.m128i_i64[1];
                HIDWORD(_RCX) = v104.m128i_i32[1];
                v77 = v74 & v104.m128i_i64[1];
                v78 = _mm_cvtsi32_si128(v74 >> 57);
                v108 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v78, v78), 0), 0);
                v95 = v104.m128i_i64[0];
                v79 = v104.m128i_i64[0] - 16;
                v92 = 0LL;
                while ( 1 )
                {
                  v103 = _mm_loadu_si128((const __m128i *)(v95 + v77));
                  _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v103, v108));
                  if ( _R12D )
                    break;
LABEL_72:
                  if ( _mm_movemask_epi8(
                         _mm_cmpeq_epi8(
                           _mm_load_si128(&v103),
                           (__m128i)anon_c57a7805e9a900e622496ec0d4f4cf5c_4_llvm_6768286536187217038)) )
                  {
                    goto LABEL_78;
                  }
                  v81 = v92 + v77 + 16;
                  v92 += 16LL;
                  v77 = v76 & v81;
                }
                while ( 1 )
                {
                  __asm { tzcnt   ecx, r12d }
                  _RCX = 16 * (v76 & (v77 + _RCX));
                  if ( *(_QWORD *)(v79 - _RCX + 8) == v73 && !bcmp(s1b, *(const void **)(v79 - _RCX), v73) )
                    break;
                  v82 = _R12D - 1;
                  LOWORD(v82) = _R12D & (_R12D - 1);
                  _R12D = v82;
                  if ( !(_WORD)v82 )
                    goto LABEL_72;
                }
              }
              else
              {
LABEL_78:
                if ( (unsigned __int8)uu_tsort::Graph::dfs(a2, s1b, v73, &v104, &v101) )
                {
                  v111 = v102;
                  v110 = v101;
                  if ( v104.m128i_i64[1] && 17 * v104.m128i_i64[1] != -33 )
                    _rust_dealloc(v104.m128i_i64[0] - 16 * v104.m128i_i64[1] - 16, 17 * v104.m128i_i64[1] + 33, 16LL);
                  v60 = v107;
                  *(_QWORD *)(v107 + 24) = v111;
                  *(_OWORD *)(v60 + 8) = v110;
                  *(_QWORD *)v60 = 1LL;
                  if ( v89.m128i_i64[0] )
                    _rust_dealloc(v89.m128i_i64[1], 16 * v89.m128i_i64[0], 8LL);
                  v61 = v96;
                  if ( (_QWORD)v96 )
                  {
                    v62 = *((_QWORD *)&v96 + 1);
LABEL_86:
                    _rust_dealloc(v62, 16 * v61, 8LL);
                  }
                  return v60;
                }
              }
              _RAX = (unsigned int)v93;
              v12 = (const __m128i *)((char *)v100 - 1);
              v67 = v94;
            }
            while ( v100 != (const __m128i *)((char *)&dword_0 + 1) );
          }
LABEL_92:
          core::panicking::panic(aInternalErrorE_3, 40LL, &off_E7748, v12);
        }
      }
      alloc::raw_vec::handle_error(v65, 16 * v56);
    }
    *(_QWORD *)&v101 = 0LL;
    *((_QWORD *)&v101 + 1) = 8LL;
    v102 = 0LL;
    goto LABEL_92;
  }
  v60 = v107;
  *(_QWORD *)(v107 + 24) = v97;
  *(_OWORD *)(v60 + 8) = v96;
  *(_QWORD *)v60 = 0LL;
  v61 = v89.m128i_i64[0];
  if ( v89.m128i_i64[0] )
  {
    v62 = v89.m128i_i64[1];
    goto LABEL_86;
  }
  return v60;
}
