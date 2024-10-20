__m128i *__fastcall uu_ln::link_files_in_dir(__int64 a1, __int64 a2, void *a3, size_t a4, __int64 a5)
{
  size_t v5; // r14
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  __m128i *result; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __m128i v16; // xmm1
  int v17; // eax
  void *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __m128i *v22; // rbp
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __m128i v29; // kr00_16
  unsigned __int64 v30; // r13
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // rbp
  __int64 v35; // r15
  __int64 v37; // r13
  __int128 v38; // rax
  __int128 v39; // kr10_16
  __int64 v40; // rsi
  const void *v41; // rbp
  size_t v42; // r13
  __int64 v43; // r14
  __int64 v44; // rax
  void *v45; // rbx
  __m128i *v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __m128i *v49; // rbx
  bool v50; // [rsp+7h] [rbp-151h]
  __m128i v51; // [rsp+8h] [rbp-150h] BYREF
  __m128i v52; // [rsp+18h] [rbp-140h] BYREF
  __m128i v53; // [rsp+28h] [rbp-130h]
  int v54; // [rsp+3Ch] [rbp-11Ch]
  __int128 v55; // [rsp+40h] [rbp-118h] BYREF
  __m128i v56; // [rsp+50h] [rbp-108h] BYREF
  __m128i *v57; // [rsp+60h] [rbp-F8h]
  __int64 (__fastcall *v58)(); // [rsp+68h] [rbp-F0h]
  __m128i v59; // [rsp+70h] [rbp-E8h] BYREF
  __int128 *v60; // [rsp+80h] [rbp-D8h]
  __int64 (__fastcall *v61)(); // [rsp+88h] [rbp-D0h]
  __int64 v62; // [rsp+90h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-C0h]
  __int64 v64; // [rsp+A8h] [rbp-B0h]
  void *src; // [rsp+B0h] [rbp-A8h]
  __int64 v66; // [rsp+B8h] [rbp-A0h]
  size_t v67; // [rsp+C0h] [rbp-98h]
  __int64 v68; // [rsp+C8h] [rbp-90h]
  __m128i v69; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v70; // [rsp+E0h] [rbp-78h]
  _QWORD v71[2]; // [rsp+F0h] [rbp-68h] BYREF
  __m128i i; // [rsp+100h] [rbp-58h] BYREF
  __m128i v73[4]; // [rsp+110h] [rbp-48h] BYREF

  v64 = a5;
  v5 = a4;
  v7 = a1;
  if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    std::path::Path::to_path_buf(&v51, a3, v5);
    v52.m128i_i64[1] = 0x8000000000000000LL;
    result = (__m128i *)_rust_alloc(48LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v12 = _mm_loadu_si128(&v51);
    v13 = _mm_loadu_si128(&v52);
    result[2] = v53;
    result[1] = v13;
    *result = v12;
    return result;
  }
  src = a3;
  if ( *(_QWORD *)(__readfsqword(0) - 48) )
  {
    v8 = __readfsqword(0) - 48;
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v9 = std::sys::pal::unix::rand::hashmap_random_keys();
    v10 = v14;
    v15 = (_QWORD *)(__readfsqword(0) - 48);
    *v15 = 1LL;
    v15[1] = v9;
    v15[2] = v14;
  }
  *(_QWORD *)(__readfsqword(0) - 48 + 8) = v9 + 1;
  hashbrown::raw::RawTable<T,A>::with_capacity_in(&v51, a2);
  v53.m128i_i64[0] = v9;
  v53.m128i_i64[1] = v10;
  v16 = _mm_loadu_si128(&v52);
  v69 = _mm_loadu_si128(&v51);
  v70 = v16;
  v71[0] = v9;
  v71[1] = v10;
  if ( !a2 )
  {
LABEL_60:
    v49 = 0LL;
    goto LABEL_61;
  }
  v17 = a1 + 24 * a2;
  v68 = a1 + 24 * a2;
  v50 = *(_BYTE *)(v64 + 52) != 0 && *(_BYTE *)(v64 + 54) == 2;
  LOBYTE(v17) = 1;
  v54 = v17;
  v18 = src;
  v67 = v5;
  do
  {
    if ( v50 && (unsigned __int8)std::path::Path::is_symlink(v18, v5) )
    {
      if ( (unsigned __int8)std::path::Path::is_file(v18, v5) )
      {
        v19 = std::sys::pal::unix::fs::unlink(v18, v5);
        if ( v19 )
        {
          *(_QWORD *)&v55 = v19;
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v56 = _mm_loadu_si128((const __m128i *)&xmmword_F4AE0);
          v59.m128i_i64[0] = (__int64)&v56;
          v59.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v51.m128i_i64[0] = (__int64)&unk_EF9E8;
          v51.m128i_i64[1] = 2LL;
          v53.m128i_i64[0] = 0LL;
          v52.m128i_i64[0] = (__int64)&v59;
          v52.m128i_i64[1] = 1LL;
          std::io::stdio::_eprint(&v51);
          v56.m128i_i64[0] = 1LL;
          v56.m128i_i64[1] = (__int64)v18;
          v57 = (__m128i *)v5;
          LOBYTE(v58) = 1;
          v59.m128i_i64[0] = (__int64)&v56;
          v59.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          v60 = &v55;
          v61 = <std::io::error::Error as core::fmt::Display>::fmt;
          v51.m128i_i64[0] = (__int64)&off_EFA08;
          v51.m128i_i64[1] = 3LL;
          v53.m128i_i64[0] = 0LL;
          v52.m128i_i64[0] = (__int64)&v59;
          v52.m128i_i64[1] = 2LL;
          std::io::stdio::_eprint(&v51);
          core::ptr::drop_in_place<std::io::error::Error>(v55);
        }
      }
      if ( (unsigned __int8)std::path::Path::is_dir(v18, v5) )
      {
        v20 = std::sys::pal::unix::fs::rmdir(v18, v5);
        if ( v20 )
        {
          *(_QWORD *)&v55 = v20;
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v56 = _mm_loadu_si128((const __m128i *)&xmmword_F4AE0);
          v59.m128i_i64[0] = (__int64)&v56;
          v59.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v51.m128i_i64[0] = (__int64)&unk_EF9E8;
          v51.m128i_i64[1] = 2LL;
          v53.m128i_i64[0] = 0LL;
          v52.m128i_i64[0] = (__int64)&v59;
          v52.m128i_i64[1] = 1LL;
          std::io::stdio::_eprint(&v51);
          v56.m128i_i64[0] = 1LL;
          v56.m128i_i64[1] = (__int64)v18;
          v57 = (__m128i *)v5;
          LOBYTE(v58) = 1;
          v59.m128i_i64[0] = (__int64)&v56;
          v59.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
          v60 = &v55;
          v61 = <std::io::error::Error as core::fmt::Display>::fmt;
          v51.m128i_i64[0] = (__int64)&off_EFA08;
          v51.m128i_i64[1] = 3LL;
          v53.m128i_i64[0] = 0LL;
          v52.m128i_i64[0] = (__int64)&v59;
          v52.m128i_i64[1] = 2LL;
          std::io::stdio::_eprint(&v51);
          core::ptr::drop_in_place<std::io::error::Error>(v55);
        }
      }
      std::path::Path::to_path_buf(&v62, v18, v5);
    }
    else
    {
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(__m128i **)(v7 + 16);
      std::sys::os_str::bytes::Slice::to_str(&v51, v21);
      if ( v51.m128i_i64[0] )
      {
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v56 = _mm_loadu_si128((const __m128i *)&xmmword_F4AE0);
        v59.m128i_i64[0] = (__int64)&v56;
        v59.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v51.m128i_i64[0] = (__int64)&unk_EF9E8;
        v51.m128i_i64[1] = 2LL;
        v53.m128i_i64[0] = 0LL;
        v52.m128i_i64[0] = (__int64)&v59;
        v52.m128i_i64[1] = 1LL;
        std::io::stdio::_eprint(&v51);
        v56.m128i_i64[0] = 1LL;
        v56.m128i_i64[1] = v21;
        v57 = v22;
        LOBYTE(v58) = 1;
        v59.m128i_i64[0] = (__int64)&v56;
        v59.m128i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v51.m128i_i64[0] = (__int64)&off_EFA38;
        v51.m128i_i64[1] = 2LL;
        v53.m128i_i64[0] = 0LL;
        v52.m128i_i64[0] = (__int64)&v59;
        v52.m128i_i64[1] = 1LL;
        std::io::stdio::_eprint(&v51);
        v54 = 0;
        goto LABEL_10;
      }
      v23 = v51.m128i_i64[1];
      v24 = v52.m128i_i64[0];
      v25 = std::path::Path::file_name(v51.m128i_i64[1], v52.m128i_i64[0]);
      v27 = v26;
      if ( v25 )
        v23 = v25;
      else
        v27 = v24;
      std::path::Path::_join(&v62, v18, v5, v23, v27);
    }
    if ( v70.m128i_i64[1] )
    {
      v28 = core::hash::BuildHasher::hash_one(v71, &v62);
      v66 = v7;
      v29 = v69;
      v30 = v28 & v69.m128i_i64[1];
      _RAX = v28 >> 57;
      v32 = _mm_cvtsi32_si128(_RAX);
      v33 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v32, v32), 0), 0);
      v34 = v69.m128i_i64[0] - 24;
      v35 = 0LL;
      for ( i = v33; ; v33 = _mm_load_si128(&i) )
      {
        v73[0] = _mm_loadu_si128((const __m128i *)(v29.m128i_i64[0] + v30));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v73[0], v33));
        if ( _R12D )
          break;
