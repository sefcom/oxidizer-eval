__int64 __fastcall uu_sleep::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const void *v8; // r12
  size_t v9; // r15
  void *v10; // r14
  size_t v11; // r13
  __int64 v12; // r14
  __int64 (__fastcall **v13)(); // rdx
  __int64 (__fastcall **v14)(); // r15
  __int128 v15; // rax
  __int128 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 (__fastcall **v19)(); // r15
  __int64 (__fastcall *v20)(); // rsi
  __int64 (__fastcall **v21)(); // rdx
  __int64 v22; // rdx
  _OWORD *v23; // rax
  __int128 v24; // xmm0
  const void *v26; // r12
  size_t v27; // r15
  void *v28; // r13
  __int64 v29; // [rsp+8h] [rbp-3E0h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+10h] [rbp-3D8h]
  __int64 v31; // [rsp+18h] [rbp-3D0h]
  void *src[2]; // [rsp+20h] [rbp-3C8h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-3B8h]
  _QWORD v34[2]; // [rsp+40h] [rbp-3A8h] BYREF
  _BYTE v35[56]; // [rsp+50h] [rbp-398h] BYREF
  __int64 v36; // [rsp+88h] [rbp-360h]
  _OWORD v37[3]; // [rsp+90h] [rbp-358h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-328h]
  _QWORD v39[2]; // [rsp+C8h] [rbp-320h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-300h]
  char **v42; // [rsp+F0h] [rbp-2F8h] BYREF
  __int128 v43; // [rsp+F8h] [rbp-2F0h]
  __int128 v44; // [rsp+108h] [rbp-2E0h]
  __int128 v45; // [rsp+118h] [rbp-2D0h]
  __int64 v46; // [rsp+128h] [rbp-2C0h]
  _QWORD v47[50]; // [rsp+218h] [rbp-1D0h] BYREF
  char v48; // [rsp+3ADh] [rbp-3Bh]
  char v49; // [rsp+3AFh] [rbp-39h]

  uu_sleep::uu_app(&v42);
  clap_lex::RawArgs::new(&v29, a1, a2);
  v34[0] = 0LL;
  if ( (v48 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(&v29, v34)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(src, v4), src[0]) )
  {
    if ( (v49 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(&v29, v34);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(src, v7);
    if ( src[0] || v47[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src[1];
    v9 = n[0];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, n[0], 0LL);
    v10 = src[1];
    if ( !src[0] )
    {
      v11 = n[0];
      memcpy((void *)n[0], v8, v9);
      v47[0] = v10;
      v47[1] = v11;
      v47[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(v35, &v42, &v29, v34[0]);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
      goto LABEL_13;
    }
LABEL_35:
    alloc::raw_vec::handle_error(v10, n[0]);
  }
  v26 = src[1];
  v27 = n[0];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, n[0], 0LL);
  v10 = src[1];
  if ( src[0] )
    goto LABEL_35;
  v28 = (void *)n[0];
  memcpy((void *)n[0], v26, v27);
  src[0] = v10;
  src[1] = v28;
  n[0] = v27;
  clap_lex::RawArgs::insert(&v29, v34, src);
  v47[33] = 1LL;
  v47[34] = 0LL;
  if ( v47[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v47);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v47);
  }
  v47[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(v35, &v42, &v29, v34[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v42);
  if ( *(_QWORD *)v35 != 0x8000000000000000LL )
  {
    v38 = *(_QWORD *)&v35[48];
    v37[2] = *(_OWORD *)&v35[32];
    v37[1] = *(_OWORD *)&v35[16];
    v37[0] = *(_OWORD *)v35;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, v37, aNumber, 6LL);
    clap_builder::parser::error::MatchesError::unwrap(v35, aNumber, 6LL, &v42);
    if ( *(_QWORD *)v35 )
    {
      v46 = v36;
      v45 = *(_OWORD *)&v35[40];
      v44 = *(_OWORD *)&v35[24];
      v42 = *(char ***)v35;
      v43 = *(_OWORD *)&v35[8];
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v29, &v42);
      v12 = uu_sleep::sleep(v30, v31);
      v14 = v21;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v29);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29);
    }
    else
    {
      v34[0] = uucore::execution_phrase();
      v34[1] = v22;
      v39[0] = v34;
      v39[1] = <&T as core::fmt::Display>::fmt;
      v42 = &off_DC5E8;
      *(_QWORD *)&v43 = 2LL;
      *((_QWORD *)&v43 + 1) = v39;
      v44 = 1uLL;
      alloc::fmt::format::format_inner(src, &v42);
      LODWORD(n[1]) = 1;
      v23 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v23 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v12 = (__int64)v23;
      v24 = *(_OWORD *)src;
      v23[1] = *(_OWORD *)n;
      *v23 = v24;
      v14 = &off_DC640;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
    if ( v12 )
      goto LABEL_15;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v35[8]);
  v14 = v13;
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_15:
  v29 = v12;
  v30 = v14;
  *(_QWORD *)v35 = &v29;
  *(_QWORD *)&v35[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v42 = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&v43 = 1LL;
  *((_QWORD *)&v43 + 1) = v35;
  v44 = 1uLL;
  alloc::fmt::format::format_inner(&v40, &v42);
  *(_OWORD *)v35 = v40;
  *(_QWORD *)&v35[16] = v41;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v40 + 1), v41, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    v37[0] = v15;
    src[0] = v37;
    src[1] = <&T as core::fmt::Display>::fmt;
    v42 = (char **)&unk_DC588;
    *(_QWORD *)&v43 = 2LL;
    *((_QWORD *)&v43 + 1) = src;
    v44 = 1uLL;
    std::io::stdio::_eprint(&v42);
    *(_QWORD *)&v37[0] = v35;
    *((_QWORD *)&v37[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v42 = (char **)&unk_DC5A8;
    *(_QWORD *)&v43 = 2LL;
    *((_QWORD *)&v43 + 1) = v37;
    v44 = 1uLL;
    std::io::stdio::_eprint(&v42);
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64))v30[13])(v29) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    v37[0] = v16;
    src[0] = v37;
    src[1] = <&T as core::fmt::Display>::fmt;
    v42 = &off_DC5C8;
    *(_QWORD *)&v43 = 2LL;
    *((_QWORD *)&v43 + 1) = src;
    v44 = 1uLL;
    std::io::stdio::_eprint(&v42);
  }
  v17 = ((__int64 (__fastcall *)(__int64))v30[12])(v29);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v35);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v35);
  v18 = v29;
  v19 = v30;
  if ( *v30 )
    ((void (__fastcall *)(__int64))*v30)(v29);
  v20 = v19[1];
  if ( v20 )
    _rust_dealloc(v18, v20, v19[2]);
  return v17;
}
