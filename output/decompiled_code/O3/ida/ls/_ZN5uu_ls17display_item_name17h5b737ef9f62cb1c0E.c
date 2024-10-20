        __int64 a9)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  char v16; // al
  _QWORD *v17; // rcx
  bool v18; // r12
  __int128 *v19; // rbx
  const void *v20; // r14
  size_t v21; // r15
  int v22; // r14d
  int v23; // eax
  char *v24; // r15
  __int64 v25; // rax
  char v26; // al
  int v27; // eax
  __int64 v28; // r14
  const void *v29; // rsi
  signed __int64 v30; // r15
  __int64 v31; // rax
  void *v32; // rbx
  __int64 v33; // r14
  size_t v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r15
  void **v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r15
  __int64 v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r15
  __int64 (__fastcall *v49)(); // rbx
  size_t result; // rax
  _OWORD *v51; // rcx
  char v52; // [rsp+Fh] [rbp-2E9h]
  void *src[2]; // [rsp+10h] [rbp-2E8h] BYREF
  size_t n; // [rsp+20h] [rbp-2D8h]
  int v55; // [rsp+34h] [rbp-2C4h]
  __int64 v56; // [rsp+38h] [rbp-2C0h]
  _QWORD *v57; // [rsp+40h] [rbp-2B8h]
  __int64 v58; // [rsp+48h] [rbp-2B0h]
  const void *v59; // [rsp+50h] [rbp-2A8h]
  __int128 *v60; // [rsp+58h] [rbp-2A0h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+60h] [rbp-298h]
  __int128 *v62; // [rsp+68h] [rbp-290h]
  __int64 (__fastcall *v63)(); // [rsp+70h] [rbp-288h]
  __int128 v64; // [rsp+78h] [rbp-280h] BYREF
  void **v65; // [rsp+88h] [rbp-270h]
  __int64 v66; // [rsp+90h] [rbp-268h]
  __int128 v67; // [rsp+98h] [rbp-260h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-250h]
  __int128 dest; // [rsp+B0h] [rbp-248h] BYREF
  void **v70; // [rsp+C0h] [rbp-238h]
  __int64 (__fastcall *v71)(); // [rsp+C8h] [rbp-230h]
  __int128 *v72; // [rsp+D0h] [rbp-228h]
  __int64 v73; // [rsp+D8h] [rbp-220h]
  __int128 *v74; // [rsp+168h] [rbp-190h]
  __int64 v75; // [rsp+170h] [rbp-188h]
  __int64 v76; // [rsp+178h] [rbp-180h]
  __int128 v77; // [rsp+180h] [rbp-178h] BYREF
  __int128 *p_dest; // [rsp+190h] [rbp-168h]
  __int64 v79; // [rsp+198h] [rbp-160h]
  __int64 v80; // [rsp+1A0h] [rbp-158h]
  __int64 v81; // [rsp+1A8h] [rbp-150h]
  char v82; // [rsp+1B0h] [rbp-148h]
  unsigned __int8 v83; // [rsp+2A8h] [rbp-50h]
  __int128 v84; // [rsp+2B0h] [rbp-48h] BYREF
  size_t v85; // [rsp+2C0h] [rbp-38h]

  v57 = a6;
  v74 = a5;
  v76 = a4;
  v75 = a1;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16);
  v59 = (const void *)(a3 + 245);
  v13 = uucore::features::quoting_style::escape_name_inner(src, v11, v12, a3 + 245, 0LL);
  if ( *(_BYTE *)(a3 + 239) )
  {
    LOBYTE(v13) = 1;
    v55 = v13;
    uu_ls::create_hyperlink(&v77, src[1], n, a2);
    if ( src[0] )
      _rust_dealloc(src[1], src[0], 1LL);
    n = (size_t)p_dest;
    *(_OWORD *)src = v77;
  }
  if ( *(_BYTE *)(a8 + 29) != 2 )
  {
    v16 = *(_WORD *)(a3 + 228) != 0LL && n + a9 > *(unsigned __int16 *)(a3 + 228);
    LOBYTE(v15) = 1;
    v55 = v15;
    uu_ls::colors::color_name((unsigned int)&v77, src[1], n, a2, a8, a7, 0LL, v16);
    if ( src[0] )
      _rust_dealloc(src[1], src[0], 1LL);
    n = (size_t)p_dest;
    *(_OWORD *)src = v77;
  }
  v52 = *(_BYTE *)(a3 + 248);
  v17 = v57;
  LOBYTE(v17) = 1;
  v18 = v52 != 1 && v57[2] != 0LL;
  if ( v18 )
  {
    v77 = *(_OWORD *)v57;
    v19 = (__int128 *)v57[2];
    p_dest = v19;
    v20 = src[1];
    v21 = n;
    if ( (_QWORD)v77 - (_QWORD)v19 < n )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v77, v19, n);
      v19 = p_dest;
    }
    memcpy((char *)v19 + *((_QWORD *)&v77 + 1), v20, v21);
    v70 = (void **)((char *)v19 + v21);
    dest = v77;
    if ( src[0] )
      _rust_dealloc(src[1], src[0], 1LL);
    n = (size_t)v70;
    *(_OWORD *)src = dest;
    v17 = 0LL;
  }
  v55 = (int)v17;
  v22 = *(unsigned __int8 *)(a3 + 244);
  if ( *(_BYTE *)(a3 + 244) )
  {
    v23 = *(_DWORD *)(a2 + 248);
    if ( v23 == 2 )
    {
      core::cell::once::OnceCell<T>::try_init(a2 + 248, a2, a7);
      v23 = *(_DWORD *)(a2 + 248);
    }
    v24 = (char *)&loc_10FFFC + 4;
    if ( v23 )
    {
      switch ( ((*(_DWORD *)(a2 + 252) & 0xF000u) - 4096) >> 12 )
      {
        case 0u:
          LODWORD(v24) = 124;
          goto LABEL_36;
        case 3u:
          LODWORD(v24) = 47;
          v26 = 1;
          goto LABEL_37;
        case 7u:
          v25 = *(_QWORD *)(a2 + 72);
          if ( v25 == 3 )
          {
            core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, a7);
            v25 = *(_QWORD *)(a2 + 72);
          }
          if ( v25 == 2 || (*(_BYTE *)(a2 + 128) & 0x49) == 0 )
            break;
          LODWORD(v24) = 42;
          goto LABEL_36;
        case 9u:
          LODWORD(v24) = 64;
          goto LABEL_36;
        case 0xBu:
          LODWORD(v24) = 61;
LABEL_36:
          v26 = 0;
LABEL_37:
          v17 = 0LL;
          if ( v22 == 3 )
            goto LABEL_38;
          goto LABEL_27;
        default:
          break;
      }
    }
    LOBYTE(v17) = 1;
    v26 = 0;
    if ( v22 != 3 )
    {
LABEL_27:
      if ( v22 == 2 )
      {
        if ( (_DWORD)v24 == 42 || (_DWORD)v24 == (_DWORD)&loc_10FFFC + 4 )
          goto LABEL_40;
      }
      else if ( !v26 )
      {
        goto LABEL_40;
      }
      goto LABEL_39;
    }
