__int64 __fastcall uu_head::HeadOptions::get_from(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v12; // [rsp+8h] [rbp-130h] BYREF
  __int128 v13; // [rsp+18h] [rbp-120h] BYREF
  __int128 v14; // [rsp+28h] [rbp-110h]
  _OWORD v15[4]; // [rsp+38h] [rbp-100h] BYREF
  _OWORD v16[5]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+D0h] [rbp-68h]
  _OWORD v18[5]; // [rsp+E0h] [rbp-58h] BYREF

  WORD5(v14) = 2560;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 10LL;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 8LL;
  *(_QWORD *)&v14 = 0LL;
  BYTE8(v14) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  BYTE9(v14) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v2 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero, 4LL) == 0;
  v3 = 10;
  if ( !v2 )
    v3 = 0;
  BYTE11(v14) = v3;
  BYTE10(v14) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  uu_head::Mode::from((__int64)v15, a2);
  v4 = *((_QWORD *)&v15[0] + 1);
  v5 = *(_QWORD *)&v15[1];
  if ( *(_QWORD *)&v15[0] == 0x8000000000000000LL )
  {
    v12 = *(_OWORD *)((char *)v15 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v15, a2, aFile, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(v16, aFile, 4LL, v15);
    if ( *(_QWORD *)&v16[0] )
    {
      v18[3] = v16[3];
      v18[2] = v16[2];
      v18[1] = v16[1];
      v18[0] = v16[0];
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v15, v18);
    }
    else
    {
      v6 = alloc::alloc::Global::alloc_impl(24LL);
      if ( !v6 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v7 = v6;
      <T as alloc::slice::hack::ConvertVec>::to_vec(v15);
      v17 = *(_QWORD *)&v15[1];
      v8 = v15[0];
      v16[4] = v15[0];
      *(_QWORD *)(v7 + 16) = *(_QWORD *)&v15[1];
      *(_OWORD *)v7 = v8;
      alloc::slice::hack::into_vec(v15, v7, 1LL);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
    *(_QWORD *)&v14 = *(_QWORD *)&v15[1];
    v13 = v15[0];
    v9 = v12;
    v10 = v15[0];
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v15[0];
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)a1 = 4LL;
    core::ptr::drop_in_place<uu_head::HeadOptions>(&v12);
  }
  return a1;
}
