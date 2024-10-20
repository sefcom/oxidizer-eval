__int64 __fastcall uu_expand::expand(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r15
  _BYTE *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 (__fastcall **v12)(); // r15
  __int64 v13; // rbx
  void **v14; // r14
  __int64 (__fastcall *v15)(); // r15
  __int64 v16; // rsi
  int v17; // ebp
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // si
  unsigned __int64 v23; // rsi
  char v24; // r13
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  _BYTE *v28; // r12
  char v29; // cl
  _BOOL8 v30; // r14
  unsigned __int64 v31; // rsi
  size_t v32; // rbx
  __int64 v33; // rdx
  size_t v34; // r14
  int v35; // eax
  int v36; // eax
  size_t v38; // r14
  unsigned int v39; // ecx
  int v40; // esi
  int v41; // r9d
  int v42; // r8d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  bool v45; // cc
  size_t v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  size_t v55; // r14
  size_t v56; // r12
  size_t v57; // r14
  size_t v58; // r14
  size_t v59; // r12
  __int64 v60; // rdi
  int v61; // esi
  __int64 v62; // rdx
  unsigned __int8 v63; // cl
  __int64 v64; // rbx
  __int64 v65; // rbx
  __int64 *v66; // r14
  __int64 (__fastcall **v67)(); // r15
  __int64 (__fastcall *v68)(); // rsi
  __int64 *v69; // r15
  __int64 (__fastcall **v70)(); // r12
  __int64 (__fastcall *v71)(); // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  char **v75; // rdx
  char **v76; // rdx
  char v77; // [rsp+Eh] [rbp-14Ah]
  char v78; // [rsp+Fh] [rbp-149h]
  unsigned __int64 v79; // [rsp+10h] [rbp-148h]
  __int64 v80; // [rsp+18h] [rbp-140h] BYREF
  __int64 v81; // [rsp+20h] [rbp-138h]
  size_t v82; // [rsp+28h] [rbp-130h]
  char v83; // [rsp+30h] [rbp-128h]
  __int64 v84; // [rsp+38h] [rbp-120h] BYREF
  void *src[2]; // [rsp+40h] [rbp-118h] BYREF
  size_t n; // [rsp+50h] [rbp-108h]
  unsigned __int64 *v87; // [rsp+58h] [rbp-100h]
  __int64 v88; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v89; // [rsp+68h] [rbp-F0h]
  void **v90; // [rsp+70h] [rbp-E8h]
  __int128 v91; // [rsp+78h] [rbp-E0h]
  __int64 *v92; // [rsp+88h] [rbp-D0h]
  __int64 (__fastcall **v93)(); // [rsp+90h] [rbp-C8h]
  __int64 v94; // [rsp+98h] [rbp-C0h]
  void *v95; // [rsp+A0h] [rbp-B8h]
  void **v96; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v97)(); // [rsp+B0h] [rbp-A8h]
  __int64 v98; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-98h]
  unsigned __int64 v100; // [rsp+C8h] [rbp-90h]
  void *v101; // [rsp+D0h] [rbp-88h]
  size_t v102; // [rsp+D8h] [rbp-80h]
  int v103; // [rsp+E4h] [rbp-74h]
  void **v104; // [rsp+E8h] [rbp-70h] BYREF
  __int64 (__fastcall *v105)(); // [rsp+F0h] [rbp-68h]
  char **v106; // [rsp+F8h] [rbp-60h]
  __int64 v107; // [rsp+100h] [rbp-58h]
  __int64 v108; // [rsp+108h] [rbp-50h]
  __int64 v109; // [rsp+110h] [rbp-48h] BYREF
  __int64 v110; // [rsp+118h] [rbp-40h]
  __int64 v111; // [rsp+120h] [rbp-38h]

  v1 = std::io::stdio::stdout();
  v2 = _rust_alloc(0x2000LL, 1LL);
  if ( !v2 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v80 = 0x2000LL;
  v81 = v2;
  v82 = 0LL;
  v83 = 0;
  v84 = v1;
  v3 = *(unsigned __int64 **)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v98 = 0LL;
  v99 = 1LL;
  v100 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    goto LABEL_156;
  v6 = *(_QWORD *)(a1 + 8);
  v110 = v6 + 24 * v5;
  v78 = *(_BYTE *)(a1 + 73);
  v103 = *(unsigned __int8 *)(a1 + 74);
  v77 = *(_BYTE *)(a1 + 72);
  v95 = *(void **)(a1 + 56);
  v102 = *(_QWORD *)(a1 + 64);
  v111 = 8 * v4;
  v108 = 8 * v4 - 8;
  v106 = &off_E57A8;
  v87 = v3;
  v94 = v4;
  while ( 1 )
  {
    v109 = v6;
    if ( !(unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16)) )
      break;
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    *(_OWORD *)src = xmmword_EA430;
    v96 = src;
    v97 = <&T as core::fmt::Display>::fmt;
    v88 = (__int64)&unk_E5880;
    v89 = 2LL;
    v90 = (void **)&v96;
    v91 = 1uLL;
    std::io::stdio::_eprint(&v88);
    src[0] = &v109;
    src[1] = <&T as core::fmt::Display>::fmt;
    v88 = (__int64)&unk_E58C0;
    v89 = 2LL;
    v90 = src;
    v91 = 1uLL;
    std::io::stdio::_eprint(&v88);
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
LABEL_5:
    v6 += 24LL;
    if ( v6 == v110 )
    {
      if ( v98 )
        _rust_dealloc(v99, v98, 1LL);
LABEL_156:
      if ( !v83 )
      {
        v73 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v80);
        if ( v73 )
          core::ptr::drop_in_place<std::io::error::Error>(v73);
      }
      if ( v80 )
        _rust_dealloc(v81, v80, 1LL);
      return 0LL;
    }
  }
  v7 = *(_BYTE **)(v109 + 8);
  v8 = *(_QWORD *)(v109 + 16);
  if ( v8 == 1 && *v7 == 45 )
  {
    v9 = std::io::stdio::stdin();
    v107 = v6;
    v10 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v11 = v10;
    *v10 = v9;
    v12 = (__int64 (__fastcall **)())&unk_E5720;
  }
  else
  {
    v88 = 0x1B600000000LL;
    WORD2(v89) = 0;
    LODWORD(v89) = 1;
    std::fs::OpenOptions::_open(src, &v88, v7, v8);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v96,
      src,
      v7,
      v8);
    if ( v96 )
    {
      v13 = v6;
      v104 = v96;
      v105 = v97;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_OWORD *)src = xmmword_EA430;
      v96 = src;
      v97 = <&T as core::fmt::Display>::fmt;
      v88 = (__int64)&unk_E5880;
      v89 = 2LL;
      v90 = (void **)&v96;
      v91 = 1uLL;
      std::io::stdio::_eprint(&v88);
      src[0] = &v104;
      src[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v88 = (__int64)&unk_E58A0;
      v89 = 2LL;
      v90 = src;
      v91 = 1uLL;
      std::io::stdio::_eprint(&v88);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      v14 = v104;
      v15 = v105;
      if ( *(_QWORD *)v105 )
        (*(void (__fastcall **)(void **))v105)(v104);
      v16 = *((_QWORD *)v15 + 1);
      if ( v16 )
        _rust_dealloc(v14, v16, *((_QWORD *)v15 + 2));
      v6 = v13;
      goto LABEL_5;
    }
    v107 = v6;
    v17 = (int)v97;
    v18 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v18 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v11 = v18;
    *(_DWORD *)v18 = v17;
    v12 = &off_E56C8;
  }
  v19 = _rust_alloc(0x2000LL, 1LL);
  if ( !v19 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v91 = 0LL;
  v88 = v19;
  v89 = 0x2000LL;
  v90 = 0LL;
  v92 = v11;
  v93 = v12;
  do
  {
    v20 = std::io::read_until(&v88, 10LL, &v98);
    v22 = v21 != 0;
    if ( v20 )
      v22 = v100 == 0;
    if ( !v22 )
    {
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v20, v21);
      if ( v89 )
        _rust_dealloc(v88, v89, 1LL);
      v66 = v92;
      v67 = v93;
      if ( *v93 )
        ((void (__fastcall *)(__int64 *))*v93)(v92);
      v68 = v67[1];
      if ( v68 )
        _rust_dealloc(v66, v68, v67[2]);
      v6 = v107;
      goto LABEL_5;
    }
    v23 = v21;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v20, v21);
    v79 = v100;
    if ( !v100 )
    {
LABEL_127:
      v27 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v80);
      if ( !v27 )
      {
        v27 = <std::io::stdio::Stdout as std::io::Write>::flush(&v84);
        if ( !v27 )
        {
          v100 = 0LL;
          v27 = 0LL;
        }
      }
      goto LABEL_130;
    }
    v24 = 1;
    v25 = 0LL;
    v26 = 0LL;
    while ( 1 )
    {
      v28 = (_BYTE *)(v99 + v26);
      v29 = *(_BYTE *)(v99 + v26);
      if ( !v78 )
      {
        v36 = 0;
        LOBYTE(v23) = v29 != 8;
        v33 = 1LL;
        if ( v29 == 9 )
        {
          v32 = 1LL;
        }
        else
        {
          LOBYTE(v36) = v29 != 8;
          v35 = 2 * v36;
          v32 = 1LL;
          if ( v35 != 1 )
            goto LABEL_40;
        }
        goto LABEL_69;
      }
      v30 = v29 < 0;
      v31 = v30 + v26 + 1;
      v32 = 1LL;
      v33 = 1LL;
      if ( v31 > v79 )
        goto LABEL_41;
      if ( v31 < v26 )
      {
        v76 = &off_E5808;
        goto LABEL_168;
      }
      v34 = v30 + 1;
      v23 = v99 + v26;
      core::str::converts::from_utf8(src, v99 + v26, v34);
      v33 = 1LL;
      v35 = 2;
      if ( src[0] || !n )
      {
LABEL_36:
        v32 = 1LL;
LABEL_40:
        if ( v35 == 2 )
        {
LABEL_41:
          v25 += v33;
          if ( v26 >= v79 )
            goto LABEL_165;
        }
        else
        {
          if ( v25-- == 0 )
            v25 = 0LL;
          if ( v26 >= v79 )
LABEL_165:
            core::panicking::panic_bounds_check(v26, v79, &off_E5850);
        }
        if ( *v28 != 32 )
          v24 = 0;
        v31 = v26 + v32;
        if ( __CFADD__(v26, v32) )
        {
          v76 = &off_E5868;
          goto LABEL_168;
        }
        if ( v31 > v79 )
        {
          v75 = &off_E5868;
          goto LABEL_172;
        }
        v38 = v82;
        if ( v32 >= v80 - v82 )
        {
LABEL_51:
          v23 = (unsigned __int64)v28;
          v27 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v80, v28, v32);
          goto LABEL_30;
        }
        goto LABEL_104;
      }
      v39 = *(unsigned __int8 *)src[1];
      if ( (v39 & 0x80u) != 0 )
      {
        v40 = v39 & 0x1F;
        v41 = *((_BYTE *)src[1] + 1) & 0x3F;
        if ( (unsigned __int8)v39 <= 0xDFu )
        {
          v23 = v41 | (unsigned int)(v40 << 6);
          v39 = v23;
          if ( (_DWORD)v23 == 8 )
            goto LABEL_66;
        }
        else
        {
          v42 = (v41 << 6) | *((_BYTE *)src[1] + 2) & 0x3F;
          if ( (unsigned __int8)v39 < 0xF0u )
          {
            v23 = (unsigned int)(v40 << 12);
            v39 = v23 | v42;
            if ( ((unsigned int)v23 | v42) == 8 )
            {
LABEL_66:
              v35 = 0;
              goto LABEL_67;
            }
          }
          else
          {
            v23 = (unsigned __int8)(v39 & 7) << 18;
            v39 = v23 | (v42 << 6) | *((_BYTE *)src[1] + 3) & 0x3F;
            if ( v39 == 8 )
              goto LABEL_66;
          }
        }
      }
      else if ( v39 == 8 )
      {
        goto LABEL_66;
      }
      if ( v39 == 9 )
      {
        v35 = 1;
LABEL_67:
        v33 = 0LL;
        goto LABEL_68;
      }
      if ( v39 == 1114112 )
        goto LABEL_36;
      if ( v39 >= 0x7F )
      {
        if ( v39 < 0xA0 )
          goto LABEL_67;
        v60 = (unicode_width::tables::charwidth::TABLES_0[v39 >> 13] << 7) | (v39 >> 6) & 0x7F;
        if ( (unsigned int)v60 > 0x97F )
          core::panicking::panic_bounds_check(v60, 2432LL, &off_E5568);
        v61 = 16 * unicode_width::tables::charwidth::TABLES_1[v60];
        v62 = v61 | (v39 >> 2) & 0xF;
        if ( (unsigned int)v62 >= 0xEE0 )
          core::panicking::panic_bounds_check(v61 | (v39 >> 2) & 0xF, 3808LL, &off_E5580);
        v23 = (unsigned __int64)unicode_width::tables::charwidth::TABLES_2;
        v63 = (unicode_width::tables::charwidth::TABLES_2[v62] >> ((2 * v39) & 6)) & 3;
        if ( v63 == 3 )
          v63 = 1;
        v33 = v63;
      }
      else if ( v39 <= 0x1F )
      {
        goto LABEL_67;
      }
