__int64 __fastcall uu_hashsum::hashsum(__int64 a1, const __m128i *a2)
{
  __int64 v2; // r14
  const char *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  _BYTE *v6; // r14
  __m128i v7; // kr00_16
  __int64 v8; // rdx
  _BYTE *v9; // rbx
  char v10; // r13
  char v11; // al
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // r15
  __int64 *v15; // rax
  __int64 (__fastcall **v16)(); // rcx
  __int64 v17; // r13
  __int32 v18; // r15d
  __int64 v19; // rbx
  const void *v20; // r15
  size_t v21; // r14
  __int64 v22; // rbp
  _BYTE *v23; // r13
  _BYTE *v24; // rcx
  unsigned __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __m128i si128; // xmm5
  __m128i v29; // xmm6
  __m128i v30; // xmm7
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm3
  __m128i v37; // xmm4
  __m128i v38; // xmm5
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // r15
  void (__fastcall **v42)(__int64); // rbx
  void (__fastcall *v43)(__int64); // rsi
  __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // r15
  void (__fastcall **v48)(__int64); // rbx
  __int64 v49; // r14
  void (__fastcall *v50)(__int64); // rsi
  __int64 v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rsi
  __m128i v55; // [rsp+8h] [rbp-240h] BYREF
  _BYTE dest[40]; // [rsp+18h] [rbp-230h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+40h] [rbp-208h]
  __int64 v58; // [rsp+48h] [rbp-200h]
  __m128i v59; // [rsp+50h] [rbp-1F8h] BYREF
  _BYTE v60[40]; // [rsp+60h] [rbp-1E8h]
  __int16 v61; // [rsp+88h] [rbp-1C0h]
  char v62; // [rsp+8Ah] [rbp-1BEh]
  __m128i v63; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i v64[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-188h] BYREF
  _BYTE *v66; // [rsp+C8h] [rbp-180h]
  _BYTE v67[17]; // [rsp+D0h] [rbp-178h]
  _BYTE v68[23]; // [rsp+E1h] [rbp-167h]
  __int16 v69; // [rsp+F8h] [rbp-150h]
  char v70; // [rsp+FAh] [rbp-14Eh]
  __m128i v71; // [rsp+100h] [rbp-148h] BYREF
  __int64 v72; // [rsp+110h] [rbp-138h] BYREF
  _BYTE v73[23]; // [rsp+121h] [rbp-127h] BYREF
  __int16 v74; // [rsp+138h] [rbp-110h]
  char v75; // [rsp+13Ah] [rbp-10Eh]
  __int64 v76; // [rsp+148h] [rbp-100h]
  unsigned __int64 v77; // [rsp+150h] [rbp-F8h]
  __int64 v78; // [rsp+158h] [rbp-F0h]
  _QWORD v79[2]; // [rsp+160h] [rbp-E8h] BYREF
  __m128i v80; // [rsp+170h] [rbp-D8h] BYREF
  _BYTE v81[23]; // [rsp+180h] [rbp-C8h]
  __int64 v82; // [rsp+198h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+1A0h] [rbp-A8h]
  __int64 v84; // [rsp+1C0h] [rbp-88h]
  void (__fastcall **v85)(__int64); // [rsp+1C8h] [rbp-80h]
  _OWORD v86[7]; // [rsp+1D0h] [rbp-78h] BYREF

  v2 = a1;
  v3 = asc_6127E;
  if ( !*(_BYTE *)(a1 + 40) )
    v3 = asc_6127D;
  v79[0] = v3;
  v79[1] = 1LL;
  v86[3] = _mm_loadu_si128(a2 + 3);
  v86[2] = _mm_loadu_si128(a2 + 2);
  v86[1] = _mm_loadu_si128(a2 + 1);
  v86[0] = _mm_loadu_si128(a2);
  v78 = a1 + 16;
  v77 = 0x8000000000000000LL;
  v58 = a1;
  while ( 1 )
  {
    v4 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v86);
    if ( !v4 )
      break;
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_BYTE **)(v4 + 16);
    std::path::Path::components(&v71, v5, v6);
    std::path::Path::components(&v65, asc_6127C, 1LL);
    v7 = v71;
    v8 = v65;
    v9 = v66;
    if ( (_BYTE *)v71.m128i_i64[1] != v66 )
    {
      v10 = v72;
      goto LABEL_13;
    }
    v10 = v72;
    if ( (_BYTE)v74 != (_BYTE)v69 || HIBYTE(v74) != 2 || HIBYTE(v69) != 2 )
      goto LABEL_13;
    if ( (_BYTE)v72 == 6 )
    {
      if ( v67[0] <= 2u )
      {
        v11 = 6;
        goto LABEL_15;
      }
LABEL_43:
      v76 = v65;
      v26 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
              v71.m128i_i64[0],
              v71.m128i_i64[1],
              v65,
              v71.m128i_i64[1]);
      v8 = v76;
      if ( v26 )
        goto LABEL_18;
