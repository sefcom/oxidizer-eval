        __int64 a7)
{
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(); // rcx
  __int64 v17; // rax
  const char *v18; // rdx
  void *v19; // rax
  void *v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // al
  __int64 (__fastcall *v26)(); // rax
  __int64 v27; // rax
  const char *v28; // rdx
  __int64 v29; // rsi
  unsigned int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(); // rdx
  unsigned __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // r14
  char v43; // bl
  unsigned __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int64 v46; // rbp
  char v47; // al
  const void *buffer_with; // rax
  size_t v49; // rdx
  __int64 v50; // r13
  size_t v51; // r12
  __int64 v52; // rax
  _OWORD *v53; // rax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  unsigned int v57; // [rsp+1Ch] [rbp-217Ch] BYREF
  const char *v58; // [rsp+20h] [rbp-2178h] BYREF
  __int64 (__fastcall *v59)(); // [rsp+28h] [rbp-2170h]
  __int64 v60; // [rsp+30h] [rbp-2168h]
  char v61; // [rsp+38h] [rbp-2160h]
  __int64 v62; // [rsp+40h] [rbp-2158h]
  __int64 v63; // [rsp+48h] [rbp-2150h]
  _OWORD *v64; // [rsp+50h] [rbp-2148h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+58h] [rbp-2140h]
  unsigned __int64 v66; // [rsp+60h] [rbp-2138h]
  __int64 v67; // [rsp+68h] [rbp-2130h]
  __int64 v68; // [rsp+70h] [rbp-2128h] BYREF
  void *v69; // [rsp+78h] [rbp-2120h] BYREF
  unsigned __int64 v70; // [rsp+80h] [rbp-2118h]
  __int64 (__fastcall *v71)(); // [rsp+88h] [rbp-2110h]
  _OWORD dest[11]; // [rsp+90h] [rbp-2108h] BYREF
  __int64 v73; // [rsp+140h] [rbp-2058h]
  __int64 v74; // [rsp+148h] [rbp-2050h]
  _OWORD src[513]; // [rsp+150h] [rbp-2048h] BYREF
  char v76; // [rsp+2160h] [rbp-38h]

  *((_QWORD *)&src[257] + 1) = 0LL;
  *((_QWORD *)&src[1] + 1) = 0LL;
  v63 = a6;
  std::sys::pal::unix::fs::stat(src);
  if ( LODWORD(src[0]) == 2 )
  {
    *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
    *(_QWORD *)&dest[0] = 2LL;
    goto LABEL_4;
  }
  memcpy(dest, src, sizeof(dest));
  if ( *(_QWORD *)&dest[0] == 2LL )
  {
LABEL_4:
    core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    dest[0] = xmmword_163010;
    v58 = (const char *)dest;
    v59 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_15C6F0;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v58;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&dest[0] = a3;
    *((_QWORD *)&dest[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[1] = &off_15C770;
    *((_QWORD *)&dest[1] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_15C780;
    *((_QWORD *)&src[0] + 1) = 3LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = dest;
    *((_QWORD *)&src[1] + 1) = 2LL;
    std::io::stdio::_eprint(src);
    v10 = 0LL;
    v11 = v63;
    if ( *(_BYTE *)(v63 + 140) && *(_BYTE *)(v63 + 142) != 2 )
    {
      v12 = a3[1];
      v13 = a3[2];
      v14 = a4;
      v15 = a5;
      return uu_tail::follow::watch::Observer::add_path(v11, v14, v15, v12, v13, 0LL);
    }
    return v10;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v16 = (__int64 (__fastcall *)())a3[2];
    v67 = a3[1];
    v64 = (_OWORD *)v67;
    v71 = v16;
    v65 = v16;
    if ( *a2 )
    {
      v17 = (unsigned __int8)a2[1];
      v18 = (_BYTE *)(&dword_0 + 1);
      if ( !a2[1] )
        v18 = anon_c568fa996e9b1afffbd2fe86e67742f4_18_llvm_893476530518564186;
      v58 = v18;
      v59 = (__int64 (__fastcall *)())(v17 ^ 1);
      *(_QWORD *)&dest[0] = &v58;
      *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[1] = &v64;
      *((_QWORD *)&dest[1] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &anon_c568fa996e9b1afffbd2fe86e67742f4_21_llvm_893476530518564186;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = dest;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_print(src);
      a2[1] = 0;
    }
    v19 = (void *)_rust_alloc(14LL, 1LL);
    if ( !v19 )
      alloc::raw_vec::handle_error(1LL, 14LL);
    qmemcpy(v19, "Is a directory", 14);
    v58 = byte_9 + 5;
    v59 = (__int64 (__fastcall *)())v19;
    v60 = 14LL;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    dest[0] = xmmword_163010;
    v64 = dest;
    v65 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_15C6F0;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v64;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&dest[0] = a3;
    *((_QWORD *)&dest[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[1] = &v58;
    *((_QWORD *)&dest[1] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_15C710;
    *((_QWORD *)&src[0] + 1) = 3LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = dest;
    *((_QWORD *)&src[1] + 1) = 2LL;
    std::io::stdio::_eprint(src);
    if ( *(_BYTE *)(a1 + 76) != 2 )
    {
      v20 = &dword_0 + 1;
      if ( !*(_BYTE *)(a1 + 72) )
        v20 = &unk_23FC9;
      v21 = 24LL;
      if ( *(_BYTE *)(a1 + 72) )
        v21 = 0LL;
      v69 = v20;
      v70 = v21;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      dest[0] = xmmword_163010;
      v64 = dest;
      v65 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_15C6F0;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v64;
      *((_QWORD *)&src[1] + 1) = 1LL;
      std::io::stdio::_eprint(src);
      *(_QWORD *)&dest[0] = a3;
      *((_QWORD *)&dest[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[1] = &v69;
      *((_QWORD *)&dest[1] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_15C740;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = dest;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
    }
    v22 = *(_BYTE *)(v63 + 142);
    v10 = 0LL;
    if ( (v22 & 1) == 0
      || !*(_BYTE *)(v63 + 140)
      || v22 != 2 && (v10 = uu_tail::follow::watch::Observer::add_path(v63, a4, a5, v67, v71, 0LL)) != 0 )
    {
      if ( v58 )
        _rust_dealloc(v59, v58, 1LL);
      return v10;
    }
    if ( v58 )
      _rust_dealloc(v59, v58, 1LL);
    return 0LL;
  }
  if ( (unsigned __int8)uu_tail::paths::Input::is_tailable(a3) )
  {
    std::sys::pal::unix::fs::stat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
      *(_QWORD *)&dest[0] = 2LL;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( *(_QWORD *)&dest[0] != 2LL )
      {
        v73 = *(_QWORD *)&dest[6];
        LODWORD(v67) = 0;
LABEL_45:
        *(_QWORD *)&src[0] = 0x1B600000000LL;
        DWORD2(src[0]) = 1;
        WORD6(src[0]) = 0;
        std::fs::OpenOptions::_open(&v69, src, a4, a5);
        if ( (_DWORD)v69 )
        {
          v24 = v70;
          switch ( v70 & 3 )
          {
            case 0uLL:
              v25 = *(_BYTE *)(v70 + 16);
              goto LABEL_77;
            case 1uLL:
              v25 = *(_BYTE *)(v70 + 15);
              goto LABEL_77;
            case 2uLL:
              if ( HIDWORD(v70) == 1 || HIDWORD(v70) == 13 )
                goto LABEL_69;
              goto LABEL_78;
            case 3uLL:
              switch ( HIDWORD(v70) )
              {
                case 0:
                  v25 = 0;
                  break;
                case 1:
                  v25 = 1;
                  break;
                case 2:
                  v25 = 2;
                  break;
                case 3:
                  v25 = 3;
                  break;
                case 4:
                  v25 = 4;
                  break;
                case 5:
                  v25 = 5;
                  break;
                case 6:
                  v25 = 6;
                  break;
                case 7:
                  v25 = 7;
                  break;
                case 8:
                  v25 = 8;
                  break;
                case 9:
                  v25 = 9;
                  break;
                case 0xA:
                  v25 = 10;
                  break;
                case 0xB:
                  v25 = 11;
                  break;
                case 0xC:
                  v25 = 12;
                  break;
                case 0xD:
                  v25 = 13;
                  break;
                case 0xE:
                  v25 = 14;
                  break;
                case 0xF:
                  v25 = 15;
                  break;
                case 0x10:
                  v25 = 16;
                  break;
                case 0x11:
                  v25 = 17;
                  break;
                case 0x12:
                  v25 = 18;
                  break;
                case 0x13:
                  v25 = 19;
                  break;
                case 0x14:
                  v25 = 20;
                  break;
                case 0x15:
                  v25 = 21;
                  break;
                case 0x16:
                  v25 = 22;
                  break;
                case 0x17:
                  v25 = 23;
                  break;
                case 0x18:
                  v25 = 24;
                  break;
                case 0x19:
                  v25 = 25;
                  break;
                case 0x1A:
                  v25 = 26;
                  break;
                case 0x1B:
                  v25 = 27;
                  break;
                case 0x1C:
                  v25 = 28;
                  break;
                case 0x1D:
                  v25 = 29;
                  break;
                case 0x1E:
                  v25 = 30;
                  break;
                case 0x1F:
                  v25 = 31;
                  break;
                case 0x20:
                  v25 = 32;
                  break;
                case 0x21:
                  v25 = 33;
                  break;
                case 0x22:
                  v25 = 34;
                  break;
                case 0x23:
                  v25 = 35;
                  break;
                case 0x24:
                  v25 = 36;
                  break;
                case 0x25:
                  v25 = 37;
                  break;
                case 0x26:
                  v25 = 38;
                  break;
                case 0x27:
                  v25 = 39;
                  break;
                case 0x28:
                  v25 = 40;
                  break;
                default:
                  v25 = 41;
                  break;
              }
LABEL_77:
              if ( v25 != 1 )
              {
LABEL_78:
                *(_QWORD *)&src[0] = v70;
                if ( !*(_BYTE *)(v63 + 140) )
                  return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                           v24,
                           a3);
                if ( *(_BYTE *)(v63 + 142) == 2 )
                  return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                           v24,
                           a3);
                v36 = v70;
                v10 = uu_tail::follow::watch::Observer::add_path(v63, a4, a5, a3[1], a3[2], 0LL);
                v24 = v36;
                if ( !v10 )
                  return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                           v24,
                           a3);
                core::ptr::drop_in_place<std::io::error::Error>(src);
                return v10;
              }
LABEL_69:
              v68 = v70;
              if ( *(_BYTE *)(v63 + 140) )
              {
                if ( *(_BYTE *)(v63 + 142) != 2 )
                {
                  v67 = v70;
                  v10 = uu_tail::follow::watch::Observer::add_path(v63, a4, a5, a3[1], a3[2], 0LL);
                  v24 = v67;
                  if ( v10 )
                  {
                    core::ptr::drop_in_place<std::io::error::Error>(&v68);
                    return v10;
                  }
                }
              }
              v64 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                                v24,
                                a3);
              _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
              v58 = (const char *)uucore::util_name();
              v59 = v35;
              *(_QWORD *)&dest[0] = &v58;
              *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&dest[1] = &v64;
              *((_QWORD *)&dest[1] + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = &unk_15C618;
              *((_QWORD *)&src[0] + 1) = 3LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = dest;
              *((_QWORD *)&src[1] + 1) = 2LL;
              std::io::stdio::_eprint(src);
              core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v64);
              break;
          }
        }
        else
        {
          v57 = HIDWORD(v69);
          v26 = (__int64 (__fastcall *)())a3[2];
          v74 = a3[1];
          v64 = (_OWORD *)v74;
          v71 = v26;
          v65 = v26;
          if ( *a2 )
          {
            v27 = (unsigned __int8)a2[1];
            v28 = (_BYTE *)(&dword_0 + 1);
            if ( !a2[1] )
              v28 = anon_c568fa996e9b1afffbd2fe86e67742f4_18_llvm_893476530518564186;
            v58 = v28;
            v59 = (__int64 (__fastcall *)())(v27 ^ 1);
            *(_QWORD *)&dest[0] = &v58;
            *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&dest[1] = &v64;
            *((_QWORD *)&dest[1] + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &anon_c568fa996e9b1afffbd2fe86e67742f4_21_llvm_893476530518564186;
            *((_QWORD *)&src[0] + 1) = 3LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = dest;
            *((_QWORD *)&src[1] + 1) = 2LL;
            std::io::stdio::_print(src);
            a2[1] = 0;
          }
          if ( *(_BYTE *)(a1 + 75) )
            goto LABEL_59;
          v29 = 0LL;
          if ( a3[3] == 0x8000000000000000LL )
            v29 = a7;
          if ( !(unsigned __int8)<std::fs::File as uu_tail::paths::FileExtTail>::is_seekable(&v57, v29) )
            goto LABEL_59;
          if ( (_BYTE)v67 )
            core::option::unwrap_failed(&off_15C578);
          if ( v73 )
          {
            uu_tail::bounded_tail(&v57, a1);
            std::io::buffered::bufreader::BufReader<R>::with_capacity(src, 0x2000LL, v57);
            dest[2] = src[2];
            dest[1] = src[1];
            dest[0] = src[0];
          }
          else
          {
LABEL_59:
            v30 = v57;
            v31 = _rust_alloc(0x2000LL, 1LL);
            if ( !v31 )
              alloc::raw_vec::handle_error(1LL, 0x2000LL);
            memset(&dest[1], 0, 24);
            *(_QWORD *)&dest[0] = v31;
            *((_QWORD *)&dest[0] + 1) = 0x2000LL;
            DWORD2(dest[2]) = v30;
            v68 = std::io::stdio::stdout(0x2000LL, 1LL);
            v32 = std::io::stdio::Stdout::lock(&v68);
            v33 = _rust_alloc(0x2000LL, 1LL);
            if ( !v33 )
              alloc::raw_vec::handle_error(1LL, 0x2000LL);
            v58 = (_BYTE *)(&stru_1FF0 + 16);
            v59 = (__int64 (__fastcall *)())v33;
            v60 = 0LL;
            v61 = 0;
            v62 = v32;
            switch ( *(_QWORD *)a1 )
            {
              case 0LL:
                v34 = *(_QWORD *)(a1 + 8);
                LOBYTE(src[3]) = *(_BYTE *)(a1 + 16);
                *((_QWORD *)&src[2] + 1) = v34;
                *(_QWORD *)&src[0] = 0LL;
                *((_QWORD *)&src[0] + 1) = 8LL;
                memset(&src[1], 0, 24);
                v10 = (__int64)uu_tail::chunks::LinesChunkBuffer::fill((unsigned __int64 *)src, (__int64)dest);
                if ( !v10 )
                {
                  v10 = (__int64)uu_tail::chunks::LinesChunkBuffer::print((unsigned __int64 *)src, &v58);
                  if ( !v10 )
                  {
                    <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(src);
                    if ( *(_QWORD *)&src[0] )
                      _rust_dealloc(*((_QWORD *)&src[0] + 1), 8LL * *(_QWORD *)&src[0], 8LL);
                    goto LABEL_166;
                  }
                }
                <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(src);
LABEL_65:
                if ( *(_QWORD *)&src[0] )
                  _rust_dealloc(*((_QWORD *)&src[0] + 1), 8LL * *(_QWORD *)&src[0], 8LL);
                goto LABEL_91;
              case 1LL:
                v37 = *(_QWORD *)(a1 + 8);
                if ( v37 == 1 )
                  goto LABEL_88;
                v40 = v37 - 1;
                v41 = a4;
                v42 = a5;
                v43 = *(_BYTE *)(a1 + 16);
                memset(src, 0, sizeof(src));
                v76 = v43;
                a5 = v42;
                a4 = v41;
                while ( 2 )
                {
                  uu_tail::chunks::LinesChunk::fill((__int64 *)&v64, (__int64)src, (__int64)dest);
                  v10 = (__int64)v65;
                  if ( v64 )
                    goto LABEL_91;
                  if ( v65 == (__int64 (__fastcall *)())((char *)&dword_0 + 1) && v40 > *((_QWORD *)&src[512] + 1) )
                  {
                    v40 -= *((_QWORD *)&src[512] + 1);
                    continue;
                  }
                  break;
                }
                if ( !*(_QWORD *)&src[512] )
                  goto LABEL_166;
                v44 = uu_tail::chunks::LinesChunk::calculate_bytes_offset_from((__int64)src, v40);
                v10 = (__int64)uu_tail::chunks::LinesChunk::print_bytes((__int64)src, &v58, v44);
                if ( v10 )
                  goto LABEL_91;
                if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                       dest,
                       &v58) )
                {
LABEL_89:
                  v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
                  goto LABEL_90;
                }
LABEL_166:
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v58);
                goto LABEL_167;
              case 2LL:
LABEL_88:
                if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                       dest,
                       &v58) )
                {
                  goto LABEL_89;
                }
                goto LABEL_166;
              case 3LL:
                goto LABEL_166;
              case 4LL:
                switch ( *(_QWORD *)(a1 + 8) )
                {
                  case 0LL:
                    src[2] = *(unsigned __int64 *)(a1 + 16);
                    *(_QWORD *)&src[0] = 0LL;
                    *((_QWORD *)&src[0] + 1) = 8LL;
                    src[1] = 0LL;
                    v10 = (__int64)uu_tail::chunks::BytesChunkBuffer::fill((unsigned __int64 *)src, (__int64)dest);
                    if ( v10
                      || (v10 = (__int64)uu_tail::chunks::BytesChunkBuffer::print((unsigned __int64 *)src, &v58)) != 0 )
                    {
                      <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(src);
                      goto LABEL_65;
                    }
                    core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(src);
                    goto LABEL_166;
                  case 1LL:
                    v45 = *(_QWORD *)(a1 + 16);
                    if ( v45 == 1 )
                      goto LABEL_105;
                    v46 = v45 - 1;
                    memset(src, 0, 0x2008uLL);
                    break;
                  case 2LL:
LABEL_105:
                    if ( <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
                           dest,
                           &v58) )
                    {
                      goto LABEL_89;
                    }
                    goto LABEL_166;
                  case 3LL:
                    goto LABEL_166;
                }
                break;
            }
            while ( 1 )
            {
              uu_tail::chunks::BytesChunk::fill(&v64, (__int64)src, (__int64)dest);
              v10 = (__int64)v65;
              if ( v64 )
                goto LABEL_91;
              if ( v65 != (__int64 (__fastcall *)())((char *)&dword_0 + 1) )
              {
                v10 = 0LL;
                goto LABEL_91;
              }
              v47 = v46 != v66;
              if ( v46 > v66 )
                v47 = -1;
              if ( v47 != -1 )
                break;
              v46 -= v66;
            }
            if ( !v47 )
              goto LABEL_165;
            buffer_with = (const void *)uu_tail::chunks::BytesChunk::get_buffer_with((__int64)src, v46);
            v50 = v60;
            if ( v49 < (unsigned __int64)&v58[-v60] )
            {
              v51 = v49;
              memcpy((char *)v59 + v60, buffer_with, v49);
              v60 = v51 + v50;
              goto LABEL_165;
            }
            v52 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v58, buffer_with, v49);
            if ( !v52 )
LABEL_165:
              JUMPOUT(0xBEF25LL);
            v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
LABEL_90:
            v10 = v39;
LABEL_91:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v58);
            if ( v10 )
            {
              if ( *((_QWORD *)&dest[0] + 1) )
                _rust_dealloc(*(_QWORD *)&dest[0], *((_QWORD *)&dest[0] + 1), 1LL);
              close(SDWORD2(dest[2]));
              return v10;
            }
          }
LABEL_167:
          src[2] = dest[2];
          src[1] = dest[1];
          src[0] = dest[0];
          v53 = (_OWORD *)_rust_alloc(48LL, 8LL);
          if ( !v53 )
            alloc::alloc::handle_alloc_error(8LL, 48LL);
          v54 = src[0];
          v55 = src[1];
          v53[2] = src[2];
          v53[1] = v55;
          *v53 = v54;
          v10 = uu_tail::follow::watch::Observer::add_path(v63, a4, a5, v74, v71, v53);
          if ( v10 )
            return v10;
        }
        return 0LL;
      }
    }
    v23 = core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
    LOBYTE(v23) = 1;
    LODWORD(v67) = v23;
    goto LABEL_45;
  }
  v10 = 0LL;
  v11 = v63;
  if ( *(_BYTE *)(v63 + 140) && *(_BYTE *)(v63 + 142) != 2 )
  {
    v12 = a3[1];
    v13 = a3[2];
    v14 = a4;
    v15 = a5;
    return uu_tail::follow::watch::Observer::add_path(v11, v14, v15, v12, v13, 0LL);
  }
  return v10;
}