LABEL_38:
    if ( !(_BYTE)v17 )
LABEL_39:
      alloc::string::String::push(src, (unsigned int)v24, v14, v17);
  }
LABEL_40:
  if ( v52 == 1 )
  {
    v27 = *(_DWORD *)(a2 + 248);
    if ( v27 == 2 )
    {
      core::cell::once::OnceCell<T>::try_init(a2 + 248, a2, a7);
      v27 = *(_DWORD *)(a2 + 248);
    }
    if ( v27 && (*(_DWORD *)(a2 + 252) & 0xF000) == 0xA000 && !*(_BYTE *)(a2 + 296) )
    {
      std::sys::pal::unix::fs::readlink(&v67, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      if ( (_QWORD)v67 == 0x8000000000000000LL )
      {
        v28 = *((_QWORD *)&v67 + 1);
        *(_QWORD *)&dest = *((_QWORD *)&v67 + 1);
        v29 = *(const void **)(a2 + 32);
        v30 = *(_QWORD *)(a2 + 40);
        if ( v30 )
        {
          v59 = *(const void **)(a2 + 32);
          if ( v30 < 0 )
          {
            v56 = 0LL;
          }
          else
          {
            v56 = 1LL;
            v31 = _rust_alloc(v30, 1LL);
            if ( v31 )
            {
              v32 = (void *)v31;
              v29 = v59;
LABEL_60:
              memcpy(v32, v29, v30);
              p_dest = (__int128 *)v30;
              v79 = (__int64)v32;
              v80 = v30;
              *((_QWORD *)&v77 + 1) = v28;
              LOWORD(v77) = 2;
              _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
              if ( uucore::UTIL_NAME != 2 )
                once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
              v64 = xmmword_1B7CA8;
              v60 = &v64;
              v61 = <&T as core::fmt::Display>::fmt;
              v62 = &v77;
              v63 = <uu_ls::LsError as core::fmt::Display>::fmt;
              *(_QWORD *)&dest = &unk_1AC758;
              *((_QWORD *)&dest + 1) = 3LL;
              v72 = 0LL;
              v70 = (void **)&v60;
              v71 = (__int64 (__fastcall *)())(&dword_0 + 2);
              std::io::stdio::_eprint(&dest);
              core::ptr::drop_in_place<uu_ls::LsError>(&v77);
              goto LABEL_81;
            }
          }
          alloc::raw_vec::handle_error(v56, v30);
        }
        v32 = &dword_0 + 1;
        goto LABEL_60;
      }
      v56 = *((_QWORD *)&v67 + 1);
      v33 = v68;
      v34 = n;
      v66 = v67;
      if ( (char *)src[0] - n <= (char *)&dword_0 + 3 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, n, 4LL);
        v34 = n;
      }
      *(_DWORD *)((char *)src[1] + v34) = 540945696;
      n += 4LL;
      if ( *(_BYTE *)(a8 + 29) == 2 )
      {
        uucore::features::quoting_style::escape_name_inner(&v77, v56, v33, v59, 0LL);
        v35 = *((_QWORD *)&v77 + 1);
        alloc::vec::Vec<T,A>::append_elements(src, *((_QWORD *)&v77 + 1), p_dest);
        if ( (_QWORD)v77 )
          _rust_dealloc(v35, v77, 1LL);
        goto LABEL_79;
      }
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v77, &v67);
      v36 = *((_QWORD *)&v77 + 1);
      v58 = v77;
      v37 = (void **)p_dest;
      if ( (unsigned __int8)std::path::Path::is_absolute(v56, v33)
        || (v38 = std::path::Path::parent(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40))) == 0 )
      {
        v40 = v58;
      }
      else
      {
        *(_QWORD *)&v77 = v58;
        *((_QWORD *)&v77 + 1) = v36;
        p_dest = (__int128 *)v37;
        std::path::Path::join(&dest, v38, v39, &v77);
        v36 = *((_QWORD *)&dest + 1);
        v40 = dest;
        v37 = v70;
      }
      *(_QWORD *)&v64 = v40;
      *((_QWORD *)&v64 + 1) = v36;
      v65 = v37;
      *(_QWORD *)&dest = 0LL;
      v60 = (__int128 *)0x8000000000000000LL;
      uu_ls::PathData::new((__int64)&v77, (const char *)&v64, (__int64)&dest, (size_t *)&v60, a3, 0);
      v41 = *(_QWORD *)(a2 + 72);
      if ( v41 == 3 )
      {
        core::cell::once::OnceCell<T>::try_init(a2 + 72, a2, a7);
        v41 = *(_QWORD *)(a2 + 72);
      }
      if ( v41 == 2 && (v42 = v80, uu_ls::get_metadata_with_deref_opt(&dest, v80, v81, v83), (_DWORD)dest == 2) )
      {
        core::ptr::drop_in_place<std::io::error::Error>((char *)&dest + 8, v42);
        std::sys::pal::unix::fs::readlink(&dest, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        v43 = dest;
        if ( (_QWORD)dest == 0x8000000000000000LL )
        {
          v60 = (__int128 *)*((_QWORD *)&dest + 1);
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v60, &off_1AC200, &off_1ACB60);
        }
        v44 = *((_QWORD *)&dest + 1);
        std::sys::os_str::bytes::Slice::to_string_lossy(&dest);
        v45 = *((_QWORD *)&dest + 1);
        alloc::vec::Vec<T,A>::append_elements(src, *((_QWORD *)&dest + 1), v70);
        if ( 2LL * (_QWORD)dest )
          _rust_dealloc(v45, dest, 1LL);
        if ( !v43 )
          goto LABEL_78;
        v46 = v44;
        v47 = v43;
      }
      else
      {
        uucore::features::quoting_style::escape_name_inner(&dest, v56, v33, v59, 0LL);
        v48 = *((_QWORD *)&dest + 1);
        uu_ls::colors::color_name(
          (unsigned int)&v60,
          DWORD2(dest),
          (_DWORD)v70,
          a2,
          a8,
          a7,
          (__int64)&v77,
          *(_WORD *)(a3 + 228) != 0LL && n + a9 > *(unsigned __int16 *)(a3 + 228));
        v49 = v61;
        alloc::vec::Vec<T,A>::append_elements(src, v61, v62);
        if ( v60 )
          _rust_dealloc(v49, v60, 1LL);
        v47 = dest;
        if ( !(_QWORD)dest )
          goto LABEL_78;
        v46 = v48;
      }
      _rust_dealloc(v46, v47, 1LL);
