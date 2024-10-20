__int64 __fastcall uu_fold::fold(__int64 a1, __int64 a2, char a3, int a4, __int64 (__fastcall *a5)())
{
  _BYTE *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // rbx
  int *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(); // r15
  __int64 (__fastcall **v14)(); // rdi
  __int64 (__fastcall *v15)(); // rcx
  __int64 (__fastcall *v16)(); // rax
  __int64 (__fastcall *v17)(); // r12
  unsigned __int64 v18; // rbx
  __int64 (__fastcall **v19)(); // rcx
  unsigned __int8 v20; // al
  char v21; // al
  unsigned int v22; // eax
  char v23; // dl
  char v24; // si
  char v25; // r8
  int v26; // esi
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rcx
  _BYTE *v30; // r12
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 (__fastcall **v33)(); // rbx
  int *p_fd; // r15
  __int64 v35; // rax
  __int64 (__fastcall **v36)(); // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  __int64 (__fastcall *v40)(); // rbp
  unsigned __int8 *v41; // r14
  unsigned int v42; // r12d
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  unsigned __int8 v46; // r12
  __int64 (__fastcall *v47)(); // r13
  __int64 (__fastcall **v48)(); // rdi
  __int64 (__fastcall *v49)(); // rsi
  size_t v51; // r13
  __int64 (__fastcall *v52)(); // r13
  unsigned int v53; // eax
  bool v54; // zf
  __int64 (__fastcall *v55)(); // rsi
  int v56; // eax
  __int64 (__fastcall *v57)(); // rcx
  __int64 (__fastcall *v58)(); // r13
  __int64 v59; // rbx
  __int64 v60; // rbx
  char **v62; // r8
  __int64 (__fastcall *v63)(); // [rsp+10h] [rbp-138h] BYREF
  __int64 (__fastcall **v64)(); // [rsp+18h] [rbp-130h]
  __int64 (__fastcall *v65)(); // [rsp+20h] [rbp-128h] BYREF
  int fd; // [rsp+2Ch] [rbp-11Ch] BYREF
  __int64 src; // [rsp+30h] [rbp-118h] BYREF
  __int64 v68; // [rsp+38h] [rbp-110h]
  __int64 (__fastcall ***v69)(); // [rsp+40h] [rbp-108h]
  __int128 v70; // [rsp+48h] [rbp-100h]
  __int64 (__fastcall **v71)(); // [rsp+60h] [rbp-E8h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+68h] [rbp-E0h]
  __int64 v73; // [rsp+70h] [rbp-D8h]
  __int64 (__fastcall *v74)(); // [rsp+78h] [rbp-D0h]
  int v75; // [rsp+80h] [rbp-C8h]
  int v76; // [rsp+84h] [rbp-C4h]
  __int64 (__fastcall ***v77)(); // [rsp+88h] [rbp-C0h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+90h] [rbp-B8h]
  __int64 v79; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-A8h]
  __int64 (__fastcall ***v81)(); // [rsp+A8h] [rbp-A0h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+B0h] [rbp-98h]
  char **v83; // [rsp+B8h] [rbp-90h]
  __int64 v84; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-78h]
  __int128 v87; // [rsp+D8h] [rbp-70h]
  __int64 v88; // [rsp+E8h] [rbp-60h]
  int *v89; // [rsp+F0h] [rbp-58h]
  __int64 (__fastcall **v90)(); // [rsp+F8h] [rbp-50h]
  __int64 v91; // [rsp+100h] [rbp-48h]
  unsigned __int64 v92; // [rsp+108h] [rbp-40h]
  __int64 v93; // [rsp+110h] [rbp-38h]

  v76 = a4;
  if ( !a2 )
    return 0LL;
  v91 = a1 + 24 * a2;
  if ( !a3 )
  {
    v93 = (unsigned __int8)v76;
    v73 = 0LL;
    v83 = &off_E3F30;
    v92 = (unsigned __int64)a5;
    while ( 1 )
    {
      v30 = *(_BYTE **)(a1 + 8);
      v80 = a1;
      v31 = *(_QWORD *)(a1 + 16);
      if ( v31 == 1 && *v30 == 45 )
      {
        v32 = std::io::stdio::stdin();
        v84 = v32;
        LOBYTE(v32) = 1;
        v75 = v32;
        v33 = (__int64 (__fastcall **)())&unk_E3E78;
        p_fd = (int *)&v84;
      }
      else
      {
        src = 0x1B600000000LL;
        WORD2(v68) = 0;
        LODWORD(v68) = 1;
        std::fs::OpenOptions::_open(&v63, &src, v30, v31);
        if ( (_DWORD)v63 )
          return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                   v64,
                   v30,
                   v31);
        fd = HIDWORD(v63);
        v75 = 0;
        v33 = &off_E3E20;
        p_fd = &fd;
      }
      v35 = _rust_alloc(0x2000LL, 1LL);
      if ( !v35 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      v80 += 24LL;
      v85 = v35;
      v86 = 0x2000LL;
      v87 = 0LL;
      v88 = 0LL;
      v89 = p_fd;
      v90 = v33;
      v77 = 0LL;
      v78 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v79 = 0LL;
      v63 = 0LL;
      v64 = (__int64 (__fastcall **)())(&dword_0 + 1);
      v36 = &v65;
      v37 = 0LL;
      v38 = 0LL;
      while ( 1 )
      {
        *v36 = 0LL;
        if ( std::io::append_to_string(&v77, &v85) )
        {
          v59 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v39);
          if ( v63 )
            _rust_dealloc(v64, v63, 1LL);
          if ( v77 )
            _rust_dealloc(v78, v77, 1LL);
          v73 = v59;
          if ( v86 )
            _rust_dealloc(v85, v86, 1LL);
          if ( !(_BYTE)v75 )
            goto LABEL_193;
          return v73;
        }
        if ( !v39 )
          break;
        if ( v79 )
        {
          v40 = v78;
          v41 = (unsigned __int8 *)v78 + v79;
          while ( 1 )
          {
LABEL_95:
            v42 = *(unsigned __int8 *)v40;
            if ( (v42 & 0x80u) != 0 )
            {
              v43 = v42 & 0x1F;
              v44 = *((_BYTE *)v40 + 1) & 0x3F;
              if ( (unsigned __int8)v42 <= 0xDFu )
              {
                v40 = (__int64 (__fastcall *)())((char *)v40 + 2);
                v42 = v44 | (v43 << 6);
                if ( v42 == 10 )
                  goto LABEL_167;
              }
              else
              {
                v45 = (v44 << 6) | *((_BYTE *)v40 + 2) & 0x3F;
                if ( (unsigned __int8)v42 < 0xF0u )
                {
                  v40 = (__int64 (__fastcall *)())((char *)v40 + 3);
                  v42 = (v43 << 12) | v45;
                  if ( v42 == 10 )
                  {
LABEL_167:
                    v58 = v65;
                    v71 = v64;
                    v72 = v65;
                    v81 = &v71;
                    v82 = <&T as core::fmt::Display>::fmt;
                    src = (__int64)&unk_E3F10;
                    v68 = 2LL;
                    v69 = (__int64 (__fastcall ***)())&v81;
                    v70 = 1uLL;
                    std::io::stdio::_print(&src);
                    alloc::string::String::replace_range(&v63, v58, 1LL, 0LL);
                    v57 = v65;
                    v37 = 0LL;
                    v38 = (unsigned __int64)v65;
                    goto LABEL_168;
                  }
                }
                else
                {
                  v46 = *((_BYTE *)v40 + 3);
                  v40 = (__int64 (__fastcall *)())((char *)v40 + 4);
                  v42 = ((v43 & 7) << 18) | (v45 << 6) | v46 & 0x3F;
                  if ( v42 == 10 )
                    goto LABEL_167;
                }
              }
            }
            else
            {
              v40 = (__int64 (__fastcall *)())((char *)v40 + 1);
              if ( v42 == 10 )
                goto LABEL_167;
            }
            if ( v42 == 1114112 )
              goto LABEL_166;
            if ( v38 >= v92 )
            {
              v47 = (__int64 (__fastcall *)())((char *)v74 + 1);
              v48 = v64;
              v49 = v65;
              if ( !v37 )
                v47 = v65;
              if ( v47 )
              {
                if ( (unsigned __int64)v47 >= (unsigned __int64)v65 )
                {
                  if ( v47 != v65 )
                    goto LABEL_202;
                }
                else if ( *((char *)v47 + (_QWORD)v64) <= -65 )
                {
                  goto LABEL_202;
                }
              }
              v71 = v64;
              v72 = v47;
              v81 = &v71;
              v82 = <&T as core::fmt::Display>::fmt;
              src = (__int64)&unk_E3F10;
              v68 = 2LL;
              v69 = (__int64 (__fastcall ***)())&v81;
              v70 = 1uLL;
              std::io::stdio::_print(&src);
              alloc::string::String::replace_range(&v63, v47, 1LL, 0LL);
              v38 = (unsigned __int64)v65;
              v37 = 0LL;
            }
            if ( v42 == 8 )
            {
              if ( v38-- == 0 )
                v38 = 0LL;
              goto LABEL_141;
            }
            if ( v42 == 9 )
            {
              v38 = (v38 & 0xFFFFFFFFFFFFFFF8LL) + 8;
              v49 = v65;
              if ( v38 > v92 && v65 )
              {
                v47 = (__int64 (__fastcall *)())((char *)v74 + 1);
                if ( !v37 )
                  v47 = v65;
                v48 = v64;
                if ( v47 )
                {
                  if ( (unsigned __int64)v47 >= (unsigned __int64)v65 )
                  {
                    if ( v47 != v65 )
                    {
LABEL_201:
                      v83 = &off_E3F48;
LABEL_202:
                      core::str::slice_error_fail(v48, v49, 0LL, v47, v83);
                    }
                  }
                  else if ( *((char *)v47 + (_QWORD)v64) <= -65 )
                  {
                    goto LABEL_201;
                  }
                }
                v71 = v64;
                v72 = v47;
                v81 = &v71;
                v82 = <&T as core::fmt::Display>::fmt;
                src = (__int64)&unk_E3F10;
                v68 = 2LL;
                v69 = (__int64 (__fastcall ***)())&v81;
                v70 = 1uLL;
                std::io::stdio::_print(&src);
                alloc::string::String::replace_range(&v63, v47, 1LL, 0LL);
                v49 = v65;
              }
              v37 = v93;
              v74 = v49;
              goto LABEL_141;
            }
            if ( v42 != 13 )
              break;
            v38 = 0LL;
LABEL_141:
            v52 = v65;
            if ( v65 == v63 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v63);
            *((_BYTE *)v52 + (_QWORD)v64) = v42;
            v65 = (__int64 (__fastcall *)())((char *)v52 + 1);
            if ( (char *)v40 == (char *)v41 )
              goto LABEL_166;
          }
          if ( !(_BYTE)v76 )
            goto LABEL_133;
          if ( v42 - 9 < 5 || v42 == 32 )
            goto LABEL_132;
          if ( v42 <= 0x7F )
          {
            ++v38;
            goto LABEL_141;
          }
          v53 = v42 >> 8;
          if ( v42 >> 8 > 0x1F )
          {
            if ( v53 != 32 )
            {
              if ( v53 != 48 )
                goto LABEL_165;
              v54 = v42 == 12288;
              goto LABEL_160;
            }
            LOBYTE(v56) = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v42] >> 1;
          }
          else
          {
            if ( v53 )
            {
              if ( v53 != 22 )
                goto LABEL_165;
              v54 = v42 == 5760;
LABEL_160:
              if ( !v54 )
                goto LABEL_165;
LABEL_132:
              v37 = 1LL;
              v74 = v65;
LABEL_133:
              ++v38;
              if ( v42 < 0x80 )
                goto LABEL_141;
LABEL_134:
              LODWORD(src) = 0;
              if ( v42 >= 0x800 )
              {
                if ( v42 >= (unsigned int)&unk_10000 )
                {
                  LOBYTE(src) = (v42 >> 18) | 0xF0;
                  BYTE1(src) = (v42 >> 12) & 0x3F | 0x80;
                  BYTE2(src) = (v42 >> 6) & 0x3F | 0x80;
                  BYTE3(src) = v42 & 0x3F | 0x80;
                  v51 = 4LL;
                }
                else
                {
                  LOBYTE(src) = (v42 >> 12) | 0xE0;
                  BYTE1(src) = (v42 >> 6) & 0x3F | 0x80;
                  BYTE2(src) = v42 & 0x3F | 0x80;
                  v51 = 3LL;
                }
              }
              else
              {
                LOBYTE(src) = (v42 >> 6) | 0xC0;
                BYTE1(src) = v42 & 0x3F | 0x80;
                v51 = 2LL;
              }
              v55 = v65;
              if ( (char *)v63 - (char *)v65 < v51 )
              {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v63, v65, v51);
                v55 = v65;
              }
              memcpy((char *)v55 + (_QWORD)v64, &src, v51);
              v65 = (__int64 (__fastcall *)())((char *)v65 + v51);
              if ( (char *)v40 == (char *)v41 )
                goto LABEL_166;
              goto LABEL_95;
            }
            v56 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v42];
          }
          if ( (v56 & 1) == 0 )
          {
LABEL_165:
            ++v38;
            goto LABEL_134;
          }
          goto LABEL_132;
        }
