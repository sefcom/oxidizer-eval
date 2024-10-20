__int64 __fastcall uu_hashsum::hashsum(__int64 a1)
{
  const char *v1; // rcx
  __m128i v2; // kr00_16
  const char *v3; // r12
  __int64 v4; // r14
  char v5; // r15
  char v6; // cl
  __m128i v7; // xmm0
  __int64 v8; // r12
  __int64 *v9; // rax
  __int64 (__fastcall **v10)(); // rcx
  __int64 v11; // r12
  __int32 v12; // ebp
  __int64 v13; // r15
  void (__fastcall **v14)(__int64); // r13
  void (__fastcall *v15)(__int64); // rsi
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rsi
  const void *v19; // rbp
  size_t v20; // r13
  const char *v21; // r15
  _BYTE *v22; // r12
  _BYTE *v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __m128i si128; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __int64 v39; // r15
  void (__fastcall **v40)(__int64); // r12
  void (__fastcall *v41)(__int64); // rsi
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rsi
  __m128i v46; // [rsp+0h] [rbp-1D8h] BYREF
  _BYTE dest[40]; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+38h] [rbp-1A0h]
  __m128i v49; // [rsp+40h] [rbp-198h] BYREF
  _BYTE v50[40]; // [rsp+50h] [rbp-188h]
  __int16 v51; // [rsp+78h] [rbp-160h]
  char v52; // [rsp+7Ah] [rbp-15Eh]
  __m128i v53; // [rsp+80h] [rbp-158h] BYREF
  __m128i v54[2]; // [rsp+90h] [rbp-148h] BYREF
  const char *v55; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-120h]
  _BYTE v57[17]; // [rsp+C0h] [rbp-118h]
  _BYTE v58[23]; // [rsp+D1h] [rbp-107h]
  __int16 v59; // [rsp+E8h] [rbp-F0h]
  char v60; // [rsp+EAh] [rbp-EEh]
  __m128i v61; // [rsp+F0h] [rbp-E8h] BYREF
  _BYTE v62[17]; // [rsp+100h] [rbp-D8h]
  _BYTE v63[23]; // [rsp+111h] [rbp-C7h]
  __int16 v64; // [rsp+128h] [rbp-B0h]
  char v65; // [rsp+12Ah] [rbp-AEh]
  _QWORD v66[2]; // [rsp+130h] [rbp-A8h] BYREF
  __m128i v67; // [rsp+140h] [rbp-98h] BYREF
  _BYTE v68[23]; // [rsp+150h] [rbp-88h]
  __int64 v69; // [rsp+170h] [rbp-68h] BYREF
  __int64 v70; // [rsp+178h] [rbp-60h]
  __int64 v71; // [rsp+198h] [rbp-40h]
  void (__fastcall **v72)(__int64); // [rsp+1A0h] [rbp-38h]

  v1 = asc_6127E;
  if ( !*(_BYTE *)(a1 + 40) )
    v1 = asc_6127D;
  v66[0] = v1;
  v66[1] = 1LL;
  std::path::Path::components(&v61, asc_6127C, 1LL);
  std::path::Path::components(&v55, asc_6127C, 1LL);
  v2 = v61;
  v3 = v55;
  v4 = v56;
  if ( v61.m128i_i64[1] != v56 )
  {
    v5 = v62[0];
    goto LABEL_11;
  }
  v5 = v62[0];
  if ( (_BYTE)v64 != (_BYTE)v59 || HIBYTE(v64) != 2 || HIBYTE(v59) != 2 )
  {
LABEL_11:
    v6 = 6;
    if ( v5 == 6 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v62[0] == 6 )
  {
    if ( v57[0] <= 2u )
    {
      v6 = 6;
      goto LABEL_13;
    }
    goto LABEL_47;
  }
  if ( v57[0] == 6 )
  {
    if ( v62[0] >= 3u )
    {
LABEL_47:
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v61.m128i_i64[0],
                              v61.m128i_i64[1],
                              v55,
                              v61.m128i_i64[1]) )
      {
LABEL_16:
        v8 = std::io::stdio::stdin();
        v9 = (__int64 *)_rust_alloc(8LL, 8LL);
        if ( !v9 )
          alloc::alloc::handle_alloc_error(8LL, 8LL);
        *v9 = v8;
        v10 = (__int64 (__fastcall **)())&unk_2BEC08;
        goto LABEL_21;
      }
      goto LABEL_11;
    }
  }
  else if ( v62[0] < 3u == v57[0] < 3u )
  {
    goto LABEL_47;
  }
LABEL_12:
  *(_QWORD *)&v68[15] = *(_QWORD *)&v63[15];
  *(_OWORD *)v68 = *(_OWORD *)v63;
  v67 = *(__m128i *)&v62[1];
  v6 = v5;