LABEL_13:
      v11 = 6;
      if ( v10 == 6 )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( v67[0] == 6 )
    {
      if ( (unsigned __int8)v72 >= 3u )
        goto LABEL_43;
    }
    else if ( (unsigned __int8)v72 < 3u == v67[0] < 3u )
    {
      goto LABEL_43;
    }
LABEL_14:
    *(_QWORD *)&v81[15] = *(_QWORD *)&v73[15];
    v12 = _mm_loadu_si128((const __m128i *)((char *)&v72 + 1));
    *(__m128i *)v81 = _mm_loadu_si128((const __m128i *)v73);
    v80 = v12;
    v11 = v10;
LABEL_15:
    v59 = v7;
    v60[0] = v11;
    *(_QWORD *)&v60[32] = *(_QWORD *)&v81[15];
    *(_OWORD *)&v60[17] = *(_OWORD *)v81;
    *(__m128i *)&v60[1] = v80;
    v61 = v74;
    v62 = v75;
    if ( v67[0] != 6 )
    {
      *(__int64 *)((char *)&v64[0].m128i_i64[1] + 7) = *(_QWORD *)&v68[15];
      v64[0] = *(__m128i *)v68;
      v63 = *(__m128i *)&v67[1];
    }
    v55.m128i_i64[0] = v8;
    v55.m128i_i64[1] = (__int64)v9;
    dest[0] = v67[0];
    *(_QWORD *)&dest[32] = *(__int64 *)((char *)&v64[0].m128i_i64[1] + 7);
    v13 = _mm_load_si128(&v63);
    *(__m128i *)&dest[17] = _mm_load_si128(v64);
    *(__m128i *)&dest[1] = v13;
    LOWORD(v57) = v69;
    BYTE2(v57) = v70;
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(&v59, &v55) )
    {
LABEL_18:
      v14 = std::io::stdio::stdin();
      v15 = (__int64 *)_rust_alloc(8LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      *v15 = v14;
      v16 = (__int64 (__fastcall **)())&unk_2BEC08;
      goto LABEL_23;
    }
    std::fs::File::open(&v55, v5, v6);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v59,
      &v55);
    v17 = v59.m128i_i64[0];
    if ( v59.m128i_i64[0] )
    {
      v49 = v58;
LABEL_75:
      v51 = *(_QWORD *)(v49 + 16);
      v52 = *(_QWORD *)(v49 + 24);
      if ( *(_QWORD *)v52 )
        (*(void (__fastcall **)(_QWORD))v52)(*(_QWORD *)(v49 + 16));
      v53 = *(_QWORD *)(v52 + 8);
      if ( v53 )
        _rust_dealloc(v51, v53, *(_QWORD *)(v52 + 16));
      return v17;
    }
    v18 = v59.m128i_i32[2];
    v15 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v15 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v15 = v18;
    v16 = &off_2BEBB0;
