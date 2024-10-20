_OWORD *__fastcall uu_mv::mv(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  _OWORD *v7; // rsi
  char v8; // bp
  __int64 v9; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // r15
  __int128 v12; // xmm0
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int128 v15; // kr00_16
  _QWORD *v16; // r12
  __int64 v17; // rsi
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  int v21; // eax
  char v22; // al
  char v23; // al
  size_t v24; // rdi
  size_t v25; // r15
  void *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // eax
  char is_dir; // r15
  unsigned __int8 v32; // al
  int v33; // ecx
  _OWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // r12
  size_t v39; // r15
  __int64 v40; // rbp
  void *v41; // rsi
  __int64 v42; // r13
  _OWORD *v43; // rsi
  __int64 v44; // rax
  __int128 v45; // kr30_16
  __int64 v46; // r13
  __int64 v47; // rax
  __int128 v48; // kr40_16
  __int64 v49; // r13
  _OWORD *v50; // rcx
  __int64 v51; // rdx
  __int128 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  char yes; // al
  int v57; // eax
  char v58; // al
  __int128 v59; // kr50_16
  __int64 v60; // r15
  char v61; // al
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  _QWORD *v65; // r13
  __int64 v66; // rsi
  __int64 v68; // rax
  __int128 v69; // rax
  __int64 v70; // [rsp+8h] [rbp-2C0h]
  size_t v71; // [rsp+10h] [rbp-2B8h]
  _OWORD *v72; // [rsp+18h] [rbp-2B0h]
  size_t v73; // [rsp+20h] [rbp-2A8h]
  _BYTE v74[33]; // [rsp+28h] [rbp-2A0h] BYREF
  _BYTE v75[23]; // [rsp+49h] [rbp-27Fh]
  __int16 v76; // [rsp+60h] [rbp-268h]
  char v77; // [rsp+62h] [rbp-266h]
  _OWORD src[11]; // [rsp+68h] [rbp-260h] BYREF
  size_t n[2]; // [rsp+118h] [rbp-1B0h] BYREF
  _BYTE v80[17]; // [rsp+128h] [rbp-1A0h]
  _BYTE v81[23]; // [rsp+139h] [rbp-18Fh]
  __int16 v82; // [rsp+150h] [rbp-178h]
  char v83; // [rsp+152h] [rbp-176h]
  _OWORD dest[11]; // [rsp+158h] [rbp-170h] BYREF
  void *s2; // [rsp+208h] [rbp-C0h]
  __int128 v86; // [rsp+210h] [rbp-B8h] BYREF
  _OWORD v87[2]; // [rsp+220h] [rbp-A8h]
  __int128 v88; // [rsp+240h] [rbp-88h] BYREF
  _BYTE v89[23]; // [rsp+250h] [rbp-78h]
  __int64 v90; // [rsp+270h] [rbp-58h] BYREF
  __int64 v91; // [rsp+278h] [rbp-50h]
  unsigned __int64 v92; // [rsp+280h] [rbp-48h]
  size_t v93; // [rsp+288h] [rbp-40h]
  __int64 v94; // [rsp+290h] [rbp-38h]

  v4 = a1 + 24 * a2;
  if ( *(_BYTE *)(a3 + 50) )
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v90, a1, v4);
  else
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v90, a1, v4);
  if ( *(_QWORD *)(a3 + 24) == 0x8000000000000000LL )
  {
    v5 = v91;
    v6 = v92;
    if ( v92 != 2 )
    {
      if ( *(_BYTE *)(a3 + 48) )
      {
        if ( v92 <= 2 )
          core::panicking::panic_bounds_check(2LL, v92, &off_130A80);
        v18 = *(_OWORD *)(v91 + 56);
        *(_QWORD *)v74 = 1LL;
        *(_OWORD *)&v74[8] = v18;
        v74[24] = 1;
        n[0] = (size_t)v74;
        n[1] = (size_t)<os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&src[0] = &off_130A98;
        *((_QWORD *)&src[0] + 1) = 1LL;
        *(_QWORD *)&src[2] = 0LL;
        *(_QWORD *)&src[1] = n;
        *((_QWORD *)&src[1] + 1) = 1LL;
        alloc::fmt::format::format_inner(dest, src);
        DWORD2(dest[1]) = 1;
        v19 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v19 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v11 = v19;
        v20 = dest[0];
        v19[1] = dest[1];
        *v19 = v20;
      }
      else
      {
        if ( !v92 )
          core::option::unwrap_failed(&off_130A68);
        v11 = (_OWORD *)uu_mv::move_files_into_dir(
                          v91,
                          v92 - 1,
                          *(_QWORD *)(v91 + 24 * (v92 - 1) + 8),
                          *(_QWORD *)(v91 + 24 * (v92 - 1) + 16),
                          a3);
      }
      goto LABEL_131;
    }
    v7 = *(_OWORD **)(v91 + 8);
    v73 = *(_QWORD *)(v91 + 32);
    v71 = *(_QWORD *)(v91 + 40);
    v8 = *(_BYTE *)(a3 + 54);
    v70 = *(_QWORD *)(v91 + 16);
    if ( v8 == 1
      && (unsigned __int8)uucore::features::backup_control::source_is_target_backup(
                            v7,
                            *(_QWORD *)(v91 + 16),
                            v73,
                            v71,
                            *(_QWORD *)(a3 + 8),
                            *(_QWORD *)(a3 + 16)) )
    {
      *(_QWORD *)v74 = 1LL;
      *(_QWORD *)&v74[8] = v73;
      *(_QWORD *)&v74[16] = v71;
      v74[24] = 1;
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = v7;
      *(_QWORD *)&dest[1] = v70;
      BYTE8(dest[1]) = 1;
      n[0] = (size_t)v74;
      n[1] = (size_t)<os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v80 = dest;
      *(_QWORD *)&v80[8] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &off_130878;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = n;
      *((_QWORD *)&src[1] + 1) = 2LL;
      alloc::fmt::format::format_inner(&v86, src);
      v9 = std::io::error::Error::new(0LL, &v86);
      *(_QWORD *)&src[0] = 0x8000000000000000LL;
      *((_QWORD *)&src[1] + 1) = v9;
      v10 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v10 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v11 = v10;
      v12 = src[0];
      v10[1] = src[1];
      *v10 = v12;
      goto LABEL_131;
    }
    v72 = v7;
    std::sys::pal::unix::fs::lstat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
      *(_QWORD *)&dest[0] = 2LL;
LABEL_29:
      core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v7);
      if ( v70 && ((v21 = *((unsigned __int8 *)v72 + v70 - 1), v21 == 47) || v21 == 92) )
      {
        *(_QWORD *)v74 = 0LL;
        *(_QWORD *)&v74[8] = 1LL;
        *(_QWORD *)&v74[16] = 0LL;
        *(_QWORD *)&src[3] = 32LL;
        BYTE8(src[3]) = 3;
        *(_QWORD *)&src[0] = 0LL;
        *(_QWORD *)&src[1] = 0LL;
        *(_QWORD *)&src[2] = v74;
        *((_QWORD *)&src[2] + 1) = &off_130620;
        std::sys::os_str::bytes::Slice::to_str(dest, v72, v70);
        if ( *(_QWORD *)&dest[0] )
          v22 = os_display::unix::write_escaped(src, v72, v70);
        else
          v22 = os_display::unix::write(src, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1], 1LL);
        if ( v22 )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        *(_OWORD *)((char *)dest + 8) = *(_OWORD *)v74;
        *((_QWORD *)&dest[1] + 1) = *(_QWORD *)&v74[16];
        *(_QWORD *)&dest[0] = 1LL;
        v29 = _rust_alloc(56LL, 8LL);
        if ( !v29 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
      }
      else
      {
        *(_QWORD *)v74 = 0LL;
        *(_QWORD *)&v74[8] = 1LL;
        *(_QWORD *)&v74[16] = 0LL;
        *(_QWORD *)&src[3] = 32LL;
        BYTE8(src[3]) = 3;
        *(_QWORD *)&src[0] = 0LL;
        *(_QWORD *)&src[1] = 0LL;
        *(_QWORD *)&src[2] = v74;
        *((_QWORD *)&src[2] + 1) = &off_130620;
        std::sys::os_str::bytes::Slice::to_str(dest, v72, v70);
        if ( *(_QWORD *)&dest[0] )
          v23 = os_display::unix::write_escaped(src, v72, v70);
        else
          v23 = os_display::unix::write(src, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1], 1LL);
        if ( v23 )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        *(_OWORD *)((char *)dest + 8) = *(_OWORD *)v74;
        *((_QWORD *)&dest[1] + 1) = *(_QWORD *)&v74[16];
        *(_QWORD *)&dest[0] = 0LL;
        v29 = _rust_alloc(56LL, 8LL);
        if ( !v29 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
      }
