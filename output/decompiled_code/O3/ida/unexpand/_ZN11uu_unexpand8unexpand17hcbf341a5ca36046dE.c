_OWORD *__fastcall uu_unexpand::unexpand(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  unsigned __int64 *v3; // r12
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  _BYTE *v8; // r14
  __int64 v9; // rbx
  char is_dir; // al
  __int128 *v11; // rax
  __int128 v12; // xmm0
  __int64 (__fastcall **v13)(); // rcx
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // r14
  __int64 (__fastcall **v17)(); // r15
  __int128 *v18; // r14
  __int64 (__fastcall *v19)(); // r15
  __int64 v20; // rsi
  int v21; // ebp
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rbp
  char v32; // cl
  int v33; // eax
  _BOOL8 v34; // rbp
  unsigned __int64 v35; // rsi
  size_t v36; // rbx
  __int64 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rcx
  size_t v40; // rbp
  unsigned int v41; // ecx
  unsigned __int64 v42; // rbp
  unsigned __int64 v43; // r12
  bool v44; // cf
  unsigned __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbp
  bool v50; // cc
  int v51; // eax
  int v52; // edi
  int v53; // esi
  __int64 v54; // rax
  __int64 v55; // rdi
  int v56; // edx
  __int64 v57; // rax
  unsigned __int8 v58; // al
  size_t v59; // rbx
  const void *v60; // r15
  __int64 v61; // r12
  _OWORD *v62; // rax
  _OWORD *v63; // rbx
  __int128 v64; // xmm0
  __int64 *v65; // r14
  __int64 (__fastcall **v66)(); // r15
  __int64 (__fastcall *v67)(); // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  char **v71; // rax
  __int64 v72; // rsi
  char v73; // [rsp+6h] [rbp-182h]
  unsigned __int8 v74; // [rsp+7h] [rbp-181h]
  char v75; // [rsp+8h] [rbp-180h]
  char v76; // [rsp+Fh] [rbp-179h]
  char v77; // [rsp+10h] [rbp-178h]
  unsigned __int64 *v78; // [rsp+18h] [rbp-170h]
  __int64 v79; // [rsp+20h] [rbp-168h] BYREF
  __int64 v80; // [rsp+28h] [rbp-160h]
  __int64 v81; // [rsp+30h] [rbp-158h]
  char v82; // [rsp+38h] [rbp-150h]
  __int64 v83; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int64 v84; // [rsp+48h] [rbp-140h]
  unsigned __int64 v85; // [rsp+50h] [rbp-138h]
  void *src; // [rsp+58h] [rbp-130h]
  __int64 v87; // [rsp+60h] [rbp-128h] BYREF
  __int64 v88; // [rsp+68h] [rbp-120h]
  unsigned __int64 v89; // [rsp+70h] [rbp-118h]
  __int128 *v90; // [rsp+78h] [rbp-110h] BYREF
  __int64 (__fastcall *v91)(); // [rsp+80h] [rbp-108h]
  __int128 v92; // [rsp+88h] [rbp-100h] BYREF
  __int128 v93; // [rsp+98h] [rbp-F0h]
  __int64 v94; // [rsp+A8h] [rbp-E0h]
  char **v95; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-C8h]
  __int128 v97; // [rsp+C8h] [rbp-C0h] BYREF
  __int128 v98; // [rsp+D8h] [rbp-B0h]
  char **v99; // [rsp+E8h] [rbp-A0h]
  char **v100; // [rsp+F0h] [rbp-98h]
  __int128 v101; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v102; // [rsp+108h] [rbp-80h] BYREF
  __int64 v103; // [rsp+110h] [rbp-78h]
  __int64 v104; // [rsp+118h] [rbp-70h]
  __int128 v105; // [rsp+120h] [rbp-68h]
  __int64 *v106; // [rsp+130h] [rbp-58h]
  __int64 (__fastcall **v107)(); // [rsp+138h] [rbp-50h]
  __int64 v108; // [rsp+140h] [rbp-48h]
  __int64 v109; // [rsp+148h] [rbp-40h]
  __int64 v110; // [rsp+150h] [rbp-38h]

  v1 = std::io::stdio::stdout();
  v2 = _rust_alloc(0x2000LL, 1LL);
  if ( !v2 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v79 = 0x2000LL;
  v80 = v2;
  v81 = 0LL;
  v82 = 0;
  v83 = v1;
  v3 = *(unsigned __int64 **)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  v87 = 0LL;
  v88 = 1LL;
  v89 = 0LL;
  if ( v4 < 2 )
    v5 = 0LL;
  else
    v5 = v3[v4 - 1];
  v96 = v5;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_135;
  v7 = *(_QWORD *)(a1 + 8);
  v108 = v7 + 24 * v6;
  v74 = *(_BYTE *)(a1 + 48);
  v76 = *(_BYTE *)(a1 + 49);
  --v96;
  v85 = v4;
  v110 = 8 * v4;
  v100 = &off_E6CF8;
  v95 = &off_E6CE0;
  v99 = &off_E6A38;
  v78 = v3;
  while ( 1 )
  {
    v8 = *(_BYTE **)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 16);
    is_dir = std::path::Path::is_dir(v8, v9);
    v109 = v7;
    if ( is_dir )
    {
      *(_QWORD *)&v101 = v8;
      *((_QWORD *)&v101 + 1) = v9;
      v90 = &v101;
      v91 = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v92 = &unk_E6BA8;
      *((_QWORD *)&v92 + 1) = 2LL;
      v94 = 0LL;
      *(_QWORD *)&v93 = &v90;
      *((_QWORD *)&v93 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v97, &v92);
      DWORD2(v98) = 1;
      v11 = (__int128 *)_rust_alloc(32LL, 8LL);
      if ( !v11 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v12 = v97;
      v11[1] = v98;
      *v11 = v12;
      v13 = &off_E6C00;
      goto LABEL_16;
    }
    if ( v9 == 1 && *v8 == 45 )
    {
      v14 = std::io::stdio::stdin();
      v15 = (__int64 *)_rust_alloc(8LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 8LL);
      v16 = v15;
      *v15 = v14;
      v17 = (__int64 (__fastcall **)())&unk_E6B50;
      goto LABEL_26;
    }
    *(_QWORD *)&v92 = 0x1B600000000LL;
    WORD6(v92) = 0;
    DWORD2(v92) = 1;
    std::fs::OpenOptions::_open(&v97, &v92, v8, v9);
    if ( !(_DWORD)v97 )
      break;
    v11 = (__int128 *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                        *((_QWORD *)&v97 + 1),
                        v8,
                        v9);
    v13 = &anon_705b3af3dc57375cddb69d0479cfd370_9_llvm_7608811636715282461;
LABEL_16:
    v90 = v11;
    v91 = (__int64 (__fastcall *)())v13;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, ((__int64 (__fastcall *)(__int128 *))v13[12])(v11));
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v101 = xmmword_EB970;
    *(_QWORD *)&v97 = &v101;
    *((_QWORD *)&v97 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v98 = &v90;
    *((_QWORD *)&v98 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v92 = &unk_E6D28;
    *((_QWORD *)&v92 + 1) = 3LL;
    v94 = 0LL;
    *(_QWORD *)&v93 = &v97;
    *((_QWORD *)&v93 + 1) = 2LL;
    std::io::stdio::_eprint(&v92);
    v18 = v90;
    v19 = v91;
    if ( *(_QWORD *)v91 )
      (*(void (__fastcall **)(__int128 *))v91)(v90);
LABEL_20:
    v20 = *((_QWORD *)v19 + 1);
    if ( v20 )
      _rust_dealloc(v18, v20, *((_QWORD *)v19 + 2));
    v7 = v109 + 24;
    if ( v109 + 24 == v108 )
    {
      if ( v87 )
        _rust_dealloc(v88, v87, 1LL);
LABEL_135:
      if ( !v82 )
      {
        v69 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v79);
        if ( v69 )
          core::ptr::drop_in_place<std::io::error::Error>(v69);
      }
      if ( v79 )
        _rust_dealloc(v80, v79, 1LL);
      return 0LL;
    }
  }
  v21 = DWORD1(v97);
  v22 = (__int64 *)_rust_alloc(4LL, 4LL);
  if ( !v22 )
    alloc::alloc::handle_alloc_error(4LL, 4LL);
  v16 = v22;
  *(_DWORD *)v22 = v21;
  v17 = &off_E6AF8;
LABEL_26:
  v23 = _rust_alloc(0x2000LL, 1LL);
  if ( !v23 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v105 = 0LL;
  v102 = v23;
  v103 = 0x2000LL;
  v104 = 0LL;
  v106 = v16;
  v107 = v17;
  while ( 1 )
  {
    v24 = std::io::read_until(&v102, 10LL, &v87);
    v26 = v89;
    v27 = v25;
    if ( v24 )
      v27 = v89;
    if ( !v27 )
    {
      if ( v24 )
        core::ptr::drop_in_place<std::io::error::Error>(v25);
      if ( v103 )
        _rust_dealloc(v102, v103, 1LL);
      v18 = (__int128 *)v106;
      v19 = (__int64 (__fastcall *)())v107;
      if ( *v107 )
        ((void (__fastcall *)(__int64 *))*v107)(v106);
      goto LABEL_20;
    }
    if ( v24 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v25);
      v26 = v89;
    }
    if ( v26 )
      break;
    v75 = 1;
    v32 = 3;
    v31 = 0LL;
    v30 = 0LL;
LABEL_110:
    uu_unexpand::write_tabs(&v79, v3, v85, v30, v31, v32 == 2, v75 & 1, 1u);
    v47 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v79);
    if ( v47 )
      goto LABEL_119;
    v47 = <std::io::stdio::Stdout as std::io::Write>::flush(&v83);
    if ( v47 )
      goto LABEL_119;
    v89 = 0LL;
  }
  v84 = v26;
  v73 = 3;
  v75 = 1;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  while ( 2 )
  {
    if ( v96 >= v28 )
    {
      v33 = *(unsigned __int8 *)(v88 + v29);
      src = (void *)(v88 + v29);
      if ( v76 )
      {
        v34 = (v33 & 0x80u) != 0;
        v35 = v29 + v34 + 1;
        if ( v35 > v84 )
        {
          v77 = 3;
          v36 = 1LL;
          goto LABEL_63;
        }
        if ( v35 < v29 )
        {
          v71 = &off_E6CC8;
LABEL_144:
          v95 = v71;
LABEL_145:
          core::slice::index::slice_index_order_fail(v29, v35, v95);
        }
        v40 = v34 + 1;
        v26 = v88 + v29;
        core::str::converts::from_utf8(&v92, v88 + v29, v40);
        v36 = 1LL;
        v77 = 3;
        if ( !(_QWORD)v92 && (_QWORD)v93 )
        {
          v25 = *((_QWORD *)&v92 + 1);
          v41 = (unsigned __int8)**((_BYTE **)&v92 + 1);
          if ( (v41 & 0x80u) == 0 )
          {
            v3 = v78;
            if ( v41 != 8 )
              goto LABEL_52;
LABEL_95:
            v77 = 0;
            v37 = 0LL;
LABEL_64:
            uu_unexpand::write_tabs(&v79, v78, v85, v30, v28, v73 == 2, v75 & 1, v74 != 0);
            v43 = v28 + v37;
            v44 = v28 == 0;
            v45 = v28 - 1;
            v30 = 0LL;
            if ( !v44 )
              v30 = v45;
            if ( v77 == 3 )
              v30 = v43;
            v35 = v29 + v36;
            if ( __CFADD__(v29, v36) )
            {
              v71 = &off_E6CF8;
              goto LABEL_144;
            }
            if ( v35 > v84 )
              goto LABEL_147;
            v46 = v81;
            if ( v36 < v79 - v81 )
            {
              v26 = (unsigned __int64)src;
              memcpy((void *)(v81 + v80), src, v36);
              v81 = v36 + v46;
            }
            else
            {
              v26 = (unsigned __int64)src;
              v47 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v79, src, v36);
              if ( v47 )
                goto LABEL_119;
            }
            v75 = 0;
            v31 = v30;
            v3 = v78;
LABEL_37:
            v29 += v36;
            v28 = v31;
            v32 = v77;
            v73 = v77;
            if ( v29 >= v84 )
              goto LABEL_110;
            continue;
          }
          v51 = v41 & 0x1F;
          v52 = *(_BYTE *)(*((_QWORD *)&v92 + 1) + 1LL) & 0x3F;
          v3 = v78;
          if ( (unsigned __int8)v41 <= 0xDFu )
          {
            v41 = v52 | (v51 << 6);
            if ( v41 == 8 )
              goto LABEL_95;
          }
          else
          {
            v53 = (v52 << 6) | *(_BYTE *)(*((_QWORD *)&v92 + 1) + 2LL) & 0x3F;
            if ( (unsigned __int8)v41 < 0xF0u )
            {
              v26 = (v51 << 12) | (unsigned int)v53;
              v41 = v26;
              if ( (_DWORD)v26 == 8 )
                goto LABEL_95;
            }
            else
            {
              v26 = (unsigned int)(v53 << 6);
              v41 = ((v41 & 7) << 18) | v26 | *(_BYTE *)(*((_QWORD *)&v92 + 1) + 3LL) & 0x3F;
              if ( v41 == 8 )
                goto LABEL_95;
            }
          }
LABEL_52:
          if ( v41 != 9 )
          {
            if ( v41 != 32 )
            {
              if ( v41 >= 0x7F )
              {
                if ( v41 <= 0x9F )
                {
                  v37 = 0LL;
                  v36 = v40;
                }
                else
                {
                  v55 = (unicode_width::tables::charwidth::TABLES_0[v41 >> 13] << 7) | (v41 >> 6) & 0x7F;
                  if ( (unsigned int)v55 > 0x97F )
                  {
                    v72 = 2432LL;
                    goto LABEL_159;
                  }
                  v56 = 16 * unicode_width::tables::charwidth::TABLES_1[v55];
                  v57 = v56 | (v41 >> 2) & 0xF;
                  if ( (unsigned int)v57 >= 0xEE0 )
                  {
                    v72 = 3808LL;
                    v55 = v56 | (v41 >> 2) & 0xF;
                    v99 = &off_E6A50;
LABEL_159:
                    core::panicking::panic_bounds_check(v55, v72, v99);
                  }
                  v58 = (unicode_width::tables::charwidth::TABLES_2[v57] >> ((2 * v41) & 6)) & 3;
                  if ( v58 == 3 )
                    v58 = 1;
                  v37 = v58;
                  v36 = v40;
                }
              }
              else
              {
                v37 = v41 >= 0x20;
                v36 = v40;
              }
              goto LABEL_64;
            }
            if ( (v75 & 1) != 0 )
              goto LABEL_55;
            goto LABEL_46;
          }
LABEL_56:
          v39 = v74;
          if ( (v75 & 1) != 0 )
            v39 = 1LL;
          if ( v85 == 1 )
          {
            v42 = *v3;
            if ( !*v3 )
              core::panicking::panic_const::panic_const_rem_by_zero(&off_E6C70, v26, v25, v39);
            if ( (v42 | v28) >> 32 )
              v25 = v28 % v42;
            else
              v25 = (unsigned int)v28 % (unsigned int)v42;
            v38 = v42 - v25;
LABEL_84:
            v77 = 2;
          }
          else
          {
            v48 = 0LL;
            while ( v110 != v48 )
            {
              v49 = v3[v48 / 8];
              v48 += 8LL;
              v50 = v49 <= v28;
              v38 = v49 - v28;
              if ( !v50 )
                goto LABEL_84;
            }
            v77 = 2;
            v38 = 1LL;
          }
          goto LABEL_85;
        }
      }
      else
      {
        v36 = 1LL;
        if ( v33 != 8 )
        {
          if ( v33 == 9 )
            goto LABEL_56;
          v77 = 3;
          v37 = 1LL;
          if ( v33 != 32 )
            goto LABEL_64;
          v3 = v78;
          if ( (v75 & 1) != 0 )
          {
LABEL_55:
            v77 = 1;
            v31 = v28 + 1;
            goto LABEL_37;
          }
LABEL_46:
          v38 = 1LL;
          v77 = 1;
          LOBYTE(v39) = v74;
LABEL_85:
          v31 = v28 + v38;
          v36 = 1LL;
          if ( !(_BYTE)v39 )
          {
            if ( v29 == -1LL )
            {
              v35 = 0LL;
              goto LABEL_145;
            }
            if ( v84 <= v29 )
            {
              v100 = &off_E6CE0;
              v35 = v29 + 1;
LABEL_147:
              core::slice::index::slice_end_index_len_fail(v35, v84, v100);
            }
            v54 = v81;
            if ( (unsigned __int64)(v79 - v81) < 2 )
            {
              v26 = (unsigned __int64)src;
              v47 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v79, src, 1LL);
              v30 = v31;
              v3 = v78;
              if ( v47 )
                goto LABEL_119;
            }
            else
            {
              v25 = *(unsigned __int8 *)src;
              *(_BYTE *)(v80 + v81) = v25;
              v81 = v54 + 1;
              v30 = v31;
            }
          }
          goto LABEL_37;
        }
        v77 = 0;
      }
