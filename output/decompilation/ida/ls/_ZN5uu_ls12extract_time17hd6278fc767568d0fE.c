__int64 __fastcall uu_ls::extract_time(__int64 a1)
{
  unsigned int flag; // ebp
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v7[3]; // [rsp+8h] [rbp-50h] BYREF
  __int128 v8; // [rsp+20h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v7, a1, aTime, 4LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aTime, 4LL, v7);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    LOBYTE(flag) = 2;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aCtime, 5LL)
      && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aStatus, 6LL) )
    {
      LOBYTE(flag) = 1;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAccess, 6LL)
        && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAtime, 5LL)
        && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aUse, 3LL) )
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aMtime, 5LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aModification, 12LL) )
        {
          return 0;
        }
        else
        {
          LOBYTE(flag) = 3;
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aBirth, 5LL)
            && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aCreation, 8LL) )
          {
            v7[0] = &off_286820;
            v7[1] = 1LL;
            v7[2] = &v6;
            v8 = 0LL;
            core::panicking::panic_fmt(v7, &off_286830);
          }
        }
      }
    }
  }
  else
  {
    LOBYTE(flag) = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aU_0, 1LL) )
    {
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aC_0, 1LL);
      LOBYTE(flag) = 2 * flag;
    }
  }
  return flag;
}