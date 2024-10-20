__int64 __fastcall uu_printenv::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char flag; // al
  char *v4; // rdx
  __int64 *v5; // rax
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 (__fastcall *v15)(); // rdx
  __int64 (__fastcall *v16)(); // rdx
  unsigned int v17; // ebx
  __int128 v18; // kr00_16
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int128 v25; // [rsp+0h] [rbp-478h] BYREF
  unsigned __int128 v26; // [rsp+10h] [rbp-468h]
  _OWORD v27[2]; // [rsp+20h] [rbp-458h] BYREF
  __int128 v28; // [rsp+40h] [rbp-438h] BYREF
  __int64 v29; // [rsp+50h] [rbp-428h]
  __int128 v30; // [rsp+60h] [rbp-418h] BYREF
  __int128 v31; // [rsp+70h] [rbp-408h]
  __int128 v32; // [rsp+80h] [rbp-3F8h]
  __int128 v33; // [rsp+90h] [rbp-3E8h]
  _BYTE v34[24]; // [rsp+A0h] [rbp-3D8h] BYREF
  __int128 v35; // [rsp+B8h] [rbp-3C0h]
  __int64 v36; // [rsp+C8h] [rbp-3B0h]
  __int128 v37; // [rsp+D0h] [rbp-3A8h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-398h]
  _QWORD v39[2]; // [rsp+E8h] [rbp-390h] BYREF
  __int128 *v40; // [rsp+F8h] [rbp-380h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+100h] [rbp-378h]
  __int128 v42; // [rsp+130h] [rbp-348h]
  __int128 v43; // [rsp+148h] [rbp-330h] BYREF
  __int64 v44; // [rsp+158h] [rbp-320h]
  _OWORD v45[2]; // [rsp+160h] [rbp-318h] BYREF
  __int128 v46; // [rsp+180h] [rbp-2F8h] BYREF
  __int128 v47; // [rsp+190h] [rbp-2E8h]
  __int128 v48; // [rsp+1A0h] [rbp-2D8h]
  __int128 v49; // [rsp+1B0h] [rbp-2C8h]

  uu_printenv::uu_app(&v46);
  clap_builder::builder::command::Command::get_matches_from(&v40, &v46, a1, a2);
  v2 = (__int64)*(&uu_printenv::ARG_VARIABLES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v46, &v40, aVariables, v2);
  clap_builder::parser::error::MatchesError::unwrap(&v30, aVariables, v2, &v46);
  if ( (_QWORD)v30 )
  {
    v49 = v33;
    v48 = v32;
    v47 = v31;
    v46 = v30;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v34, &v46);
    v28 = *(_OWORD *)v34;
    v29 = *(_QWORD *)&v34[16];
  }
  else
  {
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = 8LL;
    v29 = 0LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v40, aNull, *(&uu_printenv::OPT_NULL + 1));
  v4 = asc_EF32;
  if ( flag )
    v4 = &byte_EF57;
  v39[0] = v4;
  v39[1] = 1LL;
  if ( !v29 )
  {
    std::env::vars(v45);
    v26 = v45[1];
    v25 = v45[0];
    while ( 1 )
    {
      <std::env::Vars as core::iter::traits::iterator::Iterator>::next(v34, &v25);
      if ( *(_QWORD *)v34 == 0x8000000000000000LL )
        break;
      v38 = v36;
      v37 = v35;
      *(_QWORD *)&v46 = v27;
      *((_QWORD *)&v46 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v47 = &v37;
      *((_QWORD *)&v47 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v48 = v39;
      *((_QWORD *)&v48 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v30 = &unk_D04F8;
      *((_QWORD *)&v30 + 1) = 3LL;
      *(_QWORD *)&v32 = 0LL;
      *(_QWORD *)&v31 = &v46;
      *((_QWORD *)&v31 + 1) = 3LL;
      std::io::stdio::_print(
        &v30,
        &v25,
        v20,
        v21,
        v22,
        v23,
        v25,
        *((_QWORD *)&v25 + 1),
        v26,
        *((_QWORD *)&v26 + 1),
        *(_QWORD *)v34,
        *(_QWORD *)&v34[8],
        *(_QWORD *)&v34[16]);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v27);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v27);
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v25);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v28);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
LABEL_36:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v5 = (__int64 *)*((_QWORD *)&v28 + 1);
  *(_QWORD *)&v25 = *((_QWORD *)&v28 + 1);
  v26 = __PAIR128__(*((_QWORD *)&v28 + 1) + 24 * v29, v28);
  v6 = 0;
  do
  {
    *((_QWORD *)&v25 + 1) = v5 + 3;
    v7 = *v5;
    v42 = *(_OWORD *)(v5 + 1);
    if ( v7 == 0x8000000000000000LL )
      break;
    *(_QWORD *)&v27[0] = v7;
    *(_OWORD *)((char *)v27 + 8) = v42;
    if ( *((_QWORD *)&v42 + 1) > 0xFuLL )
    {
      if ( core::slice::memchr::memchr_aligned(61LL, v42) != 1 )
      {
LABEL_19:
        *(_QWORD *)&v47 = *(_QWORD *)&v27[1];
        v46 = v27[0];
        std::env::var(v34, &v46);
        LOBYTE(v2) = 1;
        if ( *(_QWORD *)v34 )
          goto LABEL_8;
        v38 = v35;
        v37 = *(_OWORD *)&v34[8];
        *(_QWORD *)&v30 = &v37;
        *((_QWORD *)&v30 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v31 = v39;
        *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v46 = &unk_EF60;
        *((_QWORD *)&v46 + 1) = 2LL;
        *(_QWORD *)&v48 = 0LL;
        *(_QWORD *)&v47 = &v30;
        *((_QWORD *)&v47 + 1) = 2LL;
        std::io::stdio::_print(
          &v46,
          &v46,
          v9,
          &v34[8],
          v10,
          v11,
          v25,
          *((_QWORD *)&v25 + 1),
          v26,
          *((_QWORD *)&v26 + 1),
          *(_QWORD *)&v27[0],
          *((_QWORD *)&v27[0] + 1),
          *(_QWORD *)&v27[1]);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
        LODWORD(v2) = v6;
        if ( *(_QWORD *)v34 )
        {
LABEL_8:
          core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v34);
          v6 = v2;
        }
        goto LABEL_9;
      }
    }
    else
    {
      if ( !*(_QWORD *)&v27[1] )
        goto LABEL_19;
      v8 = 0LL;
      while ( *(_BYTE *)(*((_QWORD *)&v27[0] + 1) + v8) != 61 )
      {
        if ( *(_QWORD *)&v27[1] == ++v8 )
          goto LABEL_19;
      }
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v27);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v27);
    LOBYTE(v6) = 1;
LABEL_9:
    v5 = (__int64 *)*((_QWORD *)&v25 + 1);
  }
  while ( *((_QWORD *)&v25 + 1) != *((_QWORD *)&v26 + 1) );
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v25);
  if ( (v6 & 1) == 0 )
    goto LABEL_36;
  v12 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  v14 = v13;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  *(_QWORD *)&v25 = v12;
  *((_QWORD *)&v25 + 1) = v14;
  *(_QWORD *)&v30 = &v25;
  *((_QWORD *)&v30 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v46 = &unk_EDB0;
  *((_QWORD *)&v46 + 1) = 1LL;
  *(_QWORD *)&v48 = 0LL;
  *(_QWORD *)&v47 = &v30;
  *((_QWORD *)&v47 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v43, &v46);
  v30 = v43;
  *(_QWORD *)&v31 = v44;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v43 + 1), v44, 1LL, 0LL) )
  {
    v40 = (__int128 *)uucore::util_name();
    v41 = v15;
    *(_QWORD *)v34 = &v40;
    *(_QWORD *)&v34[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v46 = &unk_D0498;
    *((_QWORD *)&v46 + 1) = 2LL;
    *(_QWORD *)&v48 = 0LL;
    *(_QWORD *)&v47 = v34;
    *((_QWORD *)&v47 + 1) = 1LL;
    std::io::stdio::_eprint(&v46);
    v40 = &v30;
    v41 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v46 = &unk_D04B8;
    *((_QWORD *)&v46 + 1) = 2LL;
    *(_QWORD *)&v48 = 0LL;
    *(_QWORD *)&v47 = &v40;
    *((_QWORD *)&v47 + 1) = 1LL;
    std::io::stdio::_eprint(&v46);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v25 + 1) + 104LL))(v25) )
  {
    v40 = (__int128 *)uucore::execution_phrase();
    v41 = v16;
    *(_QWORD *)v34 = &v40;
    *(_QWORD *)&v34[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v46 = &off_D04D8;
    *((_QWORD *)&v46 + 1) = 2LL;
    *(_QWORD *)&v48 = 0LL;
    *(_QWORD *)&v47 = v34;
    *((_QWORD *)&v47 + 1) = 1LL;
    std::io::stdio::_eprint(&v46);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v25 + 1) + 96LL))(v25);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v30);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30);
  v18 = v25;
  if ( **((_QWORD **)&v25 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v25 + 1))(v25);
  v19 = *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL);
  if ( v19 )
    _rust_dealloc(v18, v19, *(_QWORD *)(*((_QWORD *)&v18 + 1) + 16LL));
  return v17;
}
