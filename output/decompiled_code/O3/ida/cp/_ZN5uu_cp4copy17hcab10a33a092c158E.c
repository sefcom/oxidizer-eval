        unsigned __int8 *a6)
{
  __int32 v6; // ebp
  unsigned __int64 v7; // r13
  _QWORD *v8; // r12
  char is_dir; // al
  __int64 v10; // rbx
  __int64 v11; // r14
  char **v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __m128i v20; // xmm1
  const __m128i *v21; // rax
  __m128i v22; // xmm0
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __m128i v28; // xmm1
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rdx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rsi
  __m128i v35; // xmm1
  __int64 v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // r14
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r13
  __int64 v41; // rdx
  __int32 v42; // ecx
  __int8 v43; // al
  __int64 v44; // rax
  unsigned __int8 v45; // cl
  unsigned __int64 v46; // rax
  __m128i v47; // kr00_16
  unsigned __int64 v48; // r13
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v53; // rbx
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 v59; // r14
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r15
  unsigned __int64 v63; // rbp
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __int64 v67; // rbx
  __int64 v68; // r12
  __int64 v70; // rbp
  __int64 v71; // rbx
  __int64 v72; // r13
  __int64 v73; // rbp
  _QWORD *v74; // rbx
  __int64 v75; // rbp
  __int64 v76; // r13
  __int64 v77; // r12
  __int64 v78; // r15
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __m128i v81; // xmm1
  __int64 v82; // r12
  __int64 v83; // rax
  void *v84; // r15
  __m128i v85; // xmm0
  __int64 v86; // r14
  __int64 v87; // rax
  __int8 v88; // bp
  char v89; // al
  char v90; // bl
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  __int64 v93; // r12
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  unsigned __int8 v99; // [rsp+Dh] [rbp-41Bh]
  unsigned __int8 v100; // [rsp+Eh] [rbp-41Ah]
  unsigned __int8 v101; // [rsp+Fh] [rbp-419h]
  __int64 v103; // [rsp+20h] [rbp-408h]
  __int64 v104; // [rsp+20h] [rbp-408h]
  __int64 v105; // [rsp+28h] [rbp-400h]
  __int64 v106; // [rsp+30h] [rbp-3F8h]
  char v107; // [rsp+3Ch] [rbp-3ECh]
  __m128i v108; // [rsp+40h] [rbp-3E8h] BYREF
  __m128i v109; // [rsp+50h] [rbp-3D8h]
  __m128i v110; // [rsp+60h] [rbp-3C8h] BYREF
  __m128i v111; // [rsp+70h] [rbp-3B8h] BYREF
  unsigned __int8 *v112; // [rsp+88h] [rbp-3A0h]
  __int64 v113; // [rsp+90h] [rbp-398h]
  int v114; // [rsp+9Ch] [rbp-38Ch]
  __m128i v115; // [rsp+A0h] [rbp-388h] BYREF
  size_t n; // [rsp+B0h] [rbp-378h]
  __m128i v117; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v118; // [rsp+D0h] [rbp-358h]
  __m128i src[11]; // [rsp+E0h] [rbp-348h] BYREF
  void *v120[2]; // [rsp+190h] [rbp-298h] BYREF
  __m128i i; // [rsp+1A0h] [rbp-288h] BYREF
  __m128i v122; // [rsp+1B0h] [rbp-278h] BYREF
  __m128i j; // [rsp+1C0h] [rbp-268h] BYREF
  __m128i v124; // [rsp+1D0h] [rbp-258h] BYREF
  size_t v125; // [rsp+1E0h] [rbp-248h]
  __m128i v126; // [rsp+1F0h] [rbp-238h] BYREF
  __m128i v127; // [rsp+200h] [rbp-228h]
  _QWORD v128[2]; // [rsp+210h] [rbp-218h] BYREF
  __int64 v129; // [rsp+220h] [rbp-208h]
  __int64 v130; // [rsp+228h] [rbp-200h]
  __m128i dest[11]; // [rsp+230h] [rbp-1F8h] BYREF
  __m128i v132; // [rsp+2E0h] [rbp-148h] BYREF
  __m128i v133; // [rsp+2F0h] [rbp-138h]
  _QWORD v134[3]; // [rsp+300h] [rbp-128h] BYREF
  unsigned __int8 *v135; // [rsp+318h] [rbp-110h]
  __int64 v136; // [rsp+320h] [rbp-108h]
  __m128i *v137; // [rsp+328h] [rbp-100h] BYREF
  _OWORD v138[3]; // [rsp+330h] [rbp-F8h] BYREF
  _OWORD v139[2]; // [rsp+360h] [rbp-C8h] BYREF
  __int64 v140; // [rsp+380h] [rbp-A8h]
  __int64 v141; // [rsp+388h] [rbp-A0h]
  _QWORD v142[2]; // [rsp+390h] [rbp-98h] BYREF
  __m128i v143; // [rsp+3A0h] [rbp-88h] BYREF
  __int64 v144; // [rsp+3B0h] [rbp-78h]
  int v145; // [rsp+3B8h] [rbp-70h] BYREF
  __m128i v146; // [rsp+3C0h] [rbp-68h] BYREF
  size_t v147; // [rsp+3D0h] [rbp-58h]

  v112 = a6;
  v7 = a3;
  v8 = (_QWORD *)a1;
  if ( a3 > 1 || (v106 = a5, v105 = a4, is_dir = std::path::Path::is_dir(a4, a5), a4 = v105, a5 = v106, is_dir) )
  {
    v10 = a5;
    v11 = a4;
    if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
    {
      v105 = v11;
      LODWORD(v106) = v10;
      v6 = 0;
      goto LABEL_9;
    }
    v108.m128i_i64[0] = 1LL;
    v108.m128i_i64[1] = v11;
    v109.m128i_i64[0] = v10;
    v109.m128i_i8[8] = 1;
    v126.m128i_i64[0] = (__int64)&v108;
    v126.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    v12 = &off_1556D8;
LABEL_8:
    dest[0].m128i_i64[0] = (__int64)v12;
    dest[0].m128i_i64[1] = 2LL;
    dest[2].m128i_i64[0] = 0LL;
    dest[1].m128i_i64[0] = (__int64)&v126;
    dest[1].m128i_i64[1] = 1LL;
    alloc::fmt::format::format_inner(&src[0].m128i_u64[1], dest);
    *(_QWORD *)(a1 + 56) = src[3].m128i_i64[1];
    v13 = _mm_loadu_si128((const __m128i *)&src[0].m128i_u64[1]);
    v14 = _mm_loadu_si128((const __m128i *)&src[1].m128i_u64[1]);
    *(__m128i *)(a1 + 40) = *(__m128i *)((char *)&src[2] + 8);
    *(__m128i *)(a1 + 24) = v14;
    *(__m128i *)(a1 + 8) = v13;
    *(_QWORD *)a1 = 4LL;
    return v8;
  }
  LOBYTE(v6) = 1;
  if ( (unsigned __int8)std::path::Path::is_dir(v105, v106) )
  {
    v108.m128i_i64[0] = 1LL;
    v108.m128i_i64[1] = v105;
    v109.m128i_i64[0] = v106;
    v109.m128i_i8[8] = 1;
    v126.m128i_i64[0] = (__int64)&v108;
    v126.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    v12 = &off_1553E0;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_QWORD *)(__readfsqword(0) - 48) )
  {
    v15 = __readfsqword(0) - 48;
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(_QWORD *)(v15 + 16);
  }
  else
  {
    v16 = std::sys::pal::unix::rand::hashmap_random_keys();
    v17 = v18;
    v19 = (_QWORD *)(__readfsqword(0) - 48);
    *v19 = 1LL;
    v19[1] = v16;
    v19[2] = v18;
  }
  *(_QWORD *)(__readfsqword(0) - 48 + 8) = v16 + 1;
  hashbrown::raw::RawTable<T,A>::with_capacity_in(src, v7);
  src[2].m128i_i64[0] = v16;
  src[2].m128i_i64[1] = v17;
  v20 = _mm_loadu_si128(&src[1]);
  v132 = _mm_loadu_si128(src);
  v133 = v20;
  v134[0] = v16;
  v134[1] = v17;
  v21 = (const __m128i *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v21 )
    core::result::unwrap_failed(
      anon_223ccbb2887f038b22ec693d3c0ea935_4_llvm_11467318015179987217,
      70LL,
      src,
      &anon_223ccbb2887f038b22ec693d3c0ea935_7_llvm_11467318015179987217,
      &anon_223ccbb2887f038b22ec693d3c0ea935_6_llvm_11467318015179987217);
  v22 = _mm_loadu_si128(v21);
  ++v21->m128i_i64[0];
  v138[1] = xmmword_155B50;
  v138[0] = _mm_loadu_si128((const __m128i *)&anon_fe5408d5d7d92996f9ef4a67419399fb_2_llvm_6718713517116596339);
  v138[2] = v22;
  if ( *(_QWORD *)(__readfsqword(0) - 48) )
  {
    v23 = __readfsqword(0) - 48;
    v24 = *(_QWORD *)(v23 + 8);
    v25 = *(_QWORD *)(v23 + 16);
  }
  else
  {
    v24 = std::sys::pal::unix::rand::hashmap_random_keys();
    v25 = v26;
    v27 = (_QWORD *)(__readfsqword(0) - 48);
    *v27 = 1LL;
    v27[1] = v24;
    v27[2] = v26;
  }
  *(_QWORD *)(__readfsqword(0) - 48 + 8) = v24 + 1;
  hashbrown::raw::RawTable<T,A>::with_capacity_in(src, v7);
  src[2].m128i_i64[0] = v24;
  src[2].m128i_i64[1] = v25;
  v28 = _mm_loadu_si128(&src[1]);
  v139[0] = _mm_loadu_si128(src);
  v139[1] = v28;
  v140 = v24;
  v141 = v25;
  if ( *(_QWORD *)(__readfsqword(0) - 48) )
  {
    v29 = __readfsqword(0) - 48;
    v30 = *(_QWORD *)(v29 + 8);
    v31 = *(_QWORD *)(v29 + 16);
  }
  else
  {
    v30 = std::sys::pal::unix::rand::hashmap_random_keys();
    v31 = v32;
    v33 = (_QWORD *)(__readfsqword(0) - 48);
    *v33 = 1LL;
    v33[1] = v30;
    v33[2] = v32;
  }
  *(_QWORD *)(__readfsqword(0) - 48 + 8) = v30 + 1;
  v34 = v7;
  hashbrown::raw::RawTable<T,A>::with_capacity_in(src, v7);
  src[2].m128i_i64[0] = v30;
  src[2].m128i_i64[1] = v31;
  v35 = _mm_loadu_si128(&src[1]);
  v126 = _mm_loadu_si128(src);
  v127 = v35;
  v128[0] = v30;
  v128[1] = v31;
  if ( !v112[73] )
  {
    v124.m128i_i64[0] = 0LL;
LABEL_36:
    v136 = a2 + 24 * v7;
    v45 = v112[68];
    v101 = v112[78];
    v100 = v112[76];
    v135 = v112 + 48;
    v99 = v45;
    v130 = v45;
    v129 = v112[66];
    v114 = (unsigned __int8)v6;
    v107 = 0;
    while ( 1 )
    {
      if ( a2 == v136 )
      {
        if ( v124.m128i_i64[0] )
        {
          src[1].m128i_i64[0] = v125;
          src[0] = _mm_load_si128(&v124);
          indicatif::progress_bar::ProgressBar::finish(src);
          core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(src);
        }
        *v8 = 8LL * ((v107 & 1) == 0) + 5;
        <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v126);
        <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(v139);
        goto LABEL_142;
      }
      if ( !v133.m128i_i64[1] )
        break;
      v46 = core::hash::BuildHasher::hash_one(v134, a2);
      v47 = v132;
      v48 = v46 & v132.m128i_i64[1];
      v49 = _mm_cvtsi32_si128(v46 >> 57);
      v50 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v49, v49), 0), 0);
      v122.m128i_i64[0] = 0LL;
      for ( i = v50; ; v50 = _mm_load_si128(&i) )
      {
        *(__m128i *)v120 = _mm_loadu_si128((const __m128i *)(v47.m128i_i64[0] + v48));
        _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(*(__m128i *)v120, v50));
        if ( _EBP )
          break;
