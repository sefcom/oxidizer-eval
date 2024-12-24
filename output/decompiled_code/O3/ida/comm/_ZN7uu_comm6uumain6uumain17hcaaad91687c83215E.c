__int64 __fastcall uu_comm::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // bp
  __int64 v4; // rbx
  __int64 v5; // r14
  char **v6; // rbx
  __int64 v7; // rax
  char *v9; // rbx
  __int64 v10; // r14
  char **v11; // rdi
  __int128 v12; // [rsp+0h] [rbp-438h] BYREF
  __int128 v13; // [rsp+10h] [rbp-428h]
  __int128 v14; // [rsp+20h] [rbp-418h]
  __int128 v15; // [rsp+30h] [rbp-408h]
  _BYTE v16[8]; // [rsp+40h] [rbp-3F8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-3F0h]
  __int64 v18; // [rsp+50h] [rbp-3E8h]
  _OWORD v19[3]; // [rsp+58h] [rbp-3E0h] BYREF
  __int64 v20; // [rsp+88h] [rbp-3B0h]
  _OWORD v21[3]; // [rsp+90h] [rbp-3A8h] BYREF
  char v22; // [rsp+C0h] [rbp-378h]
  _BYTE v23[7]; // [rsp+C1h] [rbp-377h]
  _OWORD v24[3]; // [rsp+C8h] [rbp-370h] BYREF
  char v25; // [rsp+F8h] [rbp-340h]
  _BYTE v26[7]; // [rsp+F9h] [rbp-33Fh]
  _QWORD v27[2]; // [rsp+100h] [rbp-338h] BYREF
  _OWORD v28[4]; // [rsp+110h] [rbp-328h] BYREF
  __int128 v29; // [rsp+150h] [rbp-2E8h] BYREF
  __int64 v30; // [rsp+160h] [rbp-2D8h]
  int v31; // [rsp+168h] [rbp-2D0h]

  uu_comm::uu_app(&v29);
  clap_builder::builder::command::Command::try_get_matches_from(&v12, &v29, a1, a2);
  if ( (_QWORD)v12 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v12 + 1));
  v20 = v15;
  v19[2] = v14;
  v19[1] = v13;
  v19[0] = v12;
  v3 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v19, aZeroTerminated, 15LL) )
    v3 = 0;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v29, v19, aFile1, 5LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aFile1, 5LL, &v29);
  if ( !v4 )
  {
    v11 = &off_10FDF0;
    goto LABEL_25;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v29, v19, aFile2, 5LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aFile2, 5LL, &v29);
  if ( !v5 )
  {
    v11 = &off_10FE08;
LABEL_25:
    core::option::unwrap_failed(v11);
  }
  uu_comm::open_file((__int64)&v29, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16), v3);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v12,
    &v29,
    v4);
  v2 = v12;
  if ( (_BYTE)v15 == 11 )
  {
LABEL_17:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
    return v2;
  }
  v21[2] = v14;
  v21[1] = v13;
  *(_DWORD *)v23 = *(_DWORD *)((char *)&v15 + 1);
  *(_DWORD *)&v23[3] = DWORD1(v15);
  v21[0] = v12;
  v22 = v15;
  uu_comm::open_file((__int64)&v29, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16), v3);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v12,
    &v29,
    v5);
  v2 = v12;
  if ( (_BYTE)v15 == 11 )
  {
LABEL_16:
    core::ptr::drop_in_place<uu_comm::LineReader>(v21);
    goto LABEL_17;
  }
  v24[2] = v14;
  v24[1] = v13;
  *(_DWORD *)v26 = *(_DWORD *)((char *)&v15 + 1);
  *(_DWORD *)&v26[3] = DWORD1(v15);
  v24[0] = v12;
  v25 = v15;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v29, v19, aOutputDelimite, 16LL);
  clap_builder::parser::error::MatchesError::unwrap(&v12, aOutputDelimite, 16LL, &v29);
  if ( !(_QWORD)v12 )
    core::option::unwrap_failed(&off_10FE20);
  v28[3] = v15;
  v28[2] = v14;
  v28[1] = v13;
  v28[0] = v12;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v16, v28);
  if ( !v18 )
    core::slice::index::slice_start_index_len_fail(1LL, 0LL, &off_10FF10);
  v27[0] = v17 + 24;
  v27[1] = v17 + 24 * v18;
  v6 = &off_10FE50;
  while ( 1 )
  {
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v27);
    if ( !v7 )
      break;
    if ( !v18 )
      goto LABEL_29;
    if ( !(unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                             *(_QWORD *)(v7 + 8),
                             *(_QWORD *)(v7 + 16),
                             *(_QWORD *)(v17 + 8),
                             *(_QWORD *)(v17 + 16)) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v12);
      v30 = v13;
      v29 = v12;
      v31 = 1;
      v2 = alloc::boxed::Box<T>::new(&v29);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v16);
      core::ptr::drop_in_place<uu_comm::LineReader>(v24);
      goto LABEL_16;
    }
  }
  if ( !v18 )
  {
    v6 = &off_10FE38;
LABEL_29:
    core::panicking::panic_bounds_check(0LL, 0LL, v6);
  }
  v9 = *(char **)(v17 + 8);
  v10 = *(_QWORD *)(v17 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, 1LL, 0LL) )
  {
    v9 = &byte_14390;
    v10 = 1LL;
  }
  uu_comm::comm((__int64)v21, (__int64)v24, (__int64)v9, v10, (__int64)v19);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v16);
  core::ptr::drop_in_place<uu_comm::LineReader>(v24);
  core::ptr::drop_in_place<uu_comm::LineReader>(v21);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
  return 0LL;
}
