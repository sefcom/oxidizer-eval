__int64 __fastcall uu_head::HeadOptions::get_from(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r14
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v11; // [rsp+8h] [rbp-130h] BYREF
  __int128 v12; // [rsp+18h] [rbp-120h] BYREF
  __int128 v13; // [rsp+28h] [rbp-110h]
  _OWORD v14[4]; // [rsp+38h] [rbp-100h] BYREF
  _OWORD v15[5]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-68h]
  _OWORD v17[5]; // [rsp+E0h] [rbp-58h] BYREF

  WORD5(v13) = 2560;
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 10LL;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 8LL;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  BYTE9(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v2 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero, 4LL) == 0;
  v3 = 10;
  if ( !v2 )
    v3 = 0;
  BYTE11(v13) = v3;
  BYTE10(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  uu_head::Mode::from((__int64)v14, a2);
  v4 = *(_QWORD *)&v14[1];
  if ( *(_QWORD *)&v14[0] == 0x8000000000000000LL )
  {
    v11 = *(_OWORD *)((char *)v14 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v14, a2, aFile, 4LL);
    clap_builder::parser::error::MatchesError::unwrap(v15, aFile, 4LL, v14);
    if ( *(_QWORD *)&v15[0] )
    {
      v17[3] = v15[3];
      v17[2] = v15[2];
      v17[1] = v15[1];
      v17[0] = v15[0];
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v14, v17);
    }
    else
    {
      v5 = alloc::alloc::Global::alloc_impl(24LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v6 = v5;
      <T as alloc::slice::hack::ConvertVec>::to_vec(v14);
      v16 = *(_QWORD *)&v14[1];
      v7 = v14[0];
      v15[4] = v14[0];
      *(_QWORD *)(v6 + 16) = *(_QWORD *)&v14[1];
      *(_OWORD *)v6 = v7;
      alloc::slice::hack::into_vec(v14, v6, 1LL);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v12);
    *(_QWORD *)&v13 = *(_QWORD *)&v14[1];
    v12 = v14[0];
    v8 = v11;
    v9 = v14[0];
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  else
  {
    *(_OWORD *)(a1 + 8) = v14[0];
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)a1 = 4LL;
    core::ptr::drop_in_place<uu_head::HeadOptions>(&v11);
  }
  return a1;
}