LABEL_45:
        if ( _mm_movemask_epi8(
               _mm_cmpeq_epi8(
                 _mm_load_si128((const __m128i *)v120),
                 (__m128i)anon_fe5408d5d7d92996f9ef4a67419399fb_1_llvm_6718713517116596339)) )
        {
          goto LABEL_50;
        }
        v56 = v122.m128i_i64[0] + v48 + 16;
        v122.m128i_i64[0] += 16LL;
        v48 = v47.m128i_i64[1] & v56;
      }
      HIDWORD(_RAX) = HIDWORD(a2);
      v53 = *(_QWORD *)(a2 + 8);
      v54 = *(_QWORD *)(a2 + 16);
      while ( 1 )
      {
        __asm { tzcnt   eax, ebp }
        v55 = *(_QWORD *)(v47.m128i_i64[0] - 8 * (v47.m128i_i64[1] & (v48 + _RAX)) - 8);
        if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                                v53,
                                v54,
                                *(_QWORD *)(v55 + 8),
                                *(_QWORD *)(v55 + 16)) )
          break;
        _RAX = (unsigned int)(_EBP - 1);
        LOWORD(_RAX) = _EBP & (_EBP - 1);
        _EBP = _RAX;
        if ( !(_WORD)_RAX )
          goto LABEL_45;
      }
      v8 = (_QWORD *)a1;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      dest[0] = _mm_loadu_si128((const __m128i *)&xmmword_15C040);
      v108.m128i_i64[0] = (__int64)dest;
      v108.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      src[0].m128i_i64[0] = (__int64)&unk_155370;
      src[0].m128i_i64[1] = 2LL;
      src[1].m128i_i64[0] = (__int64)&v108;
      *(__m128i *)((char *)&src[1] + 8) = (__m128i)1uLL;
      std::io::stdio::_eprint(src);
      dest[0].m128i_i64[0] = 1LL;
      dest[0].m128i_i64[1] = v53;
      dest[1].m128i_i64[0] = v54;
      dest[1].m128i_i8[8] = 1;
      v108.m128i_i64[0] = (__int64)dest;
      v108.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
      src[0].m128i_i64[0] = (__int64)&off_155390;
      src[0].m128i_i64[1] = 2LL;
      src[1].m128i_i64[0] = (__int64)&v108;
      *(__m128i *)((char *)&src[1] + 8) = (__m128i)1uLL;
      std::io::stdio::_eprint(src);
