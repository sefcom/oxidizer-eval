        __int64 n)
{
  __int64 v8; // rsi
  bool v10; // cf
  __int64 v13; // r15
  void *v14; // r15
  __int64 v15; // r15
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD **v23; // r15
  _QWORD *v24; // r15
  _BYTE *v25; // rbp
  bool v26; // zf
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r12
  _OWORD *result; // rax
  _BYTE *v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm2
  __m128i v35; // xmm3
  __m128i v36; // xmm4
  __m128i v37; // xmm5
  __m128i v38; // xmm6
  __m128i v39; // xmm7
  __m128i v40; // xmm8
  __m128i v41; // xmm9
  __m128i v42; // xmm10
  __m128i v43; // xmm11
  __m128i v44; // xmm0
  __m128i v45; // xmm13
  __m128i v46; // xmm13
  __m128i v47; // xmm14
  __m128i v48; // xmm12
  __m128i v49; // xmm15
  __m128i v50; // xmm13
  _BYTE *v51; // rbx
  char v52; // al
  unsigned __int8 v53; // al
  __int64 v54; // rcx
  __m128i si128; // xmm2
  __m128i v56; // xmm3
  __m128i v57; // xmm4
  __m128i v58; // xmm5
  __m128i v59; // xmm6
  __m128i v60; // xmm7
  __m128i v61; // xmm8
  __m128i v62; // xmm9
  __m128i v63; // xmm10
  __m128i v64; // xmm11
  __m128i v65; // xmm0
  __m128i v66; // xmm13
  __m128i v67; // xmm13
  __m128i v68; // xmm14
  __m128i v69; // xmm12
  __m128i v70; // xmm15
  __m128i v71; // xmm13
  __m128i v72; // xmm0
  __m128i v73; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v74; // [rsp+18h] [rbp-B0h]
  __int64 v75; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v76; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+38h] [rbp-90h]
  __int64 v78; // [rsp+40h] [rbp-88h]
  __int64 v79; // [rsp+48h] [rbp-80h]
  _QWORD *v80; // [rsp+50h] [rbp-78h]
  _QWORD v81[3]; // [rsp+58h] [rbp-70h] BYREF
  __m128i v82; // [rsp+70h] [rbp-58h]
  __int128 v83; // [rsp+80h] [rbp-48h] BYREF
  __int64 v84; // [rsp+90h] [rbp-38h]

  v79 = a3;
  v78 = a2;
  v8 = n + a5;
  if ( __CFADD__(n, a5) || (v77 = a1, v10 = __CFADD__(a6, v8), v8 += a6, v10) )
    core::panicking::panic_const::panic_const_add_overflow(&off_11BCF8, v8, a3, a4);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v75, v8, 0LL);
  if ( v75 )
    alloc::raw_vec::handle_error(v76.m128i_i64[0], v76.m128i_i64[1]);
  v73 = v76;
  v74 = 0LL;
  if ( a5 < 0 )
    goto LABEL_50;
  core::slice::raw::from_raw_parts::precondition_check(a4, 1LL, 1LL, a5);
  v13 = v74;
  if ( v73.m128i_i64[0] - v74 < (unsigned __int64)a5 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v73, v74, a5);
    v13 = v74;
  }
  v14 = (void *)(v73.m128i_i64[1] + v13);
  core::intrinsics::copy_nonoverlapping::precondition_check(a4, v14, 1LL, 1LL, a5);
  memcpy(v14, a4, a5);
  v74 += a5;
  alloc::vec::Vec<T,A>::extend_trusted(&v73, a6, 88LL);
  if ( n < 0 )
