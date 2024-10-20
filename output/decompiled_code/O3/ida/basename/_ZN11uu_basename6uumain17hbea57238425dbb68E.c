__int64 __fastcall uu_basename::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rdx
  _OWORD *v4; // r15
  bool v5; // zf
  char v6; // al
  __int64 v7; // r13
  const char *v8; // rsi
  void (__fastcall __noreturn *v9)(); // rax
  const char *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // rax
  __int128 v22; // rax
  unsigned int v23; // ebx
  __int128 v24; // kr00_16
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // r12
  __int128 v30; // xmm0
  char v31; // [rsp+7h] [rbp-421h] BYREF
  __int64 v32; // [rsp+8h] [rbp-420h] BYREF
  __int128 v33; // [rsp+10h] [rbp-418h]
  __int128 v34; // [rsp+20h] [rbp-408h] BYREF
  __int64 v35; // [rsp+30h] [rbp-3F8h]
  __int128 v36; // [rsp+40h] [rbp-3E8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-3D8h]
  __int64 v38; // [rsp+58h] [rbp-3D0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-3C8h]
  __int64 v40; // [rsp+68h] [rbp-3C0h]
  __m256i v41; // [rsp+70h] [rbp-3B8h] BYREF
  __int128 v42; // [rsp+90h] [rbp-398h]
  const char *v43; // [rsp+A0h] [rbp-388h]
  __int64 v44; // [rsp+A8h] [rbp-380h]
  __int64 v45; // [rsp+B0h] [rbp-378h]
  __m256i v46; // [rsp+B8h] [rbp-370h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-350h]
  const char *v48; // [rsp+E8h] [rbp-340h]
  __int128 v49; // [rsp+100h] [rbp-328h] BYREF
  __int64 v50; // [rsp+110h] [rbp-318h]
  __int128 v51; // [rsp+118h] [rbp-310h] BYREF
  __int64 v52; // [rsp+128h] [rbp-300h]
  _BYTE v53[48]; // [rsp+130h] [rbp-2F8h] BYREF
  const char *v54; // [rsp+160h] [rbp-2C8h]
  __int64 v55; // [rsp+168h] [rbp-2C0h]

  uucore::Args::collect_lossy(&v49, a1, a2);
  uu_basename::uu_app(v53);
  v35 = v50;
  v34 = v49;
  clap_builder::builder::command::Command::try_get_matches_from(&v41, v53, &v34);
  if ( v41.m256i_i64[0] != 0x8000000000000000LL )
  {
    v48 = v43;
    v47 = v42;
    v46 = v41;
    v5 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            &v46,
                            aZero,
                            *(&uu_basename::options::ZERO + 1)) == 0;
    v6 = 10;
    if ( !v5 )
      v6 = 0;
    v31 = v6;
    v7 = (__int64)*(&uu_basename::options::NAME + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v53, &v46, aName, v7);
    v8 = aName;
    clap_builder::parser::error::MatchesError::unwrap(&v41, aName, v7, v53);
    v9 = (void (__fastcall __noreturn *)())v41.m256i_i64[0];
    if ( v41.m256i_i64[0] )
    {
      v10 = (const char *)v41.m256i_i64[1];
      v11 = *(_OWORD *)&v41.m256i_u64[2];
      v12 = v42;
      v8 = v43;
      v13 = v44;
    }
    else
    {
      v12 = 0LL;
      v11 = (unsigned __int64)"&";
      v10 = "&";
      v9 = core::ops::function::FnOnce::call_once;
      v13 = 0LL;
    }
    *(_QWORD *)v53 = v9;
    *(_QWORD *)&v53[8] = v10;
    *(_OWORD *)&v53[16] = v11;
    *(_OWORD *)&v53[32] = v12;
    v54 = v8;
    v55 = v13;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38, v53);
    if ( v40 )
    {
      v14 = (__int64)*(&uu_basename::options::SUFFIX + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, &v46, aSuffix, v14);
      if ( clap_builder::parser::error::MatchesError::unwrap(aSuffix, v14, v53)
        || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              &v46,
                              aMultiple,
                              *(&uu_basename::options::MULTIPLE + 1)) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, &v46, aSuffix, v14);
        v15 = clap_builder::parser::error::MatchesError::unwrap(aSuffix, v14, v53);
        if ( v15 )
        {
          <alloc::string::String as core::clone::Clone>::clone(v53, v15);
          *(_OWORD *)v41.m256i_i8 = *(_OWORD *)&v53[8];
          if ( *(_QWORD *)v53 != 0x8000000000000000LL )
          {
            v33 = *(_OWORD *)v41.m256i_i8;
            v32 = *(_QWORD *)v53;
            goto LABEL_28;
          }
        }
LABEL_14:
        v32 = 0LL;
        v33 = 1uLL;