LABEL_37:
      hashbrown::map::HashMap<K,V,S,A>::insert(&v132);
      a2 += 24LL;
    }
LABEL_50:
    v57 = *(_QWORD *)(a2 + 8);
    v58 = *(_QWORD *)(a2 + 16);
    uu_cp::construct_dest_path((unsigned int)&v145, v57, v58, v105, v106, v114, v129, v130);
    v8 = (_QWORD *)a1;
    if ( v145 == 13 )
    {
      n = v147;
      v115 = _mm_loadu_si128(&v146);
    }
    else
    {
      std::path::Path::to_path_buf(&v115, v105);
      core::ptr::drop_in_place<uu_cp::Error>(&v145);
    }
    v59 = n;
    v120[0] = (void *)v115.m128i_i64[1];
    std::sys::pal::unix::fs::stat(src);
    i.m128i_i64[0] = v58;
    v103 = v57;
    if ( src[0].m128i_i32[0] == 2 )
    {
      dest[0].m128i_i64[1] = src[0].m128i_i64[1];
      dest[0].m128i_i64[0] = 2LL;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( dest[0].m128i_i64[0] != 2 )
      {
        std::sys::pal::unix::fs::lstat(src);
        if ( src[0].m128i_i32[0] == 2 )
          goto LABEL_136;
        if ( (src[3].m128i_i16[4] & 0xF000) != 0xA000 )
          goto LABEL_62;
        goto LABEL_57;
      }
    }
    core::ptr::drop_in_place<std::io::error::Error>(&dest[0].m128i_u64[1]);
