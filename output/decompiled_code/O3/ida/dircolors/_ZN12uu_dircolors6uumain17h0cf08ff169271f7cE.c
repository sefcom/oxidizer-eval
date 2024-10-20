__int64 __fastcall uu_dircolors::uumain(__int64 (__fastcall **a1)(), __int64 a2)
{
  __int64 (__fastcall **v2)(); // r15
  _OWORD *v3; // r14
  __int64 (__fastcall **v4)(); // rdx
  __int128 v5; // rax
  __int128 v6; // rax
  unsigned int v7; // ebx
  __int128 v8; // kr00_16
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  char v19; // al
  void *v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int64 v27; // r12
  __int64 v28; // r15
  __int128 v29; // xmm0
  char v30; // [rsp+Fh] [rbp-409h] BYREF
  __int128 v31; // [rsp+10h] [rbp-408h] BYREF
  char ***v32; // [rsp+20h] [rbp-3F8h]
  __int64 (__fastcall *v33)(); // [rsp+28h] [rbp-3F0h]
  __m256i v34; // [rsp+30h] [rbp-3E8h] BYREF
  __m256i v35; // [rsp+50h] [rbp-3C8h] BYREF
  __int128 v36; // [rsp+70h] [rbp-3A8h]
  __int128 v37; // [rsp+80h] [rbp-398h]
  __int128 v38; // [rsp+90h] [rbp-388h] BYREF
  char ***v39; // [rsp+A0h] [rbp-378h]
  __int64 v40; // [rsp+A8h] [rbp-370h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-368h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-358h]
  __m256i v43; // [rsp+C8h] [rbp-350h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-330h]
  __int64 v45; // [rsp+F8h] [rbp-320h]
  _DWORD v46[2]; // [rsp+100h] [rbp-318h] BYREF
  __int64 v47; // [rsp+108h] [rbp-310h]
  __m256i v48; // [rsp+110h] [rbp-308h] BYREF
  __int128 v49; // [rsp+130h] [rbp-2E8h]
  __int128 v50; // [rsp+140h] [rbp-2D8h]
  __int128 v51; // [rsp+3D8h] [rbp-40h] BYREF
  __int64 v52; // [rsp+3E8h] [rbp-30h]

  v2 = a1;
  uu_dircolors::uu_app(&v48);
  clap_builder::builder::command::Command::try_get_matches_from(&v35, &v48, a1, a2);
  if ( v35.m256i_i64[0] != 0x8000000000000000LL )
  {
    v45 = v37;
    v44 = v36;
    v43 = v35;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v48, &v43, aFile, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(&v35, aFile, 4LL, &v48);
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = 8LL;
    v32 = 0LL;
    if ( v35.m256i_i64[0] )
    {
      v50 = v37;
      v49 = v36;
      v48 = v35;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38, &v48);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v31);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
    }
    else
    {
      v39 = v32;
      v38 = v31;
    }
    if ( ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aCShell, 7LL)
       || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aBourneShell, 12LL))
      && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aPrintDatabase, 14LL)
       || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aPrintLsColors, 15LL)) )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v48, 91LL, 0LL);
      v10 = v48.m256i_i64[1];
      if ( !v48.m256i_i64[0] )
      {
        v11 = (void *)v48.m256i_i64[2];
        *(_OWORD *)(v48.m256i_i64[2] + 75) = unk_13D4D;
        qmemcpy(v11, "the options to output non shell syntax,\nand to select a shell syntax are mutuall", 80);
        v48.m256i_i32[6] = 1;
        v48.m256i_i64[0] = v10;
        v48.m256i_i64[1] = (__int64)v11;
        v48.m256i_i64[2] = 91LL;
        v12 = _rust_alloc(32LL, 8LL);
        if ( !v12 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_20:
        v3 = (_OWORD *)v12;
        v13 = *(_OWORD *)v48.m256i_i8;
        v14 = *(_OWORD *)&v48.m256i_u64[2];
LABEL_21:
        v3[1] = v14;
        *v3 = v13;
        v2 = &off_F0800;
        goto LABEL_22;
      }
      goto LABEL_67;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aPrintDatabase, 14LL)
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aPrintLsColors, 15LL) )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v48, 69LL, 0LL);
      v10 = v48.m256i_i64[1];
      if ( !v48.m256i_i64[0] )
      {
        v16 = v48.m256i_i64[2];
        *(_OWORD *)(v48.m256i_i64[2] + 48) = unk_13CED;
        qmemcpy((void *)v16, "options --print-database and --print-ls-colors a", 48);
        *(_QWORD *)(v16 + 61) = 0x65766973756C6378LL;
        v48.m256i_i32[6] = 1;
        v48.m256i_i64[0] = v10;
        v48.m256i_i64[1] = v16;
        v48.m256i_i64[2] = 69LL;
        v12 = _rust_alloc(32LL, 8LL);
        if ( !v12 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_20;
      }
LABEL_67:
      alloc::raw_vec::handle_error(v10, v48.m256i_i64[2]);
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aPrintDatabase, 14LL) )
    {
      if ( v39 )
      {
        v17 = *(_OWORD *)(**((_QWORD **)&v38 + 1) + 8LL);
        v35.m256i_i64[0] = 0LL;
        *(_OWORD *)&v35.m256i_u64[1] = v17;
        v35.m256i_i8[24] = 1;
        v34.m256i_i64[0] = (__int64)&v35;
        v34.m256i_i64[1] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
        v48.m256i_i64[0] = (__int64)&off_F0870;
        v48.m256i_i64[1] = 2LL;
        *(_QWORD *)&v49 = 0LL;
        v48.m256i_i64[2] = (__int64)&v34;
        v48.m256i_i64[3] = 1LL;
        alloc::fmt::format::format_inner(&v31, &v48);
        v48.m256i_i32[6] = 1;
        *(_OWORD *)v48.m256i_i8 = v31;
        v48.m256i_i64[2] = (__int64)v32;
        v18 = _rust_alloc(32LL, 8LL);
        if ( !v18 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_56:
        v3 = (_OWORD *)v18;
        v13 = *(_OWORD *)v48.m256i_i8;
        v14 = *(_OWORD *)&v48.m256i_u64[2];
        goto LABEL_21;
      }
      uu_dircolors::generate_dircolors_config(&v35);
      *(_QWORD *)&v31 = &v35;
      *((_QWORD *)&v31 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v48.m256i_i64[0] = (__int64)&unk_F06A8;
      v48.m256i_i64[1] = 2LL;
      *(_QWORD *)&v49 = 0LL;
      v48.m256i_i64[2] = (__int64)&v31;
      v48.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&v48);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
LABEL_49:
      v3 = 0LL;
      goto LABEL_22;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aCShell, 7LL) )
    {
      v30 = 1;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 &v43,
                                 aBourneShell,
                                 12LL) )
    {
      v30 = 0;
    }
    else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                 &v43,
                                 aPrintLsColors,
                                 15LL) )
    {
      v30 = 2;
    }
    else
    {
      v30 = 3;
      v19 = uu_dircolors::guess_syntax();
      if ( v19 == 3 )
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v48, 61LL, 0LL);
        v10 = v48.m256i_i64[1];
        if ( v48.m256i_i64[0] )
          goto LABEL_67;
        v20 = (void *)v48.m256i_i64[2];
        *(_OWORD *)(v48.m256i_i64[2] + 45) = *(_OWORD *)&aNoShellEnviron[45];
        qmemcpy(v20, "no SHELL environment variable, and no shell type", 48);
        v48.m256i_i32[6] = 1;
        v48.m256i_i64[0] = v10;
        v48.m256i_i64[1] = (__int64)v20;
        v48.m256i_i64[2] = 61LL;
        v21 = _rust_alloc(32LL, 8LL);
        if ( !v21 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v3 = (_OWORD *)v21;
        v22 = *(_OWORD *)v48.m256i_i8;
        v23 = *(_OWORD *)&v48.m256i_u64[2];
        goto LABEL_60;
      }
      v30 = v19;
    }
    if ( v39 != (char ***)((char *)&dword_0 + 1) )
    {
      if ( v39 )
      {
        v26 = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)&v38 + 1) + 8LL) + 8LL);
        v35.m256i_i64[0] = 0LL;
        *(_OWORD *)&v35.m256i_u64[1] = v26;
        v35.m256i_i8[24] = 1;
        *(_QWORD *)&v41 = &v35;
        *((_QWORD *)&v41 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v48.m256i_i64[0] = (__int64)&off_F07B8;
        v48.m256i_i64[1] = 1LL;
        *(_QWORD *)&v49 = 0LL;
        v48.m256i_i64[2] = (__int64)&v41;
        v48.m256i_i64[3] = 1LL;
        alloc::fmt::format::format_inner(&v31, &v48);
        v48.m256i_i32[6] = 1;
        *(_OWORD *)v48.m256i_i8 = v31;
        v48.m256i_i64[2] = (__int64)v32;
        v18 = _rust_alloc(32LL, 8LL);
        if ( !v18 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_56;
      }
      uu_dircolors::generate_ls_colors(&v35, &v30, asc_1354C, 1LL);
      *(_QWORD *)&v31 = &v35;
      *((_QWORD *)&v31 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v48.m256i_i64[0] = (__int64)&unk_F06A8;
      v48.m256i_i64[1] = 2LL;
      *(_QWORD *)&v49 = 0LL;
      v48.m256i_i64[2] = (__int64)&v31;
      v48.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&v48);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
      goto LABEL_49;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(**((_QWORD **)&v38 + 1) + 8LL),
                            *(_QWORD *)(**((_QWORD **)&v38 + 1) + 16LL),
                            asc_13C55,
                            1LL) )
    {
      v24 = std::io::stdio::stdin();
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v35, 0x2000LL, v24);
      if ( !v39 )
        core::panicking::panic_bounds_check(0LL, 0LL, &off_F07A0);
      uu_dircolors::parse(
        (__int64)&v48,
        (__int128 *)v35.m256i_i8,
        &v30,
        *(__int64 (__fastcall **)())(**((_QWORD **)&v38 + 1) + 8LL),
        *(char ****)(**((_QWORD **)&v38 + 1) + 16LL));
      v34 = v48;
