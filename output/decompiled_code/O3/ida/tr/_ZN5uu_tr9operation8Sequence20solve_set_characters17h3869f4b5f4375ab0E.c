        char a8)
{
  __int64 v10; // rbx
  _BYTE *v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _DWORD *v15; // rcx
  __m128i v16; // xmm0
  __m128i si128; // xmm2
  __m128i v18; // xmm3
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm1
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  __m128i v23; // xmm1
  unsigned __int64 v24; // rdx
  _BYTE *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v28; // r12
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  _DWORD *v31; // rcx
  __m128i v32; // xmm0
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm1
  __m128i v37; // xmm4
  __m128i v38; // xmm5
  __m128i v39; // xmm1
  unsigned __int64 v40; // rdx
  _BYTE *v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // rax
  _BYTE *v45; // rcx
  _BYTE *v46; // rdx
  __int64 v47; // r12
  size_t v48; // rbp
  unsigned __int64 v49; // rax
  size_t v50; // rcx
  bool v51; // cf
  size_t v52; // rbp
  __m128i v53; // kr00_16
  __int64 v54; // r12
  _BYTE *i; // rbx
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // rbp
  __int64 v59; // rsi
  __int64 v60; // rdi
  size_t v61; // r10
  size_t v62; // r13
  unsigned __int8 *v63; // rax
  unsigned __int8 *v64; // r12
  unsigned __int8 v65; // al
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  bool v68; // zf
  size_t v69; // rdx
  unsigned __int64 v70; // rsi
  int v71; // edi
  unsigned __int8 *v73; // rax
  size_t j; // rcx
  unsigned __int8 v75; // dl
  unsigned __int8 *v76; // rdx
  unsigned __int8 *v77; // r8
  unsigned __int8 v78; // di
  unsigned __int8 v79; // si
  unsigned __int8 *v80; // r9
  unsigned __int8 *v81; // r8
  unsigned __int8 v82; // di
  unsigned __int8 v83; // si
  unsigned __int8 *v84; // r9
  __int64 v85; // [rsp+8h] [rbp-200h]
  __int64 src; // [rsp+10h] [rbp-1F8h]
  void *srca; // [rsp+10h] [rbp-1F8h]
  __int64 v88; // [rsp+18h] [rbp-1F0h]
  _BYTE *v89; // [rsp+20h] [rbp-1E8h]
  __int64 v90; // [rsp+20h] [rbp-1E8h]
  size_t v91; // [rsp+20h] [rbp-1E8h]
  _BYTE *v92; // [rsp+28h] [rbp-1E0h]
  __int64 v93; // [rsp+30h] [rbp-1D8h]
  char v94; // [rsp+3Ch] [rbp-1CCh]
  __m128i v95; // [rsp+40h] [rbp-1C8h] BYREF
  size_t v96; // [rsp+50h] [rbp-1B8h]
  __m128i v97; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v98; // [rsp+70h] [rbp-198h]
  __m128i v99; // [rsp+78h] [rbp-190h]
  size_t v100; // [rsp+88h] [rbp-180h]
  __int64 v101; // [rsp+98h] [rbp-170h]
  __m128i v102; // [rsp+A0h] [rbp-168h] BYREF
  size_t n; // [rsp+B0h] [rbp-158h]
  __int64 v104; // [rsp+B8h] [rbp-150h]
  __int64 v105; // [rsp+C0h] [rbp-148h]
  size_t v106; // [rsp+C8h] [rbp-140h]
  __int64 v107; // [rsp+D0h] [rbp-138h]
  __m128i *v108; // [rsp+D8h] [rbp-130h] BYREF
  __int16 v109; // [rsp+E0h] [rbp-128h]
  char v110; // [rsp+E2h] [rbp-126h]
  size_t v111; // [rsp+E8h] [rbp-120h] BYREF
  _QWORD v112[3]; // [rsp+F0h] [rbp-118h] BYREF
  _QWORD v113[7]; // [rsp+108h] [rbp-100h] BYREF
  _QWORD v114[7]; // [rsp+140h] [rbp-C8h] BYREF
  _QWORD v115[6]; // [rsp+178h] [rbp-90h] BYREF
  _QWORD v116[12]; // [rsp+1A8h] [rbp-60h] BYREF

  uu_tr::operation::Sequence::from_str(&v97);
  v10 = v97.m128i_i64[1];
  v11 = (_BYTE *)v98;
  v12 = v99.m128i_i64[0];
  if ( v97.m128i_i64[0] )
  {
    a1->m128i_i64[1] = v97.m128i_i64[1];
    a1[1].m128i_i64[0] = (__int64)v11;
    a1[1].m128i_i64[1] = v12;
    a1->m128i_i64[0] = 0x8000000000000000LL;
    return a1;
  }
  src = v99.m128i_i64[0];
  if ( !v99.m128i_i64[0] )
    goto LABEL_13;
  if ( v99.m128i_i64[0] < 4uLL )
  {
    v13 = 0LL;
    v14 = 0LL;
LABEL_9:
    v24 = v99.m128i_i64[0] - v14;
    v25 = (_BYTE *)(v98 + 16 * v14);
    do
    {
      v13 += *v25 == 2;
      v25 += 16;
      --v24;
    }
    while ( v24 );
    goto LABEL_11;
  }
  v14 = v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v15 = (_DWORD *)(v98 + 48);
  v16 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_11390);
  v18 = _mm_load_si128((const __m128i *)&xmmword_113A0);
  v19 = v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v20 = 0LL;
  do
  {
    v21 = _mm_cmpeq_epi8(_mm_cvtsi32_si128((unsigned int)*((unsigned __int8 *)v15 - 48) | (*(v15 - 8) << 8)), si128);
    v16 = _mm_add_epi64(
            v16,
            _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v21, v21), 212), 212), v18));
    v22 = _mm_cmpeq_epi8(_mm_cvtsi32_si128((unsigned int)*((unsigned __int8 *)v15 - 16) | (*v15 << 8)), si128);
    v20 = _mm_add_epi64(
            v20,
            _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v22, v22), 212), 212), v18));
    v15 += 16;
    v19 -= 4LL;
  }
  while ( v19 );
  v23 = _mm_add_epi64(v20, v16);
  v13 = _mm_add_epi64(_mm_shuffle_epi32(v23, 238), v23).m128i_u64[0];
  if ( v99.m128i_i64[0] != v14 )
    goto LABEL_9;