LABEL_57:
    std::sys::pal::unix::fs::stat(src);
    if ( src[0].m128i_i32[0] == 2 )
    {
      dest[0].m128i_i64[1] = src[0].m128i_i64[1];
      dest[0].m128i_i64[0] = 2LL;
LABEL_60:
      core::ptr::drop_in_place<std::io::error::Error>(&dest[0].m128i_u64[1]);
      goto LABEL_61;
    }
    memcpy(dest, src, sizeof(dest));
    if ( dest[0].m128i_i64[0] == 2 )
      goto LABEL_60;
    std::sys::pal::unix::fs::lstat(src);
    if ( src[0].m128i_i32[0] == 2 )
    {
LABEL_136:
      v95 = src[0].m128i_i64[1];
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = v95;
      goto LABEL_137;
    }
    if ( (src[3].m128i_i16[4] & 0xF000) != 0xA000 )
    {
LABEL_61:
      if ( v101 != 1 )
        goto LABEL_70;
    }
LABEL_62:
    if ( v127.m128i_i64[1] )
    {
      v60 = core::hash::BuildHasher::hash_one(v128, &v115);
      v62 = v126.m128i_i64[1];
      v61 = v126.m128i_i64[0];
      v63 = v60 & v126.m128i_i64[1];
      _RAX = v60 >> 57;
      v65 = _mm_cvtsi32_si128(_RAX);
      v66 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v65, v65), 0), 0);
      v67 = v126.m128i_i64[0] - 24;
      v68 = 0LL;
      v113 = v126.m128i_i64[0];
      for ( j = v66; ; v66 = _mm_load_si128(&j) )
      {
        v122 = _mm_loadu_si128((const __m128i *)(v61 + v63));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v122, v66));
        if ( _R13D )
          break;
