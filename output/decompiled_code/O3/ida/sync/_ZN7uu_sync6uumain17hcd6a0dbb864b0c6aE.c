__int64 __fastcall uu_sync::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const void *v8; // r15
  size_t v9; // rbx
  size_t v10; // r14
  size_t v11; // r12
  __int64 v12; // rax
  __int64 (__fastcall **v13)(); // rdx
  __int64 v14; // r14
  __int64 (__fastcall **v15)(); // r13
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int8 flag; // al
  __int64 v19; // rdi
  __int64 v20; // rax
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // rbp
  __int64 v24; // r15
  void *v25; // r13
  size_t v26; // rbx
  unsigned int v27; // edx
  unsigned int v28; // r14d
  __int64 (__fastcall **v29)(); // rdx
  __int64 v30; // rax
  __int64 (__fastcall **v31)(); // rdx
  const void *v32; // r15
  size_t v33; // rbx
  size_t v34; // r12
  __int128 v35; // rax
  __int128 v36; // rax
  unsigned int v37; // ebx
  __int128 v38; // kr00_16
  __int64 v39; // rsi
  _BYTE v41[24]; // [rsp+8h] [rbp-3D0h] BYREF
  _OWORD *v42; // [rsp+20h] [rbp-3B8h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-3B0h]
  __int64 v44; // [rsp+38h] [rbp-3A0h] BYREF
  __int128 v45; // [rsp+40h] [rbp-398h] BYREF
  __int128 v46; // [rsp+50h] [rbp-388h]
  __int128 v47; // [rsp+60h] [rbp-378h]
  __int128 v48; // [rsp+70h] [rbp-368h]
  _OWORD v49[3]; // [rsp+88h] [rbp-350h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-320h]
  const char *v51; // [rsp+C0h] [rbp-318h]
  __int128 v52; // [rsp+C8h] [rbp-310h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-300h]
  __int128 v54; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 v55; // [rsp+F0h] [rbp-2E8h]
  __int128 v56; // [rsp+100h] [rbp-2D8h]
  __int128 v57; // [rsp+110h] [rbp-2C8h]
  _QWORD v58[50]; // [rsp+208h] [rbp-1D0h] BYREF
  char v59; // [rsp+39Dh] [rbp-3Bh]
  char v60; // [rsp+39Fh] [rbp-39h]

  uu_sync::uu_app(&v54);
  clap_lex::RawArgs::new(v41, a1, a2);
  v44 = 0LL;
  if ( (v59 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(v41, &v44)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(&v42, v4), v42) )
  {
    if ( (v60 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(v41, &v44);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(&v42, v7);
    if ( v42 || v58[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = (const void *)n[0];
    v9 = n[1];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v42, n[1], 0LL);
    v10 = n[0];
    if ( !v42 )
    {
      v11 = n[1];
      memcpy((void *)n[1], v8, v9);
      v58[0] = v10;
      v58[1] = v11;
      v58[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v45, &v54, v41, v44);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v41);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v41);
      goto LABEL_13;
    }
LABEL_60:
    alloc::raw_vec::handle_error(v10, n[1]);
  }
  v32 = (const void *)n[0];
  v33 = n[1];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v42, n[1], 0LL);
  v10 = n[0];
  if ( v42 )
    goto LABEL_60;
  v34 = n[1];
  memcpy((void *)n[1], v32, v33);
  v42 = (_OWORD *)v10;
  n[0] = v34;
  n[1] = v33;
  clap_lex::RawArgs::insert(v41, &v44, &v42);
  v58[33] = 1LL;
  v58[34] = 0LL;
  if ( v58[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v58);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v58);
  }
  v58[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v45, &v54, v41, v44);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v42);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v42);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v41);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v41);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v54);
  if ( (_QWORD)v45 != 0x8000000000000000LL )
  {
    v50 = v48;
    v49[2] = v47;
    v49[1] = v46;
    v49[0] = v45;
    v16 = (__int64)*(&uu_sync::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v54, v49, aFiles, v16);
    clap_builder::parser::error::MatchesError::unwrap(&v45, aFiles, v16, &v54);
    if ( (_QWORD)v45
      && (v57 = v48,
          v56 = v47,
          v55 = v46,
          v54 = v45,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v42, &v54),
          v54 = *(_OWORD *)n,
          v42 != (_OWORD *)0x8000000000000000LL) )
    {
      *(_OWORD *)&v41[8] = v54;
      *(_QWORD *)v41 = v42;
    }
    else
    {
      *(_QWORD *)v41 = 0LL;
      *(_QWORD *)&v41[8] = 8LL;
      *(_QWORD *)&v41[16] = 0LL;
    }
    v17 = (__int64)*(&uu_sync::options::DATA + 1);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, aData, v17);
    if ( ((*(_QWORD *)&v41[16] == 0LL) & flag) != 0 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v54, 34LL, 0LL);
      v19 = *((_QWORD *)&v54 + 1);
      if ( (_QWORD)v54 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v54 + 1), v55);
      v20 = v55;
      *(_OWORD *)(v55 + 16) = xmmword_101A7;
      *(_OWORD *)v20 = xmmword_10197;
      *(_WORD *)(v20 + 32) = 29806;
      DWORD2(v55) = 1;
      *(_QWORD *)&v54 = v19;
      *((_QWORD *)&v54 + 1) = v20;
      *(_QWORD *)&v55 = 34LL;
      v21 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v21 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v14 = (__int64)v21;
      v22 = v54;
      v21[1] = v55;
      *v21 = v22;
      v15 = &off_D9C50;
      goto LABEL_44;
    }
    v51 = aData;
    if ( *(_QWORD *)&v41[16] )
    {
      v23 = *(_QWORD *)&v41[8];
      v24 = 24LL * *(_QWORD *)&v41[16];
      do
      {
        v25 = *(void **)(v23 + 8);
        v26 = *(_QWORD *)(v23 + 16);
        if ( (unsigned int)nix::fcntl::open(v25, v26, 2048) == 1 )
        {
          v28 = v27;
          if ( v27 != 13 || (unsigned __int8)std::path::Path::is_dir(v25, v26) )
          {
            v14 = <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                    v28,
                    v23);
            if ( v14 )
              goto LABEL_43;
          }
        }
        v23 += 24LL;
        v24 -= 24LL;
      }
      while ( v24 );
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v49,
                            aFileSystem,
                            *(&uu_sync::options::FILE_SYSTEM + 1)) )
    {
      *(_QWORD *)&v55 = *(_QWORD *)&v41[16];
      v54 = *(_OWORD *)v41;
      v30 = uu_sync::syncfs(&v54, v51);
    }
    else
    {
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v49, v51, v17) )
      {
        v14 = uu_sync::sync();
        if ( v14 )
        {
LABEL_43:
          v15 = v29;
LABEL_44:
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v41);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v41);
          goto LABEL_45;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v41);