LABEL_78:
      core::ptr::drop_in_place<uu_ls::PathData>(&v77);
LABEL_79:
      if ( v66 )
        _rust_dealloc(v56, v66, 1LL);
    }
  }
LABEL_81:
  if ( v76 == 1 && *(_BYTE *)(a3 + 235) )
  {
    if ( v52 == 4 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v64, a2 + 48);
    }
    else
    {
      v67 = *(_OWORD *)(a2 + 56);
      v60 = &v67;
      v61 = <&T as core::fmt::Display>::fmt;
      v62 = v74;
      v63 = 0LL;
      *(_QWORD *)&v77 = 2LL;
      p_dest = (_OWORD *)(&dword_0 + 1);
      v79 = 1LL;
      v80 = 0LL;
      v81 = 32LL;
      v82 = 1;
      *(_QWORD *)&dest = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
      *((_QWORD *)&dest + 1) = 1LL;
      v72 = &v77;
      v73 = 1LL;
      v70 = (void **)&v60;
      v71 = (__int64 (__fastcall *)())(&dword_0 + 2);
      alloc::fmt::format::format_inner(&v64, &dest);
    }
    *(_QWORD *)&dest = &v64;
    *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v70 = src;
    v71 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v77 = &unk_1AC7A8;
    *((_QWORD *)&v77 + 1) = 2LL;
    v80 = 0LL;
    p_dest = &dest;
    v79 = 2LL;
    alloc::fmt::format::format_inner(&v84, &v77);
    if ( src[0] )
      _rust_dealloc(src[1], src[0], 1LL);
    n = v85;
    *(_OWORD *)src = v84;
    if ( (_QWORD)v64 )
      _rust_dealloc(*((_QWORD *)&v64 + 1), v64, 1LL);
  }
  result = n;
  v51 = (_OWORD *)v75;
  *(_QWORD *)(v75 + 16) = n;
  *v51 = *(_OWORD *)src;
  if ( !v18 )
  {
    result = (size_t)v57;
    if ( *v57 )
      return _rust_dealloc(v57[1], *v57, 1LL);
  }
  return result;
}
