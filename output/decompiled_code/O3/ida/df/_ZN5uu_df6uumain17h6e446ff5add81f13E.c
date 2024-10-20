__int64 __fastcall uu_df::uumain(__int64 a1, __int64 a2)
{
  _OWORD *v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 *v11; // r12
  unsigned __int64 v12; // r14
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  int v16; // ebp
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  unsigned __int64 v19; // r15
  void (__fastcall **v20)(unsigned __int64); // r12
  void (__fastcall *v21)(unsigned __int64); // rsi
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 (__fastcall *v26)(); // rdx
  __int64 v27; // r13
  __int64 (__fastcall **v28)(); // r15
  __int64 (__fastcall *v29)(); // rax
  __int64 *v30; // r15
  __int64 v31; // rdi
  _OWORD *v32; // rax
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 (__fastcall *v35)(); // rdx
  __int64 (__fastcall *v36)(); // rsi
  _OWORD *v37; // rax
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // rax
  __int128 v41; // kr00_16
  __int64 v42; // rsi
  int v43; // ebp
  _OWORD *v44; // rax
  __int128 v45; // xmm0
  __int128 v46; // kr10_16
  __int64 v47; // rsi
  __int128 v48; // xmm0
  __int128 v49; // rax
  __int128 v50; // rax
  unsigned int v51; // ebx
  __int128 v52; // kr20_16
  __int64 v53; // rsi
  unsigned __int64 v55; // [rsp+8h] [rbp-6E0h] BYREF
  void (__fastcall **v56)(unsigned __int64); // [rsp+10h] [rbp-6D8h]
  __int64 *v57; // [rsp+18h] [rbp-6D0h]
  __int64 v58; // [rsp+20h] [rbp-6C8h] BYREF
  __int64 (__fastcall **v59)(); // [rsp+28h] [rbp-6C0h]
  __int128 v60; // [rsp+30h] [rbp-6B8h] BYREF
  __int64 *v61; // [rsp+40h] [rbp-6A8h]
  __int64 (__fastcall *v62)(); // [rsp+48h] [rbp-6A0h]
  __int128 v63; // [rsp+50h] [rbp-698h] BYREF
  __int64 *v64; // [rsp+60h] [rbp-688h]
  __int64 v65; // [rsp+68h] [rbp-680h]
  __int128 *v66; // [rsp+70h] [rbp-678h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+78h] [rbp-670h]
  char v68[8]; // [rsp+80h] [rbp-668h] BYREF
  __int64 v69; // [rsp+88h] [rbp-660h]
  __int64 v70; // [rsp+90h] [rbp-658h]
  char v71[8]; // [rsp+98h] [rbp-650h] BYREF
  __int64 *v72; // [rsp+A0h] [rbp-648h]
  __int64 v73; // [rsp+A8h] [rbp-640h]
  __int128 v74; // [rsp+B0h] [rbp-638h]
  __int64 *v75; // [rsp+C0h] [rbp-628h]
  __int128 *v76; // [rsp+D0h] [rbp-618h]
  __int128 v77; // [rsp+D8h] [rbp-610h] BYREF
  __int64 *v78; // [rsp+E8h] [rbp-600h]
  __int128 dest; // [rsp+F0h] [rbp-5F8h] BYREF
  __int128 v80; // [rsp+100h] [rbp-5E8h] BYREF
  __int64 v81; // [rsp+110h] [rbp-5D8h]
  _OWORD v82[4]; // [rsp+1A0h] [rbp-548h] BYREF
  __int128 v83; // [rsp+1E8h] [rbp-500h] BYREF
  __int64 v84; // [rsp+1F8h] [rbp-4F0h]
  _BYTE v85[232]; // [rsp+200h] [rbp-4E8h] BYREF
  __int128 *p_dest; // [rsp+2E8h] [rbp-400h] BYREF
  __int128 v87; // [rsp+2F0h] [rbp-3F8h]
  __int128 v88; // [rsp+300h] [rbp-3E8h]
  __int128 v89; // [rsp+310h] [rbp-3D8h]
  __int128 v90; // [rsp+320h] [rbp-3C8h]
  __int128 v91; // [rsp+330h] [rbp-3B8h]
  _OWORD v92[3]; // [rsp+340h] [rbp-3A8h] BYREF
  __int64 v93; // [rsp+370h] [rbp-378h]
  __int128 v94; // [rsp+378h] [rbp-370h] BYREF
  __int64 v95; // [rsp+388h] [rbp-360h]
  _OWORD src[45]; // [rsp+390h] [rbp-358h] BYREF
  __int128 v97; // [rsp+660h] [rbp-88h] BYREF
  __int64 v98; // [rsp+670h] [rbp-78h]
  _OWORD v99[7]; // [rsp+678h] [rbp-70h] BYREF

  uu_df::uu_app(src);
  clap_builder::builder::command::Command::try_get_matches_from(v85, src, a1, a2);
  if ( *(_QWORD *)v85 != 0x8000000000000000LL )
  {
    v93 = *(_QWORD *)&v85[48];
    v92[2] = *(_OWORD *)&v85[32];
    v92[1] = *(_OWORD *)&v85[16];
    v92[0] = *(_OWORD *)v85;
    uu_df::Options::from(src, v92);
    *(_OWORD *)v85 = *(_OWORD *)((char *)src + 8);
    *(_OWORD *)&v85[16] = *(_OWORD *)((char *)&src[1] + 8);
    if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
    {
      dest = *(_OWORD *)v85;
      v80 = *(_OWORD *)&v85[16];
      src[1] = *(_OWORD *)&v85[16];
      src[0] = *(_OWORD *)v85;
      v5 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = v5;
      v6 = src[0];
      v5[1] = src[1];
      *v5 = v6;
      v4 = &off_FD1A8;
LABEL_61:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v92);
      if ( v2 )
        goto LABEL_62;
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v91 = *(_OWORD *)((char *)&src[4] + 8);
    v90 = *(_OWORD *)((char *)&src[3] + 8);
    v89 = *(_OWORD *)((char *)&src[2] + 8);
    v87 = *(_OWORD *)v85;
    v88 = *(_OWORD *)&v85[16];
    p_dest = *(__int128 **)&src[0];
    v7 = (__int64)*(&uu_df::OPT_PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v92, aPaths, v7);
    clap_builder::parser::error::MatchesError::unwrap(v99, aPaths, v7, src);
    if ( !*(_QWORD *)&v99[0] )
    {
      uu_df::get_all_filesystems(&v60, &p_dest);
      v15 = v60;
      if ( (_QWORD)v60 == 0x8000000000000000LL )
      {
        v55 = *((_QWORD *)&v60 + 1);
        v56 = (void (__fastcall **)(unsigned __int64))v61;
        *(_QWORD *)&v83 = aCannotReadTabl;
        *((_QWORD *)&v83 + 1) = 41LL;
        v16 = ((__int64 (*)(void))v61[12])();
        *(_QWORD *)v85 = &v83;
        *(_QWORD *)&v85[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v85[16] = &v55;
        *(_QWORD *)&v85[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&src[0] = &unk_FD110;
        *((_QWORD *)&src[0] + 1) = 2LL;
        *(_QWORD *)&src[2] = 0LL;
        *(_QWORD *)&src[1] = v85;
        *((_QWORD *)&src[1] + 1) = 2LL;
        alloc::fmt::format::format_inner(&dest, src);
        DWORD2(src[1]) = v16;
        src[0] = dest;
        *(_QWORD *)&src[1] = v80;
        v17 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v17 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v2 = v17;
        v18 = src[0];
        v17[1] = src[1];
        *v17 = v18;
        v19 = v55;
        v20 = v56;
        if ( *v56 )
          (*v56)(v55);
        v21 = v20[1];
        if ( v21 )
          _rust_dealloc(v19, v21, v20[2]);
      }
      else
      {
        v63 = v60;
        v64 = v61;
        if ( v61 )
        {
          v75 = v64;
          v74 = v63;
          goto LABEL_55;
        }
        <T as alloc::slice::hack::ConvertVec>::to_vec(v85);
        *(_QWORD *)&src[1] = *(_QWORD *)&v85[16];
        src[0] = *(_OWORD *)v85;
        DWORD2(src[1]) = 1;
        v2 = (_OWORD *)alloc::alloc::exchange_malloc();
        v48 = src[0];
        v2[1] = src[1];
        *v2 = v48;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v63);
      }
      v4 = &off_FD050;
      goto LABEL_60;
    }
    v82[3] = v99[3];
    v82[2] = v99[2];
    v82[1] = v99[1];
    v82[0] = v99[0];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v71, v82);
    v8 = v72;
    v9 = v73;
    uucore::features::fsext::read_fs_list(src);
    v10 = *((_QWORD *)&src[0] + 1);
    v11 = *(__int64 **)&src[1];
    if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
    {
      v12 = 0x8000000000000000LL;
LABEL_46:
      if ( v12 == 0x8000000000000000LL )
      {
        *(_QWORD *)&v63 = v10;
        *((_QWORD *)&v63 + 1) = v11;
        *(_QWORD *)&v60 = aCannotReadTabl;
        *((_QWORD *)&v60 + 1) = 41LL;
        v43 = ((__int64 (__fastcall *)(__int64))v11[12])(v10);
        *(_QWORD *)v85 = &v60;
        *(_QWORD *)&v85[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v85[16] = &v63;
        *(_QWORD *)&v85[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&src[0] = &unk_FD110;
        *((_QWORD *)&src[0] + 1) = 2LL;
        *(_QWORD *)&src[2] = 0LL;
        *(_QWORD *)&src[1] = v85;
        *((_QWORD *)&src[1] + 1) = 2LL;
        alloc::fmt::format::format_inner(&dest, src);
        DWORD2(src[1]) = v43;
        src[0] = dest;
        *(_QWORD *)&src[1] = v80;
        v44 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v44 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v2 = v44;
        v45 = src[0];
        v44[1] = src[1];
        *v44 = v45;
        v46 = v63;
        if ( **((_QWORD **)&v63 + 1) )
          (**((void (__fastcall ***)(_QWORD))&v63 + 1))(v63);
        v47 = *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8LL);
        if ( v47 )
          _rust_dealloc(v46, v47, *(_QWORD *)(*((_QWORD *)&v46 + 1) + 16LL));
        v4 = &off_FD050;
        goto LABEL_57;
      }
      *(_QWORD *)&v77 = v12;
      *((_QWORD *)&v77 + 1) = v10;
      v78 = v11;
      if ( !v11 )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v77);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v77);
        v4 = 0LL;
        v2 = 0LL;
LABEL_57:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v71);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v71);
LABEL_60:
        core::ptr::drop_in_place<uu_df::Options>(&p_dest);
        goto LABEL_61;
      }
      v75 = v78;
      v74 = v77;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v71);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v71);