LABEL_129:
      v11 = (_OWORD *)v29;
      *(_QWORD *)(v29 + 48) = *(_QWORD *)&dest[3];
      v62 = dest[0];
      v63 = dest[1];
      v64 = dest[2];
LABEL_130:
      v11[2] = v64;
      v11[1] = v63;
      *v11 = v62;
      goto LABEL_131;
    }
    v7 = src;
    memcpy(dest, src, sizeof(dest));
    if ( *(_QWORD *)&dest[0] == 2LL )
      goto LABEL_29;
    std::path::Path::components(n, v72, v70);
    std::path::Path::components(v74, v73, v71);
    v24 = n[0];
    v25 = n[1];
    v27 = *(_QWORD *)&v74[8];
    v26 = *(void **)v74;
    v28 = v70;
    if ( n[1] == *(_QWORD *)&v74[8] && (_BYTE)v82 == (_BYTE)v76 && HIBYTE(v82) == 2 && HIBYTE(v76) == 2 )
    {
      if ( v80[0] == 6 )
      {
        if ( v74[16] < 3u )
          goto LABEL_56;
LABEL_55:
        v94 = *(_QWORD *)&v74[8];
        s2 = *(void **)v74;
        v93 = n[0];
        v30 = bcmp((const void *)n[0], *(const void **)v74, n[1]);
        v24 = v93;
        v27 = v94;
        v26 = s2;
        if ( !v30 )
          goto LABEL_62;
        goto LABEL_56;
      }
      if ( v74[16] != 6 )
      {
        if ( v80[0] < 3u != v74[16] < 3u )
          goto LABEL_56;
        goto LABEL_55;
      }
      if ( v80[0] >= 3u )
        goto LABEL_55;
    }