LABEL_55:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v49);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
      *(_QWORD *)&v55 = *(_QWORD *)&v41[16];
      v54 = *(_OWORD *)v41;
      v30 = uu_sync::fdatasync(&v54);
    }
    v14 = v30;
    if ( v30 )
    {
      v15 = v31;
LABEL_45:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v49);
      goto LABEL_46;
    }
    goto LABEL_55;
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v45 + 1));
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  v14 = v12;
  v15 = v13;
LABEL_46:
  *(_QWORD *)v41 = v14;
  *(_QWORD *)&v41[8] = v15;
  *(_QWORD *)&v45 = v41;
  *((_QWORD *)&v45 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v54 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v54 + 1) = 1LL;
  *(_QWORD *)&v56 = 0LL;
  *(_QWORD *)&v55 = &v45;
  *((_QWORD *)&v55 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v52, &v54);
  v45 = v52;
  *(_QWORD *)&v46 = v53;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v52 + 1), v53, 1LL, 0LL) )
  {
    *(_QWORD *)&v35 = uucore::util_name();
    v49[0] = v35;
    v42 = v49;
    n[0] = (size_t)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &unk_D9BB8;
    *((_QWORD *)&v54 + 1) = 2LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = &v42;
    *((_QWORD *)&v55 + 1) = 1LL;
    std::io::stdio::_eprint(&v54);
    *(_QWORD *)&v49[0] = &v45;
    *((_QWORD *)&v49[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &unk_D9BD8;
    *((_QWORD *)&v54 + 1) = 2LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = v49;
    *((_QWORD *)&v55 + 1) = 1LL;
    std::io::stdio::_eprint(&v54);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)&v41[8] + 104LL))(*(_QWORD *)v41) )
  {
    *(_QWORD *)&v36 = uucore::execution_phrase();
    v49[0] = v36;
    v42 = v49;
    n[0] = (size_t)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &off_D9BF8;
    *((_QWORD *)&v54 + 1) = 2LL;
    *(_QWORD *)&v56 = 0LL;
    *(_QWORD *)&v55 = &v42;
    *((_QWORD *)&v55 + 1) = 1LL;
    std::io::stdio::_eprint(&v54);
  }
  v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&v41[8] + 96LL))(*(_QWORD *)v41);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v45);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45);
  v38 = *(_OWORD *)v41;
  if ( **(_QWORD **)&v41[8] )
    (**(void (__fastcall ***)(_QWORD))&v41[8])(*(_QWORD *)v41);
  v39 = *(_QWORD *)(*((_QWORD *)&v38 + 1) + 8LL);
  if ( v39 )
    _rust_dealloc(v38, v39, *(_QWORD *)(*((_QWORD *)&v38 + 1) + 16LL));
  return v37;
}
