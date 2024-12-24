__int64 __fastcall uu_ls::extract_format(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax
  char v6; // bp
  const char *v7; // r14
  char v8; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v9,
    a2,
    anon_34cd953b2c946f74a585889e96ce9d7a_27_llvm_16853030268703478466,
    6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_34cd953b2c946f74a585889e96ce9d7a_27_llvm_16853030268703478466,
         6LL,
         v9);
  if ( !v2 )
  {
    result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039,
               4LL);
    if ( (_BYTE)result )
    {
      *(_BYTE *)a1 = 1;
      *(_QWORD *)(a1 + 8) = anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039;
      *(_QWORD *)(a1 + 16) = 4LL;
      return result;
    }
    v7 = anon_93c251adab0f837eec2f5865e5b29e23_28_llvm_10262286748963977039;
    result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a2,
               anon_93c251adab0f837eec2f5865e5b29e23_28_llvm_10262286748963977039,
               1LL);
    if ( (_BYTE)result )
    {
      *(_BYTE *)a1 = 3;
    }
    else
    {
      v7 = anon_93c251adab0f837eec2f5865e5b29e23_30_llvm_10262286748963977039;
      result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_93c251adab0f837eec2f5865e5b29e23_30_llvm_10262286748963977039,
                 1LL);
      if ( (_BYTE)result )
      {
        *(_BYTE *)a1 = 4;
      }
      else
      {
        v7 = anon_93c251adab0f837eec2f5865e5b29e23_27_llvm_10262286748963977039;
        result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                   a2,
                   anon_93c251adab0f837eec2f5865e5b29e23_27_llvm_10262286748963977039,
                   1LL);
        if ( !(_BYTE)result )
        {
          v9[0] = std::io::stdio::stdout();
          result = std::sys::pal::unix::io::is_terminal(v9);
          if ( (_BYTE)result )
            *(_BYTE *)a1 = 0;
          else
            *(_BYTE *)a1 = 2;
          *(_QWORD *)(a1 + 8) = 0LL;
          return result;
        }
        *(_BYTE *)a1 = 0;
      }
    }
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = 1LL;
    return result;
  }
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
             v3,
             v4,
             anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039,
             4LL);
  v6 = 1;
  if ( !(_BYTE)result )
  {
    result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aVerbose, 7LL);
    if ( !(_BYTE)result )
    {
      result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aSingleColumn, 13LL);
      v6 = 2;
      if ( !(_BYTE)result )
      {
        result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aColumns, 7LL);
        if ( (_BYTE)result
          || (result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aVertical, 8LL), (_BYTE)result) )
        {
          v6 = 0;
        }
        else
        {
          result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aAcross, 6LL);
          v6 = 3;
          if ( !(_BYTE)result )
          {
            result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aHorizontal, 10LL);
            if ( !(_BYTE)result )
            {
              result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, aCommas, 6LL);
              v6 = 4;
              if ( !(_BYTE)result )
              {
                v9[0] = &off_212450;
                v9[1] = 1LL;
                v9[2] = &v8;
                v10 = 0LL;
                core::panicking::panic_fmt(v9, &off_212460);
              }
            }
          }
        }
      }
    }
  }
  *(_BYTE *)a1 = v6;
  *(_QWORD *)(a1 + 8) = anon_34cd953b2c946f74a585889e96ce9d7a_27_llvm_16853030268703478466;
  *(_QWORD *)(a1 + 16) = 6LL;
  return result;
}
