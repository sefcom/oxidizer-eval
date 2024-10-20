__int64 __fastcall uu_dir::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const void *v8; // r15
  void *v9; // r14
  void *v10; // rbx
  void *v11; // r12
  char v12; // bp
  char v13; // r12
  void *v14; // r13
  void *v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rax
  void *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int128 v22; // kr00_16
  __int64 v23; // rsi
  const void *v25; // r15
  void *v26; // r14
  void *v27; // r12
  __int128 v28; // [rsp+0h] [rbp-968h] BYREF
  void *v29; // [rsp+10h] [rbp-958h]
  __int64 v30; // [rsp+18h] [rbp-950h] BYREF
  _OWORD v31[3]; // [rsp+20h] [rbp-948h] BYREF
  __int64 v32; // [rsp+50h] [rbp-918h]
  __int128 v33; // [rsp+60h] [rbp-908h] BYREF
  void *v34; // [rsp+70h] [rbp-8F8h]
  __int128 v35; // [rsp+78h] [rbp-8F0h] BYREF
  __int128 v36; // [rsp+88h] [rbp-8E0h]
  __int128 v37; // [rsp+98h] [rbp-8D0h]
  __int128 v38; // [rsp+A8h] [rbp-8C0h]
  __int128 v39; // [rsp+B8h] [rbp-8B0h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-8A0h]
  void *src[90]; // [rsp+D0h] [rbp-898h] BYREF
  _OWORD dest[45]; // [rsp+3A0h] [rbp-5C8h] BYREF
  _QWORD v43[95]; // [rsp+670h] [rbp-2F8h] BYREF

  uu_dir::uu_app(v43);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28, a1, a2);
  v30 = 0LL;
  if ( (v43[87] & 0x80000000000LL) == 0
    || (v2 = clap_lex::RawArgs::next_os(&v28, &v30)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(src, v4), src[0]) )
  {
    if ( (v43[87] & 0x200000000000000LL) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(&v28, &v30);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(src, v7);
    if ( src[0] || v43[37] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src[1];
    v9 = src[2];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, src[2], 0LL);
    v10 = src[1];
    if ( !src[0] )
    {
      v11 = src[2];
      memcpy(src[2], v8, (size_t)v9);
      v43[37] = v10;
      v43[38] = v11;
      v43[39] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v35, v43, &v28, v30);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
      goto LABEL_13;
    }
LABEL_56:
    alloc::raw_vec::handle_error(v10, src[2]);
  }
  v25 = src[1];
  v26 = src[2];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, src[2], 0LL);
  v10 = src[1];
  if ( src[0] )
    goto LABEL_56;
  v27 = src[2];
  memcpy(src[2], v25, (size_t)v26);
  *(_QWORD *)&v33 = v10;
  *((_QWORD *)&v33 + 1) = v27;
  v34 = v26;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 1LL;
  *(_QWORD *)&v36 = &v33;
  alloc::vec::Vec<T,A>::drain(dest, &v28, v30);
  src[7] = (void *)v36;
  *(_OWORD *)&src[5] = v35;
  *(_OWORD *)src = dest[0];
  *(_OWORD *)&src[2] = dest[1];
  src[4] = *(void **)&dest[2];
  <alloc::vec::splice::Splice<I,A> as core::ops::drop::Drop>::drop(src);
  <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(src);
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&src[5]);
  v43[70] = 1LL;
  v43[71] = 0LL;
  if ( v43[37] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43[37]);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43[37]);
  }
  v43[37] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v35, v43, &v28, v30);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v33);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
