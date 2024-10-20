__int64 __fastcall uu_unlink::uumain(__int64 a1, __int64 a2)
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
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  void *v28; // r12
  size_t v29; // r15
  void *v30; // r13
  _OWORD *v31; // [rsp+8h] [rbp-3C0h] BYREF
  void *src; // [rsp+10h] [rbp-3B8h]
  size_t n; // [rsp+18h] [rbp-3B0h]
  __int64 v34; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-3A0h]
  __int64 v36; // [rsp+38h] [rbp-390h] BYREF
  __int128 v37; // [rsp+40h] [rbp-388h] BYREF
  __int128 v38; // [rsp+50h] [rbp-378h]
  __int128 v39; // [rsp+60h] [rbp-368h]
  __int64 v40; // [rsp+70h] [rbp-358h]
  _OWORD v41[3]; // [rsp+80h] [rbp-348h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-318h]
  __int128 v43; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-300h]
  char **dest; // [rsp+D0h] [rbp-2F8h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-2F0h]
  __int128 *v47; // [rsp+E0h] [rbp-2E8h]
  __int64 v48; // [rsp+E8h] [rbp-2E0h]
  __int64 v49; // [rsp+F0h] [rbp-2D8h]
  _QWORD v50[50]; // [rsp+1F8h] [rbp-1D0h] BYREF
  char v51; // [rsp+38Dh] [rbp-3Bh]
  char v52; // [rsp+38Fh] [rbp-39h]

  uu_unlink::uu_app(&dest);
  clap_lex::RawArgs::new(&v34, a1, a2);
  v36 = 0LL;
  if ( (v51 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(&v34, &v36)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(&v31, v4), v31) )
  {
    if ( (v52 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(&v34, &v36);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(&v31, v7);
    if ( v31 || v50[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src;
    v9 = n;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v31, n, 0LL);
    v10 = src;
    if ( !v31 )
    {
      v11 = n;
      memcpy((void *)n, v8, v9);
      v50[0] = v10;
      v50[1] = v11;
      v50[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v37, &dest, &v34, v36);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
      goto LABEL_13;
    }
LABEL_32:
    alloc::raw_vec::handle_error(v10, n);
  }
  v28 = src;
  v29 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v31, n, 0LL);
  v10 = src;
  if ( v31 )
    goto LABEL_32;
  v30 = (void *)n;
  memcpy((void *)n, v28, v29);
  v31 = v10;
  src = v30;
  n = v29;
  clap_lex::RawArgs::insert(&v34, &v36, &v31);
  v50[33] = 1LL;
  v50[34] = 0LL;
  if ( v50[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v50);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v50);
  }
  v50[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v37, &dest, &v34, v36);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v31);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&dest);
  if ( (_QWORD)v37 != 0x8000000000000000LL )
  {
    v42 = v40;
    v41[2] = v39;
    v41[1] = v38;
    v41[0] = v37;
    v21 = (__int64)*(&uu_unlink::OPT_PATH + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v41, aFile, v21);
    v22 = clap_builder::parser::error::MatchesError::unwrap(aFile, v21, &dest);
    if ( !v22 )
      core::option::unwrap_failed(&off_D6C78);
    v23 = *(_QWORD *)(v22 + 8);
    v24 = *(_QWORD *)(v22 + 16);
    v25 = std::fs::remove_file(v23, v24);
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v25,
            v23,
            v24);
    v14 = v26;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v41);
    if ( v12 )
      goto LABEL_15;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v37 + 1));
  v14 = v13;
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_15:
  v34 = v12;
  v35 = v14;
  *(_QWORD *)&v37 = &v34;
  *((_QWORD *)&v37 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  dest = (char **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v46 = 1LL;
  v49 = 0LL;
  v47 = &v37;
  v48 = 1LL;
  alloc::fmt::format::format_inner(&v43, &dest);
  v37 = v43;
  *(_QWORD *)&v38 = v44;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v43 + 1), v44, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    v41[0] = v15;
    v31 = v41;
    src = <&T as core::fmt::Display>::fmt;
    dest = (char **)&unk_D6C18;
    v46 = 2LL;
    v49 = 0LL;
    v47 = (__int128 *)&v31;
    v48 = 1LL;
    std::io::stdio::_eprint(&dest);
    *(_QWORD *)&v41[0] = &v37;
    *((_QWORD *)&v41[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    dest = (char **)&unk_D6C38;
    v46 = 2LL;
    v49 = 0LL;
    v47 = v41;
    v48 = 1LL;
    std::io::stdio::_eprint(&dest);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v35 + 104))(v34) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    v41[0] = v16;
    v31 = v41;
    src = <&T as core::fmt::Display>::fmt;
    dest = &off_D6C58;
    v46 = 2LL;
    v49 = 0LL;
    v47 = (__int128 *)&v31;
    v48 = 1LL;
    std::io::stdio::_eprint(&dest);
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(v35 + 96))(v34);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
  v18 = v34;
  v19 = v35;
  if ( *(_QWORD *)v35 )
    (*(void (__fastcall **)(__int64))v35)(v34);
  v20 = *(_QWORD *)(v19 + 8);
  if ( v20 )
    _rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
  return v17;
}
