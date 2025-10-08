__int64 __fastcall uu_mktemp::dry_exec(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r13
  __int128 v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  _BYTE *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i si128; // xmm2
  __m128i v20; // xmm3
  __m128i v21; // xmm4
  __m128i v22; // xmm5
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __m128i v25; // xmm8
  __m128i v26; // xmm9
  __m128i v27; // xmm10
  __m128i v28; // xmm11
  __m128i v29; // xmm0
  __m128i v30; // xmm13
  __m128i v31; // xmm13
  __m128i v32; // xmm14
  __m128i v33; // xmm12
  __m128i v34; // xmm15
  __m128i v35; // xmm13
  __int64 v36; // rcx
  __m128i v37; // xmm2
  __m128i v38; // xmm3
  __m128i v39; // xmm4
  __m128i v40; // xmm5
  __m128i v41; // xmm6
  __m128i v42; // xmm7
  __m128i v43; // xmm8
  __m128i v44; // xmm9
  __m128i v45; // xmm10
  __m128i v46; // xmm11
  __m128i v47; // xmm0
  __m128i v48; // xmm13
  __m128i v49; // xmm13
  __m128i v50; // xmm14
  __m128i v51; // xmm12
  __m128i v52; // xmm15
  __m128i v53; // xmm13
  _BYTE *v55; // r12
  char v56; // al
  unsigned __int8 v57; // al
  __int128 v58; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+18h] [rbp-A0h]
  __int64 v60; // [rsp+20h] [rbp-98h]
  __int64 v61; // [rsp+28h] [rbp-90h]
  __int128 v62; // [rsp+30h] [rbp-88h] BYREF
  __int64 v63; // [rsp+40h] [rbp-78h]
  _QWORD v64[5]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v65[72]; // [rsp+70h] [rbp-48h] BYREF

  v61 = a3;
  v60 = a2;
  v11 = a6 + a5;
  *(_QWORD *)&v12 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a6 + a5 + a8, 1LL, 1LL, &off_F9018);
  v58 = v12;
  v59 = 0LL;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v58,
    a4,
    a4 + a5);
  alloc::vec::Vec<T,A>::extend_trusted(&v58, a6);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v58,
    a7,
    a7 + a8);
  v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
          a5,
          v11,
          *((_QWORD *)&v58 + 1),
          v59);
  v15 = v14;
  v64[0] = rand::rngs::thread::rng();
  <rand_core::block::BlockRng<R> as rand_core::RngCore>::fill_bytes(v64[0] + 16LL, v13, v15);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(v64);
  if ( !v15 )
    goto LABEL_13;
  if ( v15 < 8 )
  {
    v16 = (_BYTE *)v13;
    goto LABEL_16;
  }
  if ( v15 < 0x10 )
  {
    v17 = 0LL;
LABEL_6:
    v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v16 = (_BYTE *)(v13 + (v15 & 0xFFFFFFFFFFFFFFF8LL));
    si128 = _mm_load_si128((const __m128i *)&xmmword_19380);
    v20 = _mm_load_si128((const __m128i *)&xmmword_193B0);
    v21 = _mm_load_si128((const __m128i *)&xmmword_19690);
    v22 = _mm_load_si128((const __m128i *)&xmmword_194D0);
    v23 = _mm_load_si128((const __m128i *)&xmmword_197C0);
    v24 = _mm_load_si128((const __m128i *)&xmmword_197D0);
    v25 = _mm_load_si128((const __m128i *)&xmmword_19530);
    v26 = _mm_load_si128((const __m128i *)&xmmword_196D0);
    v27 = _mm_load_si128((const __m128i *)&xmmword_193D0);
    v28 = _mm_load_si128((const __m128i *)&xmmword_195E0);
    do
    {
      v29 = _mm_loadl_epi64((const __m128i *)(v13 + v17));
      v30 = _mm_and_si128(_mm_srli_epi16(v29, 1u), (__m128i)xmmword_19370);
      v31 = _mm_and_si128(
              _mm_srli_epi16(
                _mm_packus_epi16(
                  _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(v30, (__m128i)0LL), si128), 8u),
                  _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(v30, (__m128i)0LL), si128), 8u)),
                4u),
              v20);
      v32 = _mm_sub_epi8(
              v29,
              _mm_packus_epi16(
                _mm_and_si128(_mm_mullo_epi16(_mm_unpacklo_epi8(v31, v31), v21), v22),
                _mm_and_si128(_mm_mullo_epi16(_mm_unpackhi_epi8(v31, v31), v21), v22)));
      v33 = _mm_add_epi8(v32, v25);
      v34 = _mm_cmpeq_epi8(_mm_max_epu8(v33, v26), v33);
      v35 = _mm_cmpgt_epi8(v32, v23);
      *(_QWORD *)(v13 + v17) = _mm_or_si128(
                                 _mm_and_si128(_mm_add_epi8(v32, v24), v35),
                                 _mm_andnot_si128(
                                   v35,
                                   _mm_or_si128(
                                     _mm_andnot_si128(v34, _mm_add_epi8(v32, v27)),
                                     _mm_and_si128(_mm_or_si128(v32, v28), v34)))).m128i_u64[0];
      v17 += 8LL;
    }
    while ( v18 != v17 );
    if ( v15 == v18 )
      goto LABEL_13;
    goto LABEL_16;
  }
  v17 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  v36 = 0LL;
  v37 = _mm_load_si128((const __m128i *)&xmmword_19380);
  v38 = _mm_load_si128((const __m128i *)&xmmword_193B0);
  v39 = _mm_load_si128((const __m128i *)&xmmword_19690);
  v40 = _mm_load_si128((const __m128i *)&xmmword_194D0);
  v41 = _mm_load_si128((const __m128i *)&xmmword_19750);
  v42 = _mm_load_si128((const __m128i *)&xmmword_19720);
  v43 = _mm_load_si128((const __m128i *)&xmmword_195D0);
  v44 = _mm_load_si128((const __m128i *)&xmmword_194E0);
  v45 = _mm_load_si128((const __m128i *)&xmmword_19490);
  v46 = _mm_load_si128((const __m128i *)&xmmword_19730);
  do
  {
    v47 = _mm_loadu_si128((const __m128i *)(v13 + v36));
    v48 = _mm_and_si128(_mm_srli_epi16(v47, 1u), (__m128i)xmmword_19370);
    v49 = _mm_and_si128(
            _mm_srli_epi16(
              _mm_packus_epi16(
                _mm_srli_epi16(_mm_mullo_epi16(_mm_unpacklo_epi8(v48, (__m128i)0LL), v37), 8u),
                _mm_srli_epi16(_mm_mullo_epi16(_mm_unpackhi_epi8(v48, (__m128i)0LL), v37), 8u)),
              4u),
            v38);
    v50 = _mm_sub_epi8(
            v47,
            _mm_packus_epi16(
              _mm_and_si128(_mm_mullo_epi16(_mm_unpacklo_epi8(v49, v49), v39), v40),
              _mm_and_si128(_mm_mullo_epi16(_mm_unpackhi_epi8(v49, v49), v39), v40)));
    v51 = _mm_add_epi8(v50, v43);
    v52 = _mm_cmpeq_epi8(_mm_min_epu8(v51, v44), v51);
    v53 = _mm_cmpgt_epi8(v50, v41);
    *(__m128i *)(v13 + v36) = _mm_or_si128(
                                _mm_and_si128(_mm_add_epi8(v50, v42), v53),
                                _mm_andnot_si128(
                                  v53,
                                  _mm_or_si128(
                                    _mm_andnot_si128(v52, _mm_or_si128(v50, v46)),
                                    _mm_and_si128(_mm_add_epi8(v50, v45), v52))));
    v36 += 16LL;
  }
  while ( v17 != v36 );
  if ( v15 == v17 )
    goto LABEL_13;
  if ( (v15 & 8) != 0 )
    goto LABEL_6;
  v16 = (_BYTE *)(v13 + v17);
LABEL_16:
  v55 = (_BYTE *)(v15 + v13);
  do
  {
    v57 = *v16 % 0x3Eu;
    if ( v57 < 0xAu )
    {
      v56 = v57 | 0x30;
    }
    else if ( v57 >= 0x24u )
    {
      v56 = v57 + 29;
    }
    else
    {
      v56 = v57 + 87;
    }
    *v16++ = v56;
  }
  while ( v16 != v55 );
LABEL_13:
  v63 = v59;
  v62 = v58;
  alloc::string::String::from_utf8(v64, &v62);
  core::result::Result<T,E>::unwrap(v65, v64);
  std::path::Path::join(a1, v60, v61, v65);
  return a1;
}