LABEL_50:
    core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
  core::slice::raw::from_raw_parts::precondition_check(src, 1LL, 1LL, n);
  v15 = v74;
  if ( v73.m128i_i64[0] - v74 < (unsigned __int64)n )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v73, v74, n);
    v15 = v74;
  }
  v16 = (void *)(v73.m128i_i64[1] + v15);
  core::intrinsics::copy_nonoverlapping::precondition_check(src, v16, 1LL, 1LL, n);
  memcpy(v16, src, n);
  v19 = v74 + n;
  v74 += n;
  v20 = a6 + a5;
  if ( __CFADD__(a6, a5) )
    core::panicking::panic_const::panic_const_add_overflow(&off_11BD10, src, v17, v18);
  v21 = v73.m128i_i64[1];
  if ( !v73.m128i_i64[1] || v19 < 0 )
    core::panicking::panic_nounwind(anon_71668def9d6f66a92d9ad7276690856e_18_llvm_9180203369577476064, 166LL);
  if ( v19 < v20 )
    core::slice::index::slice_end_index_len_fail(a6 + a5, v19, &off_11BD28);
  v22 = (_QWORD *)core::ops::function::FnOnce::call_once(0LL);
  v23 = (_QWORD **)v22;
  if ( !v22 || (alloc::rc::RcInnerPtr::inc_strong(*v22), (v24 = *v23) == 0LL) )
    core::result::unwrap_failed(
      anon_431e63a222f002cdbe3510f4a5bd446f_17_llvm_12804663064488683472,
      70LL,
      &v75,
      &anon_431e63a222f002cdbe3510f4a5bd446f_52_llvm_12804663064488683472,
      &anon_431e63a222f002cdbe3510f4a5bd446f_19_llvm_12804663064488683472);
  v25 = (_BYTE *)(v21 + a5);
  v80 = v24;
  <rand_core::block::BlockRng<R> as rand_core::RngCore>::fill_bytes(v24 + 2, v21 + a5, a6);
  v26 = (*v24)-- == 1LL;
  if ( !v26 || (v26 = v24[1] == 1LL, --v24[1], !v26) )
  {
    if ( v20 == a5 )
      goto LABEL_19;
LABEL_30:
    if ( a6 < 8 )
    {
LABEL_31:
      v31 = v25;
      goto LABEL_37;
    }
    if ( a6 >= 0x10 )
    {
      v32 = a6 & 0xFFFFFFFFFFFFFFF0LL;
      v54 = 0LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_17A40);
      v56 = _mm_load_si128((const __m128i *)&xmmword_17A60);
      v57 = _mm_load_si128((const __m128i *)&xmmword_17D80);
      v58 = _mm_load_si128((const __m128i *)&xmmword_17BA0);
      v59 = _mm_load_si128((const __m128i *)&xmmword_17E20);
      v60 = _mm_load_si128((const __m128i *)&xmmword_17DE0);
      v61 = _mm_load_si128((const __m128i *)&xmmword_17CC0);
      v62 = _mm_load_si128((const __m128i *)&xmmword_17BB0);
      v63 = _mm_load_si128((const __m128i *)&xmmword_17B40);
      v64 = _mm_load_si128((const __m128i *)&xmmword_17DF0);
      do
      {
        v65 = _mm_loadu_si128((const __m128i *)&v25[v54]);
        v66 = _mm_and_si128(_mm_srli_epi16(v65, 1u), (__m128i)xmmword_17A30);
        v67 = _mm_and_si128(
                _mm_srli_epi16(
                  _mm_packus_epi16(
                    _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(v66, (__m128i)0LL), si128), 8u),
                    _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(v66, (__m128i)0LL), si128), 8u)),
                  4u),
                v56);
        v68 = _mm_sub_epi8(
                v65,
                _mm_packus_epi16(
                  _mm_and_si128(_mm_mullo_epi16(_mm_unpacklo_epi8(v67, v67), v57), v58),
                  _mm_and_si128(_mm_mullo_epi16(_mm_unpackhi_epi8(v67, v67), v57), v58)));
        v69 = _mm_add_epi8(v68, v61);
        v70 = _mm_cmpeq_epi8(_mm_min_epu8(v69, v62), v69);
        v71 = _mm_cmpgt_epi8(v68, v59);
        *(__m128i *)&v25[v54] = _mm_or_si128(
                                  _mm_and_si128(_mm_add_epi8(v68, v60), v71),
                                  _mm_andnot_si128(
                                    v71,
                                    _mm_or_si128(
                                      _mm_andnot_si128(v70, _mm_or_si128(v68, v64)),
                                      _mm_and_si128(_mm_add_epi8(v68, v63), v70))));
        v54 += 16LL;
      }
      while ( v32 != v54 );
      if ( v32 == a6 )
        goto LABEL_19;
      if ( (a6 & 8) == 0 )
      {
        v25 += v32;
        goto LABEL_31;
      }
    }
    else
    {
      v32 = 0LL;
    }
    v33 = a6 & 0xFFFFFFFFFFFFFFF8LL;
    v31 = &v25[a6 & 0xFFFFFFFFFFFFFFF8LL];
    v34 = _mm_load_si128((const __m128i *)&xmmword_17A40);
    v35 = _mm_load_si128((const __m128i *)&xmmword_17A60);
    v36 = _mm_load_si128((const __m128i *)&xmmword_17D80);
    v37 = _mm_load_si128((const __m128i *)&xmmword_17BA0);
    v38 = _mm_load_si128((const __m128i *)&xmmword_17EB0);
    v39 = _mm_load_si128((const __m128i *)&xmmword_17EC0);
    v40 = _mm_load_si128((const __m128i *)&xmmword_17BD0);
    v41 = _mm_load_si128((const __m128i *)&xmmword_17DC0);
    v42 = _mm_load_si128((const __m128i *)&xmmword_17A70);
    v43 = _mm_load_si128((const __m128i *)&xmmword_17CD0);
    do
    {
      v44 = _mm_loadl_epi64((const __m128i *)&v25[v32]);
      v45 = _mm_and_si128(_mm_srli_epi16(v44, 1u), (__m128i)xmmword_17A30);
      v46 = _mm_and_si128(
              _mm_srli_epi16(
                _mm_packus_epi16(
                  _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(v45, (__m128i)0LL), v34), 8u),
                  _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(v45, (__m128i)0LL), v34), 8u)),
                4u),
              v35);
      v47 = _mm_sub_epi8(
              v44,
              _mm_packus_epi16(
                _mm_and_si128(_mm_mullo_epi16(_mm_unpacklo_epi8(v46, v46), v36), v37),
                _mm_and_si128(_mm_mullo_epi16(_mm_unpackhi_epi8(v46, v46), v36), v37)));
      v48 = _mm_add_epi8(v47, v40);
      v49 = _mm_cmpeq_epi8(_mm_max_epu8(v48, v41), v48);
      v50 = _mm_cmpgt_epi8(v47, v38);
      *(_QWORD *)&v25[v32] = _mm_or_si128(
                               _mm_and_si128(_mm_add_epi8(v47, v39), v50),
                               _mm_andnot_si128(
                                 v50,
                                 _mm_or_si128(
                                   _mm_andnot_si128(v49, _mm_add_epi8(v47, v42)),
                                   _mm_and_si128(_mm_or_si128(v47, v43), v49)))).m128i_u64[0];
      v32 += 8LL;
    }
    while ( v33 != v32 );
    if ( v33 == a6 )
      goto LABEL_19;
