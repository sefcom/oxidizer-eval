__int64 __fastcall uu_dirname::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rdx
  bool v4; // zf
  char v5; // al
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(); // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  _OWORD *v24; // rax
  __int128 v25; // xmm0
  _OWORD *v26; // r15
  __int64 (__fastcall *v27)(); // rdx
  __int64 (__fastcall *v28)(); // rdx
  void (__fastcall __noreturn **v29)(); // r14
  unsigned __int8 (__fastcall **v30)(void (__fastcall __noreturn **)()); // r15
  unsigned __int8 (__fastcall *v31)(void (__fastcall __noreturn **)()); // rsi
  char v33; // [rsp+7h] [rbp-691h] BYREF
  void (__fastcall __noreturn **v34)(); // [rsp+8h] [rbp-690h] BYREF
  unsigned __int8 (__fastcall **v35)(void (__fastcall __noreturn **)()); // [rsp+10h] [rbp-688h]
  __int128 v36; // [rsp+18h] [rbp-680h]
  __int128 v37; // [rsp+28h] [rbp-670h]
  __int64 v38; // [rsp+38h] [rbp-660h]
  void (__fastcall __noreturn **p_p_dest)(); // [rsp+40h] [rbp-658h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+48h] [rbp-650h]
  __int128 v41; // [rsp+50h] [rbp-648h]
  __int128 v42; // [rsp+60h] [rbp-638h]
  __int64 v43; // [rsp+70h] [rbp-628h]
  __int64 v44; // [rsp+78h] [rbp-620h]
  void (__fastcall __noreturn *p_dest)(); // [rsp+80h] [rbp-618h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+88h] [rbp-610h]
  __int128 v47; // [rsp+90h] [rbp-608h]
  __int128 v48; // [rsp+A0h] [rbp-5F8h]
  const char *v49; // [rsp+B0h] [rbp-5E8h]
  __int64 v50; // [rsp+B8h] [rbp-5E0h]
  __int128 v51; // [rsp+C0h] [rbp-5D8h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-5C8h]
  __int128 src; // [rsp+D8h] [rbp-5C0h] BYREF
  _BYTE v54[24]; // [rsp+E8h] [rbp-5B0h]
  __int128 dest; // [rsp+3A0h] [rbp-2F8h] BYREF
  __int128 v56; // [rsp+3B0h] [rbp-2E8h]
  __int128 v57; // [rsp+3C0h] [rbp-2D8h]
  const char *v58; // [rsp+3D0h] [rbp-2C8h]
  __int64 v59; // [rsp+3D8h] [rbp-2C0h]

  uu_dirname::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&p_p_dest, &dest, a1, a2);
  if ( p_p_dest != (void (__fastcall __noreturn **)())0x8000000000000000LL )
  {
    v38 = v43;
    v37 = v42;
    v36 = v41;
    v34 = p_p_dest;
    v35 = (unsigned __int8 (__fastcall **)(void (__fastcall __noreturn **)()))v40;
    v4 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v34, aZero, 4LL) == 0;
    v5 = 10;
    if ( !v4 )
      v5 = 0;
    v33 = v5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v34, aDir, 3LL);
    v6 = aDir;
    clap_builder::parser::error::MatchesError::unwrap(&dest, aDir, 3LL, &src);
    v7 = (void (__fastcall __noreturn *)())dest;
    if ( (_QWORD)dest )
    {
      v8 = (const char *)*((_QWORD *)&dest + 1);
      v9 = v56;
      v10 = v57;
      v6 = v58;
      v11 = v59;
    }
    else
    {
      v10 = 0LL;
      v9 = (unsigned __int64)"&";
      v8 = "&";
      v7 = core::ops::function::FnOnce::call_once;
      v11 = 0LL;
    }
    p_dest = v7;
    v46 = (__int64 (__fastcall *)())v8;
    v47 = v9;
    v48 = v10;
    v49 = v6;
    v50 = v11;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&p_p_dest, &p_dest);
    if ( !(_QWORD)v41 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&src, 15LL, 0LL);
      v22 = *((_QWORD *)&src + 1);
      if ( (_QWORD)src )
        alloc::raw_vec::handle_error(*((_QWORD *)&src + 1), *(_QWORD *)v54);
      v23 = *(_QWORD **)v54;
      *(_QWORD *)(*(_QWORD *)v54 + 7LL) = 0x646E617265706F20LL;
      *v23 = 0x20676E697373696DLL;
      *(_DWORD *)&v54[8] = 1;
      *(_QWORD *)&src = v22;
      *((_QWORD *)&src + 1) = v23;
      *(_QWORD *)v54 = 15LL;
      v24 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v24 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v25 = src;
      v24[1] = *(_OWORD *)v54;
      v26 = v24;
      *v24 = v25;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&p_p_dest);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&p_p_dest);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v34);
      v3 = &off_D4630;
      v2 = (__int64)v26;
      goto LABEL_26;
    }
    v12 = v40;
    v44 = 24 * v41;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)((char *)v12 + v13 + 8);
      v15 = *(_QWORD *)((char *)v12 + v13 + 16);
      v16 = std::path::Path::parent(v14, v15);
      v18 = v16;
      if ( v16 )
        break;
      if ( !(unsigned __int8)std::path::Path::is_absolute(v14, v15)
        && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, asc_FE3F, 1LL) )
      {
        goto LABEL_19;
      }
      *(_QWORD *)&src = &off_D46A0;
      *((_QWORD *)&src + 1) = 1LL;
      *(_QWORD *)v54 = 8LL;
      *(_OWORD *)&v54[8] = 0LL;
      std::io::stdio::_print(&src);