LABEL_56:
    if ( v80[0] != 6 )
    {
      *(_QWORD *)&v89[15] = *(_QWORD *)&v81[15];
      *(_OWORD *)v89 = *(_OWORD *)v81;
      v88 = *(_OWORD *)&v80[1];
    }
    *(_QWORD *)&dest[0] = v24;
    *((_QWORD *)&dest[0] + 1) = v25;
    LOBYTE(dest[1]) = v80[0];
    *(_OWORD *)((char *)&dest[1] + 1) = v88;
    *(_OWORD *)((char *)&dest[2] + 1) = *(_OWORD *)v89;
    *(_QWORD *)&dest[3] = *(_QWORD *)&v89[15];
    WORD4(dest[3]) = v82;
    BYTE10(dest[3]) = v83;
    if ( v74[16] != 6 )
    {
      *(_QWORD *)((char *)v87 + 15) = *(_QWORD *)&v75[15];
      v87[0] = *(_OWORD *)v75;
      v86 = *(_OWORD *)&v74[17];
    }
    *(_QWORD *)&src[0] = v26;
    *((_QWORD *)&src[0] + 1) = v27;
    LOBYTE(src[1]) = v74[16];
    *(_OWORD *)((char *)&src[1] + 1) = v86;
    *(_OWORD *)((char *)&src[2] + 1) = v87[0];
    *(_QWORD *)&src[3] = *(_QWORD *)((char *)v87 + 15);
    WORD4(src[3]) = v76;
    BYTE10(src[3]) = v77;
    v28 = v70;
    if ( !(unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(dest, src) )
    {
      v28 = v70;
      if ( !(unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(v72, v70, v73, v71) )
      {
        v28 = v70;
        if ( ((unsigned __int8)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(v72, v70, v73, v71) & (v8 == 0)) == 0 )
          goto LABEL_63;
        goto LABEL_76;
      }
    }
LABEL_62:
    if ( v8 )
    {
LABEL_63:
      is_dir = std::path::Path::is_dir(v73, v71);
      v32 = std::path::Path::is_dir(v72, v70);
      if ( v71 && ((v33 = *(unsigned __int8 *)(v71 + v73 - 1), v33 == 47) || v33 == 92) )
      {
        v34 = v72;
        v35 = v70;
        if ( !is_dir )
        {
          if ( !((*(_BYTE *)(a3 + 48) != 0) | v32) && *(_BYTE *)(a3 + 55) != 2 )
          {
            *(_QWORD *)&dest[0] = 1LL;
            *((_QWORD *)&dest[0] + 1) = v73;
            *(_QWORD *)&dest[1] = v71;
            BYTE8(dest[1]) = 1;
            <T as alloc::string::ToString>::to_string((char *)src + 8, dest);
            *(_QWORD *)&src[0] = 9LL;
            v36 = alloc::alloc::exchange_malloc();
LABEL_139:
            v11 = (_OWORD *)v36;
            *(_QWORD *)(v36 + 48) = *(_QWORD *)&src[3];
            v62 = src[0];
            v63 = src[1];
            v64 = src[2];
            goto LABEL_130;
          }
          goto LABEL_83;
        }
      }
      else
      {
        v34 = v72;
        v35 = v70;
        if ( !is_dir )
        {
LABEL_83:
          v43 = (_OWORD *)v73;
          std::sys::pal::unix::fs::stat(src);
          if ( LODWORD(src[0]) == 2 )
          {
            *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
            *(_QWORD *)&dest[0] = 2LL;
LABEL_86:
            core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8, v43);
            goto LABEL_87;
          }
          v43 = src;
          memcpy(dest, src, sizeof(dest));
          if ( *(_QWORD *)&dest[0] == 2LL )
            goto LABEL_86;
          if ( !(unsigned __int8)std::path::Path::is_dir(v72, v70) )
          {
LABEL_87:
            v44 = uu_mv::rename(v72, v70, v73, v71, a3, 0LL);
            if ( v44 )
            {
              n[0] = v44;
              *(_QWORD *)v74 = n;
              *(_QWORD *)&v74[8] = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
              *((_QWORD *)&src[0] + 1) = 1LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = v74;
              *((_QWORD *)&src[1] + 1) = 1LL;
              alloc::fmt::format::format_inner(dest, src);
              v45 = dest[0];
              v46 = *(_QWORD *)&dest[1];
              v47 = _rust_alloc(32LL, 8LL);
              if ( !v47 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v11 = (_OWORD *)v47;
              *(_OWORD *)v47 = v45;
              *(_QWORD *)(v47 + 16) = v46;
              *(_DWORD *)(v47 + 24) = 1;
              core::ptr::drop_in_place<std::io::error::Error>(n, 8LL);
            }
            else
            {
              v11 = 0LL;
            }
            goto LABEL_131;
          }
          v50 = v72;
          v51 = v70;
          if ( *(_BYTE *)(a3 + 53) )
          {
            if ( *(_BYTE *)(a3 + 53) == 2 )
              goto LABEL_104;
            *(_QWORD *)&v52 = uucore::util_name(v72, v70, v70, v72);
            dest[0] = v52;
            *(_QWORD *)v74 = dest;
            *(_QWORD *)&v74[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &unk_130950;
            *((_QWORD *)&src[0] + 1) = 2LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = v74;
            *((_QWORD *)&src[1] + 1) = 1LL;
            std::io::stdio::_eprint(src);
            *(_QWORD *)&dest[0] = 1LL;
            *((_QWORD *)&dest[0] + 1) = v73;
            *(_QWORD *)&dest[1] = v71;
            BYTE8(dest[1]) = 1;
            *(_QWORD *)v74 = dest;
            *(_QWORD *)&v74[8] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &off_130970;
            *((_QWORD *)&src[0] + 1) = 2LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = v74;
            *((_QWORD *)&src[1] + 1) = 1LL;
            std::io::stdio::_eprint(src);
            *(_QWORD *)&src[0] = &off_130990;
            *((_QWORD *)&src[0] + 1) = 1LL;
            src[1] = 8uLL;
            std::io::stdio::_eprint(src);
            *(_QWORD *)&v86 = &std::io::stdio::stderr::INSTANCE;
            v53 = <std::io::stdio::Stderr as std::io::Write>::flush(&v86);
            if ( v53 )
            {
              n[0] = v53;
              *(_QWORD *)&v69 = uucore::util_name(&v86, v70, v54, v55);
              dest[0] = v69;
              *(_QWORD *)v74 = dest;
              *(_QWORD *)&v74[8] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = &unk_130950;
              *((_QWORD *)&src[0] + 1) = 2LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = v74;
              *((_QWORD *)&src[1] + 1) = 1LL;
              std::io::stdio::_eprint(src);
              *(_QWORD *)&dest[0] = n;
              *((_QWORD *)&dest[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = &unk_1309A0;
              *((_QWORD *)&src[0] + 1) = 2LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = dest;
              *((_QWORD *)&src[1] + 1) = 1LL;
              std::io::stdio::_eprint(src);
              std::process::exit(1);
            }
            yes = uucore::read_yes();
            v50 = v72;
            v51 = v70;
            if ( yes )
            {
LABEL_104:
              *(_QWORD *)v74 = 1LL;
              *(_QWORD *)&v74[8] = v50;
              *(_QWORD *)&v74[16] = v51;
              v74[24] = 1;
              <T as alloc::string::ToString>::to_string(&v86, v74);
              *(_QWORD *)&dest[0] = 1LL;
              *((_QWORD *)&dest[0] + 1) = v73;
              *(_QWORD *)&dest[1] = v71;
              BYTE8(dest[1]) = 1;
              <T as alloc::string::ToString>::to_string(n, dest);
              *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v87[0];
              *(_OWORD *)((char *)src + 8) = v86;
              src[2] = *(_OWORD *)n;
              *(_QWORD *)&src[3] = *(_QWORD *)v80;
              *(_QWORD *)&src[0] = 6LL;
              v36 = alloc::alloc::exchange_malloc();
              goto LABEL_139;
            }
            v68 = std::io::error::Error::new(39LL, 1LL, 0LL, v72);
            v11 = (_OWORD *)uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
          }
          else
          {
            v11 = 0LL;
          }
LABEL_131:
          v65 = (_QWORD *)(v5 + 8);
          do
          {
            v66 = *(v65 - 1);
            if ( v66 )
              _rust_dealloc(*v65, v66, 1LL);
            v65 += 3;
            --v6;
          }
          while ( v6 );
          if ( v90 )
            _rust_dealloc(v5, 24 * v90, 8LL);
          return v11;
        }
      }
      if ( !*(_BYTE *)(a3 + 48) )
      {
        if ( !(unsigned __int8)std::path::Path::_starts_with(v73, v71, v34, v35) )
        {
          std::path::Path::to_path_buf(src, v72, v70);
          v11 = (_OWORD *)uu_mv::move_files_into_dir(src, 1LL, v73, v71, a3);
          if ( *(_QWORD *)&src[0] )
            _rust_dealloc(*((_QWORD *)&src[0] + 1), *(_QWORD *)&src[0], 1LL);
          goto LABEL_131;
        }
        *(_QWORD *)&v86 = v72;
        *((_QWORD *)&v86 + 1) = v70;
        *(_QWORD *)&dest[0] = 0LL;
        *((_QWORD *)&dest[0] + 1) = 1LL;
        *(_QWORD *)&dest[1] = 0LL;
        *(_QWORD *)&src[3] = 32LL;
        BYTE8(src[3]) = 3;
        *(_QWORD *)&src[0] = 0LL;
        *(_QWORD *)&src[1] = 0LL;
        *(_QWORD *)&src[2] = dest;
        *((_QWORD *)&src[2] + 1) = &off_130620;
        if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v86, src) )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        v48 = dest[0];
        v49 = *(_QWORD *)&dest[1];
        n[0] = v73;
        n[1] = v71;
        *(_QWORD *)v74 = 0LL;
        *(_QWORD *)&v74[8] = 1LL;
        *(_QWORD *)&v74[16] = 0LL;
        *(_QWORD *)&src[3] = 32LL;
        BYTE8(src[3]) = 3;
        *(_QWORD *)&src[0] = 0LL;
        *(_QWORD *)&src[1] = 0LL;
        *(_QWORD *)&src[2] = v74;
        *((_QWORD *)&src[2] + 1) = &off_130620;
        if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(n, src) )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        dest[2] = *(_OWORD *)v74;
        *(_QWORD *)&dest[3] = *(_QWORD *)&v74[16];
        *(_OWORD *)((char *)dest + 8) = v48;
        *((_QWORD *)&dest[1] + 1) = v49;
        *(_QWORD *)&dest[0] = 4LL;
        v29 = _rust_alloc(56LL, 8LL);
        if ( !v29 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
        goto LABEL_129;
      }
      if ( !(unsigned __int8)std::path::Path::is_dir(v34, v35) )
      {
        *(_QWORD *)v74 = 1LL;
        *(_QWORD *)&v74[8] = v73;
        *(_QWORD *)&v74[16] = v71;
        v74[24] = 1;
        n[0] = 0LL;
        n[1] = 1LL;
        *(_QWORD *)v80 = 0LL;
        *(_QWORD *)&src[3] = 32LL;
        BYTE8(src[3]) = 3;
        *(_QWORD *)&src[0] = 0LL;
        *(_QWORD *)&src[1] = 0LL;
        *(_QWORD *)&src[2] = n;
        *((_QWORD *)&src[2] + 1) = &off_130620;
        if ( (unsigned __int8)<os_display::Quoted as core::fmt::Display>::fmt(v74, src) )
          core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
        *(_OWORD *)((char *)dest + 8) = *(_OWORD *)n;
        *((_QWORD *)&dest[1] + 1) = *(_QWORD *)v80;
        *(_QWORD *)&dest[0] = 5LL;
        v29 = _rust_alloc(56LL, 8LL);
        if ( !v29 )
          alloc::alloc::handle_alloc_error(8LL, 56LL);
        goto LABEL_129;
      }
      v37 = uu_mv::rename(v72, v70, v73, v71, a3, 0LL);
      if ( v37 )
      {
        *(_QWORD *)&src[0] = v72;
        *((_QWORD *)&src[0] + 1) = v70;
        *(_QWORD *)&src[1] = v73;
        *((_QWORD *)&src[1] + 1) = v71;
        v11 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v37,
                          src);
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_131;
    }
LABEL_76:
    std::path::Path::components(n, v72, v28);
    std::path::Path::components(v74, asc_20A4D, 1LL);
    v38 = n[0];
    v39 = n[1];
    v40 = *(_QWORD *)&v74[8];
    v41 = *(void **)v74;
    v42 = v70;
    if ( n[1] == *(_QWORD *)&v74[8] && (_BYTE)v82 == (_BYTE)v76 && HIBYTE(v82) == 2 && HIBYTE(v76) == 2 )
    {
      if ( v80[0] == 6 )
      {
        if ( v74[16] < 3u )
          goto LABEL_113;
LABEL_112:
        s2 = *(void **)v74;
        v57 = bcmp((const void *)n[0], *(const void **)v74, n[1]);
        v41 = s2;
        if ( !v57 )
          goto LABEL_120;
        goto LABEL_113;
      }
      if ( v74[16] != 6 )
      {
        if ( v80[0] < 3u != v74[16] < 3u )
          goto LABEL_113;
        goto LABEL_112;
      }
      if ( v80[0] >= 3u )
        goto LABEL_112;
    }
LABEL_113:
    if ( v80[0] != 6 )
    {
      *(_QWORD *)&v89[15] = *(_QWORD *)&v81[15];
      *(_OWORD *)v89 = *(_OWORD *)v81;
      v88 = *(_OWORD *)&v80[1];
    }
    *(_QWORD *)&dest[0] = v38;
    *((_QWORD *)&dest[0] + 1) = v39;
    LOBYTE(dest[1]) = v80[0];
    *(_OWORD *)((char *)&dest[1] + 1) = v88;
    *(_OWORD *)((char *)&dest[2] + 1) = *(_OWORD *)v89;
    *(_QWORD *)&dest[3] = *(_QWORD *)&v89[15];
    WORD4(dest[3]) = v82;
    BYTE10(dest[3]) = v83;
    if ( v74[16] != 6 )
    {
      *(_QWORD *)((char *)v87 + 15) = *(_QWORD *)&v75[15];
      v87[0] = *(_OWORD *)v75;
      v86 = *(_OWORD *)&v74[17];
    }
    *(_QWORD *)&src[0] = v41;
    *((_QWORD *)&src[0] + 1) = v40;
    LOBYTE(src[1]) = v74[16];
    *(_OWORD *)((char *)&src[1] + 1) = v86;
    *(_OWORD *)((char *)&src[2] + 1) = v87[0];
    *(_QWORD *)&src[3] = *(_QWORD *)((char *)v87 + 15);
    WORD4(src[3]) = v76;
    BYTE10(src[3]) = v77;
    v42 = v70;
    if ( !(unsigned __int8)core::iter::traits::iterator::Iterator::eq_by(dest, src) )
    {
      v42 = v70;
      if ( !(unsigned __int8)std::path::Path::_ends_with(v72, v70, asc_214D0, 2LL) )
      {
        v42 = v70;
        if ( !(unsigned __int8)std::path::Path::is_file(v72, v70) )
        {
          *(_QWORD *)&dest[0] = v72;
          *((_QWORD *)&dest[0] + 1) = v70;
          <T as alloc::string::ToString>::to_string((char *)src + 8, dest);
          *(_QWORD *)&src[0] = 3LL;
          v36 = alloc::alloc::exchange_malloc();
          goto LABEL_139;
        }
      }
    }
LABEL_120:
    *(_QWORD *)v74 = 0LL;
    *(_QWORD *)&v74[8] = 1LL;
    *(_QWORD *)&v74[16] = 0LL;
    *(_QWORD *)&src[3] = 32LL;
    BYTE8(src[3]) = 3;
    *(_QWORD *)&src[0] = 0LL;
    *(_QWORD *)&src[1] = 0LL;
    *(_QWORD *)&src[2] = v74;
    *((_QWORD *)&src[2] + 1) = &off_130620;
    std::sys::os_str::bytes::Slice::to_str(dest, v72, v42);
    if ( *(_QWORD *)&dest[0] )
      v58 = os_display::unix::write_escaped(src, v72, v42);
    else
      v58 = os_display::unix::write(src, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1], 1LL);
    if ( v58 )
      core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
    v59 = *(_OWORD *)v74;
    v60 = *(_QWORD *)&v74[16];
    *(_QWORD *)v74 = 0LL;
    *(_QWORD *)&v74[8] = 1LL;
    *(_QWORD *)&v74[16] = 0LL;
    *(_QWORD *)&src[3] = 32LL;
    BYTE8(src[3]) = 3;
    *(_QWORD *)&src[0] = 0LL;
    *(_QWORD *)&src[1] = 0LL;
    *(_QWORD *)&src[2] = v74;
    *((_QWORD *)&src[2] + 1) = &off_130620;
    std::sys::os_str::bytes::Slice::to_str(dest, v73, v71);
    if ( *(_QWORD *)&dest[0] )
      v61 = os_display::unix::write_escaped(src, v73, v71);
    else
      v61 = os_display::unix::write(src, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1], 1LL);
    if ( v61 )
      core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v88, &unk_130668, &off_130650);
    dest[2] = *(_OWORD *)v74;
    *(_QWORD *)&dest[3] = *(_QWORD *)&v74[16];
    *(_OWORD *)((char *)dest + 8) = v59;
    *((_QWORD *)&dest[1] + 1) = v60;
    *(_QWORD *)&dest[0] = 2LL;
    v29 = _rust_alloc(56LL, 8LL);
    if ( !v29 )
      alloc::alloc::handle_alloc_error(8LL, 56LL);
    goto LABEL_129;
  }
  v13 = v91;
  v14 = v92;
  std::sys::os_str::bytes::Slice::to_owned(src, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
  v15 = src[0];
  v11 = (_OWORD *)uu_mv::move_files_into_dir(v13, v14, *((_QWORD *)&src[0] + 1), *(_QWORD *)&src[1], a3);
  if ( (_QWORD)v15 )
    _rust_dealloc(*((_QWORD *)&v15 + 1), v15, 1LL);
  if ( v14 )
  {
    v16 = (_QWORD *)(v13 + 8);
    do
    {
      v17 = *(v16 - 1);
      if ( v17 )
        _rust_dealloc(*v16, v17, 1LL);
      v16 += 3;
      --v14;
    }
    while ( v14 );
  }
  if ( v90 )
    _rust_dealloc(v13, 24 * v90, 8LL);
  return v11;
}