LABEL_13:
  v49 = v2;
  v50[0] = v6;
  *(_QWORD *)&v50[32] = *(_QWORD *)&v68[15];
  *(_OWORD *)&v50[17] = *(_OWORD *)v68;
  *(__m128i *)&v50[1] = v67;
  v51 = v64;
  v52 = v65;
  if ( v57[0] != 6 )
  {
    *(__int64 *)((char *)&v54[0].m128i_i64[1] + 7) = *(_QWORD *)&v58[15];
    v54[0] = *(__m128i *)v58;
    v53 = *(__m128i *)&v57[1];
  }
  v46.m128i_i64[0] = (__int64)v3;
  v46.m128i_i64[1] = v4;
  dest[0] = v57[0];
  *(_QWORD *)&dest[32] = *(__int64 *)((char *)&v54[0].m128i_i64[1] + 7);
  v7 = _mm_load_si128(&v53);
  *(__m128i *)&dest[17] = _mm_load_si128(v54);
  *(__m128i *)&dest[1] = v7;
  LOWORD(v48) = v59;
  BYTE2(v48) = v60;
  if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(&v49, &v46) )
    goto LABEL_16;
  std::fs::File::open(&v46, asc_6127C, 1LL);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v49,
    &v46);
  v11 = v49.m128i_i64[0];
  if ( v49.m128i_i64[0] )
  {
LABEL_28:
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)v17 )
      (*(void (__fastcall **)(__int64))v17)(v16);
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
      _rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16));
    return v11;
  }
  v12 = v49.m128i_i32[2];
  v9 = (__int64 *)_rust_alloc(4LL, 4LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(4LL, 4LL);
  *(_DWORD *)v9 = v12;
  v10 = &off_2BEBB0;
LABEL_21:
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v69, 0x2000LL, v9, v10);
  uucore::features::checksum::digest_reader(&v46, a1 + 16, &v69, *(unsigned __int8 *)(a1 + 40), *(_QWORD *)(a1 + 32));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v49,
    &v46);
  v11 = v49.m128i_i64[1];
  if ( v49.m128i_i64[0] == 0x8000000000000000LL )
  {
    if ( v70 )
      _rust_dealloc(v69, v70, 1LL);
    v13 = v71;
    v14 = v72;
    if ( *v72 )
      (*v72)(v71);
    v15 = v14[1];
    if ( v15 )
      _rust_dealloc(v13, v15, v14[2]);
    goto LABEL_28;
  }
  v53 = v49;
  v54[0].m128i_i64[0] = *(_QWORD *)v50;
  uucore::features::checksum::escape_filename(&v46, asc_6127C, 1LL);
  *(_QWORD *)v62 = *(_QWORD *)dest;
  v61 = v46;
  v67 = _mm_loadu_si128((const __m128i *)&dest[8]);
  if ( !*(_BYTE *)(a1 + 41) )
  {
    if ( *(_BYTE *)(a1 + 42) )
    {
      v49.m128i_i64[0] = (__int64)&v53;
      v49.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v46.m128i_i64[0] = (__int64)&unk_2BEAC8;
      v46.m128i_i64[1] = 2LL;
      *(_QWORD *)dest = &v49;
      *(_OWORD *)&dest[8] = 1uLL;
      std::io::stdio::_print(&v46);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 43) )
      {
        v55 = asc_6127C;
        v56 = 1LL;
        v46.m128i_i64[0] = (__int64)&v53;
        v46.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)dest = v66;
        *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = &v55;
        *(_QWORD *)&dest[24] = <std::path::Display as core::fmt::Display>::fmt;
        v49.m128i_i64[0] = (__int64)&unk_2BECB0;
        v49.m128i_i64[1] = 4LL;
        *(_QWORD *)&v50[16] = 0LL;
        *(_QWORD *)v50 = &v46;
        *(_QWORD *)&v50[8] = 3LL;
      }
      else
      {
        v46.m128i_i64[0] = (__int64)&v67;
        v46.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &v53;
        *(_QWORD *)&dest[8] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = v66;
        *(_QWORD *)&dest[24] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[32] = &v61;
        v48 = <alloc::string::String as core::fmt::Display>::fmt;
        v49.m128i_i64[0] = (__int64)&unk_2BEC60;
        v49.m128i_i64[1] = 5LL;
        *(_QWORD *)&v50[16] = 0LL;
        *(_QWORD *)v50 = &v46;
        *(_QWORD *)&v50[8] = 4LL;
      }
      std::io::stdio::_print(&v49);
    }
    goto LABEL_65;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)a1,
                          *(_QWORD *)(a1 + 8),
                          aBlake2b_1,
                          7LL) )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 16)) == 512 )
    {
      v49.m128i_i64[0] = (__int64)&v61;
      v49.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v50 = &v53;
      *(_QWORD *)&v50[8] = <alloc::string::String as core::fmt::Display>::fmt;
      v46.m128i_i64[0] = (__int64)&off_2BED40;
      v46.m128i_i64[1] = 3LL;
      *(_QWORD *)dest = &v49;
      *(_OWORD *)&dest[8] = 2uLL;
      std::io::stdio::_print(&v46);
    }
    else
    {
      v55 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 16));
      v46.m128i_i64[0] = (__int64)&v55;
      v46.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)dest = &v61;
      *(_QWORD *)&dest[8] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[16] = &v53;
      *(_QWORD *)&dest[24] = <alloc::string::String as core::fmt::Display>::fmt;
      v49.m128i_i64[0] = (__int64)&off_2BED70;
      v49.m128i_i64[1] = 4LL;
      *(_QWORD *)&v50[16] = 0LL;
      *(_QWORD *)v50 = &v46;
      *(_QWORD *)&v50[8] = 3LL;
      std::io::stdio::_print(&v49);
    }
    goto LABEL_65;
  }
  v19 = *(const void **)a1;
  v20 = *(_QWORD *)(a1 + 8);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v46, v20, 0LL);
  v21 = (const char *)v46.m128i_i64[1];
  if ( v46.m128i_i64[0] )
    alloc::raw_vec::handle_error(v46.m128i_i64[1], *(_QWORD *)dest);
  v22 = *(_BYTE **)dest;
  memcpy(*(void **)dest, v19, v20);
  if ( v20 )
  {
    v23 = v22;
    if ( v20 >= 8 )
    {
      if ( v20 < 0x20 )
      {
        v24 = 0LL;
        goto LABEL_58;
      }
      v24 = v20 & 0xFFFFFFFFFFFFFFE0LL;
      v25 = 0LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5C590);
      v27 = _mm_load_si128((const __m128i *)&xmmword_5C790);
      v28 = _mm_load_si128(xmmword_5D350);
      do
      {
        v29 = _mm_loadu_si128((const __m128i *)&v22[v25]);
        v30 = _mm_loadu_si128((const __m128i *)&v22[v25 + 16]);
        v31 = _mm_add_epi8(v29, si128);
        v32 = _mm_add_epi8(v30, si128);
        *(__m128i *)&v22[v25] = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v31, v27), v31), v28), v29);
        *(__m128i *)&v22[v25 + 16] = _mm_xor_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v32, v27), v32), v28), v30);
        v25 += 32LL;
      }
      while ( v24 != v25 );
      if ( v20 == v24 )
        goto LABEL_64;
      if ( (v20 & 0x18) != 0 )
      {
LABEL_58:
        v33 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = &v22[v20 & 0xFFFFFFFFFFFFFFF8LL];
        v34 = _mm_load_si128((const __m128i *)&xmmword_5C7A0);
        v35 = _mm_load_si128(xmmword_5CF40);
        v36 = _mm_load_si128((const __m128i *)&xmmword_5D240);
        do
        {
          v37 = _mm_loadl_epi64((const __m128i *)&v22[v24]);
          v38 = _mm_add_epi8(v37, v34);
          *(_QWORD *)&v22[v24] = _mm_xor_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v38, v35), v38), v36), v37).m128i_u64[0];
          v24 += 8LL;
        }
        while ( v33 != v24 );
        if ( v20 == v33 )
          goto LABEL_64;
        goto LABEL_63;
      }
      v23 = &v22[v24];
    }
    do
    {
LABEL_63:
      *v23 ^= 32 * ((unsigned __int8)(*v23 - 97) < 0x1Au);
      ++v23;
    }
    while ( v23 != &v22[v20] );
  }
