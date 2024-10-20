_OWORD *__fastcall uu_ln::link(void *a1, size_t a2, void *a3, size_t a4, __int64 a5)
{
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rbp
  char *v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rcx
  __ino_t st_ino; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rbp
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  void *v26; // r12
  size_t v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _OWORD *v38; // rax
  __int128 v39; // xmm0
  __int64 v40; // r12
  char v41; // bl
  int *v43; // rax
  __int64 v44; // rdx
  void *v45[2]; // [rsp+10h] [rbp-688h] BYREF
  size_t n; // [rsp+20h] [rbp-678h] BYREF
  _BYTE v47[24]; // [rsp+28h] [rbp-670h] BYREF
  void *v48; // [rsp+40h] [rbp-658h]
  size_t v49; // [rsp+48h] [rbp-650h]
  struct stat src; // [rsp+50h] [rbp-648h] BYREF
  __int128 v51; // [rsp+108h] [rbp-590h] BYREF
  __nlink_t v52; // [rsp+118h] [rbp-580h]
  __int64 v53; // [rsp+120h] [rbp-578h] BYREF
  __int128 v54; // [rsp+128h] [rbp-570h] BYREF
  __int64 v55; // [rsp+138h] [rbp-560h]
  _BYTE v56[8]; // [rsp+140h] [rbp-558h] BYREF
  _BYTE v57[8]; // [rsp+148h] [rbp-550h] BYREF
  _QWORD v58[2]; // [rsp+150h] [rbp-548h] BYREF
  size_t v59[2]; // [rsp+160h] [rbp-538h] BYREF
  __int128 v60; // [rsp+170h] [rbp-528h] BYREF
  __nlink_t v61; // [rsp+180h] [rbp-518h] BYREF
  __int64 v62; // [rsp+188h] [rbp-510h] BYREF
  void *v63; // [rsp+190h] [rbp-508h]
  size_t v64; // [rsp+198h] [rbp-500h]
  __int128 v65; // [rsp+1A0h] [rbp-4F8h] BYREF
  __int64 v66; // [rsp+1B0h] [rbp-4E8h] BYREF
  void *v67; // [rsp+1B8h] [rbp-4E0h] BYREF
  __int128 v68; // [rsp+1C0h] [rbp-4D8h]
  _QWORD v69[2]; // [rsp+1D0h] [rbp-4C8h] BYREF
  _QWORD v70[2]; // [rsp+1E0h] [rbp-4B8h] BYREF
  _QWORD v71[2]; // [rsp+1F0h] [rbp-4A8h] BYREF
  _QWORD v72[2]; // [rsp+200h] [rbp-498h] BYREF
  _QWORD v73[2]; // [rsp+210h] [rbp-488h] BYREF
  _QWORD v74[2]; // [rsp+220h] [rbp-478h] BYREF
  _QWORD v75[2]; // [rsp+230h] [rbp-468h] BYREF
  __int128 v76; // [rsp+240h] [rbp-458h]
  __m256i v77; // [rsp+250h] [rbp-448h]
  __int128 v78; // [rsp+270h] [rbp-428h]
  __m256i v79; // [rsp+280h] [rbp-418h]
  __int128 v80; // [rsp+2A0h] [rbp-3F8h] BYREF
  __int64 v81; // [rsp+2B0h] [rbp-3E8h]
  __int128 v82; // [rsp+2B8h] [rbp-3E0h] BYREF
  __int64 v83; // [rsp+2C8h] [rbp-3D0h]
  __int64 v84; // [rsp+2D0h] [rbp-3C8h] BYREF
  void *v85; // [rsp+2D8h] [rbp-3C0h]
  size_t v86; // [rsp+2E0h] [rbp-3B8h]
  _QWORD v87[3]; // [rsp+2E8h] [rbp-3B0h] BYREF
  char v88; // [rsp+300h] [rbp-398h]
  _QWORD v89[4]; // [rsp+308h] [rbp-390h] BYREF
  _QWORD v90[3]; // [rsp+328h] [rbp-370h] BYREF
  char v91; // [rsp+340h] [rbp-358h]
  _QWORD v92[3]; // [rsp+348h] [rbp-350h] BYREF
  char v93; // [rsp+360h] [rbp-338h]
  _QWORD v94[3]; // [rsp+368h] [rbp-330h] BYREF
  char v95; // [rsp+380h] [rbp-318h]
  _BYTE dest[152]; // [rsp+388h] [rbp-310h] BYREF
  __int128 v97; // [rsp+420h] [rbp-278h] BYREF
  __int64 v98; // [rsp+430h] [rbp-268h]
  _BYTE v99[8]; // [rsp+440h] [rbp-258h] BYREF
  char v100; // [rsp+448h] [rbp-250h] BYREF
  __int128 v101; // [rsp+458h] [rbp-240h] BYREF
  __int64 v102; // [rsp+468h] [rbp-230h]
  _QWORD v103[6]; // [rsp+470h] [rbp-228h] BYREF
  _QWORD v104[6]; // [rsp+4A0h] [rbp-1F8h] BYREF
  _QWORD v105[6]; // [rsp+4D0h] [rbp-1C8h] BYREF
  _QWORD v106[6]; // [rsp+500h] [rbp-198h] BYREF
  __int128 v107; // [rsp+530h] [rbp-168h] BYREF
  __int64 v108; // [rsp+540h] [rbp-158h]
  _QWORD v109[6]; // [rsp+548h] [rbp-150h] BYREF
  _QWORD v110[6]; // [rsp+578h] [rbp-120h] BYREF
  _QWORD v111[3]; // [rsp+5A8h] [rbp-F0h] BYREF
  __int128 v112; // [rsp+5C0h] [rbp-D8h]
  __int128 v113; // [rsp+5D8h] [rbp-C0h]
  __int128 v114; // [rsp+5E8h] [rbp-B0h]
  __int128 v115; // [rsp+5F8h] [rbp-A0h]
  _QWORD v116[3]; // [rsp+608h] [rbp-90h] BYREF
  __int128 v117; // [rsp+620h] [rbp-78h]
  _BYTE v118[8]; // [rsp+638h] [rbp-60h] BYREF
  char v119; // [rsp+640h] [rbp-58h] BYREF
  _BYTE v120[8]; // [rsp+650h] [rbp-48h] BYREF
  char v121; // [rsp+658h] [rbp-40h] BYREF

  *(_QWORD *)v47 = 0x8000000000000000LL;
  v8 = (*(_BYTE *)(a5 + 49) & 1) == 0;
  v49 = a2;
  v48 = a1;
  if ( v8 )
  {
    v45[1] = a1;
    n = a2;
LABEL_14:
    v45[0] = (void *)0x8000000000000000LL;
    goto LABEL_15;
  }
  uucore::features::fs::canonicalize(&v51, a1, a2, 2LL, 1LL);
  if ( (_QWORD)v51 == 0x8000000000000000LL )
  {
LABEL_4:
    std::io::error::repr_bitpacked::decode_repr(&src, *((_QWORD *)&v51 + 1));
    if ( LOBYTE(src.st_dev) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src.st_ino);
LABEL_13:
    v45[1] = v48;
    n = v49;
    goto LABEL_14;
  }
  v61 = v52;
  v60 = v51;
  v9 = std::path::Path::parent(a3, a4);
  if ( !v9 )
    core::option::unwrap_failed(&off_117A28);
  uucore::features::fs::canonicalize(&v54, v9, v10, 2LL, 1LL);
  if ( (_QWORD)v54 == 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(&src, *((_QWORD *)&v54 + 1));
    if ( LOBYTE(src.st_dev) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src.st_ino);
    alloc::raw_vec::RawVec<T,A>::current_memory(&src, &v60);
    if ( src.st_ino )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v61, src.st_dev, src.st_ino, src.st_nlink);
    if ( (_QWORD)v51 != 0x8000000000000000LL )
      goto LABEL_13;
    goto LABEL_4;
  }
  v98 = v55;
  v97 = v54;
  *(_OWORD *)&src.st_dev = v60;
  src.st_nlink = v61;
  uucore::features::fs::make_path_relative_to(dest, &src, &v97);
  n = *(_QWORD *)&dest[16];
  *(_OWORD *)v45 = *(_OWORD *)dest;
  if ( (_QWORD)v54 == 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(v56, *((_QWORD *)&v54 + 1));
    if ( v56[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v57);
  }
  if ( (_QWORD)v51 == 0x8000000000000000LL )
  {
    std::io::error::repr_bitpacked::decode_repr(v56, *((_QWORD *)&v51 + 1));
    if ( v56[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v57);
  }
LABEL_15:
  if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
  {
    v11 = 0x8000000000000000LL;
    switch ( *(_BYTE *)(a5 + 55) )
    {
      case 0:
        goto LABEL_43;
      case 1:
        goto LABEL_21;
      case 2:
        goto LABEL_24;
      case 3:
        goto LABEL_25;
    }
  }
  std::sys::pal::unix::fs::stat(&src);
  if ( src.st_dev == 2 )
  {
    std::io::error::repr_bitpacked::decode_repr(&src, src.st_ino);
    if ( LOBYTE(src.st_dev) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src.st_ino);
    goto LABEL_77;
  }
  v11 = 0x8000000000000000LL;
  switch ( *(_BYTE *)(a5 + 55) )
  {
    case 0:
      goto LABEL_43;
    case 1:
LABEL_21:
      v12 = *(_QWORD *)(a5 + 8);
      if ( !v12 )
        goto LABEL_134;
      v13 = *(_QWORD *)(a5 + 16);
      if ( v13 < 0 )
        goto LABEL_134;
      v14 = (unsigned __int64 *)v118;
      uu_ln::simple_backup_path(v118, a3, a4, v12, v13);
      v15 = &v119;
      goto LABEL_42;
    case 2:
LABEL_24:
      v14 = (unsigned __int64 *)v120;
      uu_ln::numbered_backup_path(v120, a3, a4);
      v15 = &v121;
      goto LABEL_42;
    case 3:
LABEL_25:
      v16 = *(_QWORD *)(a5 + 8);
      if ( !v16 )
        goto LABEL_134;
      v17 = *(_QWORD *)(a5 + 16);
      if ( v17 < 0 )
        goto LABEL_134;
      uu_ln::simple_backup_path(dest, a3, a4, ::a1, 4LL);
      if ( !*(_QWORD *)&dest[8] || *(__int64 *)&dest[16] < 0 )
        goto LABEL_134;
      std::sys::pal::unix::fs::stat(&src);
      v15 = &v100;
      if ( src.st_dev != 2 )
      {
        v14 = (unsigned __int64 *)v99;
        uu_ln::numbered_backup_path(v99, a3, a4);
        alloc::raw_vec::RawVec<T,A>::current_memory(&src, dest);
        st_ino = src.st_ino;
        if ( !src.st_ino )
          goto LABEL_42;
        goto LABEL_41;
      }
      std::io::error::repr_bitpacked::decode_repr(&src, src.st_ino);
      if ( LOBYTE(src.st_dev) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src.st_ino);
      v18 = v16;
      v14 = (unsigned __int64 *)v99;
      uu_ln::simple_backup_path(v99, a3, a4, v18, v17);
      alloc::raw_vec::RawVec<T,A>::current_memory(&src, dest);
      st_ino = src.st_ino;
      if ( src.st_ino )
LABEL_41:
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&dest[16], src.st_dev, st_ino, src.st_nlink);
LABEL_42:
      v11 = *v14;
      v68 = *(_OWORD *)v15;
LABEL_43:
      *(_QWORD *)v47 = v11;
      *(_OWORD *)&v47[8] = v68;
      if ( *(_BYTE *)(a5 + 55) != 3 || (*(_BYTE *)(a5 + 48) & 1) != 0 )
        goto LABEL_53;
      if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(v48, v49, &src) )
        goto LABEL_46;
      if ( (_DWORD)v20 == -1 )
      {
        v43 = _errno_location();
        if ( ((unsigned __int8)v43 & 3) != 0 )
          goto LABEL_141;
        v20 = (unsigned int)nix::errno::consts::from_i32((unsigned int)*v43);
LABEL_46:
        *(_QWORD *)&dest[8] = (v20 << 32) | 2;
        v21 = 1LL;
      }
      else
      {
        memcpy(&dest[8], &src, 0x90uLL);
        v21 = 0LL;
      }
      *(_QWORD *)dest = v21;
      uucore::features::fs::FileInformation::from_path(&src, a3, a4, 1LL);
      if ( (unsigned __int8)uucore::features::fs::infos_refer_to_same_file(dest, &src) )
      {
        std::path::Path::to_path_buf(&v80, v48, v49);
        std::path::Path::to_path_buf(&v101, a3, a4);
        v77.m256i_i64[0] = v81;
        v76 = v80;
        *(_OWORD *)&v77.m256i_u64[1] = v101;
        v77.m256i_i64[3] = v102;
        v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
        if ( !v22 )
          alloc::alloc::handle_alloc_error(8LL, 48LL);
        v23 = v76;
        v24 = *(_OWORD *)v77.m256i_i8;
        v25 = *(_OWORD *)&v77.m256i_u64[2];
LABEL_73:
        v22[2] = v25;
        v22[1] = v24;
        *v22 = v23;
        goto LABEL_104;
      }
      v11 = *(_QWORD *)v47;
LABEL_53:
      if ( v11 != 0x8000000000000000LL )
      {
        v26 = *(void **)&v47[8];
        v27 = *(_QWORD *)&v47[16];
        core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)&v47[8], 1LL, 1LL, *(_QWORD *)&v47[16]);
        v28 = std::sys::pal::unix::fs::rename(a3, a4, v26, v27);
        if ( v28 )
        {
          v22 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            v28,
                            a3,
                            a4);
          if ( v22 )
            goto LABEL_104;
        }
      }
      if ( *(_BYTE *)(a5 + 54) )
      {
        if ( *(_BYTE *)(a5 + 54) == 1 )
        {
          v29 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v30 = *(_QWORD *)(v29 + 8);
          v31 = *(_QWORD *)(v29 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v30, 1LL, 1LL, v31);
          v70[0] = v30;
          v70[1] = v31;
          v69[0] = v70;
          v69[1] = <&T as core::fmt::Display>::fmt;
          v103[0] = &unk_117968;
          v103[1] = 2LL;
          v103[4] = 0LL;
          v103[2] = v69;
          v103[3] = 1LL;
          std::io::stdio::_eprint(v103);
          v87[0] = 1LL;
          v87[1] = a3;
          v87[2] = a4;
          v88 = 1;
          v71[0] = v87;
          v71[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v104[0] = &off_117A40;
          v104[1] = 2LL;
          v104[4] = 0LL;
          v104[2] = v71;
          v104[3] = 1LL;
          std::io::stdio::_eprint(v104);
          v111[0] = &off_117A60;
          v111[1] = 1LL;
          v111[2] = 8LL;
          v112 = 0LL;
          std::io::stdio::_eprint(v111);
          v67 = &std::io::stdio::stderr::INSTANCE;
          v32 = <std::io::stdio::Stderr as std::io::Write>::flush(&v67);
          if ( v32 )
          {
            v53 = v32;
            v73[0] = uucore::util_name();
            v73[1] = v44;
            v72[0] = v73;
            v72[1] = <&T as core::fmt::Display>::fmt;
            v105[0] = &unk_117968;
            v105[1] = 2LL;
            v105[4] = 0LL;
            v105[2] = v72;
            v105[3] = 1LL;
            std::io::stdio::_eprint(v105);
            v74[0] = &v53;
            v74[1] = <std::io::error::Error as core::fmt::Display>::fmt;
            v106[0] = &unk_1179D8;
            v106[1] = 2LL;
            v106[4] = 0LL;
            v106[2] = v74;
            v106[3] = 1LL;
            std::io::stdio::_eprint(v106);
            std::process::exit(1);
          }
          if ( !(unsigned __int8)uucore::read_yes() )
          {
            *((_QWORD *)&v114 + 1) = 0x8000000000000001LL;
            v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
            if ( !v22 )
              alloc::alloc::handle_alloc_error(8LL, 48LL);
            v23 = v113;
            v24 = v114;
            v25 = v115;
            goto LABEL_73;
          }
          v33 = std::sys::pal::unix::fs::unlink(a3, a4);
          if ( !v33 )
            goto LABEL_77;
          std::io::error::repr_bitpacked::decode_repr(&src, v33);
          if ( LOBYTE(src.st_dev) < 3u )
            goto LABEL_77;
LABEL_76:
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src.st_ino);
          goto LABEL_77;
        }
        if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
        {
LABEL_74:
          v36 = std::sys::pal::unix::fs::unlink(a3, a4);
          if ( !v36 )
            goto LABEL_77;
          std::io::error::repr_bitpacked::decode_repr(&src, v36);
          if ( LOBYTE(src.st_dev) < 3u )
            goto LABEL_77;
          goto LABEL_76;
        }
        if ( (unsigned int)<[u8] as nix::NixPath>::with_nix_path(v48, v49, &src) )
          goto LABEL_65;
        if ( (_DWORD)v34 != -1 )
        {
          memcpy(&dest[8], &src, 0x90uLL);
          v35 = 0LL;
LABEL_70:
          *(_QWORD *)dest = v35;
          uucore::features::fs::FileInformation::from_path(&src, a3, a4, 1LL);
          if ( (unsigned __int8)uucore::features::fs::infos_refer_to_same_file(dest, &src) )
          {
            std::path::Path::to_path_buf(&v82, v48, v49);
            std::path::Path::to_path_buf(&v107, a3, a4);
            v79.m256i_i64[0] = v83;
            v78 = v82;
            *(_OWORD *)&v79.m256i_u64[1] = v107;
            v79.m256i_i64[3] = v108;
            v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
            if ( !v22 )
              alloc::alloc::handle_alloc_error(8LL, 48LL);
            v23 = v78;
            v24 = *(_OWORD *)v79.m256i_i8;
            v25 = *(_OWORD *)&v79.m256i_u64[2];
            goto LABEL_73;
          }
          goto LABEL_74;
        }
        v43 = _errno_location();
        if ( ((unsigned __int8)v43 & 3) == 0 )
        {
          v34 = (unsigned int)nix::errno::consts::from_i32((unsigned int)*v43);
LABEL_65:
          *(_QWORD *)&dest[8] = (v34 << 32) | 2;
          v35 = 1LL;
          goto LABEL_70;
        }
LABEL_141:
        core::panicking::panic_misaligned_pointer_dereference(
          4LL,
          v43,
          &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
      }
LABEL_77:
      if ( (*(_BYTE *)(a5 + 48) & 1) != 0 )
      {
        if ( v45[0] != (void *)0x8000000000000000LL && (!v45[1] || (n & 0x8000000000000000LL) != 0LL) )
          goto LABEL_134;
        v37 = std::sys::pal::unix::fs::symlink(v45[1], n, a3, a4);
        if ( v37 )
        {
          src.st_dev = 0x8000000000000000LL;
          *(_QWORD *)&src.st_mode = v37;
          v38 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v22 = v38;
          if ( !v38 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v39 = *(_OWORD *)&src.st_dev;
          v38[1] = *(_OWORD *)&src.st_nlink;
          *v38 = v39;
          goto LABEL_104;
        }
      }
      else
      {
        if ( (*(_BYTE *)(a5 + 50) & 1) == 0 )
          goto LABEL_96;
        if ( v45[0] != (void *)0x8000000000000000LL && (!v45[1] || (n & 0x8000000000000000LL) != 0LL) )
          goto LABEL_134;
        if ( (unsigned __int8)std::path::Path::is_symlink(v45[1], n) )
        {
          if ( v45[0] != (void *)0x8000000000000000LL && (!v45[1] || (n & 0x8000000000000000LL) != 0LL) )
            goto LABEL_134;
          std::sys::pal::unix::fs::canonicalize(&v84, v45[1], n);
          if ( v84 == 0x8000000000000000LL )
          {
            v22 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                              v85,
                              v45);
LABEL_104:
            if ( v45[0] != (void *)0x8000000000000000LL )
            {
              alloc::raw_vec::RawVec<T,A>::current_memory(&src, v45);
              if ( src.st_ino )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, src.st_dev, src.st_ino, src.st_nlink);
            }
            if ( *(_QWORD *)v47 != 0x8000000000000000LL )
              <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v47);
            return v22;
          }
          v62 = v84;
          v63 = v85;
          v64 = v86;
        }
        else
        {
LABEL_96:
          if ( v45[0] != (void *)0x8000000000000000LL && (!v45[1] || (n & 0x8000000000000000LL) != 0LL) )
            goto LABEL_134;
          std::path::Path::to_path_buf(&v62, v45[1], n);
        }
        v58[0] = v62;
        v58[1] = v63;
        v59[0] = v64;
        if ( !v63 || (v64 & 0x8000000000000000LL) != 0LL )
          goto LABEL_134;
        v40 = std::sys::pal::unix::fs::link(v63, v64, a3, a4);
        alloc::raw_vec::RawVec<T,A>::current_memory(&src, v58);
        if ( src.st_ino )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v59, src.st_dev, src.st_ino, src.st_nlink);
        if ( v40 )
        {
          src.st_dev = (__dev_t)v45;
          src.st_ino = (__ino_t)a3;
          src.st_nlink = a4;
          v22 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            v40,
                            &src);
          if ( v22 )
            goto LABEL_104;
        }
      }
      if ( (*(_BYTE *)(a5 + 53) & 1) == 0 )
      {
        v41 = 0;
        goto LABEL_121;
      }
      v90[0] = 1LL;
      v90[1] = a3;
      v90[2] = a4;
      v91 = 1;
      if ( v45[0] != (void *)0x8000000000000000LL && (!v45[1] || (n & 0x8000000000000000LL) != 0LL) )
