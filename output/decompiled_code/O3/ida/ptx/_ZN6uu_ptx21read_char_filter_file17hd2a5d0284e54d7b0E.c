__int64 __fastcall uu_ptx::read_char_filter_file(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v6; // [rsp+4h] [rbp-64h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+18h] [rbp-50h]
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v10);
  v1 = clap_builder::parser::error::MatchesError::unwrap(
         anon_2a006399170f7188a90d81ab0d3d1c41_18_llvm_26549548904132577,
         10LL,
         v10);
  if ( !v1 )
    core::option::expect_failed(aParsingOptions, 23LL, &off_2EE448);
  std::fs::File::open(v10, v1);
  if ( LODWORD(v10[0]) )
  {
    result = *((_QWORD *)&v10[0] + 1);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v10[0] + 1);
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    v6 = DWORD1(v10[0]);
    v7 = 0LL;
    v8 = 1LL;
    v9 = 0LL;
    if ( <std::fs::File as std::io::Read>::read_to_string(&v6, &v7) )
    {
      *(_QWORD *)(a1 + 8) = v3;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter(
        v10,
        v8,
        v8 + v9);
      v4 = v10[0];
      v5 = v10[1];
      *(_OWORD *)(a1 + 32) = v10[2];
      *(_OWORD *)(a1 + 16) = v5;
      *(_OWORD *)a1 = v4;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    return core::ptr::drop_in_place<std::fs::File>(&v6);
  }
  return result;
}
