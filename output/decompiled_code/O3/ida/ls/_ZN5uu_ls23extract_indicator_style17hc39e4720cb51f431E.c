__int64 __fastcall uu_ls::extract_indicator_style(__int64 a1)
{
  unsigned int flag; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v9,
    a1,
    anon_34cd953b2c946f74a585889e96ce9d7a_37_llvm_16853030268703478466,
    15LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_34cd953b2c946f74a585889e96ce9d7a_37_llvm_16853030268703478466,
         15LL,
         v9);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aNone, 4LL) )
    {
      LOBYTE(flag) = 2;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aFileType, 9LL) )
      {
        LOBYTE(flag) = 3;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 v3,
                                 v4,
                                 anon_cfc37c807317366388c1b51bb9a73ad5_26_llvm_1151552614418493144,
                                 8LL) )
          return (unsigned int)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aSlash, 5LL);
      }
      return flag;
    }
    return 0;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v9,
    a1,
    anon_cfc37c807317366388c1b51bb9a73ad5_26_llvm_1151552614418493144,
    8LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(
         anon_cfc37c807317366388c1b51bb9a73ad5_26_llvm_1151552614418493144,
         8LL,
         v9);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aNever, 5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aNo_0, 2LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aNone, 4LL) )
    {
      LOBYTE(flag) = 3;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aAlways, 6LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aYes, 3LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aForce, 5LL) )
      {
        return flag;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aAuto, 4LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aTty, 3LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aIfTty, 6LL) )
      {
        v9[0] = std::io::stdio::stdout();
        return 3 * (unsigned int)((unsigned __int8)std::sys::pal::unix::io::is_terminal(v9) != 0);
      }
    }
    return 0;
  }
  LOBYTE(flag) = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a1,
                           anon_cfc37c807317366388c1b51bb9a73ad5_24_llvm_1151552614418493144,
                           1LL) )
  {
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a1,
             anon_cfc37c807317366388c1b51bb9a73ad5_25_llvm_1151552614418493144,
             9LL);
    LOBYTE(flag) = 2 * flag;
  }
  return flag;
}