LABEL_166:
        v57 = v65;
LABEL_168:
        v36 = (__int64 (__fastcall **)())&v79;
        if ( v57 )
        {
          v71 = &v63;
          v72 = <alloc::string::String as core::fmt::Display>::fmt;
          src = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
          v68 = 1LL;
          v69 = &v71;
          v70 = 1uLL;
          std::io::stdio::_print(&src);
          v65 = 0LL;
          v36 = (__int64 (__fastcall **)())&v79;
        }
      }
      if ( v63 )
        _rust_dealloc(v64, v63, 1LL);
      if ( v77 )
        _rust_dealloc(v78, v77, 1LL);
      if ( v86 )
        _rust_dealloc(v85, v86, 1LL);
      if ( !(_BYTE)v75 )
        close(fd);
      a1 = v80;
      if ( v80 == v91 )
        return v73;
    }
  }
  v73 = 0LL;
  while ( 2 )
  {
    v6 = *(_BYTE **)(a1 + 8);
    v80 = a1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 == 1 && *v6 == 45 )
    {
      v8 = std::io::stdio::stdin();
      v84 = v8;
      LOBYTE(v8) = 1;
      LODWORD(v74) = v8;
      v9 = (__int64 (__fastcall **)())&unk_E3E78;
      v10 = (int *)&v84;
    }
    else
    {
      src = 0x1B600000000LL;
      WORD2(v68) = 0;
      LODWORD(v68) = 1;
      std::fs::OpenOptions::_open(&v63, &src, v6, v7);
      if ( (_DWORD)v63 )
        return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                 v64,
                 v6,
                 v7);
      fd = HIDWORD(v63);
      LODWORD(v74) = 0;
      v9 = &off_E3E20;
      v10 = &fd;
    }
    v11 = _rust_alloc(0x2000LL, 1LL);
    if ( !v11 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    v80 += 24LL;
    v85 = v11;
    v86 = 0x2000LL;
    v87 = 0LL;
    v88 = 0LL;
    v89 = v10;
    v90 = v9;
    v63 = 0LL;
    v64 = (__int64 (__fastcall **)())(&dword_0 + 1);
LABEL_12:
    v65 = 0LL;
    if ( !std::io::append_to_string(&v63, &v85) )
    {
      if ( !v12 )
      {
        if ( v63 )
          _rust_dealloc(v64, v63, 1LL);
        if ( v86 )
          _rust_dealloc(v85, v86, 1LL);
        if ( !(_BYTE)v74 )
          close(fd);
        a1 = v80;
        if ( v80 != v91 )
          continue;
        return v73;
      }
      v13 = v65;
      if ( !v65 )
        goto LABEL_12;
      v14 = v64;
      if ( v65 == (__int64 (__fastcall *)())((char *)&dword_0 + 1) && *(_BYTE *)v64 == 10 )
      {
        src = (__int64)&off_E3ED0;
        v68 = 1LL;
        v69 = (__int64 (__fastcall ***)())&byte_8;
        v70 = 0LL;
        std::io::stdio::_print(&src);
        goto LABEL_12;
      }
      v15 = a5;
      if ( (unsigned __int64)v65 < (unsigned __int64)a5 )
        v15 = v65;
      v16 = v65;
      v17 = v15;
      v18 = 0LL;
LABEL_21:
      if ( v18 )
      {
        if ( v18 >= (unsigned __int64)v16 )
        {
          if ( (__int64 (__fastcall *)())v18 != v16 )
            goto LABEL_197;
        }
        else if ( *((char *)v14 + v18) < -64 )
        {
          goto LABEL_197;
        }
      }
      if ( v15 )
      {
        if ( (unsigned __int64)v15 >= (unsigned __int64)v16 )
        {
          if ( v15 != v16 )
          {
LABEL_197:
            v17 = v16;
            v62 = &off_E3EE0;
            goto LABEL_198;
          }
        }
        else if ( *((char *)v15 + (_QWORD)v14) < -64 )
        {
          goto LABEL_197;
        }
      }
      v14 = (__int64 (__fastcall **)())((char *)v14 + v18);
      if ( (unsigned __int64)v15 >= (unsigned __int64)v13 || !(_BYTE)v76 || !v17 )
      {
LABEL_60:
        v71 = v14;
        v15 = v17;
        goto LABEL_67;
      }
      v19 = (__int64 (__fastcall **)())((char *)v17 + (_QWORD)v14);
      while ( 1 )
      {
        v22 = *((unsigned __int8 *)v19 - 1);
        if ( (v22 & 0x80u) != 0 )
        {
          v23 = *((_BYTE *)v19 - 2);
          if ( v23 > -65 )
          {
            v19 = (__int64 (__fastcall **)())((char *)v19 - 2);
            v27 = v23 & 0x1F;
          }
          else
          {
            v24 = *((_BYTE *)v19 - 3);
            if ( v24 > -65 )
            {
              v19 = (__int64 (__fastcall **)())((char *)v19 - 3);
              v26 = v24 & 0xF;
            }
            else
            {
              v25 = *((_BYTE *)v19 - 4);
              v19 = (__int64 (__fastcall **)())((char *)v19 - 4);
              v26 = ((v25 & 7) << 6) | v24 & 0x3F;
            }
            v27 = (v26 << 6) | v23 & 0x3F;
          }
          v22 = (v27 << 6) | v22 & 0x3F;
          if ( v22 == 13 )
            goto LABEL_38;
        }
        else
        {
          v19 = (__int64 (__fastcall **)())((char *)v19 - 1);
          if ( v22 == 13 )
            goto LABEL_38;
        }
        if ( v22 - 9 < 4 || v22 == 32 )
        {
LABEL_61:
          v29 = (char *)v19 - (char *)v14;
          if ( v29 == -1 )
            core::str::traits::str_index_overflow_fail(&off_E3EF8);
          v15 = (__int64 (__fastcall *)())(v29 + 1);
          if ( (unsigned __int64)v15 >= (unsigned __int64)v17 )
          {
            if ( v15 != v17 )
              goto LABEL_199;
          }
          else if ( *((char *)v15 + (_QWORD)v14) < -64 )
          {
LABEL_199:
            v18 = 0LL;
            v62 = &off_E3EF8;
LABEL_198:
            core::str::slice_error_fail(v14, v17, v18, v15, v62);
          }
          v71 = v14;
LABEL_67:
          v72 = v15;
          if ( v15 != (__int64 (__fastcall *)())((char *)&dword_0 + 1) || *(_BYTE *)v14 != 10 )
          {
            v18 += (unsigned __int64)v15;
            v17 = (__int64 (__fastcall *)())((char *)v13 - v18);
            if ( (unsigned __int64)v13 > v18 )
            {
              v77 = &v71;
              v78 = <&T as core::fmt::Display>::fmt;
              src = (__int64)&unk_E3F10;
              v68 = 2LL;
              v69 = (__int64 (__fastcall ***)())&v77;
              v70 = 1uLL;
              std::io::stdio::_print(&src);
              if ( (unsigned __int64)v17 >= (unsigned __int64)a5 )
                v17 = a5;
              v14 = v64;
              v16 = v65;
              v15 = (__int64 (__fastcall *)())((char *)v17 + v18);
              if ( __CFADD__(v18, v17) )
                goto LABEL_197;
              goto LABEL_21;
            }
            v77 = &v71;
            v78 = <&T as core::fmt::Display>::fmt;
            src = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
            v68 = 1LL;
            v69 = (__int64 (__fastcall ***)())&v77;
            v70 = 1uLL;
            std::io::stdio::_print(&src);
          }
          goto LABEL_12;
        }
        if ( v22 >= 0x80 )
        {
          v28 = v22 >> 8;
          if ( v22 >> 8 > 0x1F )
          {
            if ( v28 == 32 )
            {
              v20 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v22] >> 1;
              goto LABEL_36;
            }
            if ( v28 == 48 )
            {
              v21 = v22 == 12288;
LABEL_37:
              if ( v21 )
                goto LABEL_61;
            }
          }
          else
          {
            if ( !v28 )
            {
              v20 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v22];
LABEL_36:
              v21 = v20 & 1;
              goto LABEL_37;
            }
            if ( v28 == 22 )
            {
              v21 = v22 == 5760;
              goto LABEL_37;
            }
          }
        }
LABEL_38:
        if ( v19 == v14 )
          goto LABEL_60;
      }
    }
    break;
  }
  v60 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v12);
  if ( v63 )
    _rust_dealloc(v64, v63, 1LL);
  v73 = v60;
  if ( v86 )
    _rust_dealloc(v85, v86, 1LL);
  if ( (_BYTE)v74 )
    return v73;
LABEL_193:
  close(fd);
  return v73;
}