LABEL_20:
      *(_QWORD *)&dest = &v33;
      *((_QWORD *)&dest + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
      *((_QWORD *)&src + 1) = 1LL;
      *(_QWORD *)&v54[16] = 0LL;
      *(_QWORD *)v54 = &dest;
      *(_QWORD *)&v54[8] = 1LL;
      std::io::stdio::_print(&src);
      v13 += 24LL;
      if ( v44 == v13 )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&p_p_dest);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&p_p_dest);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v34);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
    }
    v19 = v17;
    std::path::Path::components(&src, v16);
    <std::path::Components as core::iter::traits::iterator::Iterator>::next(&dest, &src);
    if ( (_BYTE)dest != 10 )
    {
      v20 = uucore::mods::display::print_verbatim(v18, v19);
      if ( v20 )
      {
        *(_QWORD *)&src = v20;
        core::result::unwrap_failed(aCalledResultUn, 43LL, &src, &off_D46D8, &off_D46C0);
      }
      goto LABEL_20;
    }
LABEL_19:
    *(_QWORD *)&src = &off_D46B0;
    *((_QWORD *)&src + 1) = 1LL;
    *(_QWORD *)v54 = 8LL;
    *(_OWORD *)&v54[8] = 0LL;
    std::io::stdio::_print(&src);
    goto LABEL_20;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v40);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_26:
  v34 = (void (__fastcall __noreturn **)())v2;
  v35 = (unsigned __int8 (__fastcall **)(void (__fastcall __noreturn **)()))v3;
  *(_QWORD *)&dest = &v34;
  *((_QWORD *)&dest + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&src + 1) = 1LL;
  *(_QWORD *)&v54[16] = 0LL;
  *(_QWORD *)v54 = &dest;
  *(_QWORD *)&v54[8] = 1LL;
  alloc::fmt::format::format_inner(&v51, &src);
  dest = v51;
  *(_QWORD *)&v56 = v52;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v51 + 1), v52, 1LL, 0LL) )
  {
    p_dest = (void (__fastcall __noreturn *)())uucore::util_name();
    v46 = v27;
    p_p_dest = &p_dest;
    v40 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &unk_D4598;
    *((_QWORD *)&src + 1) = 2LL;
    *(_QWORD *)&v54[16] = 0LL;
    *(_QWORD *)v54 = &p_p_dest;
    *(_QWORD *)&v54[8] = 1LL;
    std::io::stdio::_eprint(&src);
    p_dest = (void (__fastcall __noreturn *)())&dest;
    v46 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &unk_D45B8;
    *((_QWORD *)&src + 1) = 2LL;
    *(_QWORD *)&v54[16] = 0LL;
    *(_QWORD *)v54 = &p_dest;
    *(_QWORD *)&v54[8] = 1LL;
    std::io::stdio::_eprint(&src);
  }
  if ( v35[13](v34) )
  {
    p_dest = (void (__fastcall __noreturn *)())uucore::execution_phrase();
    v46 = v28;
    p_p_dest = &p_dest;
    v40 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &off_D45D8;
    *((_QWORD *)&src + 1) = 2LL;
    *(_QWORD *)&v54[16] = 0LL;
    *(_QWORD *)v54 = &p_p_dest;
    *(_QWORD *)&v54[8] = 1LL;
    std::io::stdio::_eprint(&src);
  }
  v21 = ((__int64 (__fastcall *)(void (__fastcall __noreturn **)()))v35[12])(v34);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
  v29 = v34;
  v30 = v35;
  if ( *v35 )
    (*v35)(v34);
  v31 = v30[1];
  if ( v31 )
    _rust_dealloc(v29, v31, v30[2]);
  return v21;
}