LABEL_11:
  if ( v13 )
  {
    a1->m128i_i64[1] = 0x8000000000000003LL;
    a1->m128i_i64[0] = 0x8000000000000000LL;
    goto LABEL_97;
  }
LABEL_13:
  v94 = a6;
  uu_tr::operation::Sequence::from_str(&v97);
  v26 = v97.m128i_i64[1];
  v27 = v98;
  v28 = v99.m128i_i64[0];
  if ( !v97.m128i_i64[0] )
  {
    if ( !v99.m128i_i64[0] )
      goto LABEL_25;
    if ( v99.m128i_i64[0] >= 4uLL )
    {
      v30 = v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v31 = (_DWORD *)(v98 + 48);
      v32 = 0LL;
      v33 = _mm_load_si128((const __m128i *)&xmmword_11390);
      v34 = _mm_load_si128((const __m128i *)&xmmword_113A0);
      v35 = v99.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v36 = 0LL;
      do
      {
        v37 = _mm_cmpeq_epi8(_mm_cvtsi32_si128((unsigned int)*((unsigned __int8 *)v31 - 48) | (*(v31 - 8) << 8)), v33);
        v32 = _mm_add_epi64(
                v32,
                _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v37, v37), 212), 212), v34));
        v38 = _mm_cmpeq_epi8(_mm_cvtsi32_si128((unsigned int)*((unsigned __int8 *)v31 - 16) | (*v31 << 8)), v33);
        v36 = _mm_add_epi64(
                v36,
                _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v38, v38), 212), 212), v34));
        v31 += 16;
        v35 -= 4LL;
      }
      while ( v35 );
      v39 = _mm_add_epi64(v36, v32);
      v29 = _mm_add_epi64(_mm_shuffle_epi32(v39, 238), v39).m128i_u64[0];
      if ( v99.m128i_i64[0] == v30 )
      {
LABEL_23:
        if ( v29 > 1 )
        {
          v42 = 0x8000000000000002LL;
          goto LABEL_31;
        }
LABEL_25:
        v43 = 16 * v99.m128i_i64[0];
        if ( a8 )
        {
          v44 = 16 * v99.m128i_i64[0];
          v45 = (_BYTE *)v98;
          do
          {
            if ( !v44 )
              goto LABEL_32;
            v46 = v45;
            v45 += 16;
            v44 -= 16LL;
          }
          while ( *v46 != 4 || ((v46[1] - 6) & 0xFB) == 0 );
          v42 = 0x8000000000000006LL;
LABEL_31:
          a1->m128i_i64[1] = v42;
          a1->m128i_i64[0] = 0x8000000000000000LL;
          goto LABEL_95;
        }
LABEL_32:
        v85 = v98;
        v105 = 16 * src;
        v115[0] = v11;
        v89 = &v11[16 * src];
        v115[1] = v89;
        v115[2] = 0LL;
        v115[4] = 0LL;
        v93 = v10;
        v92 = v11;
        v88 = v97.m128i_i64[1];
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v95, v115);
        if ( v94 )
        {
          v109 = 0;
          v110 = -1;
          v108 = &v95;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v97, &v108);
          if ( v95.m128i_i64[0] )
            _rust_dealloc(v95.m128i_i64[1], v95.m128i_i64[0], 1LL);
          v96 = v98;
          v95 = _mm_loadu_si128(&v97);
        }
        v47 = v85 + v43;
        v48 = v96;
        v49 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(v85, v47, 0LL, &v97);
        v50 = 0LL;
        v106 = v48;
        v51 = v48 < v49;
        v52 = v48 - v49;
        if ( !v51 )
          v50 = v52;
        v111 = v50;
        v112[0] = v85;
        v112[1] = v47;
        v112[2] = &v111;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v97, v112);
        if ( v88 )
          _rust_dealloc(v85, 16 * v88, 8LL);
        v53 = v97;
        v104 = 16 * v98;
        v101 = 16 * v98 + v97.m128i_i64[1];
        v107 = v98;
        if ( v98 )
        {
          v54 = 0LL;
          for ( i = (_BYTE *)v97.m128i_i64[1]; i != (_BYTE *)v101; i += 16 )
          {
            if ( *i == 4 )
            {
              if ( v54 )
              {
                v113[4] = v53.m128i_i64[1];
                v113[5] = v101;
                v113[6] = v54;
                v113[0] = 0LL;
                v113[2] = 0LL;
                v56 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v113);
              }
              else
              {
                v56 = 0LL;
              }
              if ( !src )
              {
LABEL_56:
                a1->m128i_i64[1] = 0x8000000000000007LL;
                a1->m128i_i64[0] = 0x8000000000000000LL;
                v10 = v93;
                v11 = v92;
                v27 = *(_OWORD *)&v53 >> 64;
                v26 = (__int64)v53;
LABEL_57:
                v59 = v95.m128i_i64[0];
                if ( v95.m128i_i64[0] )
                {
                  v60 = v95.m128i_i64[1];
LABEL_94:
                  _rust_dealloc(v60, v59, 1LL);
                }
                goto LABEL_95;
              }
              if ( v56 || *v92 != 4 )
              {
                if ( src == 1 )
                  goto LABEL_56;
                v57 = 1LL;
                v58 = 16LL;
                while ( 1 )
                {
                  if ( v92[v58] == 4 )
                  {
                    v114[4] = v92;
                    v114[5] = v89;
                    v114[6] = v57;
                    v114[0] = 0LL;
                    v114[2] = 0LL;
                    if ( core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v114) == v56 )
                      break;
                  }
                  v58 += 16LL;
                  ++v57;
                  if ( v105 == v58 )
                    goto LABEL_56;
                }
              }
            }
            ++v54;
          }
        }
        v116[0] = v53.m128i_i64[1];
        v116[1] = v101;
        v116[2] = 0LL;
        v116[4] = 0LL;
        v10 = v93;
        v11 = v92;
        v26 = v53.m128i_i64[0];
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v102, v116);
        v61 = n;
        if ( n )
        {
          srca = (void *)v102.m128i_i64[1];
          if ( (n & 0x8000000000000000LL) != 0LL )
          {
            v90 = 0LL;
            v62 = n;
          }
          else
          {
            v90 = 1LL;
            v62 = n;
            v63 = (unsigned __int8 *)_rust_alloc(n, 1LL);
            if ( v63 )
            {
              v64 = v63;
              memcpy(v63, srca, v62);
              v61 = v62;
              if ( v62 != 1 )
              {
                v27 = v53.m128i_i64[1];
                if ( v61 >= 0x15 )
                {
                  v91 = v61;
                  core::slice::sort::stable::driftsort_main(v64, v61, &v97);
                  v61 = v91;
                }
                else
                {
                  if ( (v61 & 1) != 0 )
                  {
                    v73 = v64 + 1;
                  }
                  else
                  {
                    v65 = v64[1];
                    if ( v65 < *v64 )
                    {
                      v64[1] = *v64;
                      *v64 = v65;
                    }
                    v73 = v64 + 2;
                  }
                  if ( v61 != 2 )
                  {
                    v76 = v73 + 1;
                    do
                    {
                      v78 = *(v73 - 1);
                      v79 = *v73;
                      if ( *v73 < v78 )
                      {
                        v80 = v73;
                        while ( 1 )
                        {
                          v81 = v80 - 1;
                          *v80 = v78;
                          if ( v80 - 1 == v64 )
                            break;
                          v78 = *(v80 - 2);
                          --v80;
                          if ( v79 >= v78 )
                            goto LABEL_123;
                        }
                        v81 = v64;
LABEL_123:
                        *v81 = v79;
                      }
                      v82 = *v73;
                      v83 = v73[1];
                      if ( v83 < *v73 )
                      {
                        v84 = v76;
                        while ( 1 )
                        {
                          v77 = v84 - 1;
                          *v84 = v82;
                          if ( v84 - 1 == v64 )
                            break;
                          v82 = *(v84 - 2);
                          --v84;
                          if ( v83 >= v82 )
                            goto LABEL_115;
                        }
                        v77 = v64;
LABEL_115:
                        *v77 = v83;
                      }
                      v73 += 2;
                      v76 += 2;
                    }
                    while ( v73 != &v64[v61] );
                  }
                }
                v66 = 1LL;
                while ( v64[v66] != v64[v66 - 1] )
                {
                  if ( v61 == ++v66 )
                    goto LABEL_69;
                }
                for ( j = v66 + 1; j < v61; ++j )
                {
                  v75 = v64[j];
                  if ( v75 != v64[v66 - 1] )
                    v64[v66++] = v75;
                }
LABEL_70:
                v67 = 0LL;
                do
                {
                  if ( v105 == v67 )
                  {
                    v69 = n;
                    goto LABEL_79;
                  }
                  v68 = v92[v67] == 4;
                  v67 += 16LL;
                }
                while ( !v68 );
                v69 = n;
                if ( v94 )
                {
                  if ( a8 )
                  {
                    v70 = 0x8000000000000009LL;
                    if ( v66 > 1 || n > v106 )
                      goto LABEL_85;
                  }
                }
LABEL_79:
                if ( v107 )
                {
                  if ( v69 < v96 && !a7 && *(_BYTE *)(v104 + v27 - 16) == 4 )
                  {
                    v71 = *(unsigned __int8 *)(v27 + v104 - 16 + 1);
                    v70 = 0x8000000000000008LL;
                    if ( v71 == 10 || v71 == 6 )
                    {
LABEL_85:
                      a1->m128i_i64[1] = v70;
                      a1->m128i_i64[0] = 0x8000000000000000LL;
                      if ( v61 )
                        _rust_dealloc(v64, v61, 1LL);
                      if ( v102.m128i_i64[0] )
                        _rust_dealloc(v102.m128i_i64[1], v102.m128i_i64[0], 1LL);
                      goto LABEL_57;
                    }
                  }
                }
                if ( v96 >= v69 && a7 )
                  v96 = v69;
                v98 = v96;
                v97 = _mm_load_si128(&v95);
                v100 = n;
                v99 = _mm_loadu_si128(&v102);
                *a1 = v97;
                a1[2].m128i_i64[0] = v99.m128i_i64[1];
                a1[2].m128i_i64[1] = v100;
                a1[1].m128i_i64[0] = v98;
                a1[1].m128i_i64[1] = v99.m128i_i64[0];
                if ( v61 )
                {
                  v60 = (__int64)v64;
                  v59 = v61;
                  goto LABEL_94;
                }
LABEL_95:
                if ( v26 )
                  _rust_dealloc(v27, 16 * v26, 8LL);
                goto LABEL_97;
              }
LABEL_68:
              v27 = v53.m128i_i64[1];
LABEL_69:
              v66 = v61;
              goto LABEL_70;
            }
          }
          alloc::raw_vec::handle_error(v90, v62);
        }
        v64 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_68;
      }
    }
    else
    {
      v29 = 0LL;
      v30 = 0LL;
    }
    v40 = v99.m128i_i64[0] - v30;
    v41 = (_BYTE *)(v98 + 16 * v30);
    do
    {
      v29 += *v41 == 2;
      v41 += 16;
      --v40;
    }
    while ( v40 );
    goto LABEL_23;
  }
  a1->m128i_i64[1] = v97.m128i_i64[1];
  a1[1].m128i_i64[0] = v27;
  a1[1].m128i_i64[1] = v28;
  a1->m128i_i64[0] = 0x8000000000000000LL;
LABEL_97:
  if ( v10 )
    _rust_dealloc(v11, 16 * v10, 8LL);
  return a1;
}
