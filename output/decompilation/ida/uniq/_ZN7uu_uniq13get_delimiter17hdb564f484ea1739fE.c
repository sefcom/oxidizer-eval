char __fastcall uu_uniq::get_delimiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  char result; // al
  char v6; // cl
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v11,
    a1,
    anon_1708af35b9ec7e9011d0766e7edd8c0d_10_llvm_2960996753993589651,
    12LL);
  v1 = clap_builder::parser::error::MatchesError::unwrap(
         anon_1708af35b9ec7e9011d0766e7edd8c0d_10_llvm_2960996753993589651,
         12LL,
         v11);
  v2 = core::option::Option<T>::or_else(v1, a1);
  if ( !v2 )
    return 2
         * (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
              a1,
              anon_1708af35b9ec7e9011d0766e7edd8c0d_19_llvm_2960996753993589651,
              5LL) ^ 1)
         + 2;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAppend, 6LL) )
    return 0;
  v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aPrepend, 7LL);
  result = 1;
  if ( !v6 )
  {
    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aSeparate, 8LL);
    result = 2;
    if ( !v7 )
    {
      v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aBoth, 4LL);
      result = 3;
      if ( !v8 )
      {
        v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aNone, 4LL);
        result = 4;
        if ( !v9 )
        {
          v11[0] = &off_130548;
          v11[1] = 1LL;
          v11[2] = &v10;
          v12 = 0LL;
          core::panicking::panic_fmt(v11, &off_130558);
        }
      }
    }
  }
  return result;
}