LABEL_67:
        _RAX = (unsigned int)_mm_movemask_epi8(
                               _mm_cmpeq_epi8(
                                 _mm_load_si128(&v122),
                                 (__m128i)anon_fe5408d5d7d92996f9ef4a67419399fb_1_llvm_6718713517116596339));
        if ( (_DWORD)_RAX )
          goto LABEL_70;
        v70 = v68 + v63 + 16;
        v68 += 16LL;
        v63 = v62 & v70;
        v61 = v113;
      }
      while ( 1 )
      {
        __asm { tzcnt   eax, r13d }
        if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                                v120[0],
                                v59,
                                *(_QWORD *)(v67 - 24 * (v62 & (v63 + _RAX)) + 8),
                                *(_QWORD *)(v67 - 24 * (v62 & (v63 + _RAX)) + 16)) )
          break;
        _RAX = (unsigned int)(_R13D - 1);
        LOWORD(_RAX) = _R13D & (_R13D - 1);
        _R13D = _RAX;
        if ( !(_WORD)_RAX )
          goto LABEL_67;
      }
      if ( v100 != 2 )
      {
        v117.m128i_i64[0] = (__int64)v120[0];
        v117.m128i_i64[1] = v59;
        v108.m128i_i64[0] = v103;
        v108.m128i_i64[1] = i.m128i_i64[0];
        dest[0].m128i_i64[0] = (__int64)&v117;
        dest[0].m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
        dest[1].m128i_i64[0] = (__int64)&v108;
        dest[1].m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
        src[0].m128i_i64[0] = (__int64)&off_1553B0;
        src[0].m128i_i64[1] = 3LL;
        src[1].m128i_i64[0] = (__int64)dest;
        *(__m128i *)((char *)&src[1] + 8) = (__m128i)2uLL;
        alloc::fmt::format::format_inner(&v143, src);
        v8 = (_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = v144;
        *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v143);
        *(_QWORD *)a1 = 4LL;
LABEL_137:
        if ( v115.m128i_i64[0] )
          _rust_dealloc(v120[0], v115.m128i_i64[0], 1LL);
        if ( v124.m128i_i64[0] )
          core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v124);
        goto LABEL_141;
      }
    }
