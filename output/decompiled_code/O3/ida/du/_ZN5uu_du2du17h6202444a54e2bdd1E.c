        __m128 a10)
{
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  double v14; // xmm0_8
  __int64 v15; // r15
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rbp
  __int64 v22; // r15
  bool v24; // zf
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 i; // rax
  __int64 v33; // r9
  int v34; // r11d
  __int64 v35; // r11
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // r12
  _BYTE *v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rax
  __m128i v42; // kr10_16
  __m128i v43; // xmm0
  __int64 v44; // rsi
  void *v45; // rax
  void *v46; // rbx
  void *v47; // rax
  void *v48; // rbx
  void *v49; // rbx
  _BYTE *v50; // rdi
  __int64 v51; // rsi
  void *v53; // rax
  char v54; // [rsp+2h] [rbp-3D6h]
  char v55; // [rsp+3h] [rbp-3D5h]
  char v56; // [rsp+4h] [rbp-3D4h]
  char v57; // [rsp+5h] [rbp-3D3h]
  char v58; // [rsp+6h] [rbp-3D2h]
  char v59; // [rsp+7h] [rbp-3D1h]
  _QWORD *dest; // [rsp+8h] [rbp-3D0h]
  char *src; // [rsp+10h] [rbp-3C8h]
  __int64 v62; // [rsp+18h] [rbp-3C0h]
  __int64 v63; // [rsp+20h] [rbp-3B8h]
  volatile signed __int64 *v64; // [rsp+28h] [rbp-3B0h] BYREF
  _BYTE *v65; // [rsp+30h] [rbp-3A8h]
  __m128i v66; // [rsp+38h] [rbp-3A0h]
  __int64 v67; // [rsp+48h] [rbp-390h]
  _OWORD v68[10]; // [rsp+50h] [rbp-388h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-2E8h]
  __int64 v70; // [rsp+F8h] [rbp-2E0h]
  __int64 v71; // [rsp+100h] [rbp-2D8h]
  __int64 v72; // [rsp+108h] [rbp-2D0h]
  __int64 v73; // [rsp+110h] [rbp-2C8h]
  volatile signed __int64 *v74; // [rsp+118h] [rbp-2C0h] BYREF
  bool v75; // [rsp+120h] [rbp-2B8h]
  _QWORD *v76; // [rsp+128h] [rbp-2B0h]
  __int64 *v77; // [rsp+130h] [rbp-2A8h]
  __int64 v78; // [rsp+138h] [rbp-2A0h]
  __int64 v79; // [rsp+140h] [rbp-298h]
  __int64 v80; // [rsp+148h] [rbp-290h]
  __int64 v81; // [rsp+150h] [rbp-288h] BYREF
  __int64 v82; // [rsp+158h] [rbp-280h]
  __int64 v83; // [rsp+160h] [rbp-278h]
  _QWORD *v84; // [rsp+168h] [rbp-270h]
  __int64 v85; // [rsp+170h] [rbp-268h]
  __int64 v86; // [rsp+178h] [rbp-260h]
  __int64 v87; // [rsp+180h] [rbp-258h]
  __m128i *v88; // [rsp+188h] [rbp-250h] BYREF
  __m128i v89; // [rsp+190h] [rbp-248h] BYREF
  __m128i v90[9]; // [rsp+1A0h] [rbp-238h] BYREF
  __int128 v91; // [rsp+230h] [rbp-1A8h] BYREF
  __int64 v92; // [rsp+240h] [rbp-198h]
  __m128i v93; // [rsp+250h] [rbp-188h] BYREF
  __int64 v94; // [rsp+260h] [rbp-178h] BYREF
  volatile signed __int64 *v95; // [rsp+268h] [rbp-170h]
  _BYTE *v96; // [rsp+270h] [rbp-168h]
  __m128i v97; // [rsp+278h] [rbp-160h] BYREF
  __int64 v98; // [rsp+288h] [rbp-150h]
  _QWORD v99[2]; // [rsp+290h] [rbp-148h] BYREF
  __m128i si128; // [rsp+2A0h] [rbp-138h] BYREF
  __m128i v101; // [rsp+2B0h] [rbp-128h] BYREF
  __int128 v102; // [rsp+2C0h] [rbp-118h]
  __int128 v103; // [rsp+2D0h] [rbp-108h]
  __m128 v104; // [rsp+2E0h] [rbp-F8h]
  __int128 v105; // [rsp+2F0h] [rbp-E8h]
  __m128i v106; // [rsp+300h] [rbp-D8h] BYREF
  __int64 v107; // [rsp+310h] [rbp-C8h]
  __int64 v108; // [rsp+318h] [rbp-C0h]
  __int64 v109; // [rsp+320h] [rbp-B8h]
  __int128 v110; // [rsp+328h] [rbp-B0h]
  __int64 v111; // [rsp+338h] [rbp-A0h]
  __int64 v112; // [rsp+340h] [rbp-98h]
  __int64 v113; // [rsp+348h] [rbp-90h]
  __int64 v114; // [rsp+350h] [rbp-88h]
  __m128i v115; // [rsp+358h] [rbp-80h] BYREF
  __m128i v116; // [rsp+368h] [rbp-70h] BYREF
  __int64 v117; // [rsp+378h] [rbp-60h]
  char v118; // [rsp+380h] [rbp-58h]
  _BYTE v119[15]; // [rsp+381h] [rbp-57h]
  _BYTE v120[72]; // [rsp+390h] [rbp-48h] BYREF

  v77 = a5;
  v71 = a4;
  if ( !a2[128] )
    goto LABEL_72;
  dest = a1;
  v76 = a2 + 64;
  src = a2;
  std::sys::pal::unix::fs::readdir(v68, *((_QWORD *)a2 + 9), *((_QWORD *)a2 + 10));
  if ( BYTE8(v68[0]) == 2 )
  {
    *(_QWORD *)&v68[1] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                           *(_QWORD *)&v68[0],
                           v76);
    *((_QWORD *)&v68[1] + 1) = &off_134868;
    v68[0] = 2uLL;
    std::sync::mpmc::Sender<T>::send(&v89);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v89), (__m128i)xmmword_167B0)) == 0xFFFF )
    {
      v12 = a1;
      memcpy(a1, a2, 0x90uLL);
    }
    else
    {
      memcpy(&v68[1], v90, 0x90uLL);
      v68[0] = v89;
      v45 = (void *)_rust_alloc(160LL, 16LL);
      if ( !v45 )
        alloc::alloc::handle_alloc_error(16LL, 160LL);
      v46 = v45;
      memcpy(v45, v68, 0xA0uLL);
      a1[2] = v46;
      a1[1] = 0LL;
      *a1 = 2LL;
LABEL_87:
      v12 = dest;
      if ( *v76 )
        _rust_dealloc(*((_QWORD *)src + 9), *v76, 1LL);
    }
    return v12;
  }
  v74 = *(volatile signed __int64 **)&v68[0];
  v75 = BYTE8(v68[0]) != 0;
  v87 = *(_QWORD *)(a3 + 8);
  v13 = *(_QWORD *)(a3 + 16);
  v59 = *(_BYTE *)(a3 + 52);
  v84 = v77 + 4;
  v57 = *(_BYTE *)(a3 + 51);
  v58 = *(_BYTE *)(a3 + 50);
  ++v71;
  v56 = *(_BYTE *)(a3 + 49);
  v55 = *(_BYTE *)(a3 + 48);
  v86 = v13;
  v85 = 56 * v13;
  v70 = a6;
  v69 = a3;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v94, &v74);
    if ( !v94 )
      break;
    if ( v95 )
    {
      v64 = v95;
      v65 = v96;
      v67 = v98;
      v66 = _mm_loadu_si128(&v97);
      v14 = std::fs::DirEntry::path(&v81, &v64);
      v15 = v82;
      uu_du::Stat::new(
        (__int64)&v106,
        v82,
        v83,
        (_QWORD *)a3,
        v14,
        *(double *)a8.m128i_i64,
        *(double *)a9.m128i_i64,
        a10);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v106), (__m128i)xmmword_165C0)) == 0xFFFF )
      {
        *(_QWORD *)&v68[1] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                               v107,
                               &v64);
        *((_QWORD *)&v68[1] + 1) = &off_134868;
        v68[0] = 2uLL;
        std::sync::mpmc::Sender<T>::send(&v89);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v89), (__m128i)xmmword_167B0)) != 0xFFFF )
        {
          memcpy(&v68[1], v90, 0x90uLL);
          v68[0] = v89;
          v53 = (void *)_rust_alloc(160LL, 16LL);
          if ( !v53 )
            alloc::alloc::handle_alloc_error(16LL, 160LL);
LABEL_78:
          v49 = v53;
          memcpy(v53, v68, 0xA0uLL);
          dest[2] = v49;
          dest[1] = 0LL;
          *dest = 2LL;
LABEL_79:
          if ( v81 )
            _rust_dealloc(v15, v81, 1LL);
          if ( !_InterlockedDecrement64(v64) )
            alloc::sync::Arc<T,A>::drop_slow(&v64);
          v50 = v65;
          v51 = v66.m128i_i64[0];
          *v65 = 0;
          if ( v51 )
            _rust_dealloc(v50, v51, 1LL);
LABEL_85:
          if ( !_InterlockedDecrement64(v74) )
            alloc::sync::Arc<T,A>::drop_slow(&v74);
          goto LABEL_87;
        }
        goto LABEL_10;
      }
      v62 = v15;
      v73 = v106.m128i_i64[1];
      v80 = v106.m128i_i64[0];
      v79 = v107;
      v78 = v108;
      v72 = v109;
      v63 = v112;
      v18 = v113;
      v19 = v114;
      v93 = _mm_loadu_si128(&v115);
      v54 = v118;
      v20 = v85;
      v21 = v87;
      if ( v86 )
      {
        while ( 1 )
        {
          std::sys::os_str::bytes::Slice::to_string_lossy(v68, v18, v19);
          v36 = *((_QWORD *)&v68[0] + 1);
          if ( !(unsigned __int8)glob::Pattern::matches_from(
                                   v21,
                                   1LL,
                                   *((_QWORD *)&v68[0] + 1),
                                   *((_QWORD *)&v68[0] + 1) + *(_QWORD *)&v68[1],
                                   0LL,
                                   1LL) )
            break;
          if ( 2LL * *(_QWORD *)&v68[0] )
            _rust_dealloc(v36, *(_QWORD *)&v68[0], 1LL);
          std::fs::DirEntry::file_name(v120, &v64);
          std::sys::os_str::bytes::Buf::into_string(v68, v120);
          v37 = *((_QWORD *)&v68[0] + 1);
          v38 = *(_QWORD *)&v68[1];
          if ( *(_QWORD *)&v68[0] )
          {
            *(_QWORD *)&v68[0] = *((_QWORD *)&v68[0] + 1);
            *(_OWORD *)((char *)v68 + 8) = v68[1];
            core::result::unwrap_failed(aCalledResultUn_5, 43LL, v68, &off_1346B0, &off_1347F8);
          }
          if ( !(unsigned __int8)glob::Pattern::matches_from(
                                   v21,
                                   1LL,
                                   *(_QWORD *)&v68[1],
                                   *(_QWORD *)&v68[1] + *((_QWORD *)&v68[1] + 1),
                                   0LL,
                                   1LL) )
          {
            if ( v37 )
              _rust_dealloc(v38, v37, 1LL);
            goto LABEL_42;
          }
          if ( v37 )
            _rust_dealloc(v38, v37, 1LL);
          v21 += 56LL;
          v20 -= 56LL;
          if ( !v20 )
            goto LABEL_18;
        }
        if ( 2LL * *(_QWORD *)&v68[0] )
          _rust_dealloc(v36, *(_QWORD *)&v68[0], 1LL);
LABEL_42:
        if ( v59 )
        {
          v89.m128i_i64[0] = 1LL;
          v89.m128i_i64[1] = v18;
          v90[0].m128i_i64[0] = v19;
          v90[0].m128i_i8[8] = 1;
          v88 = &v89;
          v99[0] = &v88;
          v99[1] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v68[0] = &unk_134810;
          *((_QWORD *)&v68[0] + 1) = 2LL;
          *(_QWORD *)&v68[2] = 0LL;
          *(_QWORD *)&v68[1] = v99;
          *((_QWORD *)&v68[1] + 1) = 1LL;
          std::io::stdio::_print(v68);
        }
      }
      else
      {
LABEL_18:
        v22 = v80;
        _RBX = v77;
        if ( v73 | v80 )
        {
          *(_QWORD *)&v91 = v79;
          *((_QWORD *)&v91 + 1) = v78;
          v24 = v77[3] == 0;
          v92 = v72;
          if ( !v24 )
          {
            v25 = core::hash::BuildHasher::hash_one(v84, &v91);
            v26 = *_RBX;
            v27 = _RBX[1];
            v28 = v25 & v27;
            v29 = _mm_cvtsi32_si128(v25 >> 57);
            v30 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v29, v29), 0), 0);
            for ( i = 0LL; ; i += 16LL )
            {
              a8 = _mm_loadu_si128((const __m128i *)(v26 + v28));
              a9 = _mm_cmpeq_epi8(a8, v30);
              _R10D = _mm_movemask_epi8(a9);
              if ( _R10D )
                break;
LABEL_22:
              a8 = _mm_cmpeq_epi8(a8, (__m128i)xmmword_16400);
              if ( _mm_movemask_epi8(a8) )
              {
                _RBX = v77;
                v22 = v80;
                goto LABEL_53;
              }
              v33 = i + v28 + 16;
              v28 = v27 & v33;
            }
            while ( 1 )
            {
              __asm { tzcnt   ebx, r10d }
              v35 = v26 - 32 * (v27 & ((unsigned __int64)_RBX + v28));
              _RBX = (__int64 *)(*((_QWORD *)&v91 + 1) ^ *(_QWORD *)(v35 - 24));
              if ( v91 == *(_OWORD *)(v35 - 32) && v92 == *(_QWORD *)(v35 - 16) )
                break;
              v34 = _R10D - 1;
              LOWORD(v34) = _R10D & (_R10D - 1);
              _R10D = v34;
              if ( !(_WORD)v34 )
                goto LABEL_22;
            }
            if ( v57 )
              ++*((_QWORD *)src + 13);
            goto LABEL_44;
          }
