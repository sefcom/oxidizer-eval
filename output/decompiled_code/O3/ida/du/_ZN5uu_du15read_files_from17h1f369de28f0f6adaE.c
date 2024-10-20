_QWORD *__fastcall uu_du::read_files_from(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // rcx
  void *v10; // r14
  void *v11; // r15
  __int64 v12; // rax
  char v13; // cl
  void *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rbx
  void *v18; // r14
  void *v19; // r15
  size_t v20; // rdx
  __int64 v21; // rax
  const void *v22; // r13
  size_t v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // r13
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rbx
  _QWORD *v38; // r14
  __int64 v39; // rsi
  void *v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  void *src[2]; // [rsp+0h] [rbp-128h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-118h]
  __int128 v46; // [rsp+20h] [rbp-108h]
  __int128 v47; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-E8h]
  __int128 v49; // [rsp+48h] [rbp-E0h] BYREF
  __int64 *v50; // [rsp+58h] [rbp-D0h]
  __int64 (__fastcall *v51)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-C8h]
  __int64 v52; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+70h] [rbp-B8h]
  char v54; // [rsp+78h] [rbp-B0h]
  __int64 v55; // [rsp+80h] [rbp-A8h]
  _QWORD *v56; // [rsp+88h] [rbp-A0h]
  __int64 v57; // [rsp+90h] [rbp-98h]
  _BYTE *v58; // [rsp+98h] [rbp-90h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-88h]
  void *v60; // [rsp+A8h] [rbp-80h]
  __int64 v61; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v62[2]; // [rsp+B8h] [rbp-70h] BYREF
  _BYTE v63[24]; // [rsp+C8h] [rbp-60h] BYREF
  _BYTE v64[72]; // [rsp+E0h] [rbp-48h] BYREF

  v4 = a1;
  v58 = a2;
  v59 = a3;
  if ( a3 == 1 && *a2 == 45 )
  {
    v5 = std::io::stdio::stdin();
    v6 = _rust_alloc(0x2000LL, 1LL);
    if ( !v6 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    v7 = v6;
    v8 = _rust_alloc(48LL, 8LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v56 = a1;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v8 + 8) = 0x2000LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = v5;
    v9 = &off_134BC8;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(src, a2, a3);
    v10 = src[0];
    v11 = src[1];
    if ( (unsigned __int8)std::path::Path::is_dir(src[1], n[0]) )
    {
      *(_QWORD *)&v49 = &v58;
      *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
      src[0] = &unk_134BA8;
      src[1] = &dword_0 + 2;
      *(_QWORD *)&v46 = 0LL;
      n[0] = (size_t)&v49;
      n[1] = 1LL;
      alloc::fmt::format::format_inner(v63, src);
      v12 = std::io::error::Error::new(39LL, v63);
LABEL_61:
      a1[1] = v12;
      *a1 = 0x8000000000000000LL;
      if ( v10 )
      {
LABEL_62:
        v42 = 1LL;
        v40 = v11;
        v41 = (__int64)v10;
LABEL_63:
        _rust_dealloc(v40, v41, v42);
      }
      return v4;
    }
    src[0] = (void *)0x1B600000000LL;
    LODWORD(src[1]) = 1;
    WORD2(src[1]) = 0;
    std::fs::OpenOptions::_open(&v52, src, v58, v59);
    if ( (_DWORD)v52 )
    {
      v12 = v53;
      switch ( v53 & 3 )
      {
        case 0LL:
          v13 = *(_BYTE *)(v53 + 16);
          goto LABEL_60;
        case 1LL:
          v13 = *(_BYTE *)(v53 + 15);
          goto LABEL_60;
        case 2LL:
          if ( HIDWORD(v53) != 2 )
            goto LABEL_61;
          goto LABEL_55;
        case 3LL:
          switch ( HIDWORD(v53) )
          {
            case 0:
              v13 = 0;
              break;
            case 1:
              v13 = 1;
              break;
            case 2:
              v13 = 2;
              break;
            case 3:
              v13 = 3;
              break;
            case 4:
              v13 = 4;
              break;
            case 5:
              v13 = 5;
              break;
            case 6:
              v13 = 6;
              break;
            case 7:
              v13 = 7;
              break;
            case 8:
              v13 = 8;
              break;
            case 9:
              v13 = 9;
              break;
            case 0xA:
              v13 = 10;
              break;
            case 0xB:
              v13 = 11;
              break;
            case 0xC:
              v13 = 12;
              break;
            case 0xD:
              v13 = 13;
              break;
            case 0xE:
              v13 = 14;
              break;
            case 0xF:
              v13 = 15;
              break;
            case 0x10:
              v13 = 16;
              break;
            case 0x11:
              v13 = 17;
              break;
            case 0x12:
              v13 = 18;
              break;
            case 0x13:
              v13 = 19;
              break;
            case 0x14:
              v13 = 20;
              break;
            case 0x15:
              v13 = 21;
              break;
            case 0x16:
              v13 = 22;
              break;
            case 0x17:
              v13 = 23;
              break;
            case 0x18:
              v13 = 24;
              break;
            case 0x19:
              v13 = 25;
              break;
            case 0x1A:
              v13 = 26;
              break;
            case 0x1B:
              v13 = 27;
              break;
            case 0x1C:
              v13 = 28;
              break;
            case 0x1D:
              v13 = 29;
              break;
            case 0x1E:
              v13 = 30;
              break;
            case 0x1F:
              v13 = 31;
              break;
            case 0x20:
              v13 = 32;
              break;
            case 0x21:
              v13 = 33;
              break;
            case 0x22:
              v13 = 34;
              break;
            case 0x23:
              v13 = 35;
              break;
            case 0x24:
              v13 = 36;
              break;
            case 0x25:
              v13 = 37;
              break;
            case 0x26:
              v13 = 38;
              break;
            case 0x27:
              v13 = 39;
              break;
            case 0x28:
              v13 = 40;
              break;
            default:
              v13 = 41;
              break;
          }
LABEL_60:
          if ( v13 )
            goto LABEL_61;
LABEL_55:
          *(_QWORD *)&v47 = v53;
          *(_QWORD *)&v49 = &v58;
          *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
          src[0] = &off_134B88;
          src[1] = &dword_0 + 2;
          *(_QWORD *)&v46 = 0LL;
          n[0] = (size_t)&v49;
          n[1] = 1LL;
          alloc::fmt::format::format_inner(v64, src);
          a1[1] = std::io::error::Error::new(39LL, v64);
          *a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<std::io::error::Error>(&v47);
          if ( !v10 )
            return v4;
          goto LABEL_62;
      }
    }
    v56 = a1;
    v3 = HIDWORD(v52);
    v14 = (void *)_rust_alloc(0x2000LL, 1LL);
    if ( !v14 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    src[0] = v14;
    src[1] = &stru_1FF8 + 8;
    *(_OWORD *)n = 0LL;
    *(_QWORD *)&v46 = 0LL;
    DWORD2(v46) = v3;
    v8 = _rust_alloc(48LL, 8LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v15 = *(_OWORD *)src;
    v16 = *(_OWORD *)n;
    *(_OWORD *)(v8 + 32) = v46;
    *(_OWORD *)(v8 + 16) = v16;
    *(_OWORD *)v8 = v15;
    if ( v10 )
    {
      v17 = v8;
      _rust_dealloc(v11, v10, 1LL);
      v8 = v17;
    }
    v9 = &off_134B00;
  }
  *(_QWORD *)&v47 = 0LL;
  *((_QWORD *)&v47 + 1) = 8LL;
  v48 = 0LL;
  v52 = v8;
  v53 = (__int64)v9;
  v54 = 0;
  v55 = 0LL;
  v60 = (void *)0x8000000000000001LL;
  while ( 1 )
  {
    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(src, &v52);
    v18 = src[0];
    if ( src[0] == v60 )
    {
      v31 = v52;
      v32 = v53;
      if ( *(_QWORD *)v53 )
        (*(void (__fastcall **)(__int64))v53)(v52);
      v33 = *(_QWORD *)(v32 + 8);
      v4 = v56;
      if ( v33 )
        _rust_dealloc(v31, v33, *(_QWORD *)(v32 + 16));
      v4[2] = v48;
      *(_OWORD *)v4 = v47;
      return v4;
    }
    v19 = src[1];
    v20 = n[0];
    v21 = ++v55;
    if ( src[0] == (void *)0x8000000000000000LL )
      break;
    if ( n[0] )
    {
      alloc::string::String::from_utf8_lossy(src, src[1], n[0]);
      v22 = src[1];
      v23 = n[0];
      if ( n[0] )
      {
        if ( (n[0] & 0x8000000000000000LL) != 0LL )
        {
          v24 = 0LL;
LABEL_108:
          alloc::raw_vec::handle_error(v24, v3);
        }
        v24 = 1LL;
        v25 = _rust_alloc(n[0], 1LL);
        if ( !v25 )
        {
          v3 = v23;
          goto LABEL_108;
        }
        v3 = v25;
      }
      else
      {
        v3 = 1LL;
      }
      memcpy((void *)v3, v22, v23);
      *(_QWORD *)&v49 = v23;
      *((_QWORD *)&v49 + 1) = v3;
      v50 = (__int64 *)v23;
      if ( 2 * (__int64)src[0] )
        _rust_dealloc(v22, src[0], 1LL);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v49, *((_QWORD *)&v47 + 1), v48) )
      {
        if ( (_QWORD)v49 )
          _rust_dealloc(*((_QWORD *)&v49 + 1), v49, 1LL);
      }
      else
      {
        v26 = *((_QWORD *)&v49 + 1);
        v57 = v49;
        v27 = v50;
        v28 = v48;
        if ( v48 == (_QWORD)v47 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v47);
        v29 = *((_QWORD *)&v47 + 1);
        v30 = 3 * v28;
        *(_QWORD *)(*((_QWORD *)&v47 + 1) + 8 * v30) = v57;
        *(_QWORD *)(v29 + 8 * v30 + 8) = v26;
        *(_QWORD *)(v29 + 8 * v30 + 16) = v27;
        v48 = v28 + 1;
      }
    }
    else
    {
      v61 = v21;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v49 = xmmword_13B278;
      v62[0] = &v49;
      v62[1] = <&T as core::fmt::Display>::fmt;
      src[0] = &unk_134C50;
      src[1] = &dword_0 + 2;
      *(_QWORD *)&v46 = 0LL;
      n[0] = (size_t)v62;
      n[1] = 1LL;
      std::io::stdio::_eprint(src);
      *(_QWORD *)&v49 = &v58;
      *((_QWORD *)&v49 + 1) = <&T as core::fmt::Display>::fmt;
      v50 = &v61;
      v51 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      src[0] = &unk_134C70;
      src[1] = &dword_0 + 3;
      *(_QWORD *)&v46 = 0LL;
      n[0] = (size_t)&v49;
      n[1] = 2LL;
      std::io::stdio::_eprint(src);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    }
    if ( v18 )
      _rust_dealloc(v19, v18, 1LL);
  }
  v4 = v56;
  v56[1] = src[1];
  *v4 = 0x8000000000000000LL;
  v34 = v52;
  v35 = v53;
  if ( *(_QWORD *)v53 )
    (*(void (__fastcall **)(__int64, __int64 *, size_t))v53)(v52, &v52, v20);
  v36 = *(_QWORD *)(v35 + 8);
  if ( v36 )
    _rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16));
  v37 = v48;
  if ( v48 )
  {
    v38 = (_QWORD *)(*((_QWORD *)&v47 + 1) + 8LL);
    do
    {
      v39 = *(v38 - 1);
      if ( v39 )
        _rust_dealloc(*v38, v39, 1LL);
      v38 += 3;
      --v37;
    }
    while ( v37 );
  }
  if ( (_QWORD)v47 )
  {
    v40 = (void *)*((_QWORD *)&v47 + 1);
    v41 = 24 * v47;
    v42 = 8LL;
    goto LABEL_63;
  }
  return v4;
}
