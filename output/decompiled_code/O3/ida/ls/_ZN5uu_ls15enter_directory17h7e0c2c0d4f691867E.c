        __int64 a8)
{
  __int64 v8; // r13
  char *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v13; // rax
  const void *v14; // r13
  signed __int64 v15; // r14
  __int64 v16; // rax
  void *v17; // r12
  void *v18; // r14
  void *v19; // rax
  __int64 v20; // r14
  bool v21; // bp
  size_t v22; // r13
  char *v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rax
  void *v26; // r14
  void *v27; // rbp
  __int64 v28; // rax
  const void *v29; // rsi
  char *v30; // rbp
  __int64 v31; // r12
  char *v32; // r14
  char v33; // al
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // r14
  void **v37; // rsi
  _OWORD *v38; // rax
  __int64 v39; // r12
  __int128 v40; // xmm0
  __int64 v41; // r14
  __int64 v42; // rsi
  char *v43; // r14
  char *v44; // rbp
  char v45; // bl
  __int64 j; // rcx
  __int64 k; // r15
  void *v48; // r13
  __int64 v49; // rax
  char *v50; // rsi
  void *v51; // rbx
  __int64 v52; // rax
  void *v53; // r12
  __int64 v54; // rdx
  char v55; // al
  __int64 v56; // rax
  __int128 v57; // rax
  char *v58; // rbx
  char v59; // al
  _OWORD *v60; // rbx
  unsigned __int64 v61; // r12
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rax
  _OWORD *v65; // rdi
  __int64 i; // r15
  char v67; // bp
  __int128 v68; // kr00_16
  __int64 v69; // rbx
  void *v70; // rax
  _OWORD *v71; // rax
  __int128 v72; // xmm0
  _OWORD *v73; // rdi
  __int64 m; // r15
  unsigned __int64 v76; // r12
  unsigned __int64 v77; // r13
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 *v83; // rbx
  unsigned __int64 v84; // r14
  __int64 v85; // rax
  __int64 v86; // rax
  char v87; // [rsp+Fh] [rbp-569h]
  char v88; // [rsp+Fh] [rbp-569h]
  __int64 v90; // [rsp+18h] [rbp-560h]
  __int64 v91; // [rsp+18h] [rbp-560h]
  __int64 v92; // [rsp+18h] [rbp-560h]
  __int64 v93; // [rsp+20h] [rbp-558h] BYREF
  _OWORD *v94; // [rsp+28h] [rbp-550h]
  unsigned __int64 v95; // [rsp+30h] [rbp-548h]
  size_t n; // [rsp+38h] [rbp-540h]
  char *v97; // [rsp+40h] [rbp-538h]
  __int64 v98; // [rsp+48h] [rbp-530h]
  __int128 v99; // [rsp+50h] [rbp-528h] BYREF
  __int128 v100; // [rsp+60h] [rbp-518h]
  void *v101; // [rsp+70h] [rbp-508h]
  volatile signed __int64 *v102; // [rsp+80h] [rbp-4F8h]
  __int128 *v103; // [rsp+88h] [rbp-4F0h] BYREF
  __int64 (__fastcall *v104)(); // [rsp+90h] [rbp-4E8h]
  void **v105; // [rsp+98h] [rbp-4E0h]
  __int64 (__fastcall *v106)(); // [rsp+A0h] [rbp-4D8h]
  size_t v107; // [rsp+A8h] [rbp-4D0h]
  _BYTE v108[24]; // [rsp+B0h] [rbp-4C8h] BYREF
  __int128 v109; // [rsp+C8h] [rbp-4B0h]
  void *v110; // [rsp+D8h] [rbp-4A0h]
  volatile signed __int64 *v111; // [rsp+E0h] [rbp-498h] BYREF
  char v112; // [rsp+E8h] [rbp-490h]
  __int64 v113; // [rsp+F0h] [rbp-488h]
  __int64 v114; // [rsp+F8h] [rbp-480h] BYREF
  void *v115[38]; // [rsp+100h] [rbp-478h] BYREF
  size_t v116; // [rsp+230h] [rbp-348h]
  volatile signed __int64 *v117; // [rsp+238h] [rbp-340h]
  char v118; // [rsp+240h] [rbp-338h]
  _OWORD src[19]; // [rsp+248h] [rbp-330h] BYREF
  __int128 v120; // [rsp+378h] [rbp-200h] BYREF
  void *v121; // [rsp+388h] [rbp-1F0h] BYREF
  _BYTE dest[136]; // [rsp+390h] [rbp-1E8h] BYREF
  _BYTE v123[352]; // [rsp+418h] [rbp-160h] BYREF

  v113 = a6;
  v8 = a4;
  v117 = a2;
  v118 = a3;
  v87 = *(_BYTE *)(a4 + 240);
  if ( !v87 )
  {
    LODWORD(v97) = a3;
    v102 = a2;
    v13 = _rust_alloc(608LL, 8LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 608LL);
    v10 = v13;
    v14 = *(const void **)(a1 + 32);
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 )
    {
      if ( v15 < 0 )
      {
        v98 = 0LL;
      }
      else
      {
        v98 = 1LL;
        v16 = _rust_alloc(v15, 1LL);
        if ( v16 )
        {
          v17 = (void *)v16;
LABEL_9:
          memcpy(v17, v14, v15);
          *(_QWORD *)&v99 = v15;
          *((_QWORD *)&v99 + 1) = v17;
          *(_QWORD *)&v100 = v15;
          v115[0] = 0LL;
          std::sys::os_str::bytes::Slice::to_owned(src, asc_2D85D, 1LL);
          *(_QWORD *)&v108[16] = *(_QWORD *)&src[1];
          *(_OWORD *)v108 = src[0];
          v8 = a4;
          uu_ls::PathData::new((__int64)src, (const char *)&v99, (__int64)v115, (size_t *)v108, a4, 0);
          v9 = (char *)a5;
          std::path::Path::_join(&v103, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), asc_2D85E, 2LL);
          *(_QWORD *)v108 = 0LL;
          std::sys::os_str::bytes::Slice::to_owned(v115, asc_2D85E, 2LL);
          *(void **)&v100 = v115[2];
          v99 = *(_OWORD *)v115;
          uu_ls::PathData::new((__int64)v115, (const char *)&v103, (__int64)v108, (size_t *)&v99, a4, 0);
          memcpy((void *)v10, src, 0x130uLL);
          memcpy((void *)(v10 + 304), v115, 0x130uLL);
          v11 = 2LL;
          a2 = v102;
          LOBYTE(a3) = (_BYTE)v97;
          goto LABEL_10;
        }
      }
      alloc::raw_vec::handle_error(v98, v15);
    }
    v17 = &dword_0 + 1;
    goto LABEL_9;
  }
  v9 = (char *)a5;
  v10 = 8LL;
  v11 = 0LL;