LABEL_37:
    v51 = (_BYTE *)(v20 + v21);
    do
    {
      v53 = *v31 % 0x3Eu;
      if ( v53 < 0xAu )
      {
        v52 = v53 | 0x30;
      }
      else if ( v53 >= 0x24u )
      {
        v52 = v53 + 29;
      }
      else
      {
        v52 = v53 + 87;
      }
      *v31++ = v52;
    }
    while ( v31 != v51 );
    goto LABEL_19;
  }
  _rust_dealloc(v24, 368LL, 16LL);
  if ( v20 != a5 )
    goto LABEL_30;
LABEL_19:
  v27 = v73.m128i_i64[1];
  if ( !v73.m128i_i64[1] )
    goto LABEL_52;
  v28 = v74;
  if ( v74 < 0 )
    goto LABEL_52;
  v29 = v73.m128i_i64[0];
  core::str::converts::from_utf8(&v75, v73.m128i_i64[1], v74);
  if ( v75 )
  {
    if ( v29 != 0x8000000000000000LL )
    {
      v72 = _mm_loadu_si128(&v76);
      v81[0] = v29;
      v81[1] = v27;
      v81[2] = v28;
      v82 = v72;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, v81, &off_11BA48, &off_11BD40);
    }
    v29 = v27;
    v27 = v28;
    v28 = v76.m128i_i64[0];
  }
  if ( !v27 || v28 < 0 )
LABEL_52:
    core::panicking::panic_nounwind(anon_d4b0c354e835dc672480ef32a1a5d569_41_llvm_11877717755312319128, 162LL);
  std::path::Path::_join(&v83, v78, v79, v27, v28);
  if ( v29 )
    _rust_dealloc(v27, v29, 1LL);
  result = (_OWORD *)v77;
  *(_QWORD *)(v77 + 16) = v84;
  *result = v83;
  return result;
}
