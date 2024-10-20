__int64 __fastcall uu_touch::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rdx
  _OWORD *v4; // r14
  __int64 (__fastcall **v5)(); // r15
  __int64 v6; // r15
  char flag; // bp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int128 v14; // rax
  _OWORD *v15; // rax
  __int128 v16; // xmm0
  char v17; // r14
  char v18; // al
  unsigned int v19; // ebx
  _OWORD *v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int128 v25; // kr00_16
  __int64 v26; // rsi
  __int128 v28; // [rsp+0h] [rbp-448h] BYREF
  __int128 v29; // [rsp+10h] [rbp-438h]
  __int128 v30; // [rsp+20h] [rbp-428h]
  _BYTE v31[56]; // [rsp+30h] [rbp-418h] BYREF
  __int64 v32; // [rsp+68h] [rbp-3E0h]
  __int128 v33; // [rsp+70h] [rbp-3D8h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+80h] [rbp-3C8h]
  _BYTE v35[8]; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v36; // [rsp+90h] [rbp-3B8h]
  __int64 v37; // [rsp+98h] [rbp-3B0h]
  __int128 v38; // [rsp+A0h] [rbp-3A8h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+B0h] [rbp-398h]
  _OWORD v40[3]; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-358h]
  _BYTE *v42; // [rsp+F8h] [rbp-350h] BYREF
  __int128 v43; // [rsp+100h] [rbp-348h]
  __int128 v44; // [rsp+110h] [rbp-338h]
  __int128 v45; // [rsp+120h] [rbp-328h]
  __int64 v46; // [rsp+130h] [rbp-318h]
  __int128 v47; // [rsp+138h] [rbp-310h] BYREF
  __int64 v48; // [rsp+148h] [rbp-300h]
  __int128 v49; // [rsp+150h] [rbp-2F8h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+160h] [rbp-2E8h]
  __int128 v51; // [rsp+168h] [rbp-2E0h]
  __int64 v52; // [rsp+178h] [rbp-2D0h]
  char v53; // [rsp+180h] [rbp-2C8h]
  char v54; // [rsp+181h] [rbp-2C7h]
  char v55; // [rsp+182h] [rbp-2C6h]
  char v56; // [rsp+183h] [rbp-2C5h]

  uu_touch::uu_app(&v49);
  clap_builder::builder::command::Command::try_get_matches_from(v31, &v49, a1, a2);
  if ( *(_QWORD *)v31 != 0x8000000000000000LL )
  {
    v41 = *(_QWORD *)&v31[48];
    v40[2] = *(_OWORD *)&v31[32];
    v40[1] = *(_OWORD *)&v31[16];
    v40[0] = *(_OWORD *)v31;
    v6 = (__int64)*(&uu_touch::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v49, v40, aFiles, v6);
    clap_builder::parser::error::MatchesError::unwrap(v31, aFiles, v6, &v49);
    if ( !*(_QWORD *)v31 )
    {
      *(_QWORD *)&v14 = uucore::execution_phrase();
      v38 = v14;
      *(_QWORD *)&v33 = &v38;
      *((_QWORD *)&v33 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v49 = &off_28EFF0;
      *((_QWORD *)&v49 + 1) = 2LL;
      v50 = (__int64 (__fastcall **)())&v33;
      v51 = 1uLL;
      alloc::fmt::format::format_inner(&v28, &v49);
      DWORD2(v29) = 1;
      v15 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v4 = v15;
      v16 = v28;
      v15[1] = v29;
      *v15 = v16;
      v5 = &off_28F048;
      goto LABEL_21;
    }
    v46 = v32;
    v45 = *(_OWORD *)&v31[40];
    v44 = *(_OWORD *)&v31[24];
    v42 = *(_BYTE **)v31;
    v43 = *(_OWORD *)&v31[8];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v35, &v42);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v40,
             anon_a8009f0f96d850c1c46a2cf3287456a4_23_llvm_17503802422331354604,
             *(&uu_touch::options::NO_DEREF + 1));
    v8 = (__int64)*(&uu_touch::options::sources::REFERENCE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v49,
      v40,
      anon_a8009f0f96d850c1c46a2cf3287456a4_17_llvm_17503802422331354604,
      v8);
    v9 = clap_builder::parser::error::MatchesError::unwrap(
           anon_a8009f0f96d850c1c46a2cf3287456a4_17_llvm_17503802422331354604,
           v8,
           &v49);
    v10 = (__int64)*(&uu_touch::options::sources::TIMESTAMP + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v49,
      v40,
      anon_a8009f0f96d850c1c46a2cf3287456a4_18_llvm_17503802422331354604,
      v10);
    v11 = clap_builder::parser::error::MatchesError::unwrap(
            anon_a8009f0f96d850c1c46a2cf3287456a4_18_llvm_17503802422331354604,
            v10,
            &v49);
    if ( v9 )
    {
      std::sys::os_str::bytes::Slice::to_owned(&v49, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16));
      v34 = v50;
      v33 = v49;
    }
    else if ( v11 )
    {
      uu_touch::parse_timestamp(&v49, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      if ( (_QWORD)v49 )
      {
        v4 = (_OWORD *)*((_QWORD *)&v49 + 1);
        v5 = v50;
LABEL_20:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v35);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v35);
LABEL_21:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
        goto LABEL_22;
      }
      *((_QWORD *)&v33 + 1) = *((_QWORD *)&v49 + 1);
      LODWORD(v34) = (_DWORD)v50;
      *(_QWORD *)&v33 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)&v33 = 0x8000000000000001LL;
    }
    v12 = (__int64)*(&uu_touch::options::sources::DATE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v49, v40, "datethur]", v12);
    v13 = clap_builder::parser::error::MatchesError::unwrap("datethur]", v12, &v49);
    if ( v13 )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v49, v13);
      v39 = v50;
      v38 = v49;
    }
    else
    {
      *(_QWORD *)&v38 = 0x8000000000000000LL;
    }
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v40,
            anon_a8009f0f96d850c1c46a2cf3287456a4_22_llvm_17503802422331354604,
            *(&uu_touch::options::NO_CREATE + 1));
    *(_QWORD *)&v29 = v34;
    v28 = v33;
    *(_QWORD *)&v31[16] = v39;
    *(_OWORD *)v31 = v38;
    v18 = uu_touch::determine_atime_mtime_change(v40);
    v53 = v17;
    v54 = flag;
    v51 = v28;
    v52 = v29;
    v49 = *(_OWORD *)v31;
    v50 = *(__int64 (__fastcall ***)())&v31[16];
    v56 = v18;
    v55 = 0;
    uu_touch::touch(&v28, v36, v37, &v49);
    if ( (_QWORD)v28 == 0x8000000000000004LL )
    {
      core::ptr::drop_in_place<uu_touch::Options>(&v49);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v35);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v35);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    *(_OWORD *)&v31[32] = v30;
    *(_OWORD *)&v31[16] = v29;
    *(_OWORD *)v31 = v28;
    v20 = (_OWORD *)_rust_alloc(48LL, 8LL);
    if ( !v20 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v4 = v20;
    v21 = *(_OWORD *)v31;
    v22 = *(_OWORD *)&v31[16];
    v20[2] = *(_OWORD *)&v31[32];
    v20[1] = v22;
    *v20 = v21;
    core::ptr::drop_in_place<uu_touch::Options>(&v49);
    v5 = &off_28EF80;
    goto LABEL_20;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v31[8]);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  v4 = (_OWORD *)v2;
  v5 = v3;
