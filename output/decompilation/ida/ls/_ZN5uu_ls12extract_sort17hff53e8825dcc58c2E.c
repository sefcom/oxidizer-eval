char __fastcall uu_ls::extract_sort(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  char result; // al
  char flag; // cl
  char v6; // cl
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl
  char v12; // cl
  char v13; // cl
  char v14; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v15,
    a1,
    anon_3f7e092f2ea554bdd060175bd8ea63d9_21_llvm_16502254941234113161,
    4LL);
  v1 = clap_builder::parser::error::MatchesError::unwrap(
         anon_3f7e092f2ea554bdd060175bd8ea63d9_21_llvm_16502254941234113161,
         4LL,
         v15);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 8);
    v3 = *(_QWORD *)(v1 + 16);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aNone, 4LL) )
      return 0;
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aName, 4LL);
    result = 1;
    if ( !v8 )
    {
      v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
             v2,
             v3,
             anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,
             4LL);
      result = 3;
      if ( !v9 )
      {
        v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                v2,
                v3,
                anon_0961294ef8eb7b5431de28de81a5ae4f_9_llvm_9099371528486416302,
                4LL);
        result = 2;
        if ( !v10 )
        {
          v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aVersion, 7LL);
          result = 4;
          if ( !v11 )
          {
            v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aExtension, 9LL);
            result = 5;
            if ( !v12 )
            {
              v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aWidth, 5LL);
              result = 6;
              if ( !v13 )
              {
                v15[0] = &off_212278;
                v15[1] = 1LL;
                v15[2] = &v14;
                v16 = 0LL;
                core::panicking::panic_fmt(v15, &off_212288);
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
             anon_f45a42eab3604eaa40558bbeffd2bfb7_12_llvm_10979288589332586409,
             1LL);
    result = 3;
    if ( !flag )
    {
      v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             a1,
             anon_f45a42eab3604eaa40558bbeffd2bfb7_11_llvm_10979288589332586409,
             1LL);
      result = 2;
      if ( !v6 )
      {
        if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                a1,
                                anon_f45a42eab3604eaa40558bbeffd2bfb7_13_llvm_10979288589332586409,
                                1LL) )
          return 0;
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a1,
               anon_f45a42eab3604eaa40558bbeffd2bfb7_14_llvm_10979288589332586409,
               1LL);
        result = 4;
        if ( !v7 )
          return (4
                * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                    a1,
                    anon_f45a42eab3604eaa40558bbeffd2bfb7_15_llvm_10979288589332586409,
                    1LL)) | 1;
      }
    }
  }
  return result;
}