LABEL_68:
      v32 = v34;
      if ( v35 != 1 )
        goto LABEL_40;
LABEL_69:
      if ( v103 )
      {
        if ( v103 == 1 )
        {
          if ( !v94 )
            core::slice::index::slice_end_index_len_fail(-1LL, 0LL, &off_E5790);
          v43 = 0LL;
          while ( v108 != v43 )
          {
            v44 = v87[v43 / 8];
            v43 += 8LL;
            v45 = v44 <= v25;
            v46 = v44 - v25;
            if ( !v45 )
              goto LABEL_99;
          }
          v47 = v87[v94 - 1];
          if ( !v47 )
            goto LABEL_175;
LABEL_85:
          if ( (v47 | v25) >> 32 )
            v46 = v47 - v25 % v47;
          else
            v46 = v47 - (unsigned int)v25 % (unsigned int)v47;
          goto LABEL_99;
        }
        if ( !v94 )
        {
          v31 = -1LL;
          v79 = 0LL;
          v75 = &off_E57C0;
LABEL_172:
          core::slice::index::slice_end_index_len_fail(v31, v79, v75);
        }
        v48 = 0LL;
        while ( v108 != v48 )
        {
          v49 = v87[v48 / 8];
          v48 += 8LL;
          v45 = v49 <= v25;
          v46 = v49 - v25;
          if ( !v45 )
            goto LABEL_99;
        }
        if ( v94 == 1 )
          core::panicking::panic_bounds_check(-1LL, 1LL, &off_E57D8);
        v50 = v87[v94 - 1];
        if ( !v50 )
          core::panicking::panic_const::panic_const_div_by_zero(&off_E57F0, v23, v33);
        v51 = v25 - v87[v94 - 2];
        v52 = (v50 | v51) >> 32 ? v51 / v50 : (unsigned int)v51 / (unsigned int)v50;
        v46 = v50 * (v52 + 1) - v51;
      }
      else
      {
        if ( v94 == 1 )
        {
          v47 = *v87;
          if ( !*v87 )
          {
            v106 = &off_E5778;
LABEL_175:
            core::panicking::panic_const::panic_const_rem_by_zero(v106, v23, v33);
          }
          goto LABEL_85;
        }
        v53 = 0LL;
        while ( v111 != v53 )
        {
          v54 = v87[v53 / 8];
          v53 += 8LL;
          v45 = v54 <= v25;
          v46 = v54 - v25;
          if ( !v45 )
            goto LABEL_99;
        }
        v46 = 1LL;
      }
