__int64 __fastcall uu_comm::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  unsigned __int8 v5; // bp
  __int64 v6; // r14
  __int64 v7; // r15
  __int128 v8; // kr00_16
  __int128 v9; // rax
  __int128 v10; // rax
  unsigned int v11; // ebx
  __int128 v12; // kr20_16
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  __int128 v16; // rax
  __int128 v17; // kr30_16
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // r15
  bool v24; // al
  char *v25; // rbx
  __int64 v26; // r14
  __int64 v28; // rdi
  void *v29; // rax
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  char **v32; // rdi
  __int128 v33; // [rsp+0h] [rbp-478h] BYREF
  __int128 v34; // [rsp+10h] [rbp-468h]
  __int128 v35; // [rsp+20h] [rbp-458h]
  __int128 v36; // [rsp+30h] [rbp-448h]
  _BYTE v37[8]; // [rsp+48h] [rbp-430h] BYREF
  __int64 v38; // [rsp+50h] [rbp-428h]
  __int64 v39; // [rsp+58h] [rbp-420h]
  _OWORD v40[2]; // [rsp+60h] [rbp-418h] BYREF
  int fd[4]; // [rsp+80h] [rbp-3F8h]
  char v42; // [rsp+90h] [rbp-3E8h]
  _BYTE v43[7]; // [rsp+91h] [rbp-3E7h]
  char **v44; // [rsp+98h] [rbp-3E0h]
  _OWORD v45[2]; // [rsp+A0h] [rbp-3D8h] BYREF
  int v46[4]; // [rsp+C0h] [rbp-3B8h]
  char v47; // [rsp+D0h] [rbp-3A8h]
  _BYTE v48[7]; // [rsp+D1h] [rbp-3A7h]
  __int64 v49; // [rsp+D8h] [rbp-3A0h]
  __int64 v50; // [rsp+E0h] [rbp-398h]
  _OWORD v51[3]; // [rsp+E8h] [rbp-390h] BYREF
  __int64 v52; // [rsp+118h] [rbp-360h]
  _OWORD v53[4]; // [rsp+120h] [rbp-358h] BYREF
  __int128 v54; // [rsp+168h] [rbp-310h] BYREF
  __int64 v55; // [rsp+178h] [rbp-300h]
  __int128 v56; // [rsp+180h] [rbp-2F8h] BYREF
  __int128 v57; // [rsp+190h] [rbp-2E8h]
  unsigned __int64 v58; // [rsp+1A0h] [rbp-2D8h]
  unsigned __int64 v59; // [rsp+1A8h] [rbp-2D0h]
  __int64 v60; // [rsp+1B0h] [rbp-2C8h]
  __int64 v61; // [rsp+1C0h] [rbp-2B8h]

  uu_comm::uu_app(&v56);
  clap_builder::builder::command::Command::try_get_matches_from(&v33, &v56, a1, a2);
  if ( (_QWORD)v33 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v33 + 1));
    v4 = v3;
    if ( !v2 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    goto LABEL_16;
  }
  v52 = v36;
  v51[2] = v35;
  v51[1] = v34;
  v51[0] = v33;
  v5 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aZeroTerminated, 15LL) )
    v5 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v56, v51, aFile1);
  v6 = clap_builder::parser::error::MatchesError::unwrap(aFile1, 5LL, &v56);
  if ( !v6 )
  {
    v32 = &off_DAA28;
    goto LABEL_59;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v56, v51, aFile2);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aFile2, 5LL, &v56);
  if ( !v7 )
  {
    v32 = &off_DAA40;
LABEL_59:
    core::option::unwrap_failed(v32);
  }
  uu_comm::open_file(&v56, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16), v5);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v33,
    &v56,
    v6);
  v8 = v33;
  if ( (_BYTE)v36 == 11 )
  {
    v4 = (__int64 (__fastcall **)())*((_QWORD *)&v33 + 1);
    v2 = v33;
  }
  else
  {
    *(_OWORD *)fd = v35;
    v40[1] = v34;
    *(_DWORD *)v43 = *(_DWORD *)((char *)&v36 + 1);
    *(_DWORD *)&v43[3] = DWORD1(v36);
    v40[0] = v33;
    v42 = v36;
    uu_comm::open_file(&v56, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16), v5);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v33,
      &v56,
      v7);
    v4 = (__int64 (__fastcall **)())*((_QWORD *)&v33 + 1);
    v2 = v33;
    if ( (_BYTE)v36 != 11 )
    {
      *(_OWORD *)v46 = v35;
      v45[1] = v34;
      *(_DWORD *)v48 = *(_DWORD *)((char *)&v36 + 1);
      *(_DWORD *)&v48[3] = DWORD1(v36);
      v50 = v33;
      v45[0] = v33;
      v49 = *((_QWORD *)&v33 + 1);
      v47 = v36;
      v14 = clap_builder::util::flat_map::FlatMap<K,V>::get(v51, aOutputDelimite, 16LL);
      v15 = v14;
      if ( v14 )
      {
        *(_QWORD *)&v33 = 0x838CBAD8DA52F225LL;
        *((_QWORD *)&v33 + 1) = 0xD5B29837CF1E5FA5LL;
        *(_QWORD *)&v16 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v14);
        v17 = v16;
        v56 = v16;
        if ( (unsigned __int8)<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v33, &v56) )
        {
          v18 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v15);
          v19 = *(_QWORD *)(v15 + 56);
          v20 = v19 + 24LL * *(_QWORD *)(v15 + 64);
          *((_QWORD *)&v56 + 1) = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}};
          *(_QWORD *)&v57 = v19;
          *((_QWORD *)&v57 + 1) = v20;
          v58 = 0LL;
          v60 = 0LL;
          v61 = v18;
          *(_QWORD *)&v56 = 0LL;
        }
        else
        {
          v57 = v17;
          v58 = 0x838CBAD8DA52F225LL;
          v59 = 0xD5B29837CF1E5FA5LL;
          v56 = 1uLL;
        }
      }
      else
      {
        v56 = 0LL;
      }
      clap_builder::parser::error::MatchesError::unwrap(&v33, aOutputDelimite, 16LL, &v56);
      if ( !(_QWORD)v33 )
        core::option::unwrap_failed(&off_DAA58);
      v53[3] = v36;
      v53[2] = v35;
      v53[1] = v34;
      v53[0] = v33;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v37, v53);
      if ( !v39 )
        core::slice::index::slice_start_index_len_fail(1LL, 0LL, &off_DAB48);
      v21 = v38;
      if ( v39 != 1 )
      {
        v22 = 24 * v39 - 24;
        v23 = 0LL;
        v44 = &off_DAA88;
        v24 = 0;
        do
        {
          if ( v24 )
            goto LABEL_65;
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   *(_QWORD *)(v21 + v23 + 32),
                                   *(_QWORD *)(v21 + v23 + 40),
                                   *(_QWORD *)(v38 + 8),
                                   *(_QWORD *)(v38 + 16)) )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v56, 48LL, 0LL);
            v28 = *((_QWORD *)&v56 + 1);
            if ( (_QWORD)v56 )
              alloc::raw_vec::handle_error(*((_QWORD *)&v56 + 1), v57);
            v29 = (void *)v57;
            *(_OWORD *)(v57 + 32) = xmmword_103C8;
            qmemcpy(v29, "multiple conflicting output deli", 32);
            DWORD2(v57) = 1;
            *(_QWORD *)&v56 = v28;
            *((_QWORD *)&v56 + 1) = v29;
            *(_QWORD *)&v57 = 48LL;
            v30 = (_OWORD *)_rust_alloc(32LL, 8LL);
            if ( !v30 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            v2 = (__int64)v30;
            v31 = v56;
            v30[1] = v57;
            *v30 = v31;
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v37);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v37);
            v4 = &off_DAAD8;
            if ( v50 )
            {
              if ( v49 )
                _rust_dealloc(v50, v49, 1LL);
              close(v46[2]);
            }
            goto LABEL_11;
          }
          v24 = v39 == 0;
          v23 += 24LL;
        }
        while ( v22 != v23 );
        if ( !v39 )
        {
          v44 = &off_DAA70;
LABEL_65:
          core::panicking::panic_bounds_check(0LL, 0LL, v44);
        }
        v21 = v38;
      }
      v25 = *(char **)(v21 + 8);
      v26 = *(_QWORD *)(v21 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, v26, 1LL, 0LL) )
      {
        v25 = &byte_103A7;
        v26 = 1LL;
      }
      uu_comm::comm(v40, v45, v25, v26, v51);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v37);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v37);
      if ( *(_QWORD *)&v45[0] )
      {
        if ( *((_QWORD *)&v45[0] + 1) )
          _rust_dealloc(*(_QWORD *)&v45[0], *((_QWORD *)&v45[0] + 1), 1LL);
        close(v46[2]);
      }
      if ( *(_QWORD *)&v40[0] )
      {
        if ( *((_QWORD *)&v40[0] + 1) )
          _rust_dealloc(*(_QWORD *)&v40[0], *((_QWORD *)&v40[0] + 1), 1LL);
        close(fd[2]);
      }
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v51);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
LABEL_11:
    if ( (_QWORD)v8 )
    {
      if ( *((_QWORD *)&v8 + 1) )
        _rust_dealloc(v8, *((_QWORD *)&v8 + 1), 1LL);
      close(fd[2]);
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v51);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_16:
  *(_QWORD *)&v40[0] = v2;
  *((_QWORD *)&v40[0] + 1) = v4;
  *(_QWORD *)&v33 = v40;
  *((_QWORD *)&v33 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v56 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v56 + 1) = 1LL;
  v58 = 0LL;
  *(_QWORD *)&v57 = &v33;
  *((_QWORD *)&v57 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v54, &v56);
  v33 = v54;
  *(_QWORD *)&v34 = v55;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v54 + 1), v55, 1LL, 0LL) )
  {
    *(_QWORD *)&v9 = uucore::util_name();
    v53[0] = v9;
    *(_QWORD *)&v45[0] = v53;
    *((_QWORD *)&v45[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v56 = &unk_DA9C8;
    *((_QWORD *)&v56 + 1) = 2LL;
    v58 = 0LL;
    *(_QWORD *)&v57 = v45;
    *((_QWORD *)&v57 + 1) = 1LL;
    std::io::stdio::_eprint(&v56);
    *(_QWORD *)&v53[0] = &v33;
    *((_QWORD *)&v53[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v56 = &unk_DA9E8;
    *((_QWORD *)&v56 + 1) = 2LL;
    v58 = 0LL;
    *(_QWORD *)&v57 = v53;
    *((_QWORD *)&v57 + 1) = 1LL;
    std::io::stdio::_eprint(&v56);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v40[0] + 1) + 104LL))(*(_QWORD *)&v40[0]) )
  {
    *(_QWORD *)&v10 = uucore::execution_phrase();
    v53[0] = v10;
    *(_QWORD *)&v45[0] = v53;
    *((_QWORD *)&v45[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v56 = &off_DAA08;
    *((_QWORD *)&v56 + 1) = 2LL;
    v58 = 0LL;
    *(_QWORD *)&v57 = v45;
    *((_QWORD *)&v57 + 1) = 1LL;
    std::io::stdio::_eprint(&v56);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v40[0] + 1) + 96LL))(*(_QWORD *)&v40[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v33);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33);
  v12 = v40[0];
  if ( **((_QWORD **)&v40[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v40[0] + 1))(*(_QWORD *)&v40[0]);
  v13 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL);
  if ( v13 )
    _rust_dealloc(v12, v13, *(_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL));
  return v11;
}
