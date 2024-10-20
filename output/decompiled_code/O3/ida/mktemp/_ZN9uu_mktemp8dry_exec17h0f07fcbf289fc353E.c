        size_t n)
{
  size_t v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r12
  size_t v17; // rax
  size_t v18; // rbx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD **v22; // rax
  _QWORD *v23; // rax
  bool v24; // zf
  _BYTE *v25; // rbp
  _QWORD *v26; // rdi
  _BYTE *v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __m128i si128; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  __m128i v33; // xmm5
  __m128i v34; // xmm6
  __m128i v35; // xmm7
  __m128i v36; // xmm8
  __m128i v37; // xmm9
  __m128i v38; // xmm10
  __m128i v39; // xmm11
  __m128i v40; // xmm0
  __m128i v41; // xmm13
  __m128i v42; // xmm13
  __m128i v43; // xmm14
  __m128i v44; // xmm12
  __m128i v45; // xmm15
  __m128i v46; // xmm13
  __int64 v47; // rcx
  __m128i v48; // xmm2
  __m128i v49; // xmm3
  __m128i v50; // xmm4
  __m128i v51; // xmm5
  __m128i v52; // xmm6
  __m128i v53; // xmm7
  __m128i v54; // xmm8
  __m128i v55; // xmm9
  __m128i v56; // xmm10
  __m128i v57; // xmm11
  __m128i v58; // xmm0
  __m128i v59; // xmm13
  __m128i v60; // xmm13
  __m128i v61; // xmm14
  __m128i v62; // xmm12
  __m128i v63; // xmm15
  __m128i v64; // xmm13
  _QWORD *v65; // r14
  __int64 v66; // r15
  __int64 v67; // r9
  __int64 v68; // rbx
  _BYTE *v70; // rbp
  char v71; // al
  unsigned __int8 v72; // al
  __m128i v73; // xmm0
  _QWORD *v74; // [rsp+8h] [rbp-90h] BYREF
  __int64 v75; // [rsp+10h] [rbp-88h]
  unsigned __int64 v76; // [rsp+18h] [rbp-80h]
  _QWORD *v77; // [rsp+20h] [rbp-78h] BYREF
  __m128i v78[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v79; // [rsp+48h] [rbp-50h]
  __int64 v80; // [rsp+50h] [rbp-48h]
  __int64 v81; // [rsp+58h] [rbp-40h]
  size_t v82; // [rsp+60h] [rbp-38h]

  v80 = a3;
  v79 = a2;
  v82 = a6 + a5;
  v11 = n + a6 + a5;
  v81 = a1;
  if ( v11 )
  {
    if ( (__int64)(n + a6 + a5) < 0 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = 1LL;
      v13 = _rust_alloc(n + a6 + a5, 1LL);
      if ( v13 )
      {
        v14 = v13;
        goto LABEL_6;
      }
    }
    alloc::raw_vec::handle_error(v12, v11);
  }
  v14 = 1LL;
LABEL_6:
  v74 = (_QWORD *)v11;
  v75 = v14;
  v76 = 0LL;
  if ( v11 >= a5 )
  {
    v15 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v74, 0LL, a5);
    v15 = v76;
    v11 = (size_t)v74;
    v14 = v75;
  }
  memcpy((void *)(v15 + v14), a4, a5);
  v16 = a5 + v15;
  v76 = v16;
  v17 = v11 - v16;
  if ( v11 - v16 >= a6 )
  {
    if ( !a6 )
      goto LABEL_13;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v74, v16, a6);
    v16 = v76;
    v11 = (size_t)v74;
    v14 = v75;
  }
  memset((void *)(v16 + v14), 88, a6);
  v16 += a6;
  v17 = v11 - v16;