LABEL_70:
    v71 = i.m128i_i64[0];
    v8 = (_QWORD *)a1;
    if ( (unsigned __int8)std::path::Path::is_dir(v103, i.m128i_i64[0]) )
    {
      uu_cp::copydir::copy_directory(
        (unsigned int)&v108,
        (unsigned int)&v124,
        v103,
        v71,
        v105,
        v106,
        (__int64)v112,
        (__int64)v138,
        (__int64)&v126,
        (__int64)v139,
        1);
    }
    else
    {
      uu_cp::construct_dest_path((unsigned int)src, v103, v71, v105, v106, v114, v129, v130);
      v72 = src[0].m128i_i64[1];
      v73 = src[1].m128i_i64[1];
      if ( src[0].m128i_i64[0] != 13 )
      {
        v79 = _mm_loadu_si128(&src[2]);
        v111 = _mm_loadu_si128(&src[3]);
        v110 = v79;
        v109 = src[1];
        v108 = src[0];
        goto LABEL_100;
      }
      v113 = src[1].m128i_i64[0];
      uu_cp::copy_file(dest, &v124, v103, v71, src[1].m128i_i64[0], src[1].m128i_i64[1], v112, v138, &v126, v139, 1LL);
      if ( v99 )
      {
        j.m128i_i64[0] = v72;
        uu_cp::aligned_ancestors(src, v103, v71, v113, v73);
        i.m128i_i64[0] = src[0].m128i_i64[1];
        v104 = src[0].m128i_i64[0];
        if ( src[1].m128i_i64[0] )
        {
          v74 = (_QWORD *)i.m128i_i64[0];
          v122.m128i_i64[0] = i.m128i_i64[0] + 32 * src[1].m128i_i64[0];
          while ( *v74 )
          {
            v75 = v74[2];
            v76 = v74[3];
            uucore::features::fs::canonicalize(&v117, *v74, v74[1], 0LL, 1LL);
            v77 = v117.m128i_i64[0];
            if ( v117.m128i_i64[0] == 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<std::io::error::Error>(&v117.m128i_u64[1]);
            }
            else
            {
              v78 = v117.m128i_i64[1];
              uu_cp::copy_attributes(src, v117.m128i_i64[1], v118, v75, v76, v135);
              if ( src[0].m128i_i32[0] != 13 )
              {
                v91 = _mm_loadu_si128(src);
                v92 = _mm_loadu_si128(&src[1]);
                v111 = src[3];
                v110 = src[2];
                v109 = v92;
                v108 = v91;
                if ( v77 )
                  _rust_dealloc(v78, v77, 1LL);
                v72 = j.m128i_i64[0];
                if ( v104 )
                  _rust_dealloc(i.m128i_i64[0], 32 * v104, 8LL);
                v8 = (_QWORD *)a1;
                if ( dest[0].m128i_i32[0] != 13 )
                  core::ptr::drop_in_place<uu_cp::Error>(dest);
                goto LABEL_93;
              }
              if ( v77 )
                _rust_dealloc(v78, v77, 1LL);
            }
            v74 += 4;
            if ( v74 == (_QWORD *)v122.m128i_i64[0] )
              break;
          }
        }
        v8 = (_QWORD *)a1;
        v72 = j.m128i_i64[0];
        if ( v104 )
          _rust_dealloc(i.m128i_i64[0], 32 * v104, 8LL);
      }
      v80 = _mm_loadu_si128(dest);
      v81 = _mm_loadu_si128(&dest[1]);
      v111 = dest[3];
      v110 = dest[2];
      v109 = v81;
      v108 = v80;
LABEL_93:
      if ( v72 )
        _rust_dealloc(v113, v72, 1LL);
    }
    if ( v108.m128i_i64[0] == 13 )
    {
      if ( v59 )
      {
        if ( v59 < 0 )
        {
          v82 = 0LL;
LABEL_150:
          alloc::raw_vec::handle_error(v82, v59);
        }
        v82 = 1LL;
        v83 = _rust_alloc(v59, 1LL);
        if ( !v83 )
          goto LABEL_150;
        v84 = (void *)v83;
        v8 = (_QWORD *)a1;
      }
      else
      {
        v84 = &dword_0 + 1;
      }
      memcpy(v84, v120[0], v59);
      src[0].m128i_i64[0] = v59;
      src[0].m128i_i64[1] = (__int64)v84;
      src[1].m128i_i64[0] = v59;
      v90 = 0;
      hashbrown::map::HashMap<K,V,S,A>::insert(&v126, src);
      goto LABEL_114;
    }
