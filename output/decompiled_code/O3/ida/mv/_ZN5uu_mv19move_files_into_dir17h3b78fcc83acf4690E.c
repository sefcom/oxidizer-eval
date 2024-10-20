        __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // r14
  char v12; // al
  __int32 v13; // ecx
  __int8 v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rbx
  __int64 v21; // r13
  __int64 v22; // r12
  const void *v23; // rbp
  size_t v24; // rbx
  __int64 v25; // r15
  void *v26; // rax
  size_t v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __m128i v31; // kr00_16
  unsigned __int64 v32; // rbp
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v39; // rbp
  char v40; // al
  __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // r13
  __int64 v44; // rbp
  const char *v45; // r14
  size_t v46; // rdi
  size_t v47; // r15
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  char v51; // al
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rbx
  __int64 v55; // rax
  size_t v56; // r14
  size_t v57; // r15
  __int64 v58; // rsi
  __int64 v59; // rdx
  size_t v60; // rdi
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  char j; // r13
  char v64; // al
  __int64 v65; // r12
  __int64 v66; // r13
  volatile signed __int64 **v67; // r9
  __int64 v68; // rsi
  __int64 v69; // rbx
  __int64 v70; // rax
  const void *v71; // r14
  size_t v72; // rbx
  __int64 v73; // r13
  __int64 v74; // rax
  void *v75; // r15
  unsigned __int8 v76; // al
  size_t v77; // r14
  __int64 v78; // rsi
  int v79; // eax
  __int64 v80; // r14
  __int64 v81; // r14
  __int64 v82; // r15
  __int64 v83; // rbx
  __int64 v84; // rax
  size_t v85; // r14
  size_t v86; // r15
  __int64 v87; // rsi
  char v88; // [rsp+6h] [rbp-372h] BYREF
  char v89; // [rsp+7h] [rbp-371h]
  volatile signed __int64 **v90; // [rsp+8h] [rbp-370h] BYREF
  unsigned __int128 v91; // [rsp+10h] [rbp-368h]
  _BYTE s2[33]; // [rsp+20h] [rbp-358h] BYREF
  _BYTE v93[23]; // [rsp+41h] [rbp-337h]
  __int16 v94; // [rsp+58h] [rbp-320h]
  __int8 v95; // [rsp+5Ah] [rbp-31Eh]
  __m128i src[9]; // [rsp+60h] [rbp-318h] BYREF
  size_t v97[2]; // [rsp+F0h] [rbp-288h] BYREF
  __int64 v98; // [rsp+100h] [rbp-278h] BYREF
  _BYTE v99[23]; // [rsp+111h] [rbp-267h] BYREF
  __int16 v100; // [rsp+128h] [rbp-250h]
  char v101; // [rsp+12Ah] [rbp-24Eh]
  __m128i v102; // [rsp+130h] [rbp-248h] BYREF
  _BYTE dest[136]; // [rsp+148h] [rbp-230h] BYREF
  __m128i i; // [rsp+1D0h] [rbp-1A8h] BYREF
  __int64 v105; // [rsp+1E8h] [rbp-190h]
  __int64 v106; // [rsp+1F0h] [rbp-188h]
  __int64 v107; // [rsp+1F8h] [rbp-180h]
  __int64 v108; // [rsp+200h] [rbp-178h] BYREF
  size_t v109[2]; // [rsp+208h] [rbp-170h] BYREF
  __int64 v110; // [rsp+218h] [rbp-160h]
  __m128i v111; // [rsp+220h] [rbp-158h] BYREF
  __int64 v112; // [rsp+230h] [rbp-148h]
  __m128i v113; // [rsp+240h] [rbp-138h] BYREF
  _BYTE v114[23]; // [rsp+250h] [rbp-128h] BYREF
  __m128i v115; // [rsp+270h] [rbp-108h] BYREF
  __int64 v116; // [rsp+280h] [rbp-F8h]
  size_t v117; // [rsp+288h] [rbp-F0h]
  __m128i v118; // [rsp+290h] [rbp-E8h] BYREF
  __m128i v119; // [rsp+2A0h] [rbp-D8h]
  _QWORD v120[2]; // [rsp+2B0h] [rbp-C8h] BYREF
  size_t v121; // [rsp+2C0h] [rbp-B8h]
  __int64 v122; // [rsp+2C8h] [rbp-B0h]
  __int64 v123; // [rsp+2D0h] [rbp-A8h]
  __int64 v124; // [rsp+2D8h] [rbp-A0h]
  unsigned __int128 v125; // [rsp+2E0h] [rbp-98h] BYREF
  _BYTE v126[23]; // [rsp+2F0h] [rbp-88h]
  __int64 v127; // [rsp+308h] [rbp-70h] BYREF
  _QWORD v128[2]; // [rsp+310h] [rbp-68h] BYREF
  _QWORD v129[2]; // [rsp+320h] [rbp-58h] BYREF
  _QWORD v130[9]; // [rsp+330h] [rbp-48h] BYREF

  v110 = a5;
  v91 = __PAIR128__(a4, a3);
  if ( *(_QWORD *)(__readfsqword(0) - 48) )
  {
    v5 = __readfsqword(0) - 48;
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
  }
  else
  {
    v6 = std::sys::pal::unix::rand::hashmap_random_keys();
    v7 = v8;
    v9 = (_QWORD *)(__readfsqword(0) - 48);
    *v9 = 1LL;
    v9[1] = v6;
    v9[2] = v8;
  }
  *(_QWORD *)(__readfsqword(0) - 48 + 8) = v6 + 1;
  hashbrown::raw::RawTable<T,A>::with_capacity_in(src, a2);
  src[2].m128i_i64[0] = v6;
  src[2].m128i_i64[1] = v7;
  v10 = _mm_loadu_si128(&src[1]);
  v118 = _mm_loadu_si128(src);
  v119 = v10;
  v120[0] = v6;
  v120[1] = v7;
  if ( !(unsigned __int8)std::path::Path::is_dir(v91, *((_QWORD *)&v91 + 1)) )
  {
    *(_QWORD *)s2 = 0LL;
    *(_QWORD *)&s2[8] = 1LL;
    *(_QWORD *)&s2[16] = 0LL;
    src[3].m128i_i64[0] = 32LL;
    src[3].m128i_i8[8] = 3;
    src[0].m128i_i64[0] = 0LL;
    src[1].m128i_i64[0] = 0LL;
    src[2].m128i_i64[0] = (__int64)s2;
    src[2].m128i_i64[1] = (__int64)&off_130620;
    std::sys::os_str::bytes::Slice::to_str(dest, v91, *((_QWORD *)&v91 + 1));
    if ( *(_QWORD *)dest )
      v12 = os_display::unix::write_escaped(src, v91, *((_QWORD *)&v91 + 1));
    else
      v12 = os_display::unix::write(src, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16], 1LL);
    if ( v12 )
      core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
    *(__m128i *)&dest[8] = _mm_loadu_si128((const __m128i *)s2);
    *(_QWORD *)&dest[24] = *(_QWORD *)&s2[16];
    *(_QWORD *)dest = 7LL;
    v16 = _rust_alloc(56LL, 8LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(8LL, 56LL);
    *(_QWORD *)(v16 + 48) = *(_QWORD *)&dest[48];
    v17 = _mm_loadu_si128((const __m128i *)dest);
    v18 = _mm_loadu_si128((const __m128i *)&dest[16]);
    *(_OWORD *)(v16 + 32) = *(_OWORD *)&dest[32];
    *(__m128i *)(v16 + 16) = v18;
    *(__m128i *)v16 = v17;
    v19 = v16;
    <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v118);
    return v19;
  }
  v11 = a1;
  std::sys::pal::unix::fs::canonicalize(src, v91, *((_QWORD *)&v91 + 1));
  if ( src[0].m128i_i64[0] == 0x8000000000000000LL )
  {
    *(_QWORD *)dest = src[0].m128i_i64[1];
    std::path::Path::to_path_buf(&v115, v91, *((_QWORD *)&v91 + 1));
    core::ptr::drop_in_place<std::io::error::Error>(dest, v91);
  }
  else
  {
    v116 = src[1].m128i_i64[0];
    v115 = _mm_loadu_si128(src);
  }
  if ( !*(_BYTE *)(v110 + 51) )
  {
    v90 = 0LL;
LABEL_20:
    v111.m128i_i64[0] = 0LL;
    if ( !a2 )
      goto LABEL_139;
    goto LABEL_21;
  }
  v90 = (volatile signed __int64 **)<indicatif::multi::MultiProgress as core::default::Default>::default();
  if ( a2 <= 1 )
    goto LABEL_20;
  indicatif::draw_target::ProgressDrawTarget::stderr(src);
  indicatif::progress_bar::ProgressBar::with_draw_target(s2, 1LL, a2, src);
  indicatif::style::Template::from_str(src, aMovingMsgWideB, 35LL);
  v13 = src[0].m128i_i32[2];
  v14 = src[0].m128i_i8[12];
  if ( src[0].m128i_i64[0] == 0x8000000000000000LL )
  {
    src[0].m128i_i64[0] = 0x8000000000000000LL;
    goto LABEL_159;
  }
  *(_DWORD *)&dest[20] = src[1].m128i_i32[1];
  *(_QWORD *)&dest[13] = *(__int64 *)((char *)&src[0].m128i_i64[1] + 5);
  *(_QWORD *)dest = src[0].m128i_i64[0];
  *(_DWORD *)&dest[8] = src[0].m128i_i32[2];
  dest[12] = src[0].m128i_i8[12];
  indicatif::style::ProgressStyle::new(src, dest);
  if ( src[0].m128i_i64[0] == 0x8000000000000000LL )
  {
    v13 = src[0].m128i_i32[2];
    v14 = src[0].m128i_i8[12];
LABEL_159:
    *(_DWORD *)dest = v13;
    dest[4] = v14;
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &unk_1306A8, &off_130B50);
  }
  memcpy(dest, src, sizeof(dest));
  indicatif::progress_bar::ProgressBar::set_style(s2, dest);
  src[1].m128i_i64[0] = *(_QWORD *)&s2[16];
  src[0] = _mm_loadu_si128((const __m128i *)s2);
  indicatif::multi::MultiProgress::internalize(dest, v90, 0LL, v15, src);
  v11 = a1;
  v111 = _mm_loadu_si128((const __m128i *)dest);
  v112 = *(_QWORD *)&dest[16];
