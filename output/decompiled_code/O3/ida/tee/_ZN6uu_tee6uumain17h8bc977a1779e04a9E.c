__int64 __fastcall uu_tee::uumain(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __int128 v5; // rax
  __int128 v6; // rax
  unsigned int v7; // ebx
  __int128 v8; // kr00_16
  __int64 v9; // rsi
  __int8 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r15
  __int128 v13; // rax
  __int128 v14; // kr10_16
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // r13
  __int128 v22; // rax
  __int128 v23; // kr20_16
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r15
  char v31; // al
  char v32; // al
  char v33; // al
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  __int8 flag; // [rsp+Fh] [rbp-3C9h]
  __int128 v38; // [rsp+10h] [rbp-3C8h] BYREF
  __int64 v39; // [rsp+20h] [rbp-3B8h]
  __int128 v40; // [rsp+30h] [rbp-3A8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-398h]
  __m256i v42; // [rsp+48h] [rbp-390h] BYREF
  __int128 v43; // [rsp+68h] [rbp-370h]
  __int64 v44; // [rsp+78h] [rbp-360h]
  __m256i v45; // [rsp+80h] [rbp-358h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-338h]
  __int128 v47; // [rsp+B0h] [rbp-328h]
  __int128 v48; // [rsp+C8h] [rbp-310h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-300h]
  __m256i v50; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 v51; // [rsp+100h] [rbp-2D8h]
  __int128 v52; // [rsp+110h] [rbp-2C8h]
  __int64 v53; // [rsp+120h] [rbp-2B8h]

  uu_tee::uu_app(&v50);
  clap_builder::builder::command::Command::try_get_matches_from(&v45, &v50, a1, a2);
  if ( v45.m256i_i64[0] != 0x8000000000000000LL )
  {
    v44 = v47;
    v43 = v46;
    v42 = v45;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, aAppend, 6LL);
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, aIgnoreInterrup, 17LL);
    v11 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v42, aFile, 4LL);
    v12 = v11;
    if ( v11 )
    {
      v2 = 0xD5B29837CF1E5FA5LL;
      *(_QWORD *)&v40 = 0x838CBAD8DA52F225LL;
      *((_QWORD *)&v40 + 1) = 0xD5B29837CF1E5FA5LL;
      *(_QWORD *)&v13 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(
                          v11,
                          0x838CBAD8DA52F225LL,
                          0xD5B29837CF1E5FA5LL);
      v14 = v13;
      *(_OWORD *)v50.m256i_i8 = v13;
      if ( (unsigned __int8)<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v40, &v50) )
      {
        v15 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v12);
        v16 = *(_QWORD *)(v12 + 56);
        v17 = v16 + 24LL * *(_QWORD *)(v12 + 64);
        v50.m256i_i64[1] = (__int64)clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}};
        v50.m256i_i64[2] = v16;
        v50.m256i_i64[3] = v17;
        *(_QWORD *)&v51 = 0LL;
        *(_QWORD *)&v52 = 0LL;
        v53 = v15;
        v50.m256i_i64[0] = 0LL;
      }
      else
      {
        *(_OWORD *)&v50.m256i_u64[2] = v14;
        *(_QWORD *)&v51 = 0x838CBAD8DA52F225LL;
        *((_QWORD *)&v51 + 1) = 0xD5B29837CF1E5FA5LL;
        *(_OWORD *)v50.m256i_i8 = 1uLL;
      }
    }
    else
    {
      *(_OWORD *)v50.m256i_i8 = 0LL;
    }
    clap_builder::parser::error::MatchesError::unwrap(&v45, aFile, 4LL, &v50);
    if ( v45.m256i_i64[0] )
    {
      v52 = v47;
      v51 = v46;
      v50 = v45;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v40, &v50);
      v38 = v40;
      v39 = v41;
    }
    else
    {
      *(_QWORD *)&v38 = 0LL;
      *((_QWORD *)&v38 + 1) = 8LL;
      v39 = 0LL;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v42, aIgnorePipeErro, 18LL) )
      goto LABEL_20;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v42, aOutputError, 12LL);
    LOBYTE(v18) = 4;
    if ( !v19 )
      goto LABEL_37;
    v20 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v42, aOutputError, 12LL);
    v21 = v20;
    if ( !v20 )
      goto LABEL_28;
    v2 = 0x838CBAD8DA52F225LL;
    v45.m256i_i64[0] = 0x838CBAD8DA52F225LL;
    v45.m256i_i64[1] = 0xD5B29837CF1E5FA5LL;
    *(_QWORD *)&v22 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(
                        v20,
                        0x838CBAD8DA52F225LL,
                        0xD5B29837CF1E5FA5LL);
    v23 = v22;
    *(_OWORD *)v50.m256i_i8 = v22;
    if ( !(unsigned __int8)<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v45, &v50) )
    {
      v50.m256i_i64[0] = 0LL;
      *(_OWORD *)&v50.m256i_u64[1] = v23;
      v50.m256i_i64[3] = 0x838CBAD8DA52F225LL;
      *(_QWORD *)&v51 = 0xD5B29837CF1E5FA5LL;
      goto LABEL_31;
    }
    v24 = (__int64 *)clap_builder::parser::matches::matched_arg::MatchedArg::first(v21);
    if ( v24 )
    {
      v25 = *v24;
      v26 = v24[1];
      v27 = v25 + ((*(_QWORD *)(v26 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      if ( (*(__int64 (__fastcall **)(unsigned __int64))(v26 + 24))(v27) != 0x838CBAD8DA52F225LL
        || v28 != 0xD5B29837CF1E5FA5LL )
      {
        core::option::expect_failed(aFatalInternalE, 99LL, &off_E5160);
      }
      v50.m256i_i64[1] = v27;
    }
    else
    {
LABEL_28:
      v50.m256i_i64[1] = 0LL;
    }
    v50.m256i_i64[0] = 2LL;
LABEL_31:
    v29 = clap_builder::parser::error::MatchesError::unwrap(aOutputError, 12LL, &v50);
    if ( !v29 )
    {
LABEL_20:
      LOBYTE(v18) = 1;
      goto LABEL_37;
    }
    v30 = *(_QWORD *)(v29 + 8);
    v2 = *(_QWORD *)(v29 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v2, aWarn, 4LL) )
    {
      LOBYTE(v18) = 0;
    }
    else
    {
      v31 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v2, aWarnNopipe, 11LL);
      LOBYTE(v18) = 1;
      if ( !v31 )
      {
        v32 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v2, aExit_0, 4LL);
        LOBYTE(v18) = 2;
        if ( !v32 )
        {
          v33 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v2, aExitNopipe, 11LL);
          LOBYTE(v18) = 3;
          if ( !v33 )
            core::panicking::panic(aInternalErrorE, 40LL, &off_E51F0, v18);
        }
      }
    }