LABEL_100:
    v85 = _mm_load_si128(&v110);
    src[3] = _mm_load_si128(&v111);
    src[2] = v85;
    src[1] = v109;
    src[0] = v108;
    v137 = src;
    v86 = v108.m128i_i64[0];
    v87 = v108.m128i_i64[0] - 2;
    if ( (unsigned __int64)(v108.m128i_i64[0] - 2) >= 0xB )
      v87 = 4LL;
    if ( v87 != 3 && v87 != 6 )
    {
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v117 = _mm_loadu_si128((const __m128i *)&xmmword_15C040);
      v142[0] = &v117;
      v142[1] = <&T as core::fmt::Display>::fmt;
      dest[0].m128i_i64[0] = (__int64)&unk_155318;
      dest[0].m128i_i64[1] = 2LL;
      dest[2].m128i_i64[0] = 0LL;
      dest[1].m128i_i64[0] = (__int64)v142;
      dest[1].m128i_i64[1] = 1LL;
      std::io::stdio::_eprint(dest);
      v117.m128i_i64[0] = (__int64)&v137;
      v117.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      dest[0].m128i_i64[0] = (__int64)&unk_155338;
      dest[0].m128i_i64[1] = 2LL;
      dest[2].m128i_i64[0] = 0LL;
      dest[1].m128i_i64[0] = (__int64)&v117;
      dest[1].m128i_i64[1] = 1LL;
      std::io::stdio::_eprint(dest);
      v86 = src[0].m128i_i64[0];
    }
    v88 = src[0].m128i_i8[8];
    core::ptr::drop_in_place<uu_cp::Error>(src);
    v89 = v107;
    if ( v88 )
      v89 = 1;
    if ( v86 != 8 )
      v89 = 1;
    v107 = v89;
    v90 = 1;