LABEL_21:
  v124 = v11 + 24 * a2;
  v89 = *(_BYTE *)(v110 + 54);
  do
  {
    if ( v111.m128i_i64[0] )
    {
      v21 = *(_QWORD *)(v11 + 8);
      v22 = *(_QWORD *)(v11 + 16);
      std::sys::os_str::bytes::Slice::to_string_lossy(src, v21, v22);
      v23 = (const void *)src[0].m128i_i64[1];
      v24 = src[1].m128i_u64[0];
      if ( src[1].m128i_i64[0] )
      {
        if ( src[1].m128i_i64[0] < 0 )
        {
          v25 = 0LL;
LABEL_146:
          alloc::raw_vec::handle_error(v25, v117);
        }
        v25 = 1LL;
        v26 = (void *)_rust_alloc(src[1].m128i_i64[0], 1LL);
        if ( !v26 )
        {
          v117 = v24;
          goto LABEL_146;
        }
      }
      else
      {
        v26 = &dword_0 + 1;
      }
      v27 = (size_t)v26;
      memcpy(v26, v23, v24);
      *(_QWORD *)dest = v24;
      v117 = v27;
      *(_QWORD *)&dest[8] = v27;
      *(_QWORD *)&dest[16] = v24;
      indicatif::progress_bar::ProgressBar::set_message(&v111, dest);
      if ( 2 * src[0].m128i_i64[0] )
        _rust_dealloc(v23, src[0].m128i_i64[0], 1LL);
    }
    else
    {
      v21 = *(_QWORD *)(v11 + 8);
      v22 = *(_QWORD *)(v11 + 16);
    }
    v28 = std::path::Path::file_name(v21, v22);
    if ( !v28 )
    {
      v97[0] = 0LL;
      v97[1] = 1LL;
      v98 = 0LL;
      src[3].m128i_i64[0] = 32LL;
      src[3].m128i_i8[8] = 3;
      src[0].m128i_i64[0] = 0LL;
      src[1].m128i_i64[0] = 0LL;
      src[2].m128i_i64[0] = (__int64)v97;
      src[2].m128i_i64[1] = (__int64)&off_130620;
      std::sys::os_str::bytes::Slice::to_str(s2, v21, v22);
      if ( *(_QWORD *)s2 )
        v40 = os_display::unix::write_escaped(src, v21, v22);
      else
        v40 = os_display::unix::write(src, *(_QWORD *)&s2[8], *(_QWORD *)&s2[16], 1LL);
      if ( v40 )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
      *(_QWORD *)&dest[24] = v98;
      *(__m128i *)&dest[8] = _mm_loadu_si128((const __m128i *)v97);
      *(_QWORD *)dest = 0LL;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(__m128i *)v97 = _mm_loadu_si128((const __m128i *)&xmmword_137550);
      *(_QWORD *)s2 = v97;
      *(_QWORD *)&s2[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&s2[16] = dest;
      *(_QWORD *)&s2[24] = <uu_mv::error::MvError as core::fmt::Display>::fmt;
      src[0].m128i_i64[0] = (__int64)&unk_130B68;
      src[0].m128i_i64[1] = 3LL;
      src[2].m128i_i64[0] = 0LL;
      src[1].m128i_i64[0] = (__int64)s2;
      src[1].m128i_i64[1] = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<uu_mv::error::MvError>(dest);
      goto LABEL_23;
    }
    std::path::Path::_join(&v108, v91, *((_QWORD *)&v91 + 1), v28, v29);
    v106 = v21;
    v107 = v22;
    v105 = v11;
    if ( v119.m128i_i64[1] )
    {
      v30 = core::hash::BuildHasher::hash_one(v120, &v108);
      v31 = v118;
      v32 = v30 & v118.m128i_i64[1];
      _RAX = v30 >> 57;
      v34 = _mm_cvtsi32_si128(_RAX);
      v35 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v34, v34), 0), 0);
      v36 = v118.m128i_i64[0] - 24;
      v37 = 0LL;
      for ( i = v35; ; v35 = _mm_load_si128(&i) )
      {
        v102 = _mm_loadu_si128((const __m128i *)(v31.m128i_i64[0] + v32));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v102, v35));
        if ( _R13D )
          break;