LABEL_53:
      if ( v34.m256i_i64[0] )
      {
        v48.m256i_i64[2] = v34.m256i_i64[3];
        *(_OWORD *)v48.m256i_i8 = *(_OWORD *)&v34.m256i_u64[1];
        v48.m256i_i32[6] = 1;
        v3 = (_OWORD *)alloc::alloc::exchange_malloc();
        v25 = *(_OWORD *)v48.m256i_i8;
        v3[1] = *(_OWORD *)&v48.m256i_u64[2];
        *v3 = v25;
      }
      else
      {
        v32 = (char ***)v34.m256i_i64[3];
        v31 = *(_OWORD *)&v34.m256i_u64[1];
        *(_QWORD *)&v41 = &v31;
        *((_QWORD *)&v41 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v48.m256i_i64[0] = (__int64)&unk_F06A8;
        v48.m256i_i64[1] = 2LL;
        *(_QWORD *)&v49 = 0LL;
        v48.m256i_i64[2] = (__int64)&v41;
        v48.m256i_i64[3] = 1LL;
        std::io::stdio::_print(&v48);
        core::ptr::drop_in_place<alloc::string::String>(&v31);
        v3 = 0LL;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v38);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
      v2 = &off_F0708;
      if ( v3 )
        goto LABEL_3;
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    if ( !v39 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_F0778);
    v27 = *(_QWORD *)(**((_QWORD **)&v38 + 1) + 8LL);
    v28 = *(_QWORD *)(**((_QWORD **)&v38 + 1) + 16LL);
    if ( !(unsigned __int8)std::path::Path::is_dir(v27, v28) )
    {
      std::fs::File::open(v46, v27, v28);
      if ( !v46[0] )
      {
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v35, 0x2000LL, v46[1]);
        std::sys::os_str::bytes::Slice::to_string_lossy(&v31, v27, v28);
        uu_dircolors::parse((__int64)&v48, (__int128 *)v35.m256i_i8, &v30, *((__int64 (__fastcall **)())&v31 + 1), v32);
        v34 = v48;
        core::ptr::drop_in_place<std::env::VarError>(&v31);
        goto LABEL_53;
      }
      v40 = v47;
      v35.m256i_i64[0] = 1LL;
      v35.m256i_i64[1] = v27;
      v35.m256i_i64[2] = v28;
      v35.m256i_i8[24] = 0;
      *(_QWORD *)&v31 = &v35;
      *((_QWORD *)&v31 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v32 = (char ***)&v40;
      v33 = <std::io::error::Error as core::fmt::Display>::fmt;
      v48.m256i_i64[0] = (__int64)&unk_F0688;
      v48.m256i_i64[1] = 2LL;
      *(_QWORD *)&v49 = 0LL;
      v48.m256i_i64[2] = (__int64)&v31;
      v48.m256i_i64[3] = 2LL;
      alloc::fmt::format::format_inner(&v41, &v48);
      v48.m256i_i32[6] = 1;
      *(_OWORD *)v48.m256i_i8 = v41;
      v48.m256i_i64[2] = v42;
      v3 = (_OWORD *)alloc::alloc::exchange_malloc();
      v29 = *(_OWORD *)v48.m256i_i8;
      v3[1] = *(_OWORD *)&v48.m256i_u64[2];
      *v3 = v29;
      core::ptr::drop_in_place<std::io::error::Error>(v40);
      v2 = &off_F0708;
LABEL_22:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v38);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
      if ( v3 )
        goto LABEL_3;
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v35.m256i_i64[0] = 1LL;
    v35.m256i_i64[1] = v27;
    v35.m256i_i64[2] = v28;
    v35.m256i_i8[24] = 1;
    *(_QWORD *)&v41 = &v35;
    *((_QWORD *)&v41 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v48.m256i_i64[0] = (__int64)&off_F0790;
    v48.m256i_i64[1] = 1LL;
    *(_QWORD *)&v49 = 0LL;
    v48.m256i_i64[2] = (__int64)&v41;
    v48.m256i_i64[3] = 1LL;
    alloc::fmt::format::format_inner(&v31, &v48);
    v48.m256i_i32[6] = 2;
    *(_OWORD *)v48.m256i_i8 = v31;
    v48.m256i_i64[2] = (__int64)v32;
    v3 = (_OWORD *)alloc::alloc::exchange_malloc();
    v22 = *(_OWORD *)v48.m256i_i8;
    v23 = *(_OWORD *)&v48.m256i_u64[2];
LABEL_60:
    v3[1] = v23;
    *v3 = v22;
    v2 = &off_F0708;
    goto LABEL_22;
  }
  v3 = (_OWORD *)uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35.m256i_i64[1]);
  v2 = v4;
  if ( !v3 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  v34.m256i_i64[0] = (__int64)v3;
  v34.m256i_i64[1] = (__int64)v2;
  v35.m256i_i64[0] = (__int64)&v34;
  v35.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v48.m256i_i64[0] = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v48.m256i_i64[1] = 1LL;
  *(_QWORD *)&v49 = 0LL;
  v48.m256i_i64[2] = (__int64)&v35;
  v48.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v51, &v48);
  *(_OWORD *)v35.m256i_i8 = v51;
  v35.m256i_i64[2] = v52;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v51 + 1), v52, 1LL, 0LL) )
  {
    *(_QWORD *)&v5 = uucore::util_name();
    *(_OWORD *)v43.m256i_i8 = v5;
    *(_QWORD *)&v31 = &v43;
    *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
    v48.m256i_i64[0] = (__int64)&unk_F0688;
    v48.m256i_i64[1] = 2LL;
    *(_QWORD *)&v49 = 0LL;
    v48.m256i_i64[2] = (__int64)&v31;
    v48.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v48);
    v43.m256i_i64[0] = (__int64)&v35;
    v43.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v48.m256i_i64[0] = (__int64)&unk_F06A8;
    v48.m256i_i64[1] = 2LL;
    *(_QWORD *)&v49 = 0LL;
    v48.m256i_i64[2] = (__int64)&v43;
    v48.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v48);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v34.m256i_i64[1] + 104))(v34.m256i_i64[0]) )
  {
    *(_QWORD *)&v6 = uucore::execution_phrase();
    *(_OWORD *)v43.m256i_i8 = v6;
    *(_QWORD *)&v31 = &v43;
    *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
    v48.m256i_i64[0] = (__int64)&off_F06C8;
    v48.m256i_i64[1] = 2LL;
    *(_QWORD *)&v49 = 0LL;
    v48.m256i_i64[2] = (__int64)&v31;
    v48.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v48);
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v34.m256i_i64[1] + 96))(v34.m256i_i64[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
  v8 = *(_OWORD *)v34.m256i_i8;
  if ( *(_QWORD *)v34.m256i_i64[1] )
    (*(void (__fastcall **)(__int64))v34.m256i_i64[1])(v34.m256i_i64[0]);
  v9 = *(_QWORD *)(*((_QWORD *)&v8 + 1) + 8LL);
  if ( v9 )
    _rust_dealloc(v8, v9, *(_QWORD *)(*((_QWORD *)&v8 + 1) + 16LL));
  return v7;
}