LABEL_37:
        _RAX = (unsigned int)_mm_movemask_epi8(
                               _mm_cmpeq_epi8(
                                 _mm_load_si128(v73),
                                 (__m128i)anon_ab08fc349ecc86ee1c1e23e10d737f27_0_llvm_12942162992395302576));
        v7 = v66;
        if ( (_DWORD)_RAX )
          goto LABEL_42;
        v37 = v35 + v30 + 16;
        v35 += 16LL;
        v30 = v29.m128i_i64[1] & v37;
      }
      while ( 1 )
      {
        __asm { tzcnt   eax, r12d }
        if ( (unsigned __int8)<Q as hashbrown::Equivalent<K>>::equivalent(
                                &v62,
                                v34 - 24 * (v29.m128i_i64[1] & (v30 + _RAX))) )
          break;
        _RAX = (unsigned int)(_R12D - 1);
        LOWORD(_RAX) = _R12D & (_R12D - 1);
        _R12D = _RAX;
        if ( !(_WORD)_RAX )
          goto LABEL_37;
      }
      v7 = v66;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v56 = _mm_loadu_si128((const __m128i *)&xmmword_F4AE0);
      v59.m128i_i64[0] = (__int64)&v56;
      v59.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v51.m128i_i64[0] = (__int64)&unk_EF9E8;
      v51.m128i_i64[1] = 2LL;
      v53.m128i_i64[0] = 0LL;
      v52.m128i_i64[0] = (__int64)&v59;
      v52.m128i_i64[1] = 1LL;
      std::io::stdio::_eprint(&v51);
      v55 = *(_OWORD *)n;
      v59 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      v56.m128i_i64[0] = (__int64)&v55;
      v56.m128i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
      v57 = &v59;
      v58 = <std::path::Display as core::fmt::Display>::fmt;
      v51.m128i_i64[0] = (__int64)&off_EFA58;
      v51.m128i_i64[1] = 3LL;
      v53.m128i_i64[0] = 0LL;
      v52.m128i_i64[0] = (__int64)&v56;
      v52.m128i_i64[1] = 2LL;
      std::io::stdio::_eprint(&v51);
      goto LABEL_49;
    }