LABEL_114:
    if ( v115.m128i_i64[0] )
      _rust_dealloc(v115.m128i_i64[1], v115.m128i_i64[0], 1LL);
    if ( !((v108.m128i_i32[0] == 13) | (unsigned __int8)v90) )
      core::ptr::drop_in_place<uu_cp::Error>(&v108);
    goto LABEL_37;
  }
  v120[0] = (void *)v7;
  v122.m128i_i32[0] = v6;
  if ( !v7 )
  {
    v38 = 0LL;
LABEL_31:
    indicatif::draw_target::ProgressDrawTarget::stderr(src, v34);
    v8 = (_QWORD *)a1;
    indicatif::progress_bar::ProgressBar::with_draw_target(&v108, 1LL, v38, src);
    indicatif::style::Template::from_str(src, aMsgElapsedPrec, 64LL);
    v7 = (unsigned __int64)v120[0];
    v42 = src[0].m128i_i32[2];
    v43 = src[0].m128i_i8[12];
    if ( src[0].m128i_i64[0] != 0x8000000000000000LL )
    {
      dest[1].m128i_i32[1] = src[1].m128i_i32[1];
      *(__int64 *)((char *)&dest[0].m128i_i64[1] + 5) = *(__int64 *)((char *)&src[0].m128i_i64[1] + 5);
      dest[0].m128i_i64[0] = src[0].m128i_i64[0];
      dest[0].m128i_i32[2] = src[0].m128i_i32[2];
      dest[0].m128i_i8[12] = src[0].m128i_i8[12];
      indicatif::style::ProgressStyle::new(src, dest);
      if ( src[0].m128i_i64[0] != 0x8000000000000000LL )
      {
        memcpy(dest, src, 0x88uLL);
        indicatif::progress_bar::ProgressBar::set_style(&v108, dest);
        LOBYTE(v6) = v122.m128i_i8[0];
        v118 = v109.m128i_i64[0];
        v117 = _mm_loadu_si128(&v108);
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        indicatif::progress_bar::ProgressBar::with_message(
          &v115,
          &v117,
          xmmword_15C040,
          *((_QWORD *)&xmmword_15C040 + 1));
        v44 = std::time::Instant::now();
        indicatif::progress_bar::ProgressBar::tick_inner(&v115, v44);
        v125 = n;
        v124 = _mm_loadu_si128(&v115);
        goto LABEL_36;
      }
      v42 = src[0].m128i_i32[2];
      v43 = src[0].m128i_i8[12];
    }
    dest[0].m128i_i32[0] = v42;
    dest[0].m128i_i8[4] = v43;
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &unk_155130, &off_155358);
  }
  if ( v112[70] )
  {
    v36 = 24 * v7;
    v37 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      v39 = *(_QWORD *)(a2 + v37 + 8);
      v40 = *(_QWORD *)(a2 + v37 + 16);
      v34 = v39;
      std::sys::pal::unix::fs::stat(src);
      if ( src[0].m128i_i32[0] == 2 )
        break;
      if ( (src[3].m128i_i16[4] & 0xF000) == 0x4000 )
      {
        v34 = v40;
        if ( uu_cp::disk_usage_directory(v39, v40) )
          goto LABEL_134;
        v38 += v41;
      }
      else
      {
        v38 += src[5].m128i_i64[0];
      }
      v37 += 24LL;
      if ( v36 == v37 )
        goto LABEL_31;
    }
  }
  else
  {
    v93 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      v34 = *(_QWORD *)(a2 + v93 + 8);
      std::sys::pal::unix::fs::stat(src);
      if ( src[0].m128i_i32[0] == 2 )
        break;
      if ( (src[3].m128i_i16[4] & 0xF000) == 0x4000 )
        v94 = 0LL;
      else
        v94 = src[5].m128i_i64[0];
      v38 += v94;
      v93 += 24LL;
      if ( 24 * v7 == v93 )
        goto LABEL_31;
    }
  }
  v41 = src[0].m128i_i64[1];
LABEL_134:
  v8 = (_QWORD *)a1;
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 8) = v41;
LABEL_141:
  <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v126);
  <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(v139);
LABEL_142:
  if ( *((_QWORD *)&v138[0] + 1) )
  {
    v96 = 144 * (*((_QWORD *)&v138[0] + 1) + 1LL);
    if ( v96 + *((_QWORD *)&v138[0] + 1) != -17 )
      _rust_dealloc(*(_QWORD *)&v138[0] - v96, v96 + *((_QWORD *)&v138[0] + 1) + 17, 16LL);
  }
  if ( v132.m128i_i64[1] )
  {
    v97 = (8 * v132.m128i_i64[1] + 23) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v97 + v132.m128i_i64[1] != -17LL )
      _rust_dealloc(v132.m128i_i64[0] - v97, v97 + v132.m128i_i64[1] + 17, 16LL);
  }
  return v8;
}