LABEL_13:
  v76 = v16;
  v18 = n;
  if ( v17 < n )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v74, v16, n);
    v14 = v75;
    v16 = v76;
    v18 = n;
  }
  memcpy((void *)(v16 + v14), src, v18);
  v19 = v18 + v16;
  v76 = v19;
  if ( v82 < a5 )
    core::slice::index::slice_index_order_fail(a5, v82, &off_F0280);
  if ( v82 > v19 )
    core::slice::index::slice_end_index_len_fail(v82, v19, &off_F0280);
  v20 = __readfsqword(0);
  v21 = *(_QWORD *)(v20 - 16);
  if ( v21 )
  {
    if ( (_DWORD)v21 == 1 )
    {
      v22 = (_QWORD **)(v20 - 8);
      goto LABEL_21;
    }
LABEL_53:
    core::result::unwrap_failed(
      anon_ae7d027233a4cf631ecd7d99e41f08fc_18_llvm_8840552875692662641,
      70LL,
      &v77,
      &anon_ae7d027233a4cf631ecd7d99e41f08fc_8_llvm_8840552875692662641,
      &anon_ae7d027233a4cf631ecd7d99e41f08fc_20_llvm_8840552875692662641);
  }
  v22 = (_QWORD **)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(v20 - 16, 0LL);
  if ( !v22 )
    goto LABEL_53;
