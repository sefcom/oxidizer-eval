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
  __int128 v11; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-C0h]
  _QWORD v14[12]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v15[10]; // [rsp+98h] [rbp-50h] BYREF

  WORD5(v13) = 2560;
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 10LL;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 8LL;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aQuiet, 5LL);
  BYTE9(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aVerbose, 7LL);
  v2 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZero_0, 4LL) == 0;
  v3 = 10;
  if ( !v2 )
    v3 = 0;
  BYTE11(v13) = v3;
  BYTE10(v13) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPresumeInputPi, 19LL);
  uu_head::Mode::from((__int64)v14, a2);
  v4 = v14[2];
  if ( __OFSUB__(-v14[0], 1LL) )
  {
    v11 = *(_OWORD *)&v14[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v14, a2);
    clap_builder::parser::error::MatchesError::unwrap(v15, v14);
    if ( v15[0] )
    {
      core::iter::traits::iterator::Iterator::collect(v14, v15);
    }
    else
    {
      v5 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v6 = v5;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, asc_1B366, 1LL);
      v14[11] = v14[2];
      v7 = *(_OWORD *)v14;
      *(_OWORD *)&v14[9] = *(_OWORD *)v14;
      *(_QWORD *)(v6 + 16) = v14[2];
      *(_OWORD *)v6 = v7;
      v14[0] = 1LL;
      v14[1] = v6;
      v14[2] = 1LL;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v12);
    *(_QWORD *)&v13 = v14[2];
    v12 = *(_OWORD *)v14;
    v8 = v11;
    v9 = *(_OWORD *)v14;
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  else
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v14;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)a1 = 4LL;
    core::ptr::drop_in_place<uu_head::HeadOptions>(&v11);
  }
  return a1;
}