LABEL_28:
        v45 = v38;
        v26 = v39;
        if ( v40 )
        {
          v27 = 8 * v40;
          v28 = 0LL;
          do
          {
            uu_basename::basename(
              &v34,
              *(_QWORD *)(*(_QWORD *)(v26 + v28) + 8LL),
              *(_QWORD *)(*(_QWORD *)(v26 + v28) + 16LL),
              v33,
              *((_QWORD *)&v33 + 1));
            v41.m256i_i64[0] = (__int64)&v34;
            v41.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
            v41.m256i_i64[2] = (__int64)&v31;
            v41.m256i_i64[3] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
            *(_QWORD *)v53 = &unk_FF48;
            *(_QWORD *)&v53[8] = 2LL;
            *(_QWORD *)&v53[32] = 0LL;
            *(_QWORD *)&v53[16] = &v41;
            *(_QWORD *)&v53[24] = 2LL;
            std::io::stdio::_print(v53);
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
            v28 += 8LL;
          }
          while ( v27 != v28 );
        }
        *(_QWORD *)&v53[8] = v26;
        *(_QWORD *)v53 = v45;
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v53);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v32);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v46);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
      switch ( v40 )
      {
        case 1LL:
          goto LABEL_14;
        case 2LL:
          v40 = 1LL;
          <alloc::string::String as core::clone::Clone>::clone(&v32, *(_QWORD *)(v39 + 8));
          goto LABEL_28;
        case 0LL:
          *(_QWORD *)v53 = &off_D91E8;
          *(_QWORD *)&v53[8] = 1LL;
          *(_QWORD *)&v53[16] = 8LL;
          *(_OWORD *)&v53[24] = 0LL;
          core::panicking::panic_fmt(v53, &off_D91F8);
      }
      v30 = *(_OWORD *)(*(_QWORD *)(v39 + 16) + 8LL);
      v41.m256i_i64[0] = 0LL;
      *(_OWORD *)&v41.m256i_u64[1] = v30;
      v41.m256i_i8[24] = 1;
      *(_QWORD *)&v34 = &v41;
      *((_QWORD *)&v34 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)v53 = &off_D9210;
      *(_QWORD *)&v53[8] = 1LL;
      *(_QWORD *)&v53[32] = 0LL;
      *(_QWORD *)&v53[16] = &v34;
      *(_QWORD *)&v53[24] = 1LL;
      alloc::fmt::format::format_inner(&v36, v53);
      *(_DWORD *)&v53[24] = 1;
      *(_OWORD *)v53 = v36;
      *(_QWORD *)&v53[16] = v37;
      v4 = (_OWORD *)alloc::alloc::exchange_malloc();
      v19 = *(_OWORD *)v53;
      v20 = *(_OWORD *)&v53[16];
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v53, 15LL, 0LL);
      v16 = *(_QWORD *)&v53[8];
      if ( *(_QWORD *)v53 )
        alloc::raw_vec::handle_error(*(_QWORD *)&v53[8], *(_QWORD *)&v53[16]);
      v17 = *(_QWORD **)&v53[16];
      *(_QWORD *)(*(_QWORD *)&v53[16] + 7LL) = 0x646E617265706F20LL;
      *v17 = 0x20676E697373696DLL;
      *(_DWORD *)&v53[24] = 1;
      *(_QWORD *)v53 = v16;
      *(_QWORD *)&v53[8] = v17;
      *(_QWORD *)&v53[16] = 15LL;
      v18 = _rust_alloc(32LL, 8LL);
      if ( !v18 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v4 = (_OWORD *)v18;
      v19 = *(_OWORD *)v53;
      v20 = *(_OWORD *)&v53[16];
    }
    v4[1] = v20;
    *v4 = v19;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v38);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v46);
    v3 = &off_D9178;
    goto LABEL_19;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41.m256i_i64[1]);
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  v4 = (_OWORD *)v2;
LABEL_19:
  *(_QWORD *)&v36 = v4;
  *((_QWORD *)&v36 + 1) = v3;
  v41.m256i_i64[0] = (__int64)&v36;
  v41.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)v53 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&v53[8] = 1LL;
  *(_QWORD *)&v53[32] = 0LL;
  *(_QWORD *)&v53[16] = &v41;
  *(_QWORD *)&v53[24] = 1LL;
  alloc::fmt::format::format_inner(&v51, v53);
  *(_OWORD *)v41.m256i_i8 = v51;
  v41.m256i_i64[2] = v52;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v51 + 1), v52, 1LL, 0LL) )
  {
    *(_QWORD *)&v21 = uucore::util_name();
    *(_OWORD *)v46.m256i_i8 = v21;
    *(_QWORD *)&v34 = &v46;
    *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v53 = &unk_D90E0;
    *(_QWORD *)&v53[8] = 2LL;
    *(_QWORD *)&v53[32] = 0LL;
    *(_QWORD *)&v53[16] = &v34;
    *(_QWORD *)&v53[24] = 1LL;
    std::io::stdio::_eprint(v53);
    v46.m256i_i64[0] = (__int64)&v41;
    v46.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v53 = &unk_D9100;
    *(_QWORD *)&v53[8] = 2LL;
    *(_QWORD *)&v53[32] = 0LL;
    *(_QWORD *)&v53[16] = &v46;
    *(_QWORD *)&v53[24] = 1LL;
    std::io::stdio::_eprint(v53);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v36 + 1) + 104LL))(v36) )
  {
    *(_QWORD *)&v22 = uucore::execution_phrase();
    *(_OWORD *)v46.m256i_i8 = v22;
    *(_QWORD *)&v34 = &v46;
    *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v53 = &off_D9120;
    *(_QWORD *)&v53[8] = 2LL;
    *(_QWORD *)&v53[32] = 0LL;
    *(_QWORD *)&v53[16] = &v34;
    *(_QWORD *)&v53[24] = 1LL;
    std::io::stdio::_eprint(v53);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v36 + 1) + 96LL))(v36);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v41);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41);
  v24 = v36;
  if ( **((_QWORD **)&v36 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v36 + 1))(v36);
  v25 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL);
  if ( v25 )
    _rust_dealloc(v24, v25, *(_QWORD *)(*((_QWORD *)&v24 + 1) + 16LL));
  return v23;
}
