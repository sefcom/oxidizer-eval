__int64 __fastcall uu_truncate::truncate(char a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v14; // r15
  __int64 v15; // rbx
  _OWORD *v16; // rax
  __int64 v17; // rbp
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int128 *v23; // rbx
  __int64 (__fastcall *v24)(); // r14
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r13
  _OWORD *v29; // rax
  __int64 v30; // rbx
  __int128 *v31; // rbx
  __int64 (__fastcall *v32)(); // r15
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r12
  unsigned __int64 v38; // rsi
  __int64 v39; // rcx
  bool v40; // cf
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  _OWORD *v44; // rax
  _OWORD *v45; // rax
  _OWORD *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int128 v49; // kr10_16
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r15
  void *v54; // rax
  void *v55; // rbx
  _QWORD *v56; // rax
  __int64 v57; // r14
  __int64 v58; // rcx
  _OWORD *v59; // rax
  __int128 v60; // xmm0
  __int64 v61; // rbx
  _OWORD *v62; // rax
  _OWORD *v63; // rbx
  _QWORD *v64; // rax
  __int128 v66; // kr20_16
  __int64 v67; // r13
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rbx
  __int64 v71; // r13
  _OWORD *v72; // rax
  char **v73; // rdi
  __int64 v74; // [rsp+8h] [rbp-170h]
  __int64 v75; // [rsp+8h] [rbp-170h]
  __int64 v76; // [rsp+10h] [rbp-168h]
  unsigned __int64 v77; // [rsp+18h] [rbp-160h]
  __int128 v78; // [rsp+20h] [rbp-158h] BYREF
  __int128 v79; // [rsp+30h] [rbp-148h]
  __int128 v80; // [rsp+48h] [rbp-130h] BYREF
  __int128 v81; // [rsp+58h] [rbp-120h]
  __int64 v82; // [rsp+68h] [rbp-110h]
  __int128 *v83; // [rsp+70h] [rbp-108h] BYREF
  __int64 (__fastcall *v84)(); // [rsp+78h] [rbp-100h]
  __int64 v85; // [rsp+80h] [rbp-F8h]
  __int128 *v86; // [rsp+88h] [rbp-F0h] BYREF
  __int64 (__fastcall *v87)(); // [rsp+90h] [rbp-E8h]
  __int128 dest; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-D0h]
  __int64 v90; // [rsp+B8h] [rbp-C0h]
  int v91; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v92; // [rsp+E8h] [rbp-90h]

  v7 = a1 ^ 1;
  v8 = *a3;
  v9 = *a4;
  v76 = *a4;
  if ( *a3 != 0x8000000000000000LL )
  {
    v14 = a3[2];
    v75 = a3[1];
    if ( v9 == 0x8000000000000000LL )
    {
      std::sys::pal::unix::fs::stat(&dest);
      if ( (_DWORD)dest == 2 )
      {
        v15 = *((_QWORD *)&dest + 1);
        if ( (unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&dest + 1)) )
        {
          *(_QWORD *)&dest = 0LL;
          *((_QWORD *)&dest + 1) = 1LL;
          *(_QWORD *)&v89 = 0LL;
          *((_QWORD *)&v89 + 1) = v15;
          v16 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v16 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v17 = (__int64)v16;
          v18 = dest;
          v16[1] = v89;
          *v16 = v18;
LABEL_28:
          v30 = v75;
          if ( !v8 )
            return v17;
        }
        else
        {
          *(_QWORD *)&v78 = 0LL;
          *((_QWORD *)&v78 + 1) = v75;
          *(_QWORD *)&v79 = v14;
          BYTE8(v79) = 1;
          v83 = &v78;
          v84 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &off_E08A0;
          *((_QWORD *)&dest + 1) = 2LL;
          v90 = 0LL;
          *(_QWORD *)&v89 = &v83;
          *((_QWORD *)&v89 + 1) = 1LL;
          alloc::fmt::format::format_inner(&v80, &dest);
          v49 = v80;
          v50 = v81;
          v51 = _rust_alloc(32LL, 8LL);
          if ( !v51 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v17 = v51;
          *(_OWORD *)v51 = v49;
          *(_QWORD *)(v51 + 16) = v50;
          *(_DWORD *)(v51 + 24) = 1;
          v52 = v15;
          v30 = v75;
          core::ptr::drop_in_place<std::io::error::Error>(v52, 8LL);
          if ( !v8 )
            return v17;
        }
      }
      else
      {
        v27 = v92;
        v28 = 24 * a6;
        while ( v28 )
        {
          v29 = uu_truncate::file_truncate(*(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16), v7, v27);
          a5 += 24LL;
          v28 -= 24LL;
          if ( v29 )
          {
            v17 = (__int64)v29;
            goto LABEL_28;
          }
        }
        v30 = v75;
        v17 = 0LL;
        if ( !v8 )
          return v17;
      }
      v48 = v30;
      goto LABEL_98;
    }
    v19 = a4[2];
    v82 = a4[1];
    uu_truncate::parse_mode_and_size(&v80, v82, v19);
    if ( (_DWORD)v80 != 3 )
    {
      v79 = v81;
      v78 = v80;
      v86 = &v78;
      v87 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_E0890;
      *((_QWORD *)&dest + 1) = 1LL;
      v90 = 0LL;
      *(_QWORD *)&v89 = &v86;
      *((_QWORD *)&v89 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v83, &dest);
      v31 = v83;
      v32 = v84;
      v33 = v85;
      v34 = _rust_alloc(32LL, 8LL);
      if ( !v34 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v17 = v34;
      *(_QWORD *)v34 = v31;
      *(_QWORD *)(v34 + 8) = v32;
      *(_QWORD *)(v34 + 16) = v33;
      *(_DWORD *)(v34 + 24) = 1;
      if ( *((_QWORD *)&v78 + 1) )
        _rust_dealloc(v79, *((_QWORD *)&v78 + 1), 1LL);
      goto LABEL_94;
    }
    v20 = *((_QWORD *)&v80 + 1);
    if ( *((_QWORD *)&v80 + 1) )
    {
      v77 = v81;
      if ( DWORD2(v80) != 5 && DWORD2(v80) != 6 || (_QWORD)v81 )
      {
        std::sys::pal::unix::fs::stat(&dest);
        if ( (_DWORD)dest == 2 )
        {
          v22 = *((_QWORD *)&dest + 1);
          if ( (unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&dest + 1)) )
          {
            v17 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v22,
                    v75);
          }
          else
          {
            *(_QWORD *)&v78 = 0LL;
            *((_QWORD *)&v78 + 1) = v75;
            *(_QWORD *)&v79 = v14;
            BYTE8(v79) = 1;
            v83 = &v78;
            v84 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &off_E08A0;
            *((_QWORD *)&dest + 1) = 2LL;
            v90 = 0LL;
            *(_QWORD *)&v89 = &v83;
            *((_QWORD *)&v89 + 1) = 1LL;
            alloc::fmt::format::format_inner(&v80, &dest);
            v66 = v80;
            v67 = v81;
            v68 = _rust_alloc(32LL, 8LL);
            if ( !v68 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v17 = v68;
            *(_OWORD *)v68 = v66;
            *(_QWORD *)(v68 + 16) = v67;
            *(_DWORD *)(v68 + 24) = 1;
            core::ptr::drop_in_place<std::io::error::Error>(v22, 8LL);
          }
          goto LABEL_94;
        }
        switch ( v20 )
        {
          case 1LL:
            v61 = v77 + v92;
            goto LABEL_121;
          case 2LL:
            v61 = 0LL;
            if ( v92 >= v77 )
              v61 = v92 - v77;
            goto LABEL_121;
          case 3LL:
            v61 = v77;
            if ( v92 < v77 )
              v61 = v92;
            goto LABEL_121;
          case 4LL:
            v61 = v77;
            if ( v92 > v77 )
              v61 = v92;
            goto LABEL_121;
          case 5LL:
            if ( v77 )
            {
              if ( (v77 | v92) >> 32 )
                v69 = v92 % v77;
              else
                v69 = (unsigned int)v92 % (unsigned int)v77;
              v61 = v92 - v69;
              goto LABEL_121;
            }
            v73 = &off_E0798;
            break;
          case 6LL:
            if ( v77 )
            {
              if ( (v77 | v92) >> 32 )
                v70 = v92 % v77;
              else
                v70 = (unsigned int)v92 % (unsigned int)v77;
              v61 = v92 + v70;
LABEL_121:
              v71 = 24 * a6;
              while ( v71 )
              {
                v72 = uu_truncate::file_truncate(*(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16), v7, v61);
                a5 += 24LL;
                v71 -= 24LL;
                if ( v72 )
                {
                  v17 = (__int64)v72;
                  goto LABEL_94;
                }
              }
              v17 = 0LL;
LABEL_94:
              if ( v76 )
                _rust_dealloc(v82, v76, 1LL);
              if ( v8 )
              {
                v48 = v75;
                goto LABEL_98;
              }
              return v17;
            }
            v73 = &off_E07B0;
            break;
        }
        core::panicking::panic_const::panic_const_rem_by_zero(v73, 0LL, v21, v92);
      }
      v53 = 16LL;
      v62 = (_OWORD *)_rust_alloc(16LL, 1LL);
      if ( v62 )
      {
        v63 = v62;
        *v62 = xmmword_101D0;
        v64 = (_QWORD *)_rust_alloc(32LL, 8LL);
        if ( !v64 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v17 = (__int64)v64;
        *v64 = 16LL;
        v64[1] = v63;
        v64[2] = 16LL;
LABEL_93:
        *(_DWORD *)(v17 + 24) = 1;
        goto LABEL_94;
      }
    }
    else
    {
      v53 = 55LL;
      v54 = (void *)_rust_alloc(55LL, 1LL);
      if ( v54 )
      {
        v55 = v54;
        qmemcpy(v54, "you must specify a relative '--size' with '--reference'", 55);
        v56 = (_QWORD *)_rust_alloc(32LL, 8LL);
        if ( !v56 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v17 = (__int64)v56;
        *v56 = 55LL;
        v56[1] = v55;
        v56[2] = 55LL;
        goto LABEL_93;
      }
    }
    alloc::raw_vec::handle_error(1LL, v53);
  }
  if ( v9 == 0x8000000000000000LL )
    core::panicking::panic(aInternalErrorE_3, 40LL, &off_E0968);
  v11 = a4[2];
  v82 = a4[1];
  uu_truncate::parse_mode_and_size(&v80, v82, v11);
  if ( (_DWORD)v80 != 3 )
  {
    v79 = v81;
    v78 = v80;
    v86 = &v78;
    v87 = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_E0890;
    *((_QWORD *)&dest + 1) = 1LL;
    v90 = 0LL;
    *(_QWORD *)&v89 = &v86;
    *((_QWORD *)&v89 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v83, &dest);
    v23 = v83;
    v24 = v84;
    v25 = v85;
    v26 = _rust_alloc(32LL, 8LL);
    if ( !v26 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v17 = v26;
    *(_QWORD *)v26 = v23;
    *(_QWORD *)(v26 + 8) = v24;
    *(_QWORD *)(v26 + 16) = v25;
    *(_DWORD *)(v26 + 24) = 1;
    if ( *((_QWORD *)&v78 + 1) )
      _rust_dealloc(v79, *((_QWORD *)&v78 + 1), 1LL);
    goto LABEL_66;
  }
  v12 = v81;
  if ( *((_QWORD *)&v80 + 1) == 5LL || DWORD2(v80) == 6 )
  {
    if ( (_QWORD)v81 )
    {
      v74 = *((_QWORD *)&v80 + 1);
      goto LABEL_34;
    }
    v45 = (_OWORD *)_rust_alloc(16LL, 1LL);
    if ( !v45 )
      alloc::raw_vec::handle_error(1LL, 16LL);
    v46 = v45;
    *v45 = xmmword_101D0;
    v47 = _rust_alloc(32LL, 8LL);
    if ( !v47 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v17 = v47;
    *(_QWORD *)v47 = 16LL;
    *(_QWORD *)(v47 + 8) = v46;
    *(_QWORD *)(v47 + 16) = 16LL;
    *(_DWORD *)(v47 + 24) = 1;
LABEL_66:
    v8 = v76;
    goto LABEL_67;
  }
  v74 = *((_QWORD *)&v80 + 1);
  if ( !(_QWORD)v81 )
  {
    v57 = 24 * a6;
    while ( v57 )
    {
      v36 = *(_QWORD *)(a5 + 8);
      v37 = *(_QWORD *)(a5 + 16);
      std::sys::pal::unix::fs::stat(&dest);
      if ( (_DWORD)dest == 2 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&dest + 1), v36);
        v58 = 0LL;
      }
      else
      {
        if ( (v91 & 0xF000) == 0x1000 )
        {
LABEL_86:
          *(_QWORD *)&v80 = 0LL;
          *((_QWORD *)&v80 + 1) = v36;
          *(_QWORD *)&v81 = v37;
          BYTE8(v81) = 1;
          v83 = &v80;
          v84 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &off_E07C8;
          *((_QWORD *)&dest + 1) = 2LL;
          v90 = 0LL;
          *(_QWORD *)&v89 = &v83;
          *((_QWORD *)&v89 + 1) = 1LL;
          v8 = v76;
          alloc::fmt::format::format_inner(&v78, &dest);
          DWORD2(v79) = 1;
          v59 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v59 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v17 = (__int64)v59;
          v60 = v78;
          v59[1] = v79;
          *v59 = v60;
          goto LABEL_67;
        }
        v58 = v92;
      }
      switch ( v74 )
      {
        case 0LL:
        case 3LL:
          v58 = 0LL;
          break;
        case 1LL:
        case 2LL:
        case 4LL:
          break;
      }
      v44 = uu_truncate::file_truncate(v36, v37, a1 ^ 1u, v58);
      a5 += 24LL;
      v57 -= 24LL;
      if ( v44 )
      {
LABEL_60:
        v17 = (__int64)v44;
        goto LABEL_66;
      }
    }
    goto LABEL_85;
  }
LABEL_34:
  v35 = a5 + 24 * a6;
  while ( a5 != v35 )
  {
    v36 = *(_QWORD *)(a5 + 8);
    v37 = *(_QWORD *)(a5 + 16);
    std::sys::pal::unix::fs::stat(&dest);
    if ( (_DWORD)dest == 2 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&dest + 1), v36);
      v38 = 0LL;
    }
    else
    {
      if ( (v91 & 0xF000) == 0x1000 )
        goto LABEL_86;
      v38 = v92;
    }
    v39 = v12;
    switch ( v74 )
    {
      case 0LL:
        break;
      case 1LL:
        v39 = v12 + v38;
        break;
      case 2LL:
        v40 = v38 < v12;
        v41 = v38 - v12;
        v39 = 0LL;
        if ( !v40 )
          v39 = v41;
        break;
      case 3LL:
        if ( v38 >= v12 )
          v38 = v12;
        v39 = v38;
        break;
      case 4LL:
        if ( v38 <= v12 )
          v38 = v12;
        v39 = v38;
        break;
      case 5LL:
        if ( (v12 | v38) >> 32 )
          v42 = v38 % v12;
        else
          v42 = (unsigned int)v38 % (unsigned int)v12;
        v39 = v38 - v42;
        break;
      case 6LL:
        if ( (v12 | v38) >> 32 )
          v43 = v38 % v12;
        else
          v43 = (unsigned int)v38 % (unsigned int)v12;
        v39 = v38 + v43;
        break;
    }
    v44 = uu_truncate::file_truncate(v36, v37, a1 ^ 1u, v39);
    a5 += 24LL;
    if ( v44 )
      goto LABEL_60;
  }
LABEL_85:
  v8 = v76;
  v17 = 0LL;
LABEL_67:
  if ( v8 )
  {
    v48 = v82;
LABEL_98:
    _rust_dealloc(v48, v8, 1LL);
  }
  return v17;
}