LABEL_39:
        _RAX = (unsigned int)_mm_movemask_epi8(
                               _mm_cmpeq_epi8(
                                 _mm_load_si128(&v102),
                                 (__m128i)anon_fc27aa68d8cae6e1b168873509a7a481_0_llvm_2326197588468757748));
        if ( (_DWORD)_RAX )
          goto LABEL_44;
        v39 = v37 + v32 + 16;
        v37 += 16LL;
        v32 = v31.m128i_i64[1] & v39;
      }
      while ( 1 )
      {
        __asm { tzcnt   eax, r13d }
        if ( (unsigned __int8)<Q as hashbrown::Equivalent<K>>::equivalent(
                                &v108,
                                v36 - 24 * (v31.m128i_i64[1] & (v32 + _RAX))) )
          break;
        _RAX = (unsigned int)(_R13D - 1);
        LOWORD(_RAX) = _R13D & (_R13D - 1);
        _R13D = _RAX;
        if ( !(_WORD)_RAX )
          goto LABEL_39;
      }
      if ( v89 != 2 )
      {
        *(__m128i *)v97 = _mm_loadu_si128((const __m128i *)v109);
        *(_QWORD *)s2 = v106;
        *(_QWORD *)&s2[8] = v107;
        *(_QWORD *)dest = v97;
        *(_QWORD *)&dest[8] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = s2;
        *(_QWORD *)&dest[24] = <std::path::Display as core::fmt::Display>::fmt;
        src[0].m128i_i64[0] = (__int64)&off_130B98;
        src[0].m128i_i64[1] = 3LL;
        src[2].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = (__int64)dest;
        src[1].m128i_i64[1] = 2LL;
        alloc::fmt::format::format_inner(v130, src);
        v52 = v130[0];
        v53 = v130[1];
        v54 = v130[2];
        v55 = _rust_alloc(32LL, 8LL);
        if ( !v55 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        *(_QWORD *)v55 = v52;
        *(_QWORD *)(v55 + 8) = v53;
        *(_QWORD *)(v55 + 16) = v54;
        *(_DWORD *)(v55 + 24) = 1;
        v97[0] = v55;
        v97[1] = (size_t)&off_1309F8;
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        *(__m128i *)s2 = _mm_loadu_si128((const __m128i *)&xmmword_137550);
        *(_QWORD *)dest = s2;
        *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = v97;
        *(_QWORD *)&dest[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        src[0].m128i_i64[0] = (__int64)&unk_130B68;
        src[0].m128i_i64[1] = 3LL;
        src[2].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = (__int64)dest;
        src[1].m128i_i64[1] = 2LL;
        std::io::stdio::_eprint(src);
        v56 = v97[0];
        v57 = v97[1];
        if ( *(_QWORD *)v97[1] )
          (*(void (__fastcall **)(size_t))v97[1])(v97[0]);
        v58 = *(_QWORD *)(v57 + 8);
        if ( v58 )
        {
          v59 = *(_QWORD *)(v57 + 16);
          v60 = v56;
          goto LABEL_134;
        }
LABEL_135:
        v11 = v105;
        if ( v108 )
          _rust_dealloc(v109[0], v108, 1LL);
        goto LABEL_23;
      }
    }
LABEL_44:
    v41 = v106;
    std::sys::pal::unix::fs::canonicalize(&v127, v106, v107);
    v42 = v127;
    if ( v127 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v128, v41);
      goto LABEL_79;
    }
    v43 = v128[0];
    v44 = v115.m128i_i64[1];
    v45 = (const char *)v116;
    std::path::Path::components(v97, v128[0], v128[1]);
    std::path::Path::components(s2, v44, v45);
    v46 = v97[0];
    v47 = v97[1];
    v48 = *(_QWORD *)s2;
    v49 = *(_QWORD *)&s2[8];
    if ( v97[1] == *(_QWORD *)&s2[8] )
    {
      v50 = (unsigned __int8)v98;
      if ( (_BYTE)v100 == (_BYTE)v94 && HIBYTE(v100) == 2 && HIBYTE(v94) == 2 )
      {
        if ( (_BYTE)v98 == 6 )
        {
          if ( s2[16] <= 2u )
          {
            v51 = 6;
            goto LABEL_68;
          }
        }
        else if ( s2[16] == 6 )
        {
          if ( (unsigned __int8)v98 < 3u )
            goto LABEL_67;
        }
        else if ( (unsigned __int8)v98 < 3u != s2[16] < 3u )
        {
LABEL_67:
          *(_QWORD *)&v126[15] = *(_QWORD *)&v99[15];
          v61 = _mm_loadu_si128((const __m128i *)((char *)&v98 + 1));
          *(__m128i *)v126 = _mm_loadu_si128((const __m128i *)v99);
          v125 = (unsigned __int128)v61;
          v51 = v50;
          goto LABEL_68;
        }
        v122 = *(_QWORD *)&s2[8];
        v121 = v97[0];
        v123 = *(_QWORD *)s2;
        v79 = bcmp((const void *)v97[0], *(const void **)s2, v97[1]);
        v46 = v121;
        v49 = v122;
        v48 = v123;
        if ( !v79 )
          goto LABEL_71;
      }
    }
    else
    {
      v50 = (unsigned __int8)v98;
    }
    v51 = 6;
    if ( (_BYTE)v50 != 6 )
      goto LABEL_67;