LABEL_37:
    v50.m256i_i8[24] = flag;
    v50.m256i_i8[25] = v10;
    *(_OWORD *)v50.m256i_i8 = v38;
    v50.m256i_i64[2] = v39;
    v50.m256i_i8[26] = v18;
    v34 = uu_tee::tee(&v50);
    if ( v34 )
    {
      v3 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      v2 = v35;
    }
    else
    {
      v3 = 0LL;
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v50);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v42);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v34);
    if ( v3 )
      goto LABEL_3;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45.m256i_i64[1]);
  v2 = v4;
  if ( !v3 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  *(_QWORD *)&v38 = v3;
  *((_QWORD *)&v38 + 1) = v2;
  v45.m256i_i64[0] = (__int64)&v38;
  v45.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v50.m256i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v50.m256i_i64[1] = 1LL;
  *(_QWORD *)&v51 = 0LL;
  v50.m256i_i64[2] = (__int64)&v45;
  v50.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v48, &v50);
  *(_OWORD *)v45.m256i_i8 = v48;
  v45.m256i_i64[2] = v49;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v48 + 1), v49, 1LL, 0LL) )
  {
    *(_QWORD *)&v5 = uucore::util_name();
    *(_OWORD *)v42.m256i_i8 = v5;
    *(_QWORD *)&v40 = &v42;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
    v50.m256i_i64[0] = (__int64)&unk_E5190;
    v50.m256i_i64[1] = 2LL;
    *(_QWORD *)&v51 = 0LL;
    v50.m256i_i64[2] = (__int64)&v40;
    v50.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v50);
    v42.m256i_i64[0] = (__int64)&v45;
    v42.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    v50.m256i_i64[0] = (__int64)&unk_E51B0;
    v50.m256i_i64[1] = 2LL;
    *(_QWORD *)&v51 = 0LL;
    v50.m256i_i64[2] = (__int64)&v42;
    v50.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v50);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v38 + 1) + 104LL))(v38) )
  {
    *(_QWORD *)&v6 = uucore::execution_phrase();
    *(_OWORD *)v42.m256i_i8 = v6;
    *(_QWORD *)&v40 = &v42;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
    v50.m256i_i64[0] = (__int64)&off_E51D0;
    v50.m256i_i64[1] = 2LL;
    *(_QWORD *)&v51 = 0LL;
    v50.m256i_i64[2] = (__int64)&v40;
    v50.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v50);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v38 + 1) + 96LL))(v38);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v45);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45);
  v8 = v38;
  if ( **((_QWORD **)&v38 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v38 + 1))(v38);
  v9 = *(_QWORD *)(*((_QWORD *)&v8 + 1) + 8LL);
  if ( v9 )
    _rust_dealloc(v8, v9, *(_QWORD *)(*((_QWORD *)&v8 + 1) + 16LL));
  return v7;
}