LABEL_23:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v82, 0x2000LL, v15, v16);
    uucore::features::checksum::digest_reader(&v55, v78, &v82, *(unsigned __int8 *)(v58 + 40), *(_QWORD *)(v58 + 32));
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v59,
      &v55);
    v17 = v59.m128i_i64[1];
    if ( v59.m128i_i64[0] == v77 )
    {
      if ( v83 )
        _rust_dealloc(v82, v83, 1LL);
      v47 = v84;
      v48 = v85;
      v49 = v58;
      if ( *v85 )
        (*v85)(v84);
      v50 = v48[1];
      if ( v50 )
        _rust_dealloc(v47, v50, v48[2]);
      goto LABEL_75;
    }
    v63 = v59;
    v64[0].m128i_i64[0] = *(_QWORD *)v60;
    uucore::features::checksum::escape_filename(&v55, v5, v6);
    v72 = *(_QWORD *)dest;
    v71 = v55;
    v80 = _mm_loadu_si128((const __m128i *)&dest[8]);
    v19 = v58;
    if ( *(_BYTE *)(v58 + 41) )
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               *(_QWORD *)v58,
                               *(_QWORD *)(v58 + 8),
                               aBlake2b_1,
                               7LL) )
      {
        v20 = *(const void **)v19;
        v21 = *(_QWORD *)(v19 + 8);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v55, v21, 0LL);
        v22 = v55.m128i_i64[1];
        if ( v55.m128i_i64[0] )
          alloc::raw_vec::handle_error(v55.m128i_i64[1], *(_QWORD *)dest);
        v23 = *(_BYTE **)dest;
        memcpy(*(void **)dest, v20, v21);
        if ( !v21 )
          goto LABEL_56;
        v24 = v23;
        if ( v21 >= 8 )
        {
          if ( v21 >= 0x20 )
          {
            v25 = v21 & 0xFFFFFFFFFFFFFFE0LL;
            v27 = 0LL;
            si128 = _mm_load_si128((const __m128i *)&xmmword_5C590);
            v29 = _mm_load_si128((const __m128i *)&xmmword_5C790);
            v30 = _mm_load_si128(xmmword_5D350);
            do
            {
              v31 = _mm_loadu_si128((const __m128i *)&v23[v27]);
              v32 = _mm_loadu_si128((const __m128i *)&v23[v27 + 16]);
              v33 = _mm_add_epi8(v31, si128);
              v34 = _mm_add_epi8(v32, si128);
              *(__m128i *)&v23[v27] = _mm_xor_si128(
                                        _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v33, v29), v33), v30),
                                        v31);
              *(__m128i *)&v23[v27 + 16] = _mm_xor_si128(
                                             _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v34, v29), v34), v30),
                                             v32);
              v27 += 32LL;
            }
            while ( v25 != v27 );
            if ( v21 == v25 )
              goto LABEL_56;
            if ( (v21 & 0x18) != 0 )
              goto LABEL_50;
            v24 = &v23[v25];
          }
          else
          {
            v25 = 0LL;
LABEL_50:
            v35 = v21 & 0xFFFFFFFFFFFFFFF8LL;
            v24 = &v23[v21 & 0xFFFFFFFFFFFFFFF8LL];
            v36 = _mm_load_si128((const __m128i *)&xmmword_5C7A0);
            v37 = _mm_load_si128(xmmword_5CF40);
            v38 = _mm_load_si128((const __m128i *)&xmmword_5D240);
            do
            {
              v39 = _mm_loadl_epi64((const __m128i *)&v23[v25]);
              v40 = _mm_add_epi8(v39, v36);
              *(_QWORD *)&v23[v25] = _mm_xor_si128(
                                       _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v40, v37), v40), v38),
                                       v39).m128i_u64[0];
              v25 += 8LL;
            }
            while ( v35 != v25 );
            if ( v21 == v35 )
            {
LABEL_56:
              v65 = v22;
              v66 = v23;
              *(_QWORD *)v67 = v21;
              v55.m128i_i64[0] = (__int64)&v80;
              v55.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &v65;
              *(_QWORD *)&dest[8] = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&dest[16] = &v71;
              *(_QWORD *)&dest[24] = <alloc::string::String as core::fmt::Display>::fmt;
              *(_QWORD *)&dest[32] = &v63;
              v57 = <alloc::string::String as core::fmt::Display>::fmt;
              v59.m128i_i64[0] = (__int64)&unk_2BECF0;
              v59.m128i_i64[1] = 5LL;
              *(_QWORD *)&v60[16] = 0LL;
              *(_QWORD *)v60 = &v55;
              *(_QWORD *)&v60[8] = 4LL;
              std::io::stdio::_print(&v59);
              <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v65);
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v65);
              goto LABEL_57;
            }
          }
        }
        do
        {
          *v24 ^= 32 * ((unsigned __int8)(*v24 - 97) < 0x1Au);
          ++v24;
        }
        while ( v24 != &v23[v21] );
        goto LABEL_56;
      }
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v19 + 24) + 48LL))(*(_QWORD *)(v19 + 16)) == 512 )
      {
        v59.m128i_i64[0] = (__int64)&v71;
        v59.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v60 = &v63;
        *(_QWORD *)&v60[8] = <alloc::string::String as core::fmt::Display>::fmt;
        v55.m128i_i64[0] = (__int64)&off_2BED40;
        v55.m128i_i64[1] = 3LL;
        *(_QWORD *)dest = &v59;
        *(_OWORD *)&dest[8] = 2uLL;
        std::io::stdio::_print(&v55);
      }
      else
      {
        v65 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v19 + 24) + 48LL))(*(_QWORD *)(v19 + 16));
        v55.m128i_i64[0] = (__int64)&v65;
        v55.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)dest = &v71;
        *(_QWORD *)&dest[8] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = &v63;
        *(_QWORD *)&dest[24] = <alloc::string::String as core::fmt::Display>::fmt;
        v59.m128i_i64[0] = (__int64)&off_2BED70;
        v59.m128i_i64[1] = 4LL;
        *(_QWORD *)&v60[16] = 0LL;
        *(_QWORD *)v60 = &v55;
        *(_QWORD *)&v60[8] = 3LL;
        std::io::stdio::_print(&v59);
      }
    }
    else if ( *(_BYTE *)(v58 + 42) )
    {
      v59.m128i_i64[0] = (__int64)&v63;
      v59.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      v55.m128i_i64[0] = (__int64)&unk_2BEAC8;
      v55.m128i_i64[1] = 2LL;
      *(_QWORD *)dest = &v59;
      *(_OWORD *)&dest[8] = 1uLL;
      std::io::stdio::_print(&v55);
    }
    else
    {
      if ( *(_BYTE *)(v58 + 43) )
      {
        v65 = v5;
        v66 = v6;
        v55.m128i_i64[0] = (__int64)&v63;
        v55.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)dest = v79;
        *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = &v65;
        *(_QWORD *)&dest[24] = <std::path::Display as core::fmt::Display>::fmt;
        v59.m128i_i64[0] = (__int64)&unk_2BECB0;
        v59.m128i_i64[1] = 4LL;
        *(_QWORD *)&v60[16] = 0LL;
        *(_QWORD *)v60 = &v55;
        *(_QWORD *)&v60[8] = 3LL;
      }
      else
      {
        v55.m128i_i64[0] = (__int64)&v80;
        v55.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &v63;
        *(_QWORD *)&dest[8] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = v79;
        *(_QWORD *)&dest[24] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[32] = &v71;
        v57 = <alloc::string::String as core::fmt::Display>::fmt;
        v59.m128i_i64[0] = (__int64)&unk_2BEC60;
        v59.m128i_i64[1] = 5LL;
        *(_QWORD *)&v60[16] = 0LL;
        *(_QWORD *)v60 = &v55;
        *(_QWORD *)&v60[8] = 4LL;
      }
      std::io::stdio::_print(&v59);
    }
LABEL_57:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v71);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v71);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v63);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v63);
    if ( v83 )
      _rust_dealloc(v82, v83, 1LL);
    v41 = v84;
    v42 = v85;
    v2 = v58;
    if ( *v85 )
      (*v85)(v84);
    v43 = v42[1];
    if ( v43 )
      _rust_dealloc(v41, v43, v42[2]);
  }
  v44 = *(_QWORD *)(v2 + 16);
  v45 = *(_QWORD *)(v2 + 24);
  if ( *(_QWORD *)v45 )
    (*(void (__fastcall **)(_QWORD))v45)(*(_QWORD *)(v2 + 16));
  v46 = *(_QWORD *)(v45 + 8);
  if ( v46 )
    _rust_dealloc(v44, v46, *(_QWORD *)(v45 + 16));
  return 0LL;
}