LABEL_21:
  v23 = *v22;
  v24 = (*v23)++ == -1LL;
  if ( v24 )
    BUG();
  v25 = (_BYTE *)(a5 + v14);
  v77 = v23;
  rand::rng::Rng::fill(&v77, v25, a6);
  v26 = v77;
  v24 = (*v77)-- == 1LL;
  if ( v24 )
  {
    v24 = v26[1]-- == 1LL;
    if ( v24 )
      _rust_dealloc(v26, 368LL, 16LL);
  }
  if ( a6 )
  {
    v27 = v25;
    if ( a6 >= 8 )
    {
      if ( a6 < 0x10 )
      {
        v28 = 0LL;
LABEL_29:
        v29 = a6 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = &v25[a6 & 0xFFFFFFFFFFFFFFF8LL];
        si128 = _mm_load_si128((const __m128i *)&xmmword_11FB0);
        v31 = _mm_load_si128((const __m128i *)&xmmword_11FD0);
        v32 = _mm_load_si128(xmmword_122F0);
        v33 = _mm_load_si128((const __m128i *)&xmmword_12130);
        v34 = _mm_load_si128((const __m128i *)&xmmword_12410);
        v35 = _mm_load_si128((const __m128i *)&xmmword_12420);
        v36 = _mm_load_si128((const __m128i *)&xmmword_12160);
        v37 = _mm_load_si128((const __m128i *)&xmmword_12320);
        v38 = _mm_load_si128((const __m128i *)&xmmword_11FE0);
        v39 = _mm_load_si128((const __m128i *)&xmmword_12250);
        do
        {
          v40 = _mm_loadl_epi64((const __m128i *)&v25[v28]);
          v41 = _mm_and_si128(_mm_srli_epi16(v40, 1u), (__m128i)xmmword_11FA0);
          v42 = _mm_and_si128(
                  _mm_srli_epi16(
                    _mm_packus_epi16(
                      _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(v41, (__m128i)0LL), si128), 8u),
                      _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(v41, (__m128i)0LL), si128), 8u)),
                    4u),
                  v31);
          v43 = _mm_sub_epi8(
                  v40,
                  _mm_packus_epi16(
                    _mm_and_si128(_mm_mullo_epi16(_mm_unpacklo_epi8(v42, v42), v32), v33),
                    _mm_and_si128(_mm_mullo_epi16(_mm_unpackhi_epi8(v42, v42), v32), v33)));
          v44 = _mm_add_epi8(v43, v36);
          v45 = _mm_cmpeq_epi8(_mm_max_epu8(v44, v37), v44);
          v46 = _mm_cmpgt_epi8(v43, v34);
          *(_QWORD *)&v25[v28] = _mm_or_si128(
                                   _mm_and_si128(_mm_add_epi8(v43, v35), v46),
                                   _mm_andnot_si128(
                                     v46,
                                     _mm_or_si128(
                                       _mm_andnot_si128(v45, _mm_add_epi8(v43, v38)),
                                       _mm_and_si128(_mm_or_si128(v43, v39), v45)))).m128i_u64[0];
          v28 += 8LL;
        }
        while ( v29 != v28 );
        if ( v29 == a6 )
          goto LABEL_36;
        goto LABEL_44;
      }
      v28 = a6 & 0xFFFFFFFFFFFFFFF0LL;
      v47 = 0LL;
      v48 = _mm_load_si128((const __m128i *)&xmmword_11FB0);
      v49 = _mm_load_si128((const __m128i *)&xmmword_11FD0);
      v50 = _mm_load_si128(xmmword_122F0);
      v51 = _mm_load_si128((const __m128i *)&xmmword_12130);
      v52 = _mm_load_si128((const __m128i *)&xmmword_12390);
      v53 = _mm_load_si128((const __m128i *)&xmmword_12350);
      v54 = _mm_load_si128((const __m128i *)&xmmword_12240);
      v55 = _mm_load_si128((const __m128i *)&xmmword_12140);
      v56 = _mm_load_si128((const __m128i *)&xmmword_120D0);
      v57 = _mm_load_si128((const __m128i *)&xmmword_12360);
      do
      {
        v58 = _mm_loadu_si128((const __m128i *)&v25[v47]);
        v59 = _mm_and_si128(_mm_srli_epi16(v58, 1u), (__m128i)xmmword_11FA0);
        v60 = _mm_and_si128(
                _mm_srli_epi16(
                  _mm_packus_epi16(
                    _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(v59, (__m128i)0LL), v48), 8u),
                    _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(v59, (__m128i)0LL), v48), 8u)),
                  4u),
                v49);
        v61 = _mm_sub_epi8(
                v58,
                _mm_packus_epi16(
                  _mm_and_si128(_mm_mullo_epi16(_mm_unpacklo_epi8(v60, v60), v50), v51),
                  _mm_and_si128(_mm_mullo_epi16(_mm_unpackhi_epi8(v60, v60), v50), v51)));
        v62 = _mm_add_epi8(v61, v54);
        v63 = _mm_cmpeq_epi8(_mm_min_epu8(v62, v55), v62);
        v64 = _mm_cmpgt_epi8(v61, v52);
        *(__m128i *)&v25[v47] = _mm_or_si128(
                                  _mm_and_si128(_mm_add_epi8(v61, v53), v64),
                                  _mm_andnot_si128(
                                    v64,
                                    _mm_or_si128(
                                      _mm_andnot_si128(v63, _mm_or_si128(v61, v57)),
                                      _mm_and_si128(_mm_add_epi8(v61, v56), v63))));
        v47 += 16LL;
      }
      while ( v28 != v47 );
      if ( v28 == a6 )
        goto LABEL_36;
      if ( (a6 & 8) != 0 )
        goto LABEL_29;
      v27 = &v25[v28];
    }
LABEL_44:
    v70 = &v25[a6];
    do
    {
      v72 = *v27 % 0x3Eu;
      if ( v72 < 0xAu )
      {
        v71 = v72 | 0x30;
      }
      else if ( v72 >= 0x24u )
      {
        v71 = v72 + 29;
      }
      else
      {
        v71 = v72 + 87;
      }
      *v27++ = v71;
    }
    while ( v27 != v70 );
  }
LABEL_36:
  v65 = v74;
  v66 = v75;
  core::str::converts::from_utf8(&v77, v75, v19);
  v68 = v81;
  if ( v77 )
  {
    if ( v65 != (_QWORD *)0x8000000000000000LL )
    {
      v73 = _mm_loadu_si128(v78);
      v77 = v65;
      v78[0].m128i_i64[0] = v66;
      v78[0].m128i_i64[1] = v19;
      v78[1] = v73;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v77, &off_F00C8, &off_F0298);
    }
    v65 = (_QWORD *)v66;
    v66 = v19;
    v19 = v78[0].m128i_i64[0];
  }
  std::path::Path::_join(v81, v79, v80, v66, v19, v67);
  if ( v65 )
    _rust_dealloc(v66, v65, 1LL);
  return v68;
}