LABEL_22:
  *(_QWORD *)&v28 = v4;
  *((_QWORD *)&v28 + 1) = v5;
  *(_QWORD *)v31 = &v28;
  *(_QWORD *)&v31[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v49 = &anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  *((_QWORD *)&v49 + 1) = 1LL;
  v50 = (__int64 (__fastcall **)())v31;
  v51 = 1uLL;
  alloc::fmt::format::format_inner(&v47, &v49);
  *(_OWORD *)v31 = v47;
  *(_QWORD *)&v31[16] = v48;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v47 + 1), v48, 1LL, 0LL) )
  {
    v42 = (_BYTE *)uucore::util_name();
    *(_QWORD *)&v43 = v23;
    *(_QWORD *)&v40[0] = &v42;
    *((_QWORD *)&v40[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v49 = &unk_28EEE8;
    *((_QWORD *)&v49 + 1) = 2LL;
    v50 = (__int64 (__fastcall **)())v40;
    v51 = 1uLL;
    std::io::stdio::_eprint(&v49);
    v42 = v31;
    *(_QWORD *)&v43 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v49 = &unk_28EF08;
    *((_QWORD *)&v49 + 1) = 2LL;
    v50 = (__int64 (__fastcall **)())&v42;
    v51 = 1uLL;
    std::io::stdio::_eprint(&v49);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v28 + 1) + 104LL))(v28) )
  {
    v42 = (_BYTE *)uucore::execution_phrase();
    *(_QWORD *)&v43 = v24;
    *(_QWORD *)&v40[0] = &v42;
    *((_QWORD *)&v40[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v49 = &off_28EF28;
    *((_QWORD *)&v49 + 1) = 2LL;
    v50 = (__int64 (__fastcall **)())v40;
    v51 = 1uLL;
    std::io::stdio::_eprint(&v49);
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v28 + 1) + 96LL))(v28);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v31);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v31);
  v25 = v28;
  if ( **((_QWORD **)&v28 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v28 + 1))(v28);
  v26 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL);
  if ( v26 )
    _rust_dealloc(v25, v26, *(_QWORD *)(*((_QWORD *)&v25 + 1) + 16LL));
  return v19;
}