LABEL_10:
  v93 = v11;
  v94 = (_OWORD *)v10;
  v95 = v11;
  v111 = a2;
  v112 = a3;
  v97 = *(char **)(v8 + 8);
  v102 = (volatile signed __int64 *)(v9 + 32);
  v98 = 56LL * *(_QWORD *)(v8 + 16);
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v108, &v111);
    if ( !*(_QWORD *)v108 )
      break;
    v18 = *(void **)&v108[16];
    if ( *(_QWORD *)&v108[8] )
    {
      v101 = v110;
      v100 = v109;
      v99 = *(_OWORD *)&v108[8];
      if ( v87 != 2 )
        goto LABEL_28;
      std::fs::DirEntry::file_name(src, &v99);
      v20 = *((_QWORD *)&src[0] + 1);
      std::sys::os_str::bytes::Slice::to_str(v115, *((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1]);
      if ( v115[0] )
      {
        if ( *(_QWORD *)&src[0] )
          _rust_dealloc(v20, *(_QWORD *)&src[0], 1LL);
        goto LABEL_28;
      }
      if ( v115[2] )
        v21 = *(_BYTE *)v115[1] == 46;
      else
        v21 = 0;
      if ( *(_QWORD *)&src[0] )
        _rust_dealloc(v20, *(_QWORD *)&src[0], 1LL);
      if ( v21 )
      {
LABEL_50:
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v99) )
          alloc::sync::Arc<T,A>::drop_slow(&v99);
        v34 = *((_QWORD *)&v99 + 1);
        v35 = v100;
        **((_BYTE **)&v99 + 1) = 0;
        if ( v35 )
          _rust_dealloc(v34, v35, 1LL);
      }
      else
      {
LABEL_28:
        std::fs::DirEntry::file_name(src, &v99);
        v90 = v8;
        std::sys::os_str::bytes::Slice::to_str(v115, *((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1]);
        if ( v115[0] )
        {
          std::sys::os_str::bytes::Slice::to_string_lossy(v115);
          v22 = (size_t)v115[1];
          v23 = (char *)v115[2];
          n = (size_t)v115[0];
          if ( v115[0] == (void *)0x8000000000000000LL )
          {
            if ( v115[2] )
            {
              if ( (__int64)v115[2] < 0 )
              {
                v107 = v116;
LABEL_187:
                v24 = 0LL;
LABEL_188:
                alloc::raw_vec::handle_error(v24, v107);
              }
              v24 = 1LL;
              v25 = _rust_alloc(v115[2], 1LL);
              if ( !v25 )
              {
                v107 = (size_t)v23;
                goto LABEL_188;
              }
              v26 = (void *)v25;
            }
            else
            {
              v26 = &dword_0 + 1;
            }
            memcpy(v26, (const void *)v22, (size_t)v23);
            n = (size_t)v23;
            v116 = (size_t)v26;
            v22 = (size_t)v26;
          }
        }
        else
        {
          v27 = v115[1];
          n = (size_t)v115[2];
          if ( v115[2] )
          {
            if ( (__int64)v115[2] < 0 )
              goto LABEL_187;
            v24 = 1LL;
            v28 = _rust_alloc(v115[2], 1LL);
            if ( !v28 )
            {
              v107 = n;
              goto LABEL_188;
            }
            v22 = v28;
          }
          else
          {
            v22 = 1LL;
          }
          v29 = v27;
          v23 = (char *)n;
          memcpy((void *)v22, v29, n);
          v107 = v22;
        }
        v30 = &v23[v22];
        v31 = v98;
        v32 = v97;
        while ( v31 )
        {
          v33 = glob::Pattern::matches_from(v32, 1LL, v22, v30, 0LL, 65537LL);
          v32 += 56;
          v31 -= 56LL;
          if ( !v33 )
          {
            if ( n )
              _rust_dealloc(v22, n, 1LL);
            if ( *(_QWORD *)&src[0] )
              _rust_dealloc(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[0], 1LL);
            v9 = (char *)a5;
            v8 = v90;
            goto LABEL_50;
          }
        }
        if ( n )
          _rust_dealloc(v22, n, 1LL);
        if ( *(_QWORD *)&src[0] )
          _rust_dealloc(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[0], 1LL);
        std::fs::DirEntry::path(&v103, &v99);
        v9 = (char *)a5;
        v8 = v90;
        v115[5] = v101;
        *(_OWORD *)&v115[3] = v100;
        *(_OWORD *)&v115[1] = v99;
        v115[0] = &dword_0 + 1;
        *(_QWORD *)&src[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v123, (const char *)&v103, (__int64)v115, (size_t *)src, v90, 0);
        v36 = v95;
        if ( v95 == v93 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v93);
        memmove(&v94[19 * v36], v123, 0x130uLL);
        v95 = v36 + 1;
      }
    }
    else
    {
      v114 = *(_QWORD *)&v108[16];
      v19 = (void *)std::io::buffered::bufwriter::BufWriter<W>::flush_buf(v9);
      if ( v19 || (v19 = (void *)<std::io::stdio::Stdout as std::io::Write>::flush(v102)) != 0LL )
      {
        v115[0] = (void *)0x8000000000000000LL;
        v115[3] = v19;
        v37 = (void **)&byte_8;
        v38 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v38 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v39 = (__int64)v38;
        v40 = *(_OWORD *)v115;
        v38[1] = *(_OWORD *)&v115[2];
        *v38 = v40;
        core::ptr::drop_in_place<std::io::error::Error>(&v114, 8LL);
        if ( !_InterlockedDecrement64(v111) )
          alloc::sync::Arc<T,A>::drop_slow(&v111);
        goto LABEL_139;
      }
      v115[1] = v18;
      LOBYTE(v115[0]) = 1;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v120 = xmmword_1B7CA8;
      v103 = &v120;
      v104 = <&T as core::fmt::Display>::fmt;
      v105 = v115;
      v106 = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_1AC758;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v103;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<uu_ls::LsError>(v115);
    }
  }
  if ( !_InterlockedDecrement64(v111) )
    alloc::sync::Arc<T,A>::drop_slow(&v111);
  v37 = (void **)v95;
  uu_ls::sort_entries(v94, v95, v8, v9);
  v41 = v8;
  if ( *(_BYTE *)(v8 + 248) == 1 || *(_BYTE *)(v8 + 234) )
  {
    v92 = v8;
    if ( v95 )
    {
      v60 = v94;
      if ( *(_BYTE *)(v8 + 241) )
      {
        v61 = 304 * v95;
        v62 = 0LL;
        do
        {
          v64 = *((_QWORD *)v60 + 9);
          if ( v64 == 3 )
          {
            v37 = (void **)v60;
            core::cell::once::OnceCell<T>::try_init((char *)v60 + 72, v60, a5);
            v64 = *((_QWORD *)v60 + 9);
          }
          if ( v64 == 2 || (v60[8] & 0xB000 | 0x4000) == 0x6000 )
            v63 = 0LL;
          else
            v63 = *((_QWORD *)v60 + 21) << 9;
          v62 += v63;
          v60 += 19;
          v61 -= 304LL;
        }
        while ( v61 );
      }
      else
      {
        v76 = *(_QWORD *)(v8 + 216);
        if ( v76 )
        {
          v77 = 304 * v95;
          v62 = 0LL;
          do
          {
            v79 = *((_QWORD *)v60 + 9);
            if ( v79 == 3 )
            {
              v37 = (void **)v60;
              core::cell::once::OnceCell<T>::try_init((char *)v60 + 72, v60, a5);
              v79 = *((_QWORD *)v60 + 9);
            }
            if ( v79 == 2 )
            {
              v78 = 0LL;
            }
            else
            {
              if ( (v60[8] & 0xB000 | 0x4000) == 0x6000 )
                v80 = 0LL;
              else
                v80 = *((_QWORD *)v60 + 21) << 9;
              if ( (v76 | v80) >> 32 )
                v78 = v80 / v76;
              else
                v78 = (unsigned int)v80 / (unsigned int)v76;
            }
            v62 += v78;
            v60 += 19;
            v77 -= 304LL;
          }
          while ( v77 );
        }
        else
        {
          v83 = (__int64 *)v94 + 9;
          v84 = 304 * v95;
          v62 = 0LL;
          do
          {
            v85 = *v83;
            if ( *v83 == 3 )
            {
              v37 = (void **)(v83 - 9);
              core::cell::once::OnceCell<T>::try_init(v83, v83 - 9, a5);
              v85 = *v83;
            }
            if ( v85 != 2 )
              core::panicking::panic_const::panic_const_div_by_zero(&off_1AC830);
            v83 += 38;
            v84 -= 304LL;
          }
          while ( v84 );
        }
      }
    }
    else
    {
      v62 = 0LL;
    }
    v67 = *(_BYTE *)(v92 + 238);
    if ( v67 )
    {
      v39 = uu_ls::dired::indent(a5);
      if ( v39 )
        goto LABEL_139;
    }
    uucore::features::format::human::human_readable(v108, v62, *(unsigned __int8 *)(v92 + 241));
    *(_QWORD *)&src[0] = v108;
    *((_QWORD *)&src[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[1] = v92 + 250;
    *((_QWORD *)&src[1] + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v115[0] = &off_1AC788;
    v115[1] = &dword_0 + 2;
    v115[4] = 0LL;
    v115[2] = src;
    v115[3] = &dword_0 + 2;
    alloc::fmt::format::format_inner(&v99, v115);
    v37 = *(void ***)v108;
    if ( *(_QWORD *)v108 )
      _rust_dealloc(*(_QWORD *)&v108[8], *(_QWORD *)v108, 1LL);
    v68 = v99;
    v69 = v100;
    if ( (_QWORD)v99 == 0x8000000000000000LL )
    {
      v39 = *((_QWORD *)&v99 + 1);
      goto LABEL_139;
    }
    src[0] = __PAIR128__(v100, *((unsigned __int64 *)&v99 + 1));
    *(_QWORD *)v108 = src;
    *(_QWORD *)&v108[8] = <&T as core::fmt::Display>::fmt;
    v115[0] = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
    v115[1] = &dword_0 + 1;
    v115[4] = 0LL;
    v115[2] = v108;
    v115[3] = &dword_0 + 1;
    v70 = (void *)std::io::Write::write_fmt(a5, v115);
    if ( v70 )
    {
      v115[0] = (void *)0x8000000000000000LL;
      v115[3] = v70;
      v37 = (void **)&byte_8;
      v71 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v71 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v39 = (__int64)v71;
      v72 = *(_OWORD *)v115;
      v71[1] = *(_OWORD *)&v115[2];
      *v71 = v72;
      if ( (_QWORD)v68 )
      {
        v37 = (void **)v68;
        _rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1LL);
      }
      goto LABEL_139;
    }
    if ( v67 )
    {
      v81 = a7[6];
      if ( !v81 )
      {
        v82 = a7[2];
        if ( v82 )
          v81 = *(_QWORD *)(16 * v82 + a7[1] - 8) + 1LL;
        else
          v81 = 0LL;
      }
      a7[6] = v69 + v81 + 2;
    }
    v41 = v92;
    if ( (_QWORD)v68 )
      _rust_dealloc(*((_QWORD *)&v68 + 1), v68, 1LL);
  }
  v37 = (void **)v95;
  v39 = uu_ls::display_items(v94, v95, v41, a5, a7, a8);
  if ( v39 )
    goto LABEL_139;
  v42 = v41;
  if ( !*(_BYTE *)(v41 + 230) )
  {
LABEL_121:
    v65 = v94;
    for ( i = v95 + 1; i != 1; --i )
    {
      core::ptr::drop_in_place<uu_ls::PathData>(v65, v42);
      v65 += 19;
    }
    if ( v93 )
      _rust_dealloc(v94, 304 * v93, 8LL);
    return 0LL;
  }
  v43 = (char *)v94;
  v44 = (char *)&v94[19 * v95];
  v45 = *(_BYTE *)(v42 + 238);
  for ( j = 2 * (unsigned int)(v87 == 0); ; j = 0LL )
  {
LABEL_72:
    if ( j )
    {
      if ( (v44 - v43) / 0x130uLL <= j - 1 )
        goto LABEL_121;
      v43 += 304 * j;
    }
    for ( k = (__int64)v43; ; k += 304LL )
    {
      if ( (char *)k == v44 )
        goto LABEL_121;
      if ( *(_DWORD *)(k + 248) == 1 && (*(_DWORD *)(k + 252) & 0xF000) == 0x4000 )
        break;
    }
    v91 = v42;
    v37 = *(void ***)(k + 32);
    std::sys::pal::unix::fs::readdir(v115, v37, *(_QWORD *)(k + 40));
    v43 = (char *)(k + 304);
    v48 = v115[0];
    v88 = v45;
    if ( LOBYTE(v115[1]) != 2 )
      break;
    v103 = (__int128 *)v115[0];
    v49 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a5);
    if ( v49 || (v49 = <std::io::stdio::Stdout as std::io::Write>::flush(v102)) != 0 )
    {
      v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
      core::ptr::drop_in_place<std::io::error::Error>(&v103, v37);
      goto LABEL_139;
    }
    *(_QWORD *)&src[0] = v48;
    v50 = *(char **)(k + 32);
    v51 = *(void **)(k + 40);
    if ( v51 )
    {
      v97 = *(char **)(k + 32);
      if ( (__int64)v51 < 0 )
      {
        v98 = 0LL;
LABEL_191:
        alloc::raw_vec::handle_error(v98, v51);
      }
      v98 = 1LL;
      v52 = _rust_alloc(v51, 1LL);
      if ( !v52 )
        goto LABEL_191;
      v53 = (void *)v52;
      v50 = v97;
    }
    else
    {
      v53 = &dword_0 + 1;
    }
    memcpy(v53, v50, (size_t)v51);
    v115[2] = v51;
    v115[3] = v53;
    v115[4] = v51;
    v59 = *(_BYTE *)(k + 297);
    v115[1] = v48;
    BYTE1(v115[0]) = v59;
    LOBYTE(v115[0]) = 2;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 2 - (v59 == 0));
    if ( uucore::UTIL_NAME != 2 )
      once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v99 = xmmword_1B7CA8;
    *(_QWORD *)v108 = &v99;
    *(_QWORD *)&v108[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v108[16] = v115;
    *(_QWORD *)&v109 = <uu_ls::LsError as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_1AC758;
    *((_QWORD *)&src[0] + 1) = 3LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = v108;
    *((_QWORD *)&src[1] + 1) = 2LL;
    std::io::stdio::_eprint(src);
    core::ptr::drop_in_place<uu_ls::LsError>(v115);
    v42 = v91;
    v45 = v88;
  }
  v103 = (__int128 *)v115[0];
  LOBYTE(v104) = LOBYTE(v115[1]) != 0;
  v37 = *(void ***)(k + 32);
  v54 = *(_QWORD *)(k + 40);
  if ( *(_BYTE *)(k + 296) )
    nix::sys::stat::stat(v115, v37, v54);
  else
    nix::sys::stat::lstat(v115, v37, v54);
  if ( LODWORD(v115[0]) )
  {
    v86 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(((unsigned __int64)HIDWORD(v115[0]) << 32) | 2);
    goto LABEL_175;
  }
  memcpy(dest, &v115[2], sizeof(dest));
  v121 = v115[1];
  v37 = &v121;
  v55 = hashbrown::map::HashMap<K,V,S,A>::insert(v113, &v121);
  v97 = (char *)(k + 24);
  if ( v55 )
  {
    v56 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
    if ( v56 )
      goto LABEL_174;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v97);
    v115[3] = *(void **)&src[1];
    *(_OWORD *)&v115[1] = src[0];
    LOBYTE(v115[0]) = 5;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 2);
    *(_QWORD *)&v57 = uucore::util_name();
    v99 = v57;
    *(_QWORD *)v108 = &v99;
    *(_QWORD *)&v108[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v108[16] = v115;
    *(_QWORD *)&v109 = <uu_ls::LsError as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_1AC758;
    *((_QWORD *)&src[0] + 1) = 3LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = v108;
    *((_QWORD *)&src[1] + 1) = 2LL;
    std::io::stdio::_eprint(src);
    core::ptr::drop_in_place<uu_ls::LsError>(v115);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v103) )
      alloc::sync::Arc<T,A>::drop_slow(&v103);
    goto LABEL_106;
  }
  v115[0] = &off_1AC748;
  v115[1] = &dword_0 + 1;
  v115[2] = &byte_8;
  *(_OWORD *)&v115[3] = 0LL;
  v37 = v115;
  v56 = std::io::Write::write_fmt(a5, v115);
  if ( !v56 )
  {
    if ( v45 )
    {
      a7[6] = 2LL;
      v39 = uu_ls::dired::indent(a5);
      if ( v39 )
        goto LABEL_176;
      std::sys::os_str::bytes::Slice::to_string_lossy(v115);
      v58 = (char *)v115[2];
      if ( v115[0] != (void *)0x8000000000000000LL && v115[0] )
        _rust_dealloc(v115[1], v115[0], 1LL);
      uu_ls::dired::calculate_subdired(a7, v58);
      a7[6] += v58 + 3;
    }
    uu_ls::show_dir_name(k, a5, v91);
    v115[0] = &off_1AC748;
    v115[1] = &dword_0 + 1;
    v115[2] = &byte_8;
    *(_OWORD *)&v115[3] = 0LL;
    v37 = v115;
    v56 = std::io::Write::write_fmt(a5, v115);
    if ( !v56 )
    {
      v37 = (void **)v103;
      v39 = uu_ls::enter_directory(k, (_DWORD)v103, (unsigned __int8)v104, v91, a5, v113, (__int64)a7, a8);
      if ( v39 )
        goto LABEL_139;
      v37 = (void **)v97;
      uucore::features::fs::FileInformation::from_path(v115, v97, *(unsigned __int8 *)(k + 296));
      if ( v115[0] )
      {
        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v115[1]);
        goto LABEL_139;
      }
      memcpy((char *)src + 8, &v115[2], 0x88uLL);
      *(void **)&src[0] = v115[1];
      hashbrown::map::HashMap<K,V,S,A>::remove(v113, src);
      v45 = v88;
LABEL_106:
      j = 0LL;
      v42 = v91;
      goto LABEL_72;
    }
  }
LABEL_174:
  v86 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v56);
LABEL_175:
  v39 = v86;
LABEL_176:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v103) )
    alloc::sync::Arc<T,A>::drop_slow(&v103);
LABEL_139:
  v73 = v94;
  for ( m = v95 + 1; m != 1; --m )
  {
    core::ptr::drop_in_place<uu_ls::PathData>(v73, v37);
    v73 += 19;
  }
  if ( v93 )
    _rust_dealloc(v94, 304 * v93, 8LL);
  return v39;
}