LABEL_55:
      *(_QWORD *)&v85[16] = v75;
      *(_OWORD *)v85 = v74;
      uu_df::table::Table::new((unsigned int)src, (unsigned int)&p_dest, (unsigned int)v85, v15, v13, v14);
      *(_QWORD *)&dest = src;
      *((_QWORD *)&dest + 1) = <uu_df::table::Table as core::fmt::Display>::fmt;
      *(_QWORD *)v85 = &unk_FD130;
      *(_QWORD *)&v85[8] = 2LL;
      *(_QWORD *)&v85[32] = 0LL;
      *(_QWORD *)&v85[16] = &dest;
      *(_QWORD *)&v85[24] = 1LL;
      std::io::stdio::_print(v85);
      core::ptr::drop_in_place<uu_df::table::Table>(src);
      core::ptr::drop_in_place<uu_df::Options>(&p_dest);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v92);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v94 = src[0];
    v95 = *(_QWORD *)&src[1];
    uu_df::filter_mount_list(v85, &v94, &p_dest);
    *(_QWORD *)&v63 = *(_QWORD *)&v85[8];
    *((_QWORD *)&v63 + 1) = *(_QWORD *)&v85[8];
    v64 = *(__int64 **)v85;
    v65 = *(_QWORD *)&v85[8] + 152LL * *(_QWORD *)&v85[16];
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      v68,
      &v63);
    v55 = 0LL;
    v56 = (void (__fastcall **)(unsigned __int64))&byte_8;
    v57 = 0LL;
    if ( !v70 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, 25LL, 0LL);
      v31 = *((_QWORD *)&src[0] + 1);
      if ( *(_QWORD *)&src[0] )
      {
        v76 = &src[1];
LABEL_78:
        alloc::raw_vec::handle_error(v31, *(_QWORD *)v76);
      }
      v37 = *(_OWORD **)&src[1];
      *(_OWORD *)(*(_QWORD *)&src[1] + 9LL) = *(__int128 *)((char *)&xmmword_AD2D + 9);
      *v37 = xmmword_AD2D;
      DWORD2(src[1]) = 1;
      *(_QWORD *)&src[0] = v31;
      *((_QWORD *)&src[0] + 1) = v37;
      *(_QWORD *)&src[1] = 25LL;
      v38 = _rust_alloc(32LL, 8LL);
      if ( !v38 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v39 = src[0];
      *(_OWORD *)(v38 + 16) = src[1];
      *(_OWORD *)v38 = v39;
      *(_QWORD *)&v60 = v38;
      *((_QWORD *)&v60 + 1) = &off_FD050;
      uucore::mods::error::set_exit_code(*(unsigned int *)(v38 + 24));
      *(_QWORD *)&v40 = uucore::util_name();
      dest = v40;
      *(_QWORD *)v85 = &dest;
      *(_QWORD *)&v85[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v85[16] = &v60;
      *(_QWORD *)&v85[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_FD0C0;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = v85;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      v41 = v60;
      if ( **((_QWORD **)&v60 + 1) )
        (**((void (__fastcall ***)(_QWORD))&v60 + 1))(v60);
      v42 = *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8LL);
      if ( v42 )
        _rust_dealloc(v41, v42, *(_QWORD *)(*((_QWORD *)&v41 + 1) + 16LL));
      v12 = v55;
      v10 = (__int64)v56;
      v11 = v57;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v68);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v68);
      goto LABEL_46;
    }
    if ( !v9 )
    {
      v10 = 8LL;
      v11 = 0LL;
      v12 = 0LL;
LABEL_45:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v68);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v68);
      goto LABEL_46;
    }
    v76 = &v80;
    v22 = 8 * v9;
    while ( 1 )
    {
      uu_df::filesystem::Filesystem::from_path(v85, v69, v70, v8);
      if ( *(_QWORD *)v85 != 0x8000000000000000LL )
      {
        memcpy(src, v85, 0xE8uLL);
        v30 = v57;
        if ( v57 == (__int64 *)v55 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v55);
        memmove(&v56[29 * (_QWORD)v30], src, 0xE8uLL);
        v57 = (__int64 *)((char *)v30 + 1);
        goto LABEL_20;
      }
      v23 = *v8;
      std::fs::metadata(&dest);
      if ( (_QWORD)dest == 2LL )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
          2LL,
          *((_QWORD *)&dest + 1));
        v60 = *(_OWORD *)(v23 + 8);
        v66 = &v60;
        v67 = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_FD0F0;
        *((_QWORD *)&dest + 1) = 2LL;
        v81 = 0LL;
        *(_QWORD *)&v80 = &v66;
        *((_QWORD *)&v80 + 1) = 1LL;
        alloc::fmt::format::format_inner(&v83, &dest);
        DWORD2(v80) = 1;
        dest = v83;
        *(_QWORD *)&v80 = v84;
        v24 = _rust_alloc(32LL, 8LL);
        if ( !v24 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v25 = dest;
        *(_OWORD *)(v24 + 16) = v80;
        *(_OWORD *)v24 = v25;
        v58 = v24;
        v59 = &off_FD050;
        uucore::mods::error::set_exit_code(*(unsigned int *)(v24 + 24));
        v66 = (__int128 *)uucore::util_name();
        v67 = v26;
        *(_QWORD *)&v60 = &v66;
        *((_QWORD *)&v60 + 1) = <&T as core::fmt::Display>::fmt;
        v61 = &v58;
        v62 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_FD0C0;
        *((_QWORD *)&dest + 1) = 3LL;
        v81 = 0LL;
        *(_QWORD *)&v80 = &v60;
        *((_QWORD *)&v80 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        v27 = v58;
        v28 = v59;
        v29 = *v59;
        if ( !*v59 )
          goto LABEL_32;
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
          dest,
          *((_QWORD *)&dest + 1));
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 25LL, 0LL);
        v31 = *((_QWORD *)&dest + 1);
        if ( (_QWORD)dest )
          goto LABEL_78;
        v32 = (_OWORD *)v80;
        *(_OWORD *)(v80 + 9) = *(__int128 *)((char *)&xmmword_AD2D + 9);
        *v32 = xmmword_AD2D;
        DWORD2(v80) = 1;
        *(_QWORD *)&dest = v31;
        *((_QWORD *)&dest + 1) = v32;
        *(_QWORD *)&v80 = 25LL;
        v33 = _rust_alloc(32LL, 8LL);
        if ( !v33 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v34 = dest;
        *(_OWORD *)(v33 + 16) = v80;
        *(_OWORD *)v33 = v34;
        v58 = v33;
        v59 = &off_FD050;
        uucore::mods::error::set_exit_code(*(unsigned int *)(v33 + 24));
        v66 = (__int128 *)uucore::util_name();
        v67 = v35;
        *(_QWORD *)&v60 = &v66;
        *((_QWORD *)&v60 + 1) = <&T as core::fmt::Display>::fmt;
        v61 = &v58;
        v62 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &unk_FD0C0;
        *((_QWORD *)&dest + 1) = 3LL;
        v81 = 0LL;
        *(_QWORD *)&v80 = &v60;
        *((_QWORD *)&v80 + 1) = 2LL;
        std::io::stdio::_eprint(&dest);
        v27 = v58;
        v28 = v59;
        v29 = *v59;
        if ( !*v59 )
          goto LABEL_32;
      }
      ((void (__fastcall *)(__int64))v29)(v58);