LABEL_99:
      v25 += v46;
      if ( (v24 & 1) != 0 || !v77 )
        break;
      v31 = v26 + v32;
      if ( __CFADD__(v26, v32) )
      {
        v76 = &off_E5820;
LABEL_168:
        core::slice::index::slice_index_order_fail(v26, v31, v76);
      }
      if ( v31 > v79 )
      {
        v75 = &off_E5820;
        goto LABEL_172;
      }
      v38 = v82;
      if ( v32 >= v80 - v82 )
        goto LABEL_51;
LABEL_104:
      v23 = (unsigned __int64)v28;
      memcpy((void *)(v38 + v81), v28, v32);
      v55 = v32 + v38;
LABEL_105:
      v82 = v55;
LABEL_31:
      v26 += v32;
      if ( v26 >= v79 )
        goto LABEL_127;
    }
    if ( v46 <= v102 )
    {
      if ( v46 && v46 < v102 && *((char *)v95 + v46) <= -65 )
        core::str::slice_error_fail(v95, v102, 0LL, v46, &off_E5838);
      v58 = v82;
      if ( v46 >= v80 - v82 )
      {
        v23 = (unsigned __int64)v95;
        v27 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v80, v95, v46);
LABEL_30:
        if ( v27 )
          goto LABEL_130;
        goto LABEL_31;
      }
      v23 = (unsigned __int64)v95;
      v59 = v46;
      memcpy((void *)(v82 + v81), v95, v46);
      v55 = v59 + v58;
      goto LABEL_105;
    }
    alloc::str::<impl str>::repeat(src, asc_19121, 1LL, v46);
    v56 = n;
    v57 = v82;
    v101 = src[1];
    if ( n < v80 - v82 )
    {
      memcpy((void *)(v82 + v81), src[1], n);
      v82 = v56 + v57;
      goto LABEL_117;
    }
    v27 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v80, src[1], n);
    if ( !v27 )
    {
LABEL_117:
      v23 = (unsigned __int64)src[0];
      if ( src[0] )
        _rust_dealloc(v101, src[0], 1LL);
      goto LABEL_31;
    }
    if ( src[0] )
    {
      v65 = v27;
      _rust_dealloc(v101, src[0], 1LL);
      v27 = v65;
    }
LABEL_130:
    v64 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v27);
  }
  while ( !v64 );
  if ( v89 )
    _rust_dealloc(v88, v89, 1LL);
  v69 = v92;
  v70 = v93;
  if ( *v93 )
    ((void (__fastcall *)(__int64 *))*v93)(v92);
  v71 = v70[1];
  if ( v71 )
    _rust_dealloc(v69, v71, v70[2]);
  if ( v98 )
    _rust_dealloc(v99, v98, 1LL);
  if ( !v83 )
  {
    v72 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v80);
    if ( v72 )
      core::ptr::drop_in_place<std::io::error::Error>(v72);
  }
  if ( v80 )
    _rust_dealloc(v81, v80, 1LL);
  return v64;
}