LABEL_13:
  memcpy(dest, v43, 0x2C8uLL);
  if ( (_QWORD)v35 == 0x8000000000000000LL )
  {
    memcpy(src, v43, 0x2C8uLL);
    *(_QWORD *)&v33 = *((_QWORD *)&v35 + 1);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(src);
    clap_builder::error::Error<F>::exit(&v33);
  }
  v32 = v38;
  v31[2] = v37;
  v31[1] = v36;
  v31[0] = v35;
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v31,
                          &anon_e31c85536e11aee39654ff72a53ef708_21_llvm_4239552918814193354,
                          *(&uu_ls::options::QUOTING_STYLE + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_806b356b6f45880ddaa2d5affbddf45c_24_llvm_15944453427201852302,
                          *(&uu_ls::options::quoting::C + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_806b356b6f45880ddaa2d5affbddf45c_22_llvm_15944453427201852302,
                          *(&uu_ls::options::quoting::ESCAPE + 1)) )
  {
    v12 = 0;
  }
  else
  {
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v31,
            anon_806b356b6f45880ddaa2d5affbddf45c_23_llvm_15944453427201852302,
            *(&uu_ls::options::quoting::LITERAL + 1)) ^ 1;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          v31,
                          anon_e31c85536e11aee39654ff72a53ef708_27_llvm_4239552918814193354,
                          *(&uu_ls::options::FORMAT + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_13_llvm_15267917218625265870,
                          uu_ls::options::format::ACROSS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_12_llvm_15267917218625265870,
                          uu_ls::options::format::COLUMNS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_15_llvm_15267917218625265870,
                          uu_ls::options::format::COMMAS[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_11_llvm_15267917218625265870,
                          *(&uu_ls::options::format::LONG + 1))
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_17_llvm_15267917218625265870,
                          uu_ls::options::format::LONG_NO_GROUP[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_16_llvm_15267917218625265870,
                          uu_ls::options::format::LONG_NO_OWNER[1])
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v31,
                          anon_8ad7a2c4114f08ca7db24dfdc43d9a46_18_llvm_15267917218625265870,
                          *(&uu_ls::options::format::LONG_NUMERIC_UID_GID + 1)) )
  {
    v13 = 0;
  }
  else
  {
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v31,
            anon_8ad7a2c4114f08ca7db24dfdc43d9a46_10_llvm_15267917218625265870,
            uu_ls::options::format::ONE_LINE[1]) ^ 1;
  }
  uu_ls::Config::from(src, v31);
  v14 = src[1];
  v15 = src[2];
  if ( src[0] != (void *)0x8000000000000000LL )
  {
    memcpy((char *)&dest[1] + 8, &src[3], 0xE8uLL);
    dest[0] = *(_OWORD *)src;
    *(void **)&dest[1] = src[2];
    if ( v12 )
    {
      BYTE5(dest[15]) = 0;
      BYTE7(dest[15]) = 2;
    }
    if ( v13 )
      BYTE8(dest[15]) = 0;
    v16 = (__int64)*(&uu_ls::options::PATHS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      src,
      v31,
      anon_e31c85536e11aee39654ff72a53ef708_36_llvm_4239552918814193354,
      v16);
    clap_builder::parser::error::MatchesError::unwrap(
      &v35,
      anon_e31c85536e11aee39654ff72a53ef708_36_llvm_4239552918814193354,
      v16,
      src);
    if ( (_QWORD)v35 )
    {
      *(_OWORD *)&src[6] = v38;
      *(_OWORD *)&src[4] = v37;
      *(_OWORD *)&src[2] = v36;
      *(_OWORD *)src = v35;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v33, src);
      v28 = v33;
      v29 = v34;
    }
    else
    {
      v17 = (_QWORD *)_rust_alloc(16LL, 8LL);
      if ( !v17 )
        alloc::alloc::handle_alloc_error(8LL, 16LL);
      *v17 = asc_1CF17;
      v17[1] = 1LL;
      alloc::slice::hack::into_vec(&v28, v17, 1LL);
    }
    src[2] = v29;
    *(_OWORD *)src = v28;
    v14 = (void *)uu_ls::list(src, dest);
    v15 = v18;
    core::ptr::drop_in_place<uu_ls::Config>(dest);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v31);
  if ( v14 )
  {
    *(_QWORD *)&v31[0] = v14;
    *((_QWORD *)&v31[0] + 1) = v15;
    *(_QWORD *)&dest[0] = v31;
    *((_QWORD *)&dest[0] + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    src[0] = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
    src[1] = &dword_0 + 1;
    src[4] = 0LL;
    src[2] = dest;
    src[3] = &dword_0 + 1;
    alloc::fmt::format::format_inner(&v39, src);
    dest[0] = v39;
    *(_QWORD *)&dest[1] = v40;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v39 + 1), v40, 1LL, 0LL) )
    {
      v43[0] = uucore::util_name();
      v43[1] = v19;
      *(_QWORD *)&v35 = v43;
      *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
      src[0] = &unk_1A5C48;
      src[1] = &dword_0 + 2;
      src[4] = 0LL;
      src[2] = &v35;
      src[3] = &dword_0 + 1;
      std::io::stdio::_eprint(src);
      v43[0] = dest;
      v43[1] = <alloc::string::String as core::fmt::Display>::fmt;
      src[0] = &unk_1A5C68;
      src[1] = &dword_0 + 2;
      src[4] = 0LL;
      src[2] = v43;
      src[3] = &dword_0 + 1;
      std::io::stdio::_eprint(src);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v31[0] + 1) + 104LL))(*(_QWORD *)&v31[0]) )
    {
      v43[0] = uucore::execution_phrase();
      v43[1] = v20;
      *(_QWORD *)&v35 = v43;
      *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
      src[0] = &off_1A5C88;
      src[1] = &dword_0 + 2;
      src[4] = 0LL;
      src[2] = &v35;
      src[3] = &dword_0 + 1;
      std::io::stdio::_eprint(src);
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v31[0] + 1) + 96LL))(*(_QWORD *)&v31[0]);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
    v22 = v31[0];
    if ( **((_QWORD **)&v31[0] + 1) )
      (**((void (__fastcall ***)(_QWORD))&v31[0] + 1))(*(_QWORD *)&v31[0]);
    v23 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL);
    if ( v23 )
      _rust_dealloc(v22, v23, *(_QWORD *)(*((_QWORD *)&v22 + 1) + 16LL));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v21;
}
