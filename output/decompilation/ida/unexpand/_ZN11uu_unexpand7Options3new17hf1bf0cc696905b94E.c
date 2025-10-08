__int64 __fastcall uu_unexpand::Options::new(__int64 a1, __int64 a2)
{
  __int128 v2; // kr00_16
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // rax
  char v6; // bp
  char flag; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 v13; // [rsp+0h] [rbp-128h]
  __int64 v14; // [rsp+8h] [rbp-120h]
  __int128 v15; // [rsp+10h] [rbp-118h] BYREF
  __int64 v16; // [rsp+20h] [rbp-108h]
  __int128 v17; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-E8h]
  __int64 v19; // [rsp+48h] [rbp-E0h]
  _QWORD v20[8]; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD v21[14]; // [rsp+B8h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, a2, aTabs);
  clap_builder::parser::error::MatchesError::unwrap(v20, aTabs, &v17);
  if ( v20[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v15, v20);
    v13 = *((_QWORD *)&v15 + 1);
    alloc::str::join_generic_copy(&v17, *((_QWORD *)&v15 + 1), v16);
    v2 = v17;
    uu_unexpand::tabstops_parse((__int64)&v17, *((__int64 *)&v17 + 1), v18);
    v3 = v18;
    v4 = v19;
    if ( (_DWORD)v17 == 1 )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v17 + 1);
      *(_QWORD *)(a1 + 16) = v3;
      *(_QWORD *)(a1 + 24) = v4;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(v2, *((_QWORD *)&v2 + 1));
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v15, v13);
      return a1;
    }
    v14 = *((_QWORD *)&v17 + 1);
    core::ptr::drop_in_place<alloc::string::String>(v2, *((_QWORD *)&v2 + 1));
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v15, v13);
  }
  else
  {
    v5 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v3 = (__int64)v5;
    *v5 = 8LL;
    v4 = 1LL;
    v14 = 1LL;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aAll, 3LL)
    || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aTabs, 4LL) )
  {
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFirstOnly, 10LL) ^ 1;
  }
  else
  {
    v6 = 0;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aNoUtf8, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, a2, aFile);
  clap_builder::parser::error::MatchesError::unwrap(v21, aFile, &v17);
  if ( v21[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v17, v21);
  }
  else
  {
    v8 = v4;
    v9 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v10 = v9;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, asc_19534);
    v16 = v18;
    v11 = v17;
    v15 = v17;
    *(_QWORD *)(v10 + 16) = v18;
    *(_OWORD *)v10 = v11;
    *(_QWORD *)&v17 = 1LL;
    *((_QWORD *)&v17 + 1) = v10;
    v18 = 1LL;
    v4 = v8;
  }
  *(_QWORD *)(a1 + 16) = v18;
  *(_OWORD *)a1 = v17;
  *(_QWORD *)(a1 + 24) = v14;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 40) = v4;
  *(_BYTE *)(a1 + 48) = v6;
  *(_BYTE *)(a1 + 49) = flag ^ 1;
  return a1;
}