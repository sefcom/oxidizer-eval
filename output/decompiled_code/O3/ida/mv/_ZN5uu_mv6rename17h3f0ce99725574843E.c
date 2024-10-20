__int64 __fastcall uu_mv::rename(void *a1, size_t a2, __int64 *a3, size_t a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __int64 *v10; // rsi
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  char v18; // r13
  __int128 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rdx
  const char *v25; // rsi
  unsigned int v27; // ecx
  __int128 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-300h]
  _OWORD src[11]; // [rsp+30h] [rbp-2D8h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-220h]
  __int128 *v35; // [rsp+F0h] [rbp-218h] BYREF
  __int64 *v36; // [rsp+F8h] [rbp-210h]
  _OWORD *v37; // [rsp+100h] [rbp-208h]
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // [rsp+108h] [rbp-200h]
  _OWORD dest[11]; // [rsp+110h] [rbp-1F8h] BYREF
  _QWORD v40[3]; // [rsp+1C0h] [rbp-148h] BYREF
  char v41; // [rsp+1D8h] [rbp-130h]
  __int128 v42; // [rsp+1E0h] [rbp-128h] BYREF
  _QWORD v43[20]; // [rsp+1F0h] [rbp-118h] BYREF
  __int128 v44; // [rsp+290h] [rbp-78h] BYREF
  __int64 v45; // [rsp+2A0h] [rbp-68h]
  __int128 v46; // [rsp+2A8h] [rbp-60h] BYREF
  __int64 v47; // [rsp+2B8h] [rbp-50h]
  _BYTE v48[72]; // [rsp+2C0h] [rbp-48h] BYREF

  v8 = (unsigned __int64)a3;
  std::sys::pal::unix::fs::stat(src);
  if ( LODWORD(src[0]) == 2 )
  {
    *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
    *(_QWORD *)&dest[0] = 2LL;
LABEL_4:
    core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v8);
    v9 = 0x8000000000000000LL;
    goto LABEL_5;
  }
  v8 = (unsigned __int64)src;
  memcpy(dest, src, sizeof(dest));
  if ( *(_QWORD *)&dest[0] == 2LL )
    goto LABEL_4;
  v14 = *(unsigned __int8 *)(a5 + 55);
  switch ( v14 )
  {
    case 1:
      if ( !*(_BYTE *)(a5 + 52) )
        return 0LL;
LABEL_56:
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = a3;
      *(_QWORD *)&dest[1] = a4;
      BYTE8(dest[1]) = 1;
      *(_QWORD *)&v42 = dest;
      *((_QWORD *)&v42 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &off_130C08;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v42;
      *((_QWORD *)&src[1] + 1) = 1LL;
      std::io::stdio::_print(src);
      return 0LL;
    case 2:
      v18 = *(_BYTE *)(a5 + 53);
      if ( v18 == 1 )
        return 0LL;
      std::sys::pal::unix::fs::stat(src);
      v11 = *((_QWORD *)&src[0] + 1);
      if ( *(_QWORD *)&src[0] == 2LL )
        return v11;
      memcpy(v43, &src[1], sizeof(v43));
      v42 = src[0];
      std::fs::Metadata::modified(dest, &v42);
      v11 = *(_QWORD *)&dest[0];
      LODWORD(v34) = DWORD2(dest[0]);
      if ( DWORD2(dest[0]) == 1000000000 )
        return v11;
      std::sys::pal::unix::fs::stat(src);
      v19 = (__int128 *)*((_QWORD *)&src[0] + 1);
      if ( *(_QWORD *)&src[0] == 2LL )
        return (__int64)v19;
      v29 = *((_QWORD *)&src[0] + 1);
      memcpy(&dest[1], &src[1], 0xA0uLL);
      dest[0] = src[0];
      std::fs::Metadata::modified(&v35, dest);
      v19 = v35;
      if ( (_DWORD)v36 == 1000000000 )
        return (__int64)v19;
      v27 = v11 != (_QWORD)v35;
      if ( v11 < (__int64)v35 )
        v27 = 255;
      v8 = (_DWORD)v34 != (_DWORD)v36;
      if ( (unsigned int)v34 < (unsigned int)v36 )
        v8 = 255LL;
      if ( (_BYTE)v27 )
        v8 = v27;
      if ( (_BYTE)v8 != 1 )
        return 0LL;
      break;
    case 3:
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = a3;
      *(_QWORD *)&dest[1] = a4;
      BYTE8(dest[1]) = 1;
      *(_QWORD *)&v42 = dest;
      *((_QWORD *)&v42 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &off_130C28;
      *((_QWORD *)&src[0] + 1) = 1LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v42;
      *((_QWORD *)&src[1] + 1) = 1LL;
      alloc::fmt::format::format_inner(v48, src);
      return std::io::error::Error::new(39LL, v48);
    default:
      v18 = *(_BYTE *)(a5 + 53);
      break;
  }
  if ( !v18 )
  {
    if ( !*(_BYTE *)(a5 + 52) )
      return 0LL;
    goto LABEL_56;
  }
  if ( v18 == 1 )
  {
    if ( uucore::UTIL_NAME != 2 )
    {
      v8 = (unsigned __int64)&uucore::UTIL_NAME;
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    }
    dest[0] = xmmword_137550;
    *(_QWORD *)&v42 = dest;
    *((_QWORD *)&v42 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_130950;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v42;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&dest[0] = 1LL;
    *((_QWORD *)&dest[0] + 1) = a3;
    *(_QWORD *)&dest[1] = a4;
    BYTE8(dest[1]) = 1;
    *(_QWORD *)&v42 = dest;
    *((_QWORD *)&v42 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_130C38;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v42;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&src[0] = &off_130990;
    *((_QWORD *)&src[0] + 1) = 1LL;
    src[1] = 8uLL;
    std::io::stdio::_eprint(src);
    v40[0] = &std::io::stdio::stderr::INSTANCE;
    v20 = <std::io::stdio::Stderr as std::io::Write>::flush(v40);
    if ( v20 )
    {
      v35 = (__int128 *)v20;
      *(_QWORD *)&v28 = uucore::util_name(v40, v8, v21, v22);
      dest[0] = v28;
      *(_QWORD *)&v42 = dest;
      *((_QWORD *)&v42 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_130950;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v42;
      *((_QWORD *)&src[1] + 1) = 1LL;
      std::io::stdio::_eprint(src);
      *(_QWORD *)&dest[0] = &v35;
      *((_QWORD *)&dest[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_1309A0;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = dest;
      *((_QWORD *)&src[1] + 1) = 1LL;
      std::io::stdio::_eprint(src);
      std::process::exit(1);
    }
    if ( !(unsigned __int8)uucore::read_yes() )
    {
      v25 = (_BYTE *)(&dword_0 + 1);
      v24 = 0LL;
      v12 = 0x8000000000000000LL;
      goto LABEL_60;
    }
  }
  uucore::features::backup_control::get_backup_path(
    src,
    *(unsigned __int8 *)(a5 + 54),
    a3,
    a4,
    *(_QWORD *)(a5 + 8),
    *(_QWORD *)(a5 + 16));
  v12 = *(_QWORD *)&src[0];
  v9 = 0x8000000000000000LL;
  v29 = *((_QWORD *)&src[0] + 1);
  v34 = *(_QWORD *)&src[1];
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL
    || (v11 = uu_mv::rename_with_fallback(a3, a4, *((void **)&src[0] + 1), *(size_t *)&src[1]), v9 = v12, !v11) )
  {
LABEL_5:
    v10 = a3;
    std::sys::pal::unix::fs::stat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
      *(_QWORD *)&dest[0] = 2LL;
LABEL_8:
      core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v10);
LABEL_9:
      v11 = uu_mv::rename_with_fallback(a1, a2, a3, a4);
      if ( v11 )
      {
LABEL_10:
        v12 = v9;
        goto LABEL_11;
      }
      if ( *(_BYTE *)(a5 + 49) )
      {
        if ( v9 == 0x8000000000000000LL )
        {
          *(_QWORD *)&v42 = 1LL;
          *((_QWORD *)&v42 + 1) = a1;
          v43[0] = a2;
          LOBYTE(v43[1]) = 1;
          *(_QWORD *)&dest[0] = 1LL;
          *((_QWORD *)&dest[0] + 1) = a3;
          *(_QWORD *)&dest[1] = a4;
          BYTE8(dest[1]) = 1;
          v35 = &v42;
          v36 = (__int64 *)<os_display::Quoted as core::fmt::Display>::fmt;
          v37 = dest;
          v38 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&src[0] = &off_130C58;
          *((_QWORD *)&src[0] + 1) = 2LL;
          *(_QWORD *)&src[2] = 0LL;
          *(_QWORD *)&src[1] = &v35;
          *((_QWORD *)&src[1] + 1) = 2LL;
          alloc::fmt::format::format_inner(&v46, src);
          dest[0] = v46;
          *(_QWORD *)&dest[1] = v47;
          v13 = a6;
        }
        else
        {
          v40[0] = 1LL;
          v40[1] = a1;
          v40[2] = a2;
          v41 = 1;
          v35 = (_OWORD *)(&dword_0 + 1);
          v36 = a3;
          v37 = (_OWORD *)a4;
          LOBYTE(v38) = 1;
          *(_QWORD *)&v42 = 1LL;
          *((_QWORD *)&v42 + 1) = v29;
          v43[0] = v34;
          LOBYTE(v43[1]) = 1;
          *(_QWORD *)&src[0] = v40;
          *((_QWORD *)&src[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&src[1] = &v35;
          *((_QWORD *)&src[1] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&src[2] = &v42;
          *((_QWORD *)&src[2] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&dest[0] = &off_130C78;
          *((_QWORD *)&dest[0] + 1) = 4LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = src;
          *((_QWORD *)&dest[1] + 1) = 3LL;
          alloc::fmt::format::format_inner(&v44, dest);
          dest[0] = v44;
          *(_QWORD *)&dest[1] = v45;
          v13 = a6;
          if ( v9 )
            _rust_dealloc(v29, v9, 1LL);
        }
        if ( v13 )
        {
          indicatif::multi::MultiProgress::suspend(v13, dest);
        }
        else
        {
          *(_QWORD *)&v42 = dest;
          *((_QWORD *)&v42 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&src[0] = &unk_1309A0;
          *((_QWORD *)&src[0] + 1) = 2LL;
          *(_QWORD *)&src[2] = 0LL;
          *(_QWORD *)&src[1] = &v42;
          *((_QWORD *)&src[1] + 1) = 1LL;
          std::io::stdio::_print(src);
        }
        v17 = *(_QWORD *)&dest[0];
        if ( !*(_QWORD *)&dest[0] )
          return 0LL;
        v16 = *((_QWORD *)&dest[0] + 1);
        goto LABEL_34;
      }
      v16 = v29;
      if ( 2 * v9 )
      {
        v17 = v9;
LABEL_34:
        _rust_dealloc(v16, v17, 1LL);
      }
      return 0LL;
    }
    v10 = (__int64 *)src;
    memcpy(dest, src, sizeof(dest));
    if ( *(_QWORD *)&dest[0] == 2LL )
      goto LABEL_8;
    if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) || !(unsigned __int8)std::path::Path::is_dir(a1, a2) )
      goto LABEL_9;
    std::sys::pal::unix::fs::readdir(src, a3, a4);
    if ( BYTE8(src[0]) == 2 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(src, a3);
    }
    else
    {
      *(_QWORD *)&src[3] = *(_QWORD *)&src[0];
      BYTE8(src[3]) = BYTE8(src[0]) != 0;
      *(_QWORD *)&src[0] = 2LL;
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(dest, &src[3]);
      src[2] = dest[2];
      src[1] = dest[1];
      src[0] = dest[0];
      v23 = *(_QWORD *)&dest[0];
      core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::fs::ReadDir>>(src);
      if ( !v23 )
      {
        v11 = std::sys::pal::unix::fs::rmdir(a3, a4);
        if ( v11 )
          goto LABEL_10;
        goto LABEL_9;
      }
    }
    v24 = 19LL;
    v25 = aDirectoryNotEm;
    v12 = v9;
LABEL_60:
    v11 = std::io::error::Error::new(39LL, v25, v24, v15);
LABEL_11:
    if ( v12 == 0x8000000000000000LL )
      return v11;
  }
  if ( v12 )
    _rust_dealloc(v29, v12, 1LL);
  return v11;
}
