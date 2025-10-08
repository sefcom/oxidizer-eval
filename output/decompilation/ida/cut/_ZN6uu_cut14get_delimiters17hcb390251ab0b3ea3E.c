__int64 *__fastcall uu_cut::get_delimiters(__int64 *a1, __int64 a2)
{
  char flag; // bp
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rdx
  const char *v6; // r15
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aWhitespaceDeli_0, 20LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a2, &unk_1ED14, 9LL);
  v3 = clap_builder::parser::error::MatchesError::unwrap(&unk_1ED14, 9LL, &v17);
  if ( !v3 )
  {
    v6 = 0LL;
    if ( !flag )
      v6 = asc_1EC79;
    goto LABEL_9;
  }
  if ( flag )
  {
    v4 = aInvalidInputOn;
    v5 = 73LL;
LABEL_19:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, v4, v5);
    v20 = 1;
    a1[1] = alloc::boxed::Box<T>::new(&v17);
    a1[2] = (__int64)&off_F9218;
    v14 = 1LL;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(v3 + 8);
  v8 = v3;
  v9 = *(_QWORD *)(v3 + 16);
  if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v7, v9) | (v9 == 0) )
  {
    v6 = (const char *)&unk_1ED1F;
LABEL_9:
    v10 = 1LL;
    goto LABEL_10;
  }
  core::str::converts::from_utf8(&v17, v7, v9);
  if ( (_DWORD)v17 != 1
    && (unsigned __int64)<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v18, v18 + v19) > 1
    || (core::str::converts::from_utf8(&v17, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16)), v9 != 1) && v17 )
  {
    v4 = aTheDelimiterMu;
    v5 = 40LL;
    goto LABEL_19;
  }
  v6 = (const char *)<uu_cut::Delimiter as core::convert::From<&std::ffi::os_str::OsString>>::from(v8);
  v10 = v16;
LABEL_10:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a2, &unk_1D5B0, 16LL);
  v11 = clap_builder::parser::error::MatchesError::unwrap(&unk_1D5B0, 16LL, &v17);
  if ( v11 )
    v13 = uu_cut::get_delimiters::{{closure}}(*(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
  else
    v13 = 0LL;
  a1[1] = (__int64)v6;
  a1[2] = v10;
  a1[3] = v13;
  a1[4] = v12;
  v14 = 0LL;
LABEL_20:
  *a1 = v14;
  return a1;
}