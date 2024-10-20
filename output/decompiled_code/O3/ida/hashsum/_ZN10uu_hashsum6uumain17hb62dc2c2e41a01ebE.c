__int64 __fastcall uu_hashsum::uumain(__int128 a1)
{
  __int64 (__fastcall **v1)(); // r12
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // rsi
  char v6; // bl
  __int64 v7; // r15
  __int64 (__fastcall **v8)(); // rdx
  _QWORD *v9; // rax
  char v10; // bp
  char v11; // bl
  char v12; // bl
  __int64 v13; // rax
  unsigned __int8 v14; // bp
  __int64 (__fastcall **v15)(); // rbx
  __int64 (__fastcall **v16)(); // rdx
  __int64 v17; // rsi
  __int128 v18; // rax
  __int128 v19; // rax
  unsigned int v20; // ebx
  __int128 v21; // kr00_16
  __int64 v22; // rsi
  const char *v23; // rax
  const char *v24; // rcx
  char v25; // bl
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // r13
  char v30; // bp
  __int64 v31; // rax
  __int64 (__fastcall **v32)(); // rdx
  unsigned __int8 v34; // [rsp+3h] [rbp-725h]
  char v35; // [rsp+3h] [rbp-725h]
  char flag; // [rsp+4h] [rbp-724h]
  unsigned __int8 v37; // [rsp+5h] [rbp-723h]
  char v38; // [rsp+6h] [rbp-722h]
  unsigned __int8 v39; // [rsp+7h] [rbp-721h]
  __int128 v40; // [rsp+8h] [rbp-720h] BYREF
  __int64 v41; // [rsp+18h] [rbp-710h] BYREF
  __int128 v42; // [rsp+20h] [rbp-708h]
  _OWORD v43[3]; // [rsp+30h] [rbp-6F8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-6C8h]
  __int64 v45; // [rsp+68h] [rbp-6C0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-6B8h]
  __int64 v47; // [rsp+78h] [rbp-6B0h]
  __int128 v48; // [rsp+80h] [rbp-6A8h] BYREF
  __int64 v49; // [rsp+90h] [rbp-698h]
  __int64 v50; // [rsp+98h] [rbp-690h]
  __int128 v51; // [rsp+A0h] [rbp-688h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-678h]
  __int128 v53; // [rsp+C0h] [rbp-668h]
  __int128 v54; // [rsp+D0h] [rbp-658h]
  char v55[8]; // [rsp+E8h] [rbp-640h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-638h]
  __int64 v57; // [rsp+F8h] [rbp-630h]
  __int128 v58; // [rsp+100h] [rbp-628h] BYREF
  __int128 v59; // [rsp+110h] [rbp-618h]
  _OWORD v60[2]; // [rsp+120h] [rbp-608h]
  _BYTE src[712]; // [rsp+140h] [rbp-5E8h] BYREF
  char v62; // [rsp+408h] [rbp-320h]
  __int128 v63; // [rsp+418h] [rbp-310h] BYREF
  __int64 v64; // [rsp+428h] [rbp-300h]
  _OWORD dest[47]; // [rsp+430h] [rbp-2F8h] BYREF

  v58 = a1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(dest, &v58);
  if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(src, aHashsum, 7LL);
    v49 = *(_QWORD *)&src[16];
    v2 = *(_OWORD *)src;
  }
  else
  {
    v49 = *(_QWORD *)&dest[1];
    v2 = dest[0];
  }
  v48 = v2;
  v3 = std::path::Path::file_stem(*((_QWORD *)&v2 + 1), v49);
  if ( !v3 )
    v4 = 7LL;
  v5 = aHashsum;
  if ( v3 )
    v5 = (const char *)v3;
  std::sys::os_str::bytes::Slice::to_string_lossy(&v45, v5, v4);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, &v48);
  *(_QWORD *)&v60[0] = *(_QWORD *)&src[16];
  v59 = *(_OWORD *)src;
  *(_OWORD *)((char *)v60 + 8) = v58;
  uu_hashsum::uu_app(src, v46, v47);
  memcpy(dest, src, 0x2C8uLL);
  v6 = v62;
  *(_QWORD *)&v53 = *(_QWORD *)&v60[1];
  v52 = v60[0];
  v51 = v59;
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, &v51);
  if ( *(_QWORD *)src == 0x8000000000000000LL )
  {
    v7 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&src[8]);
    v1 = v8;
    goto LABEL_44;
  }
  v44 = *(_QWORD *)&src[48];
  v43[2] = *(_OWORD *)&src[32];
  v43[1] = *(_OWORD *)&src[16];
  v43[0] = *(_OWORD *)src;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v46, v47, aB2sum, 5LL)
    && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v43, aLength, 6LL),
        (v9 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aLength, 6LL, src)) != 0LL) )
  {
    uucore::features::checksum::calculate_blake2b_length(src, *v9);
    v7 = *(_QWORD *)&src[8];
    v1 = *(__int64 (__fastcall ***)())&src[16];
    if ( *(_QWORD *)src )
      goto LABEL_43;
    if ( v6 )
      goto LABEL_14;
  }
  else
  {
    v7 = 0LL;
    if ( v6 )
    {
LABEL_14:
      uu_hashsum::create_algorithm_from_flags(src, v43);
      goto LABEL_17;
    }
  }
  uucore::features::checksum::detect_algo(src, v46, v47, v7, v1);
