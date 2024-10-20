__int64 __fastcall uu_wc::uumain(__int64 a1, __int64 a2)
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
  __int64 v21; // rdx
  void *v23; // r12
  size_t v24; // r15
  void *v25; // r13
  _OWORD *v26; // [rsp+0h] [rbp-3C8h] BYREF
  void *src; // [rsp+8h] [rbp-3C0h]
  size_t n; // [rsp+10h] [rbp-3B8h]
  __int64 v29; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-3A0h]
  __int64 v31; // [rsp+38h] [rbp-390h] BYREF
  __int128 v32; // [rsp+40h] [rbp-388h] BYREF
  __int128 v33; // [rsp+50h] [rbp-378h]
  __int128 v34; // [rsp+60h] [rbp-368h]
  __int64 v35; // [rsp+70h] [rbp-358h]
  _OWORD v36[3]; // [rsp+80h] [rbp-348h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-318h]
  __int128 v38; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-300h]
  __int128 v40; // [rsp+D0h] [rbp-2F8h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-2E8h]
  __int64 v42; // [rsp+F0h] [rbp-2D8h]
  _QWORD v43[50]; // [rsp+1F8h] [rbp-1D0h] BYREF
  char v44; // [rsp+38Dh] [rbp-3Bh]
  char v45; // [rsp+38Fh] [rbp-39h]

  uu_wc::uu_app(&v40);
  clap_lex::RawArgs::new(&v29, a1, a2);
  v31 = 0LL;
  if ( (v44 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(&v29, &v31)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(&v26, v4), v26) )
  {
    if ( (v45 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(&v29, &v31);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(&v26, v7);
    if ( v26 || v43[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src;
    v9 = n;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v26, n, 0LL);
    v10 = src;
    if ( !v26 )
    {
      v11 = n;
      memcpy((void *)n, v8, v9);
      v43[0] = v10;
      v43[1] = v11;
      v43[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v32, &v40, &v29, v31);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
      goto LABEL_13;
    }
LABEL_35:
    alloc::raw_vec::handle_error(v10, n);
  }
  v23 = src;
  v24 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v26, n, 0LL);
  v10 = src;
  if ( v26 )
    goto LABEL_35;
  v25 = (void *)n;
  memcpy((void *)n, v23, v24);
  v26 = v10;
  src = v25;
  n = v24;
  clap_lex::RawArgs::insert(&v29, &v31, &v26);
  v43[33] = 1LL;
  v43[34] = 0LL;
  if ( v43[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v43);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v43);
  }
  v43[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v32, &v40, &v29, v31);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v40);
  if ( (_QWORD)v32 != 0x8000000000000000LL )
  {
    v37 = v35;
    v36[2] = v34;
    v36[1] = v33;
    v36[0] = v32;
    uu_wc::Settings::new(&v26, v36);
    uu_wc::Inputs::new(&v40, v36);
    v12 = *((_QWORD *)&v40 + 1);
    v14 = v41;
    if ( (_QWORD)v40 == 3LL )
    {
      if ( (__int64)v26 < (__int64)0x8000000000000003LL )
        goto LABEL_28;
    }
    else
    {
      v32 = v40;
      v33 = v41;
      v12 = uu_wc::wc(&v32, &v26);
      v14 = v21;
      core::ptr::drop_in_place<uu_wc::Inputs>(&v32);
      if ( (__int64)v26 < (__int64)0x8000000000000003LL )
        goto LABEL_28;
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v26);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
LABEL_28:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
    if ( v12 )
      goto LABEL_15;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v32 + 1));
  v14 = v13;
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_15:
  v29 = v12;
  v30 = v14;
  *(_QWORD *)&v32 = &v29;
  *((_QWORD *)&v32 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v40 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v40 + 1) = 1LL;
  v42 = 0LL;
  *(_QWORD *)&v41 = &v32;
  *((_QWORD *)&v41 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v38, &v40);
  v32 = v38;
  *(_QWORD *)&v33 = v39;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v38 + 1), v39, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    v36[0] = v15;
    v26 = v36;
    src = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v40 = &unk_F08B8;
    *((_QWORD *)&v40 + 1) = 2LL;
    v42 = 0LL;
    *(_QWORD *)&v41 = &v26;
    *((_QWORD *)&v41 + 1) = 1LL;
    std::io::stdio::_eprint(&v40);
    *(_QWORD *)&v36[0] = &v32;
    *((_QWORD *)&v36[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v40 = &unk_F08D8;
    *((_QWORD *)&v40 + 1) = 2LL;
    v42 = 0LL;
    *(_QWORD *)&v41 = v36;
    *((_QWORD *)&v41 + 1) = 1LL;
    std::io::stdio::_eprint(&v40);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v30 + 104))(v29) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    v36[0] = v16;
    v26 = v36;
    src = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v40 = &off_F08F8;
    *((_QWORD *)&v40 + 1) = 2LL;
    v42 = 0LL;
    *(_QWORD *)&v41 = &v26;
    *((_QWORD *)&v41 + 1) = 1LL;
    std::io::stdio::_eprint(&v40);
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(v30 + 96))(v29);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v32);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
  v18 = v29;
  v19 = v30;
  if ( *(_QWORD *)v30 )
    (*(void (__fastcall **)(__int64))v30)(v29);
  v20 = *(_QWORD *)(v19 + 8);
  if ( v20 )
    _rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
  return v17;
}