LABEL_53:
          hashbrown::map::HashMap<K,V,S,A>::insert(_RBX);
        }
        if ( !v54 )
        {
          ++*((_QWORD *)src + 13);
          a8 = _mm_load_si128(&v93);
          *(__m128i *)(src + 88) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(src + 88)), a8);
          if ( v55 )
          {
            *((_QWORD *)&v68[0] + 1) = v73;
            *(_QWORD *)&v68[0] = v22;
            *((_QWORD *)&v68[1] + 1) = v78;
            *(_QWORD *)&v68[1] = v79;
            *(_QWORD *)&v68[2] = v72;
            *((_QWORD *)&v68[3] + 1) = v111;
            *(_OWORD *)((char *)&v68[2] + 8) = v110;
            *(_QWORD *)&v68[4] = v63;
            *((_QWORD *)&v68[4] + 1) = v18;
            *(_QWORD *)&v68[5] = v19;
            *(__m128i *)((char *)&v68[5] + 8) = a8;
            *((_QWORD *)&v68[7] + 1) = v117;
            *(__m128i *)((char *)&v68[6] + 8) = _mm_loadu_si128(&v116);
            LOBYTE(v68[8]) = 0;
            *((_QWORD *)&v68[8] + 1) = *(_QWORD *)&v119[7];
            *(_QWORD *)((char *)&v68[8] + 1) = *(_QWORD *)v119;
            *(_QWORD *)&v68[9] = v71;
            v15 = v62;
            std::sync::mpmc::Sender<T>::send(&v89);
            a3 = v69;
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v89), (__m128i)xmmword_167B0)) != 0xFFFF )
              goto LABEL_63;
          }
          else
          {
            v15 = v62;
            a3 = v69;
            if ( v63 )
              _rust_dealloc(v18, v63, 1LL);
          }
          goto LABEL_10;
        }
        if ( !v58 || v73 | v22 ^ 1 || *(_QWORD *)src != 1LL || v72 == *((_QWORD *)src + 4) )
        {
          *((_QWORD *)&v68[0] + 1) = v73;
          *(_QWORD *)&v68[0] = v22;
          *((_QWORD *)&v68[1] + 1) = v78;
          *(_QWORD *)&v68[1] = v79;
          *(_QWORD *)&v68[2] = v72;
          *((_QWORD *)&v68[3] + 1) = v111;
          *(_OWORD *)((char *)&v68[2] + 8) = v110;
          *(_QWORD *)&v68[4] = v63;
          *((_QWORD *)&v68[4] + 1) = v18;
          *(_QWORD *)&v68[5] = v19;
          *(__m128i *)((char *)&v68[5] + 8) = v93;
          *((_QWORD *)&v68[7] + 1) = v117;
          *(__m128i *)((char *)&v68[6] + 8) = _mm_loadu_si128(&v116);
          LOBYTE(v68[8]) = v54;
          *((_QWORD *)&v68[8] + 1) = *(_QWORD *)&v119[7];
          *(_QWORD *)((char *)&v68[8] + 1) = *(_QWORD *)v119;
          a3 = v69;
          v15 = v62;
          uu_du::du(&v89, v68, v69, v71, _RBX, v70);
          v41 = v90[0].m128i_i64[0];
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v89), (__m128i)xmmword_165C0)) == 0xFFFF )
          {
            dest[2] = v90[0].m128i_i64[0];
            dest[1] = 0LL;
            *dest = 2LL;
            goto LABEL_79;
          }
          v42 = v89;
          v105 = *(__int128 *)((char *)&v90[3] + 8);
          v104 = *(__m128 *)((char *)&v90[2] + 8);
          v103 = *(__int128 *)((char *)&v90[1] + 8);
          v102 = *(__int128 *)((char *)v90 + 8);
          v43 = _mm_loadu_si128((const __m128i *)&v90[4].m128i_u64[1]);
          v44 = v90[5].m128i_i64[1];
          si128 = _mm_load_si128(&v90[6]);
          v101 = v90[7];
          if ( !v56 )
          {
            *(__m128i *)(src + 88) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(src + 88)), v43);
            *((_QWORD *)src + 13) += v44;
          }
          a10 = v104;
          *(_OWORD *)((char *)&v68[4] + 8) = v105;
          *(__m128 *)((char *)&v68[3] + 8) = v104;
          *(_OWORD *)((char *)&v68[2] + 8) = v103;
          *(_OWORD *)((char *)&v68[1] + 8) = v102;
          a8 = _mm_load_si128(&si128);
          a9 = _mm_load_si128(&v101);
          v68[8] = a9;
          v68[7] = a8;
          v68[0] = v42;
          *(_QWORD *)&v68[1] = v41;
          *(__m128i *)((char *)&v68[5] + 8) = v43;
          *((_QWORD *)&v68[6] + 1) = v44;
          *(_QWORD *)&v68[9] = v71;
          std::sync::mpmc::Sender<T>::send(&v89);
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v89), (__m128i)xmmword_167B0)) != 0xFFFF )
          {
LABEL_63:
            memcpy(&v68[1], v90, 0x90uLL);
            v68[0] = v89;
            v53 = (void *)alloc::alloc::exchange_malloc();
            goto LABEL_78;
          }