LABEL_32:
      v36 = v28[1];
      if ( v36 )
        _rust_dealloc(v27, v36, v28[2]);
LABEL_20:
      ++v8;
      v22 -= 8LL;
      if ( !v22 )
      {
        v12 = v55;
        v10 = (__int64)v56;
        v11 = v57;
        goto LABEL_45;
      }
    }
  }
  v2 = (_OWORD *)uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v85[8]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_62:
  *(_QWORD *)&v82[0] = v2;
  *((_QWORD *)&v82[0] + 1) = v4;
  *(_QWORD *)v85 = v82;
  *(_QWORD *)&v85[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&src[0] = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[2] = 0LL;
  *(_QWORD *)&src[1] = v85;
  *((_QWORD *)&src[1] + 1) = 1LL;
  alloc::fmt::format::format_inner(&v97, src);
  *(_OWORD *)v85 = v97;
  *(_QWORD *)&v85[16] = v98;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v97 + 1), v98, 1LL, 0LL) )
  {
    *(_QWORD *)&v49 = uucore::util_name();
    dest = v49;
    p_dest = &dest;
    *(_QWORD *)&v87 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_FD110;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &p_dest;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&dest = v85;
    *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_FD130;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &dest;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v82[0] + 1) + 104LL))(*(_QWORD *)&v82[0]) )
  {
    *(_QWORD *)&v50 = uucore::execution_phrase();
    dest = v50;
    p_dest = &dest;
    *(_QWORD *)&v87 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_FD150;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &p_dest;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
  }
  v51 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v82[0] + 1) + 96LL))(*(_QWORD *)&v82[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v85);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v85);
  v52 = v82[0];
  if ( **((_QWORD **)&v82[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v82[0] + 1))(*(_QWORD *)&v82[0]);
  v53 = *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL);
  if ( v53 )
    _rust_dealloc(v52, v53, *(_QWORD *)(*((_QWORD *)&v52 + 1) + 16LL));
  return v51;
}