LABEL_42:
    *(_QWORD *)&v38 = uu_ln::link(*(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16), n[0], n[1], v64);
    if ( (_QWORD)v38 )
    {
      v55 = v38;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v56 = _mm_loadu_si128((const __m128i *)&xmmword_F4AE0);
      v59.m128i_i64[0] = (__int64)&v56;
      v59.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v51.m128i_i64[0] = (__int64)&unk_EF9E8;
      v51.m128i_i64[1] = 2LL;
      v53.m128i_i64[0] = 0LL;
      v52.m128i_i64[0] = (__int64)&v59;
      v52.m128i_i64[1] = 1LL;
      std::io::stdio::_eprint(&v51);
      v56.m128i_i64[0] = (__int64)&v55;
      v56.m128i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v51.m128i_i64[0] = (__int64)&unk_EFA88;
      v51.m128i_i64[1] = 2LL;
      v53.m128i_i64[0] = 0LL;
      v52.m128i_i64[0] = (__int64)&v56;
      v52.m128i_i64[1] = 1LL;
      std::io::stdio::_eprint(&v51);
      v39 = v55;
      if ( **((_QWORD **)&v55 + 1) )
        (**((void (__fastcall ***)(_QWORD))&v55 + 1))(v55);
      v40 = *(_QWORD *)(*((_QWORD *)&v39 + 1) + 8LL);
      if ( v40 )
        _rust_dealloc(v39, v40, *(_QWORD *)(*((_QWORD *)&v39 + 1) + 16LL));
LABEL_49:
      v54 = 0;
    }
    v41 = (const void *)n[0];
    v42 = n[1];
    if ( n[1] )
    {
      if ( (n[1] & 0x8000000000000000LL) != 0LL )
      {
        v43 = 0LL;
LABEL_63:
        alloc::raw_vec::handle_error(v43, v42);
      }
      v43 = 1LL;
      v44 = _rust_alloc(n[1], 1LL);
      if ( !v44 )
        goto LABEL_63;
      v45 = (void *)v44;
    }
    else
    {
      v45 = &dword_0 + 1;
    }
    memcpy(v45, v41, v42);
    v51.m128i_i64[0] = v42;
    v51.m128i_i64[1] = (__int64)v45;
    v52.m128i_i64[0] = v42;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v69, &v51);
    if ( v62 )
      _rust_dealloc(n[0], v62, 1LL);
    v5 = v67;
    v18 = src;
LABEL_10:
    v7 += 24LL;
  }
  while ( v7 != v68 );
  if ( (v54 & 1) != 0 )
    goto LABEL_60;
  v52.m128i_i64[1] = 0x8000000000000001LL;
  v46 = (__m128i *)_rust_alloc(48LL, 8LL);
  if ( !v46 )
    alloc::alloc::handle_alloc_error(8LL, 48LL);
  v47 = _mm_loadu_si128(&v51);
  v48 = _mm_loadu_si128(&v52);
  v46[2] = v53;
  v46[1] = v48;
  v49 = v46;
  *v46 = v47;
LABEL_61:
  <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v69);
  return v49;
}
