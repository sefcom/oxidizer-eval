char __fastcall uu_ls::extract_time(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  char v4; // cl
  char result; // al
  char v6; // cl
  char v7; // cl
  char flag; // cl
  bool v9; // zf
  char v10; // cl
  char v11; // cl
  char v12; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v13,
    a1,
    anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,
    4LL);
  v1 = clap_builder::parser::error::MatchesError::unwrap(
         anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,
         4LL,
         v13);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = *(_QWORD *)(v1 + 16);
    v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aCtime, 5LL);
    result = 2;
    if ( !v4 )
    {
      v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aStatus, 6LL);
      result = 2;
      if ( !v6 )
      {
        v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aAccess, 6LL);
        result = 1;
        if ( !v7 )
        {
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aAtime, 5LL) )
          {
            return 1;
          }
          else
          {
            v9 = (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aUse, 3LL) == 0;
            result = 1;
            if ( v9 )
            {
              v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aBirth, 5LL);
              result = 3;
              if ( !v10 )
              {
                v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aCreation, 8LL);
                result = 3;
                if ( !v11 )
                {
                  v13[0] = &off_2122A0;
                  v13[1] = 1LL;
                  v13[2] = &v12;
                  v14 = 0LL;
                  core::panicking::panic_fmt(v13, &off_2122B0);
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a1,
             anon_8bf1419b86641518549345aedc57e906_9_llvm_11260003342554782039,
             1LL);
    result = 1;
    if ( !flag )
      return 2
           * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a1,
               anon_8bf1419b86641518549345aedc57e906_10_llvm_11260003342554782039,
               1LL);
  }
  return result;
}
