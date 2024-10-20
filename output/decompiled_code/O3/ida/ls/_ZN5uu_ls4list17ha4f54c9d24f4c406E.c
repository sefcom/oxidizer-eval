__int64 __fastcall uu_ls::list(_QWORD *a1, __int64 a2)
{
  _BYTE *v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // al
  unsigned __int64 v6; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r13
  _DWORD *v13; // rax
  __int64 v14; // rax
  _OWORD *v15; // rax
  __int64 v16; // r12
  __int128 v17; // xmm0
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  const void *v23; // r12
  signed __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // rax
  void *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r15
  char v30; // al
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int128 *v36; // rax
  __int128 v37; // xmm0
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // ebx
  __int64 v41; // rax
  _OWORD *v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 i; // r13
  __int64 v47; // rdi
  __int64 j; // r13
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 k; // r15
  __int64 v53; // rdi
  __int64 m; // r15
  unsigned __int64 v55; // rax
  _OWORD *v56; // rax
  __int128 v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // [rsp+8h] [rbp-460h] BYREF
  __int64 v60; // [rsp+10h] [rbp-458h]
  __int64 v61; // [rsp+18h] [rbp-450h]
  __int64 v62; // [rsp+20h] [rbp-448h] BYREF
  __int64 v63; // [rsp+28h] [rbp-440h]
  __int64 v64; // [rsp+30h] [rbp-438h]
  unsigned __int64 v65; // [rsp+38h] [rbp-430h]
  unsigned __int64 v66; // [rsp+40h] [rbp-428h]
  __int64 v67; // [rsp+48h] [rbp-420h] BYREF
  __int64 v68; // [rsp+50h] [rbp-418h]
  __int64 v69; // [rsp+58h] [rbp-410h]
  char v70; // [rsp+60h] [rbp-408h]
  __int64 v71; // [rsp+68h] [rbp-400h] BYREF
  __int64 v72; // [rsp+70h] [rbp-3F8h]
  __int64 v73; // [rsp+78h] [rbp-3F0h]
  volatile signed __int64 *v74; // [rsp+80h] [rbp-3E8h] BYREF
  bool v75; // [rsp+88h] [rbp-3E0h]
  __int64 v76; // [rsp+90h] [rbp-3D8h] BYREF
  __int64 v77; // [rsp+98h] [rbp-3D0h]
  __int128 v78; // [rsp+A0h] [rbp-3C8h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-3B8h]
  __int128 v80; // [rsp+B8h] [rbp-3B0h]
  _QWORD *v81; // [rsp+C8h] [rbp-3A0h]
  _BYTE *v82; // [rsp+D0h] [rbp-398h]
  __int64 v83; // [rsp+D8h] [rbp-390h] BYREF
  __int128 *v84; // [rsp+E0h] [rbp-388h] BYREF
  __int64 (__fastcall *v85)(); // [rsp+E8h] [rbp-380h]
  _OWORD *v86; // [rsp+F0h] [rbp-378h]
  __int64 (__fastcall *v87)(); // [rsp+F8h] [rbp-370h]
  __int64 v88; // [rsp+100h] [rbp-368h] BYREF
  char v89; // [rsp+108h] [rbp-360h]
  char v90; // [rsp+11Dh] [rbp-34Bh]
  __int128 v91; // [rsp+120h] [rbp-348h] BYREF
  __int64 v92; // [rsp+130h] [rbp-338h]
  _OWORD dest[19]; // [rsp+140h] [rbp-328h] BYREF
  _OWORD src[19]; // [rsp+270h] [rbp-1F8h] BYREF
  __int64 v95; // [rsp+3A8h] [rbp-C0h] BYREF
  _BYTE v96[136]; // [rsp+3B0h] [rbp-B8h] BYREF

  v2 = (_BYTE *)a2;
  v59 = 0LL;
  v60 = 8LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 8LL;
  v64 = 0LL;
  v81 = a1;
  v3 = std::io::stdio::stdout(a1);
  v4 = _rust_alloc(0x2000LL, 1LL);
  if ( !v4 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v67 = 0x2000LL;
  v68 = v4;
  v69 = 0LL;
  v70 = 0;
  v71 = v3;
  v76 = 0LL;
  v77 = 8LL;
  v78 = 0LL;
  v79 = 8LL;
  v80 = 0LL;
  v5 = 2;
  if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
  {
    v88 = a2 + 24;
    v89 = 2;
    v5 = 0;
  }
  v90 = v5;
  v6 = a1[2];
  v72 = *a1;
  v66 = a1[1];
  v65 = v6;
  v82 = (_BYTE *)a2;
  if ( v6 )
  {
    v7 = (_QWORD *)v66;
    v8 = (_QWORD *)(v66 + 16 * v65);
    LOBYTE(v73) = *(_BYTE *)(a2 + 232);
    while ( 1 )
    {
      std::sys::os_str::bytes::Slice::to_owned(dest, *v7, v7[1]);
      v92 = *(_QWORD *)&dest[1];
      v91 = dest[0];
      *(_QWORD *)&dest[0] = 0LL;
      v84 = (__int128 *)0x8000000000000000LL;
      uu_ls::PathData::new((__int64)src, (const char *)&v91, (__int64)dest, (size_t *)&v84, (__int64)v2, 1);
      v9 = *((_QWORD *)&src[4] + 1);
      if ( *((_QWORD *)&src[4] + 1) == 3LL )
      {
        core::cell::once::OnceCell<T>::try_init((char *)&src[4] + 8, src, &v67);
        v9 = *((_QWORD *)&src[4] + 1);
      }
      if ( v9 != 2 )
        break;
      core::ptr::drop_in_place<uu_ls::PathData>(src);
LABEL_7:
      v7 += 2;
      if ( v7 == v8 )
        goto LABEL_24;
    }
    v10 = DWORD2(src[15]);
    if ( DWORD2(src[15]) == 2 )
    {
      core::cell::once::OnceCell<T>::try_init((char *)&src[15] + 8, src, &v67);
      v10 = DWORD2(src[15]);
    }
    if ( v10 )
    {
      if ( !(_BYTE)v73 && (WORD6(src[15]) & 0xF000) == 0x4000 )
      {
        memcpy(dest, src, sizeof(dest));
        v11 = v64;
        if ( v64 == v62 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v62);
        memmove((void *)(v63 + 304 * v11), dest, 0x130uLL);
        v64 = v11 + 1;
LABEL_23:
        v2 = v82;
        goto LABEL_7;
      }
    }
    else
    {
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    }
    memcpy(dest, src, sizeof(dest));
    v12 = v61;
    if ( v61 == v59 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v59);
    memmove((void *)(v60 + 304 * v12), dest, 0x130uLL);
    v61 = v12 + 1;
    goto LABEL_23;
  }
LABEL_24:
  if ( v72 )
    _rust_dealloc(v66, 16 * v72, 8LL);
  uu_ls::sort_entries(v60, v61, v2, &v67);
  uu_ls::sort_entries(v63, v64, v2, &v67);
  if ( v90 != 2 && lscolors::LsColors::style_for_indicator(v88, 0LL) )
  {
    v90 = 1;
    v89 = 2;
    v13 = (_DWORD *)_rust_alloc(4LL, 1LL);
    if ( !v13 )
      alloc::raw_vec::handle_error(1LL, 4LL);
    *v13 = 1831885595;
    *(_QWORD *)&src[0] = 4LL;
    *((_QWORD *)&src[0] + 1) = v13;
    *(_QWORD *)&src[1] = 4LL;
    v84 = src;
    v85 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = &v84;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    v14 = std::io::Write::write_fmt(&v67, dest);
    if ( v14 )
    {
      *(_QWORD *)&dest[0] = 0x8000000000000000LL;
      *((_QWORD *)&dest[1] + 1) = v14;
      v15 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v16 = (__int64)v15;
      v17 = dest[0];
      v15[1] = dest[1];
      *v15 = v17;
      if ( *(_QWORD *)&src[0] )
        _rust_dealloc(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[0], 1LL);
      goto LABEL_80;
    }
    if ( *(_QWORD *)&src[0] )
      _rust_dealloc(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[0], 1LL);
  }
  v16 = uu_ls::display_items(v60, v61, v2, &v67, &v76, &v88);
  if ( v16 )
    goto LABEL_80;
  if ( v64 )
  {
    v18 = v63;
    LOBYTE(v72) = v65 < 2 && v2[230] == 0;
    LOBYTE(v65) = v2[238];
    v19 = 304 * v64;
    v66 = 0LL;
    do
    {
      std::sys::pal::unix::fs::readdir(dest, *(_QWORD *)(v18 + 32), *(_QWORD *)(v18 + 40));
      v21 = *(_QWORD *)&dest[0];
      v73 = v19;
      if ( BYTE8(dest[0]) == 2 )
      {
        v83 = *(_QWORD *)&dest[0];
        v22 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v67);
        if ( v22 || (v22 = <std::io::stdio::Stdout as std::io::Write>::flush(&v71)) != 0 )
        {
          *(_QWORD *)&dest[0] = 0x8000000000000000LL;
          *((_QWORD *)&dest[1] + 1) = v22;
          v42 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v42 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v16 = (__int64)v42;
          v43 = dest[0];
          v42[1] = dest[1];
          *v42 = v43;
          core::ptr::drop_in_place<std::io::error::Error>(&v83, 8LL);
          goto LABEL_80;
        }
        *(_QWORD *)&src[0] = v21;
        v23 = *(const void **)(v18 + 32);
        v24 = *(_QWORD *)(v18 + 40);
        if ( v24 )
        {
          if ( v24 < 0 )
          {
            v25 = 0LL;
LABEL_136:
            alloc::raw_vec::handle_error(v25, v24);
          }
          v25 = 1LL;
          v26 = _rust_alloc(*(_QWORD *)(v18 + 40), 1LL);
          if ( !v26 )
            goto LABEL_136;
          v27 = (void *)v26;
          v2 = v82;
        }
        else
        {
          v27 = &dword_0 + 1;
        }
        memcpy(v27, v23, v24);
        *(_QWORD *)&dest[1] = v24;
        *((_QWORD *)&dest[1] + 1) = v27;
        *(_QWORD *)&dest[2] = v24;
        v30 = *(_BYTE *)(v18 + 297);
        *((_QWORD *)&dest[0] + 1) = v21;
        BYTE1(dest[0]) = v30;
        LOBYTE(dest[0]) = 2;
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 2 - (v30 == 0));
        if ( uucore::UTIL_NAME != 2 )
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v91 = xmmword_1B7CA8;
        v84 = &v91;
        v85 = <&T as core::fmt::Display>::fmt;
        v86 = dest;
        v87 = <uu_ls::LsError as core::fmt::Display>::fmt;
        *(_QWORD *)&src[0] = &unk_1AC758;
        *((_QWORD *)&src[0] + 1) = 3LL;
        *(_QWORD *)&src[2] = 0LL;
        *(_QWORD *)&src[1] = &v84;
        *((_QWORD *)&src[1] + 1) = 2LL;
        std::io::stdio::_eprint(src);
        core::ptr::drop_in_place<uu_ls::LsError>(dest);
        v20 = v73;
      }
      else
      {
        v74 = *(volatile signed __int64 **)&dest[0];
        v75 = BYTE8(dest[0]) != 0;
        if ( !(_BYTE)v72 )
        {
          if ( v66 | v61 )
          {
            *(_QWORD *)&dest[0] = &off_1AC748;
            *((_QWORD *)&dest[0] + 1) = 1LL;
            dest[1] = 8uLL;
            v28 = std::io::Write::write_fmt(&v67, dest);
            if ( v28
              || (uu_ls::show_dir_name(v18, (__int64)&v67, (__int64)v2),
                  *(_QWORD *)&dest[0] = &off_1AC748,
                  *((_QWORD *)&dest[0] + 1) = 1LL,
                  dest[1] = 8uLL,
                  (v28 = std::io::Write::write_fmt(&v67, dest)) != 0) )
            {
LABEL_130:
              v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
              goto LABEL_131;
            }
          }
          else
          {
            if ( (_BYTE)v65 )
            {
              v16 = uu_ls::dired::indent(&v67);
              if ( v16 )
                goto LABEL_131;
            }
            uu_ls::show_dir_name(v18, (__int64)&v67, (__int64)v2);
            *(_QWORD *)&dest[0] = &off_1AC748;
            *((_QWORD *)&dest[0] + 1) = 1LL;
            dest[1] = 8uLL;
            v28 = std::io::Write::write_fmt(&v67, dest);
            if ( v28 )
              goto LABEL_130;
            if ( (_BYTE)v65 )
            {
              if ( (_QWORD)v78 )
                v29 = *(_QWORD *)(16 * v78 + v77 - 8) + 3LL;
              else
                v29 = 2LL;
              v31 = *(_QWORD *)(v18 + 16);
              v32 = v80;
              if ( (_QWORD)v80 == *((_QWORD *)&v78 + 1) )
                alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v78 + 8);
              v33 = v29 + 2LL * (v32 != 0);
              v34 = v79;
              v35 = 16 * v32;
              *(_QWORD *)(v79 + v35) = v33;
              *(_QWORD *)(v34 + v35 + 8) = v31 + v33;
              *(_QWORD *)&v80 = v32 + 1;
              *((_QWORD *)&v80 + 1) += v31 + 3;
            }
          }
        }
        v36 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
        if ( !v36 )
          core::result::unwrap_failed(
            anon_85d03d1a699a17dda65ec78a38b83d9c_7_llvm_14964567593500591213,
            70LL,
            dest,
            &anon_85d03d1a699a17dda65ec78a38b83d9c_10_llvm_14964567593500591213,
            &anon_85d03d1a699a17dda65ec78a38b83d9c_9_llvm_14964567593500591213);
        v37 = *v36;
        ++*(_QWORD *)v36;
        src[1] = xmmword_1AD570;
        src[0] = *(_OWORD *)&anon_8ad7a2c4114f08ca7db24dfdc43d9a46_9_llvm_15267917218625265870;
        src[2] = v37;
        v38 = *(_QWORD *)(v18 + 32);
        v39 = *(_QWORD *)(v18 + 40);
        if ( *(_BYTE *)(v18 + 296) )
          nix::sys::stat::stat(dest, v38, v39);
        else
          nix::sys::stat::lstat(dest, v38, v39);
        v40 = dest[0];
        if ( LODWORD(dest[0]) )
        {
          v55 = ((unsigned __int64)DWORD1(dest[0]) << 32) | 2;
          *(_QWORD *)&dest[0] = 0x8000000000000000LL;
          *((_QWORD *)&dest[1] + 1) = v55;
          v56 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v56 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v16 = (__int64)v56;
          v57 = dest[0];
          v56[1] = dest[1];
          *v56 = v57;
LABEL_125:
          if ( *((_QWORD *)&src[0] + 1) )
          {
            v58 = 144 * (*((_QWORD *)&src[0] + 1) + 1LL);
            if ( v58 + *((_QWORD *)&src[0] + 1) != -17 )
              _rust_dealloc(*(_QWORD *)&src[0] - v58, v58 + *((_QWORD *)&src[0] + 1) + 17, 16LL);
          }
          if ( !v40 )
          {
LABEL_80:
            if ( v76 )
              _rust_dealloc(v77, 16 * v76, 8LL);
            if ( *((_QWORD *)&v78 + 1) )
              _rust_dealloc(v79, 16LL * *((_QWORD *)&v78 + 1), 8LL);
            if ( !v70 )
            {
              v44 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v67);
              if ( v44 )
                core::ptr::drop_in_place<std::io::error::Error>(v44);
            }
            if ( v67 )
              _rust_dealloc(v68, v67, 1LL);
            v45 = v63;
            for ( i = v64 + 1; i != 1; --i )
            {
              core::ptr::drop_in_place<uu_ls::PathData>();
              v45 += 304LL;
            }
            if ( v62 )
              _rust_dealloc(v63, 304 * v62, 8LL);
            v47 = v60;
            for ( j = v61 + 1; j != 1; --j )
            {
              core::ptr::drop_in_place<uu_ls::PathData>();
              v47 += 304LL;
            }
            if ( v59 )
              _rust_dealloc(v60, 304 * v59, 8LL);
            return v16;
          }
LABEL_131:
          if ( !_InterlockedDecrement64(v74) )
            alloc::sync::Arc<T,A>::drop_slow(&v74);
          goto LABEL_80;
        }
        memcpy(v96, &dest[1], sizeof(v96));
        v95 = *((_QWORD *)&dest[0] + 1);
        hashbrown::map::HashMap<K,V,S,A>::insert(src, &v95);
        v16 = uu_ls::enter_directory(
                v18,
                (_DWORD)v74,
                v75,
                (_DWORD)v2,
                (unsigned int)&v67,
                (unsigned int)src,
                (__int64)&v76,
                (__int64)&v88);
        if ( v16 )
          goto LABEL_125;
        if ( *((_QWORD *)&src[0] + 1) )
        {
          v41 = 144 * (*((_QWORD *)&src[0] + 1) + 1LL);
          if ( v41 + *((_QWORD *)&src[0] + 1) != -17 )
            _rust_dealloc(*(_QWORD *)&src[0] - v41, v41 + *((_QWORD *)&src[0] + 1) + 17, 16LL);
        }
        v20 = v73;
      }
      v18 += 304LL;
      --v66;
      v19 = v20 - 304;
    }
    while ( v19 );
    if ( !(_BYTE)v65 )
      goto LABEL_103;
    goto LABEL_101;
  }
  if ( v2[238] )
  {
LABEL_101:
    if ( !v2[239] )
    {
      v16 = uu_ls::dired::print_dired_output(v2, &v76, &v67);
      if ( v16 )
        goto LABEL_80;
    }
  }
LABEL_103:
  if ( v76 )
    _rust_dealloc(v77, 16 * v76, 8LL);
  if ( *((_QWORD *)&v78 + 1) )
    _rust_dealloc(v79, 16LL * *((_QWORD *)&v78 + 1), 8LL);
  if ( !v70 )
  {
    v50 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(&v67);
    if ( v50 )
      core::ptr::drop_in_place<std::io::error::Error>(v50);
  }
  if ( v67 )
    _rust_dealloc(v68, v67, 1LL);
  v51 = v63;
  for ( k = v64 + 1; k != 1; --k )
  {
    core::ptr::drop_in_place<uu_ls::PathData>();
    v51 += 304LL;
  }
  if ( v62 )
    _rust_dealloc(v63, 304 * v62, 8LL);
  v53 = v60;
  for ( m = v61 + 1; m != 1; --m )
  {
    core::ptr::drop_in_place<uu_ls::PathData>();
    v53 += 304LL;
  }
  if ( v59 )
    _rust_dealloc(v60, 304 * v59, 8LL);
  return 0LL;
}
