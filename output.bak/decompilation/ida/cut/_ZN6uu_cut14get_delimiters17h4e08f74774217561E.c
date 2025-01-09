__int64 *__fastcall uu_cut::get_delimiters(__int64 *a1, __int64 a2, char a3)
{
  char flag; // r15
  __int64 v5; // rax
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  const char *v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  int v22; // [rsp+18h] [rbp-40h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aWhitespaceDeli_0, 20LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, a2, aDelimiter_0, 9LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aDelimiter_0, 9LL, &v19);
  if ( v5 )
  {
    if ( flag )
    {
      v6 = aInvalidInputOn;
      v7 = 73LL;
LABEL_4:
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v19, v6, v7);
      v22 = 1;
      a1[1] = alloc::boxed::Box<T>::new(&v19);
      a1[2] = (__int64)&off_128DA0;
      v8 = 1LL;
      goto LABEL_22;
    }
    v10 = 1LL;
    if ( a3 )
    {
      v9 = (const char *)&unk_1DCC0;
    }
    else
    {
      v11 = v5;
      v9 = (const char *)&unk_1DCBF;
      if ( !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                               *(_QWORD *)(v5 + 8),
                               *(_QWORD *)(v5 + 16)) )
      {
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          std::sys::os_str::bytes::Slice::to_str(&v19, v13, *(_QWORD *)(v11 + 16));
          if ( !v19
            && (unsigned __int64)<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(
                                   v20,
                                   v20 + v21) > 1
            || (std::sys::os_str::bytes::Slice::to_str(&v19, v13, v12), v12 != 1) && v19 )
          {
            v6 = aTheDelimiterMu;
            v7 = 40LL;
            goto LABEL_4;
          }
          v9 = (const char *)<uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v11);
          v10 = v14;
        }
      }
    }
  }
  else
  {
    v9 = 0LL;
    if ( !flag )
      v9 = asc_1DC19;
    v10 = 1LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, a2, aOutputDelimite, 16LL);
  v15 = clap_builder::parser::error::MatchesError::unwrap(aOutputDelimite, 16LL, &v19);
  if ( v15 )
    v17 = uu_cut::get_delimiters::{{closure}}(*(_QWORD *)(v15 + 8), *(_QWORD *)(v15 + 16));
  else
    v17 = 0LL;
  a1[1] = (__int64)v9;
  a1[2] = v10;
  a1[3] = v17;
  a1[4] = v16;
  v8 = 0LL;
LABEL_22:
  *a1 = v8;
  return a1;
}