LABEL_68:
    *(_QWORD *)dest = v46;
    *(_QWORD *)&dest[8] = v47;
    dest[16] = v51;
    *(_QWORD *)&dest[48] = *(_QWORD *)&v126[15];
    *(_OWORD *)&dest[33] = *(_OWORD *)v126;
    *(_OWORD *)&dest[17] = v125;
    *(_WORD *)&dest[56] = v100;
    dest[58] = v101;
    if ( s2[16] != 6 )
    {
      *(_QWORD *)&v114[15] = *(_QWORD *)&v93[15];
      *(_OWORD *)v114 = *(_OWORD *)v93;
      v113 = *(__m128i *)&s2[17];
    }
    src[0].m128i_i64[0] = v48;
    src[0].m128i_i64[1] = v49;
    src[1].m128i_i8[0] = s2[16];
    src[3].m128i_i64[0] = *(_QWORD *)&v114[15];
    v62 = _mm_load_si128(&v113);
    *(__m128i *)((char *)&src[2] + 1) = _mm_load_si128((const __m128i *)v114);
    *(__m128i *)((char *)&src[1] + 1) = v62;
    src[3].m128i_i16[4] = v94;
    src[3].m128i_i8[10] = v95;
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(dest, src) )
    {
LABEL_71:
      v129[0] = v106;
      v129[1] = v107;
      v125 = v91;
      std::path::Path::components(src, v44, v45);
      i.m128i_i64[0] = v43;
      v102.m128i_i64[0] = v42;
      for ( j = 10; ; j = dest[0] )
      {
        <std::path::Components as core::iter::traits::iterator::Iterator>::next(dest, src);
        if ( dest[0] == 10 )
          break;
        v47 = *(_QWORD *)&dest[8];
        v42 = *(_QWORD *)&dest[16];
        v45 = *(const char **)&dest[40];
        v50 = *(_QWORD *)&dest[48];
      }
      if ( j == 10 )
      {
        *(_OWORD *)s2 = v91;
        *(_QWORD *)dest = 0LL;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[16] = 0LL;
        src[3].m128i_i64[0] = 32LL;
        src[3].m128i_i8[8] = 3;
        src[0].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = 0LL;
        src[2].m128i_i64[0] = (__int64)dest;
        src[2].m128i_i64[1] = (__int64)&off_130620;
        v64 = <std::path::Display as core::fmt::Display>::fmt(s2, src);
        v65 = v102.m128i_i64[0];
        v66 = i.m128i_i64[0];
        if ( v64 )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        *(__m128i *)v97 = _mm_loadu_si128((const __m128i *)dest);
        v98 = *(_QWORD *)&dest[16];
      }
      else
      {
        v76 = j - 5;
        if ( (unsigned __int8)(j - 6) >= 4u )
          v76 = 0;
        switch ( v76 )
        {
          case 0u:
            break;
          case 1u:
            v50 = v76;
            v45 = asc_20A4C;
            break;
          case 2u:
            v50 = 1LL;
            v45 = asc_20A4D;
            break;
          case 3u:
            v50 = 2LL;
            v45 = (const char *)&unk_20A4E;
            break;
          case 4u:
            v50 = v42;
            v45 = (const char *)v47;
            break;
        }
        v65 = v102.m128i_i64[0];
        v66 = i.m128i_i64[0];
        std::sys::os_str::bytes::Slice::to_owned(s2, v45, v50);
        v80 = *(_QWORD *)&s2[8];
        v113 = *(__m128i *)&s2[8];
        *(_QWORD *)dest = 0LL;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[16] = 0LL;
        src[3].m128i_i64[0] = 32LL;
        src[3].m128i_i8[8] = 3;
        src[0].m128i_i64[0] = 0LL;
        src[1].m128i_i64[0] = 0LL;
        src[2].m128i_i64[0] = (__int64)dest;
        src[2].m128i_i64[1] = (__int64)&off_130620;
        if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v113, src) )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        *(__m128i *)v97 = _mm_loadu_si128((const __m128i *)dest);
        v98 = *(_QWORD *)&dest[16];
        if ( *(_QWORD *)s2 )
          _rust_dealloc(v80, *(_QWORD *)s2, 1LL);
      }
      src[0].m128i_i64[0] = (__int64)v129;
      src[0].m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
      src[1].m128i_i64[0] = (__int64)&v125;
      src[1].m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
      src[2].m128i_i64[0] = (__int64)v97;
      src[2].m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &off_130BC8;
      *(_QWORD *)&dest[8] = 4LL;
      *(_QWORD *)&dest[32] = 0LL;
      *(_QWORD *)&dest[16] = src;
      *(_QWORD *)&dest[24] = 3LL;
      alloc::fmt::format::format_inner(s2, dest);
      if ( v97[0] )
        _rust_dealloc(v97[1], v97[0], 1LL);
      v81 = *(_QWORD *)s2;
      v82 = *(_QWORD *)&s2[8];
      v83 = *(_QWORD *)&s2[16];
      v84 = _rust_alloc(32LL, 8LL);
      if ( !v84 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v84 = v81;
      *(_QWORD *)(v84 + 8) = v82;
      *(_QWORD *)(v84 + 16) = v83;
      *(_DWORD *)(v84 + 24) = 1;
      v97[0] = v84;
      v97[1] = (size_t)&off_1309F8;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(__m128i *)s2 = _mm_loadu_si128((const __m128i *)&xmmword_137550);
      *(_QWORD *)dest = s2;
      *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[16] = v97;
      *(_QWORD *)&dest[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      src[0].m128i_i64[0] = (__int64)&unk_130B68;
      src[0].m128i_i64[1] = 3LL;
      src[2].m128i_i64[0] = 0LL;
      src[1].m128i_i64[0] = (__int64)dest;
      src[1].m128i_i64[1] = 2LL;
      std::io::stdio::_eprint(src);
      v85 = v97[0];
      v86 = v97[1];
      if ( *(_QWORD *)v97[1] )
        (*(void (__fastcall **)(size_t))v97[1])(v97[0]);
      v87 = *(_QWORD *)(v86 + 8);
      if ( v87 )
        _rust_dealloc(v85, v87, *(_QWORD *)(v86 + 16));
      if ( v65 )
      {
        v59 = 1LL;
        v60 = v66;
        v58 = v65;
LABEL_134:
        _rust_dealloc(v60, v58, v59);
      }
      goto LABEL_135;
    }
    if ( v42 )
      _rust_dealloc(v43, v42, 1LL);
LABEL_79:
    v67 = v90;
    if ( v90 )
      v67 = (volatile signed __int64 **)&v90;
    v113.m128i_i64[0] = uu_mv::rename(v106, v107, v109[0], v109[1], v110, v67);
    if ( v113.m128i_i64[0] )
    {
      *(_QWORD *)dest = 0LL;
      *(_QWORD *)&dest[8] = 1LL;
      *(_QWORD *)&dest[16] = 0LL;
      src[3].m128i_i64[0] = 32LL;
      src[3].m128i_i8[8] = 3;
      src[0].m128i_i64[0] = 0LL;
      src[1].m128i_i64[0] = 0LL;
      src[2].m128i_i64[0] = (__int64)dest;
      src[2].m128i_i64[1] = (__int64)&off_130620;
      if ( (unsigned __int8)<std::io::error::Error as core::fmt::Display>::fmt(&v113, src) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
      v68 = *(_QWORD *)dest;
      v69 = v105;
      if ( *(_QWORD *)&dest[16] )
      {
        if ( *(_QWORD *)dest )
          _rust_dealloc(*(_QWORD *)&dest[8], *(_QWORD *)dest, 1LL);
        v70 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v113.m128i_i64[0],
                v69,
                &v108);
        if ( !v90 )
        {
          v97[0] = v70;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          *(__m128i *)s2 = _mm_loadu_si128((const __m128i *)&xmmword_137550);
          *(_QWORD *)dest = s2;
          *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&dest[16] = v97;
          *(_QWORD *)&dest[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          src[0].m128i_i64[0] = (__int64)&unk_130B68;
          src[0].m128i_i64[1] = 3LL;
          src[2].m128i_i64[0] = 0LL;
          src[1].m128i_i64[0] = (__int64)dest;
          src[1].m128i_i64[1] = 2LL;
          std::io::stdio::_eprint(src);
          v77 = v97[0];
          v78 = *(_QWORD *)v97[0];
          if ( *(_QWORD *)v97[0] != 0x8000000000000000LL && v78 )
            _rust_dealloc(*(_QWORD *)(v97[0] + 8), v78, 1LL);
          core::ptr::drop_in_place<std::io::error::Error>(v77 + 24, v78);
          _rust_dealloc(v77, 32LL, 8LL);
          if ( !v111.m128i_i64[0] )
            goto LABEL_93;
LABEL_92:
          indicatif::progress_bar::ProgressBar::inc(&v111, 1LL);
          goto LABEL_93;
        }
        indicatif::multi::MultiProgress::suspend(&v90, v70);
      }
      else
      {
        if ( *(_QWORD *)dest )
          _rust_dealloc(*(_QWORD *)&dest[8], *(_QWORD *)dest, 1LL);
        src[0].m128i_i64[0] = v113.m128i_i64[0];
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        core::ptr::drop_in_place<std::io::error::Error>(src, v68);
      }
    }
    if ( v111.m128i_i64[0] )
      goto LABEL_92;
LABEL_93:
    v71 = (const void *)v109[0];
    v72 = v109[1];
    if ( v109[1] )
    {
      if ( (v109[1] & 0x8000000000000000LL) != 0LL )
      {
        v73 = 0LL;
LABEL_150:
        alloc::raw_vec::handle_error(v73, v72);
      }
      v73 = 1LL;
      v74 = _rust_alloc(v109[1], 1LL);
      if ( !v74 )
        goto LABEL_150;
      v75 = (void *)v74;
    }
    else
    {
      v75 = &dword_0 + 1;
    }
    memcpy(v75, v71, v72);
    src[0].m128i_i64[0] = v72;
    src[0].m128i_i64[1] = (__int64)v75;
    src[1].m128i_i64[0] = v72;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v118, src);
    if ( v108 )
      _rust_dealloc(v109[0], v108, 1LL);
    v11 = v105;
LABEL_23:
    v11 += 24LL;
  }
  while ( v11 != v124 );
  if ( v111.m128i_i64[0] )
    core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v111);
LABEL_139:
  if ( v90 && !_InterlockedDecrement64((volatile signed __int64 *)v90) )
    alloc::sync::Arc<T,A>::drop_slow(&v90);
  if ( v115.m128i_i64[0] )
    _rust_dealloc(v115.m128i_i64[1], v115.m128i_i64[0], 1LL);
  <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v118);
  return 0LL;
}