LABEL_63:
      v37 = 1LL;
      goto LABEL_64;
    }
    break;
  }
  uu_unexpand::write_tabs(&v79, v3, v85, v30, v28, v73 == 2, v75 & 1, 1u);
  v59 = v84 - v29;
  if ( v84 < v29 )
    core::slice::index::slice_start_index_len_fail(v29, v84, &off_E6D10);
  v60 = (const void *)(v88 + v29);
  v61 = v81;
  if ( v59 < v79 - v81 )
  {
    memcpy((void *)(v81 + v80), v60, v59);
    v81 = v59 + v61;
    v32 = v73;
    v31 = v28;
    v30 = v28;
    v3 = v78;
    goto LABEL_110;
  }
  v47 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v79, v60, v59);
  v3 = v78;
  v32 = v73;
  v31 = v28;
  v30 = v28;
  if ( !v47 )
    goto LABEL_110;
LABEL_119:
  *(_QWORD *)&v92 = 0x8000000000000000LL;
  *((_QWORD *)&v93 + 1) = v47;
  v62 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v62 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v63 = v62;
  v64 = v92;
  v62[1] = v93;
  *v62 = v64;
  if ( v103 )
    _rust_dealloc(v102, v103, 1LL);
  v65 = v106;
  v66 = v107;
  if ( *v107 )
    ((void (__fastcall *)(__int64 *))*v107)(v106);
  v67 = v66[1];
  if ( v67 )
    _rust_dealloc(v65, v67, v66[2]);
  if ( v87 )
    _rust_dealloc(v88, v87, 1LL);
  if ( !v82 )
  {
    v68 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v79);
    if ( v68 )
      core::ptr::drop_in_place<std::io::error::Error>(v68);
  }
  if ( v79 )
    _rust_dealloc(v80, v79, 1LL);
  return v63;
}