LABEL_17:
  v7 = *(_QWORD *)&src[8];
  v1 = *(__int64 (__fastcall ***)())&src[16];
  if ( *(_QWORD *)src )
  {
    v42 = *(_OWORD *)&src[24];
    v50 = *(_QWORD *)src;
    v40 = *(_OWORD *)src;
    v41 = *(_QWORD *)&src[16];
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aBinary, 6LL);
    if ( !flag )
      clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aText, 4LL);
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v43,
            "checkstatusquietstrictignore-missing",
            5LL);
    v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, "statusquietstrictignore-missing", 6LL);
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, "quietstrictignore-missing", 5LL);
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, "strictignore-missing", 6LL);
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aWarn, 4LL);
    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, "ignore-missing", 14LL);
    v12 = v34 | v11;
    if ( v38 )
    {
      if ( !v10 )
      {
        *(_QWORD *)src = 0x8000000000000001LL;
        v13 = _rust_alloc(24LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        goto LABEL_35;
      }
    }
    else if ( !v10 )
    {
      if ( v12 )
      {
        *(_QWORD *)src = 0x8000000000000003LL;
        v13 = _rust_alloc(24LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
      }
      else
      {
        if ( !v37 )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v43, aNoNames, 8LL);
          if ( *(_DWORD *)src == 2 )
            v23 = *(const char **)&src[8];
          else
            v23 = 0LL;
          v24 = "";
          if ( v23 )
            v24 = v23;
          v35 = *v24;
          v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aZero, 4LL);
          v26 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v41);
          v28 = v27;
          v29 = *((_QWORD *)&v42 + 1);
          v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aTag, 3LL);
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v43, "filemode{", 4LL);
          clap_builder::parser::error::MatchesError::unwrap(&v51, "filemode{", 4LL, src);
          *(_QWORD *)src = v50;
          *(_QWORD *)&src[8] = v7;
          *(_QWORD *)&src[16] = v26;
          *(_QWORD *)&src[24] = v28;
          *(_QWORD *)&src[32] = v29;
          src[40] = flag;
          src[41] = v30;
          src[42] = v35;
          src[43] = v25;
          if ( (_QWORD)v51 )
            v31 = uu_hashsum::hashsum(src, &v51);
          else
            v31 = uu_hashsum::hashsum(src);
          v7 = v31;
          v1 = v32;
          core::ptr::drop_in_place<uu_hashsum::Options>(v41, v42);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v43);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v45);
          core::ptr::drop_in_place<alloc::string::String>(&v48);
          if ( v7 )
            goto LABEL_47;
          return (unsigned int)uucore::mods::error::get_exit_code();
        }
        *(_QWORD *)src = 0x8000000000000002LL;
        v13 = alloc::alloc::exchange_malloc(24LL, 8LL);
      }
      goto LABEL_35;
    }
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aText, 4LL);
    if ( ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v43, aBinary, 6LL) | v14) != 1 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v43, "filemode{", 4LL);
      clap_builder::parser::error::MatchesError::unwrap(&v51, "filemode{", 4LL, src);
      if ( (_QWORD)v51 )
      {
        *(_OWORD *)&src[48] = v54;
        *(_OWORD *)&src[32] = v53;
        *(_OWORD *)&src[16] = v52;
        *(_OWORD *)src = v51;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v55, src);
      }
      else
      {
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v55, asc_6127C, 1LL);
      }
      v7 = uucore::features::checksum::perform_checksum_validation(
             v56,
             (int)v56 + 16 * (int)v57,
             v37,
             v34,
             (v34 ^ 1u) & v39,
             0,
             v38,
             v12,
             v50,
             v7,
             1LL,
             *((__int64 *)&v42 + 1));
      v15 = v16;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v55);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v55);
      goto LABEL_38;
    }
    *(_QWORD *)src = 0x800000000000000BLL;
    v13 = _rust_alloc(24LL, 8LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
LABEL_35:
    v7 = v13;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)&src[16];
    *(_OWORD *)v13 = *(_OWORD *)src;
    v15 = &off_2BEB40;
LABEL_38:
    if ( *(_QWORD *)v42 )
      (*(void (__fastcall **)(__int64 (__fastcall **)()))v42)(v1);
    v17 = *(_QWORD *)(v42 + 8);
    if ( v17 )
      _rust_dealloc(v1, v17, *(_QWORD *)(v42 + 16));
    v1 = v15;
  }
LABEL_43:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v43);
LABEL_44:
  if ( v45 != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v45);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45);
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
  if ( !v7 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_47:
  *(_QWORD *)&v40 = v7;
  *((_QWORD *)&v40 + 1) = v1;
  *(_QWORD *)&dest[0] = &v40;
  *((_QWORD *)&dest[0] + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)src = &anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[32] = 0LL;
  *(_QWORD *)&src[16] = dest;
  *(_QWORD *)&src[24] = 1LL;
  alloc::fmt::format::format_inner(&v63, src);
  dest[0] = v63;
  *(_QWORD *)&dest[1] = v64;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v63 + 1), v64, 1LL, 0LL) )
  {
    *(_QWORD *)&v18 = uucore::util_name();
    v51 = v18;
    *(_QWORD *)&v43[0] = &v51;
    *((_QWORD *)&v43[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)src = &unk_2BEAA8;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = v43;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&v51 = dest;
    *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)src = &unk_2BEAC8;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v51;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_eprint(src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v40 + 1) + 104LL))(v40) )
  {
    *(_QWORD *)&v19 = uucore::execution_phrase();
    v51 = v19;
    *(_QWORD *)&v43[0] = &v51;
    *((_QWORD *)&v43[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)src = &off_2BEAE8;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = v43;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_eprint(src);
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v40 + 1) + 96LL))(v40);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
  v21 = v40;
  if ( **((_QWORD **)&v40 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v40 + 1))(v40);
  v22 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL);
  if ( v22 )
    _rust_dealloc(v21, v22, *(_QWORD *)(*((_QWORD *)&v21 + 1) + 16LL));
  return v20;
}