LABEL_134:
        core::panicking::panic_nounwind(anon_df683e64b8c9978a64b8f4e8e668b506_19_llvm_10436422061628228747, 162LL);
      v92[0] = 1LL;
      v92[1] = v45[1];
      v92[2] = n;
      v93 = 1;
      v89[0] = v90;
      v89[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v89[2] = v92;
      v89[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v109[0] = &unk_117A70;
      v109[1] = 2LL;
      v109[4] = 0LL;
      v109[2] = v89;
      v109[3] = 2LL;
      std::io::stdio::_print(v109);
      if ( *(_QWORD *)v47 != 0x8000000000000000LL )
      {
        v65 = *(_OWORD *)v47;
        v66 = *(_QWORD *)&v47[16];
        if ( *(_QWORD *)&v47[8] && *(__int64 *)&v47[16] >= 0 )
        {
          v94[0] = 1LL;
          v94[1] = *(_QWORD *)&v47[8];
          v94[2] = *(_QWORD *)&v47[16];
          v95 = 1;
          v75[0] = v94;
          v75[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v110[0] = &off_117AA0;
          v110[1] = 2LL;
          v110[4] = 0LL;
          v110[2] = v75;
          v110[3] = 1LL;
          std::io::stdio::_print(v110);
          alloc::raw_vec::RawVec<T,A>::current_memory(&src, &v65);
          if ( src.st_ino )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v66, src.st_dev, src.st_ino, src.st_nlink);
          v41 = 1;
          goto LABEL_121;
        }
        goto LABEL_134;
      }
      v116[0] = &off_117A90;
      v116[1] = 1LL;
      v116[2] = 8LL;
      v117 = 0LL;
      std::io::stdio::_print(v116);
      v41 = 0;
LABEL_121:
      if ( v45[0] != (void *)0x8000000000000000LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&src, v45);
        if ( src.st_ino )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, src.st_dev, src.st_ino, src.st_nlink);
      }
      if ( !((*(_QWORD *)v47 == 0x8000000000000000LL) | (unsigned __int8)v41) )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&src, v47);
        if ( src.st_ino )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v47[16], src.st_dev, src.st_ino, src.st_nlink);
      }
      return 0LL;
  }
}
