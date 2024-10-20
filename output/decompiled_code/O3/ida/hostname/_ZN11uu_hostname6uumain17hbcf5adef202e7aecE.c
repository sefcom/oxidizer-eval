__int64 __fastcall uu_hostname::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // r12
  size_t v9; // r15
  _OWORD *v10; // r14
  size_t v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r15
  __int128 v15; // rax
  __int128 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  void *v27; // r12
  size_t v28; // r15
  void *v29; // r13
  _OWORD *v30; // [rsp+8h] [rbp-3C0h] BYREF
  void *src; // [rsp+10h] [rbp-3B8h]
  size_t n; // [rsp+18h] [rbp-3B0h]
  __int64 v33; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-3A0h]
  __int64 v35; // [rsp+38h] [rbp-390h] BYREF
  __int128 v36; // [rsp+40h] [rbp-388h] BYREF
  __int128 v37; // [rsp+50h] [rbp-378h]
  __int128 v38; // [rsp+60h] [rbp-368h]
  __int64 v39; // [rsp+70h] [rbp-358h]
  _OWORD v40[3]; // [rsp+80h] [rbp-348h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-318h]
  __int128 v42; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-300h]
  char **v44; // [rsp+D0h] [rbp-2F8h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-2F0h]
  __int128 *v46; // [rsp+E0h] [rbp-2E8h]
  __int64 v47; // [rsp+E8h] [rbp-2E0h]
  __int64 v48; // [rsp+F0h] [rbp-2D8h]
  _QWORD v49[50]; // [rsp+1F8h] [rbp-1D0h] BYREF
  char v50; // [rsp+38Dh] [rbp-3Bh]
  char v51; // [rsp+38Fh] [rbp-39h]

  uu_hostname::uu_app(&v44);
  clap_lex::RawArgs::new(&v33, a1, a2);
  v35 = 0LL;
  if ( (v50 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(&v33, &v35)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(&v30, v4), v30) )
  {
    if ( (v51 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(&v33, &v35);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(&v30, v7);
    if ( v30 || v49[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src;
    v9 = n;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, n, 0LL);
    v10 = src;
    if ( !v30 )
    {
      v11 = n;
      memcpy((void *)n, v8, v9);
      v49[0] = v10;
      v49[1] = v11;
      v49[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v36, &v44, &v33, v35);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v33);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33);
      goto LABEL_13;
    }
LABEL_33:
    alloc::raw_vec::handle_error(v10, n);
  }
  v27 = src;
  v28 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, n, 0LL);
  v10 = src;
  if ( v30 )
    goto LABEL_33;
  v29 = (void *)n;
  memcpy((void *)n, v27, v28);
  v30 = v10;
  src = v29;
  n = v28;
  clap_lex::RawArgs::insert(&v33, &v35, &v30);
  v49[33] = 1LL;
  v49[34] = 0LL;
  if ( v49[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v49);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v49);
  }
  v49[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v36, &v44, &v33, v35);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v30);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v33);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v44);
  if ( (_QWORD)v36 != 0x8000000000000000LL )
  {
    v41 = v39;
    v40[2] = v38;
    v40[1] = v37;
    v40[0] = v36;
    v21 = (__int64)*(&uu_hostname::OPT_HOST + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v44, v40, aHost, v21);
    v22 = clap_builder::parser::error::MatchesError::unwrap(aHost, v21, &v44);
    if ( v22 )
    {
      v23 = hostname::set(v22);
      v24 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v23);
    }
    else
    {
      v24 = uu_hostname::display_hostname(v40);
    }
    v12 = v24;
    v14 = v25;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
    if ( v12 )
      goto LABEL_15;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v36 + 1));
  v14 = v13;
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_15:
  v33 = v12;
  v34 = v14;
  *(_QWORD *)&v36 = &v33;
  *((_QWORD *)&v36 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v44 = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v45 = 1LL;
  v48 = 0LL;
  v46 = &v36;
  v47 = 1LL;
  alloc::fmt::format::format_inner(&v42, &v44);
  v36 = v42;
  *(_QWORD *)&v37 = v43;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v42 + 1), v43, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    v40[0] = v15;
    v30 = v40;
    src = <&T as core::fmt::Display>::fmt;
    v44 = (char **)&unk_DEFF8;
    v45 = 2LL;
    v48 = 0LL;
    v46 = (__int128 *)&v30;
    v47 = 1LL;
    std::io::stdio::_eprint(&v44);
    *(_QWORD *)&v40[0] = &v36;
    *((_QWORD *)&v40[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v44 = (char **)&unk_DF018;
    v45 = 2LL;
    v48 = 0LL;
    v46 = v40;
    v47 = 1LL;
    std::io::stdio::_eprint(&v44);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v34 + 104))(v33) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    v40[0] = v16;
    v30 = v40;
    src = <&T as core::fmt::Display>::fmt;
    v44 = &off_DF038;
    v45 = 2LL;
    v48 = 0LL;
    v46 = (__int128 *)&v30;
    v47 = 1LL;
    std::io::stdio::_eprint(&v44);
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(v34 + 96))(v33);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v36);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v36);
  v18 = v33;
  v19 = v34;
  if ( *(_QWORD *)v34 )
    (*(void (__fastcall **)(__int64))v34)(v33);
  v20 = *(_QWORD *)(v19 + 8);
  if ( v20 )
    _rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
  return v17;
}
