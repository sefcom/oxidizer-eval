__int64 __fastcall uu_unexpand::Options::new(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  char v3; // bp
  char flag; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int128 v7; // xmm0
  __int128 v9; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-1A8h]
  _BYTE v11[24]; // [rsp+20h] [rbp-198h] BYREF
  __int128 v12; // [rsp+38h] [rbp-180h]
  __int64 v13; // [rsp+48h] [rbp-170h]
  __int128 v14; // [rsp+70h] [rbp-148h] BYREF
  __int64 v15; // [rsp+80h] [rbp-138h]
  __int128 v16; // [rsp+90h] [rbp-128h]
  __int64 v17; // [rsp+A0h] [rbp-118h]
  __int128 v18; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-F8h]
  __int128 v20; // [rsp+D0h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+E0h] [rbp-D8h]
  __int128 v22; // [rsp+F0h] [rbp-C8h]
  __int128 v23; // [rsp+100h] [rbp-B8h]
  _OWORD v24[4]; // [rsp+110h] [rbp-A8h] BYREF
  _OWORD v25[6]; // [rsp+150h] [rbp-68h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v11, a2, aTabs, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v20, aTabs, 4LL, v11);
  if ( (_QWORD)v20 )
  {
    v24[3] = v23;
    v24[2] = v22;
    v24[1] = v21;
    v24[0] = v20;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v24);
    alloc::str::join_generic_copy(v11, *((_QWORD *)&v9 + 1), v10, asc_1D65E, 1LL);
    v19 = *(_QWORD *)&v11[16];
    v18 = *(_OWORD *)v11;
    uu_unexpand::tabstops_parse((__int64)v11, *(__int64 *)&v11[8], *(__int64 *)&v11[16]);
    v16 = *(_OWORD *)&v11[8];
    v17 = v12;
    if ( *(_QWORD *)v11 )
    {
      *(_QWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v18);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
      return a1;
    }
    v15 = v17;
    v14 = v16;
    core::ptr::drop_in_place<alloc::string::String>(&v18);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
  }
  else
  {
    v2 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v2 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v2 = 8LL;
    alloc::slice::hack::into_vec(&v14, v2, 1LL);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAll, 3LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aTabs, 4LL) )
  {
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFirstOnly, 10LL) ^ 1;
  }
  else
  {
    v3 = 0;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoUtf8, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v11, a2, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v20, aFile, 4LL, v11);
  if ( (_QWORD)v20 )
  {
    v25[3] = v23;
    v25[2] = v22;
    v25[1] = v21;
    v25[0] = v20;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v25);
  }
  else
  {
    v5 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v6 = v5;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v11, asc_1D673);
    v10 = *(_QWORD *)&v11[16];
    v7 = *(_OWORD *)v11;
    v9 = *(_OWORD *)v11;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)&v11[16];
    *(_OWORD *)v6 = v7;
    alloc::slice::hack::into_vec(&v9, v6, 1LL);
  }
  *(_QWORD *)&v11[16] = v10;
  *(_OWORD *)v11 = v9;
  v13 = v15;
  v12 = v14;
  *(_OWORD *)a1 = v9;
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&v12 + 1);
  *(_QWORD *)(a1 + 40) = v13;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v11[16];
  *(_QWORD *)(a1 + 24) = v12;
  *(_BYTE *)(a1 + 48) = v3;
  *(_BYTE *)(a1 + 49) = flag ^ 1;
  return a1;
}
