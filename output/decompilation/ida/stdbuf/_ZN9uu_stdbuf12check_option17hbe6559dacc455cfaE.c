__int64 __fastcall uu_stdbuf::check_option(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 result; // rax
  _BYTE v10[80]; // [rsp+8h] [rbp-50h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v10);
  v6 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, v10);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD *)(v6 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, asc_1B76B, 1LL) )
    {
      uucore::features::parser::parse_size::parse_size_u64(v10, v7, v8);
      return core::result::Result<T,E>::map_or_else(a1, v10);
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, aInput_0, 5LL) )
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aLineBufferingS, 35LL);
    a1[1] = 1LL;
  }
  else
  {
    a1[1] = 0LL;
  }
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}