LABEL_10:
          if ( v81 )
            _rust_dealloc(v15, v81, 1LL);
          if ( !_InterlockedDecrement64(v64) )
            goto LABEL_49;
          goto LABEL_50;
        }
      }
LABEL_44:
      if ( v63 )
        _rust_dealloc(v18, v63, 1LL);
      a3 = v69;
      if ( v81 )
        _rust_dealloc(v62, v81, 1LL);
      if ( !_InterlockedDecrement64(v64) )
LABEL_49:
        alloc::sync::Arc<T,A>::drop_slow(&v64);
LABEL_50:
      v39 = v65;
      v40 = v66.m128i_i64[0];
      *v65 = 0;
      if ( v40 )
        _rust_dealloc(v39, v40, 1LL);
    }
    else
    {
      *(_QWORD *)&v68[0] = 0x8000000000000000LL;
      *((_QWORD *)&v68[1] + 1) = v96;
      v16 = _rust_alloc(32LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v17 = v68[0];
      a8 = _mm_loadu_si128((const __m128i *)&v68[1]);
      *(__m128i *)(v16 + 16) = a8;
      *(_OWORD *)v16 = v17;
      *(_QWORD *)&v68[1] = v16;
      *((_QWORD *)&v68[1] + 1) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
      v68[0] = 2uLL;
      std::sync::mpmc::Sender<T>::send(&v89);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v89), (__m128i)xmmword_167B0)) != 0xFFFF )
      {
        memcpy(&v68[1], v90, 0x90uLL);
        v68[0] = v89;
        v47 = (void *)_rust_alloc(160LL, 16LL);
        if ( !v47 )
          alloc::alloc::handle_alloc_error(16LL, 160LL);
        v48 = v47;
        memcpy(v47, v68, 0xA0uLL);
        dest[2] = v48;
        dest[1] = 0LL;
        *dest = 2LL;
        goto LABEL_85;
      }
    }
  }
  if ( !_InterlockedDecrement64(v74) )
    alloc::sync::Arc<T,A>::drop_slow(&v74);
  a2 = src;
  a1 = dest;
LABEL_72:
  v12 = a1;
  memcpy(a1, a2, 0x90uLL);
  return v12;
}