LABEL_64:
  v55 = v21;
  v56 = (__int64)v22;
  *(_QWORD *)v57 = v20;
  v46.m128i_i64[0] = (__int64)&v67;
  v46.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
  *(_QWORD *)dest = &v55;
  *(_QWORD *)&dest[8] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[16] = &v61;
  *(_QWORD *)&dest[24] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[32] = &v53;
  v48 = <alloc::string::String as core::fmt::Display>::fmt;
  v49.m128i_i64[0] = (__int64)&unk_2BECF0;
  v49.m128i_i64[1] = 5LL;
  *(_QWORD *)&v50[16] = 0LL;
  *(_QWORD *)v50 = &v46;
  *(_QWORD *)&v50[8] = 4LL;
  std::io::stdio::_print(&v49);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v55);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v55);
LABEL_65:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v61);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v61);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v53);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v53);
  if ( v70 )
    _rust_dealloc(v69, v70, 1LL);
  v39 = v71;
  v40 = v72;
  if ( *v72 )
    (*v72)(v71);
  v41 = v40[1];
  if ( v41 )
    _rust_dealloc(v39, v41, v40[2]);
  v42 = *(_QWORD *)(a1 + 16);
  v43 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)v43 )
    (*(void (__fastcall **)(__int64))v43)(v42);
  v44 = *(_QWORD *)(v43 + 8);
  if ( v44 )
    _rust_dealloc(v42, v44, *(_QWORD *)(v43 + 16));
  return 0LL;
}
