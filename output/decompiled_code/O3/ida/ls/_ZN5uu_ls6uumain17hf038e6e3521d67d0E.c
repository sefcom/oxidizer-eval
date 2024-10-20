__int64 __fastcall uu_ls::uumain(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 (__fastcall **v4)(); // rdx
  __int64 (__fastcall **v5)(); // r15
  __int64 v6; // r15
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 (__fastcall **v11)(); // rdx
  __int128 v12; // rax
  __int128 v13; // rax
  __int128 v14; // kr00_16
  __int64 v15; // rsi
  __int128 v17; // [rsp+8h] [rbp-5C0h] BYREF
  __int64 v18; // [rsp+18h] [rbp-5B0h]
  __int128 v19; // [rsp+20h] [rbp-5A8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-598h]
  __int128 v21; // [rsp+40h] [rbp-588h] BYREF
  __int128 v22; // [rsp+50h] [rbp-578h]
  __int128 v23; // [rsp+60h] [rbp-568h]
  __int128 v24; // [rsp+70h] [rbp-558h]
  _OWORD v25[3]; // [rsp+80h] [rbp-548h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-518h]
  __int128 v27; // [rsp+C0h] [rbp-508h] BYREF
  _BYTE src[240]; // [rsp+D0h] [rbp-4F8h] BYREF
  __int128 v29; // [rsp+1C0h] [rbp-408h] BYREF
  __int64 v30; // [rsp+1D0h] [rbp-3F8h]
  __int128 v31; // [rsp+1D8h] [rbp-3F0h] BYREF
  _BYTE dest[240]; // [rsp+1E8h] [rbp-3E0h] BYREF
  const char *v33; // [rsp+2D8h] [rbp-2F0h] BYREF
  __int64 v34; // [rsp+2E0h] [rbp-2E8h]
  __int128 *v35; // [rsp+2E8h] [rbp-2E0h]
  __int64 v36; // [rsp+2F0h] [rbp-2D8h]
  __int64 v37; // [rsp+2F8h] [rbp-2D0h]

  uu_ls::uu_app(&v33);
  clap_builder::builder::command::Command::try_get_matches_from(&v31, &v33, a1, a2);
  if ( (_QWORD)v31 != 0x8000000000000000LL )
  {
    v26 = *(_QWORD *)&dest[32];
    v25[2] = *(_OWORD *)&dest[16];
    v25[1] = *(_OWORD *)dest;
    v25[0] = v31;
    uu_ls::Config::from(&v27, v25);
    v3 = *((_QWORD *)&v27 + 1);
    v5 = *(__int64 (__fastcall ***)())src;
    if ( (_QWORD)v27 != 0x8000000000000000LL )
    {
      memcpy(&dest[8], &src[8], 0xE8uLL);
      v31 = v27;
      *(_QWORD *)dest = *(_QWORD *)src;
      v6 = (__int64)*(&uu_ls::options::PATHS + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
        &v27,
        v25,
        anon_e31c85536e11aee39654ff72a53ef708_36_llvm_4239552918814193354,
        v6);
      clap_builder::parser::error::MatchesError::unwrap(
        &v21,
        anon_e31c85536e11aee39654ff72a53ef708_36_llvm_4239552918814193354,
        v6,
        &v27);
      if ( (_QWORD)v21 )
      {
        *(_OWORD *)&src[32] = v24;
        *(_OWORD *)&src[16] = v23;
        *(_OWORD *)src = v22;
        v27 = v21;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v17, &v27);
        v19 = v17;
        v20 = v18;
      }
      else
      {
        v10 = (_QWORD *)_rust_alloc(16LL, 8LL);
        if ( !v10 )
          alloc::alloc::handle_alloc_error(8LL, 16LL);
        *v10 = asc_1DAB5;
        v10[1] = 1LL;
        alloc::slice::hack::into_vec(&v19, v10, 1LL);
      }
      *(_QWORD *)src = v20;
      v27 = v19;
      v3 = uu_ls::list(&v27, &v31);
      v5 = v11;
      core::ptr::drop_in_place<uu_ls::Config>(&v31);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v25);
    if ( !v3 )
      return (unsigned int)uucore::mods::error::get_exit_code();
    goto LABEL_21;
  }
  v2 = *(unsigned __int8 *)(*((_QWORD *)&v31 + 1) + 213LL);
  if ( !*(_BYTE *)(*((_QWORD *)&v31 + 1) + 213LL) )
  {
    *(_QWORD *)&v19 = *((_QWORD *)&v31 + 1);
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18 = 0LL;
    *(_QWORD *)&src[32] = 32LL;
    src[40] = 3;
    *(_QWORD *)&v27 = 0LL;
    *(_QWORD *)src = 0LL;
    *(_QWORD *)&src[16] = &v17;
    *(_QWORD *)&src[24] = &off_1A91E8;
    if ( (unsigned __int8)<clap_builder::error::Error<F> as core::fmt::Display>::fmt(&v19, &v27) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v21, &unk_1A9230, &off_1A9218);
    *(_QWORD *)&v22 = v18;
    v21 = v17;
    DWORD2(v22) = 1;
    v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    goto LABEL_15;
  }
  if ( v2 != 12 && v2 != 14 )
  {
    *(_QWORD *)&v19 = *((_QWORD *)&v31 + 1);
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18 = 0LL;
    *(_QWORD *)&src[32] = 32LL;
    src[40] = 3;
    *(_QWORD *)&v27 = 0LL;
    *(_QWORD *)src = 0LL;
    *(_QWORD *)&src[16] = &v17;
    *(_QWORD *)&src[24] = &off_1A91E8;
    if ( (unsigned __int8)<clap_builder::error::Error<F> as core::fmt::Display>::fmt(&v19, &v27) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v21, &unk_1A9230, &off_1A9218);
    *(_QWORD *)&v22 = v18;
    v21 = v17;
    DWORD2(v22) = 2;
    v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_15:
    v3 = (__int64)v7;
    v8 = v21;
    v7[1] = v22;
    *v7 = v8;
    core::ptr::drop_in_place<clap_builder::error::Error>(v19);
    v5 = &off_1A92E8;
    goto LABEL_21;
  }
  v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
  v5 = v4;
  if ( !v3 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_21:
  *(_QWORD *)&v25[0] = v3;
  *((_QWORD *)&v25[0] + 1) = v5;
  *(_QWORD *)&v27 = v25;
  *((_QWORD *)&v27 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v33 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
  v34 = 1LL;
  v37 = 0LL;
  v35 = &v27;
  v36 = 1LL;
  alloc::fmt::format::format_inner(&v29, &v33);
  v27 = v29;
  *(_QWORD *)src = v30;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v29 + 1), v30, 1LL, 0LL) )
  {
    *(_QWORD *)&v12 = uucore::util_name();
    v31 = v12;
    *(_QWORD *)&v21 = &v31;
    *((_QWORD *)&v21 + 1) = <&T as core::fmt::Display>::fmt;
    v33 = (const char *)&unk_1A9250;
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v21;
    v36 = 1LL;
    std::io::stdio::_eprint(&v33);
    *(_QWORD *)&v31 = &v27;
    *((_QWORD *)&v31 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v33 = (const char *)&unk_1A9270;
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v31;
    v36 = 1LL;
    std::io::stdio::_eprint(&v33);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v25[0] + 1) + 104LL))(*(_QWORD *)&v25[0]) )
  {
    *(_QWORD *)&v13 = uucore::execution_phrase();
    v31 = v13;
    *(_QWORD *)&v21 = &v31;
    *((_QWORD *)&v21 + 1) = <&T as core::fmt::Display>::fmt;
    v33 = (const char *)&off_1A9290;
    v34 = 2LL;
    v37 = 0LL;
    v35 = &v21;
    v36 = 1LL;
    std::io::stdio::_eprint(&v33);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v25[0] + 1) + 96LL))(*(_QWORD *)&v25[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v27);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27);
  v14 = v25[0];
  if ( **((_QWORD **)&v25[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v25[0] + 1))(*(_QWORD *)&v25[0]);
  v15 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL);
  if ( v15 )
    _rust_dealloc(v14, v15, *(_QWORD *)(*((_QWORD *)&v14 + 1) + 16LL));
  return v9;
}
