__int64 __fastcall uu_join::parse_print_settings(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  char v4; // bp
  char v5; // r13
  __int64 v6; // rax
  char v7; // r13
  char v8; // bp
  __int64 v9; // rcx
  __int64 v10; // [rsp+8h] [rbp-1C0h]
  __int128 v11; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v12; // [rsp+20h] [rbp-1A8h]
  __int128 v13; // [rsp+30h] [rbp-198h]
  __int128 v14; // [rsp+40h] [rbp-188h]
  __int128 v15; // [rsp+50h] [rbp-178h] BYREF
  __int128 v16; // [rsp+60h] [rbp-168h]
  __int128 v17; // [rsp+70h] [rbp-158h]
  __int128 v18; // [rsp+80h] [rbp-148h]
  _OWORD v19[4]; // [rsp+98h] [rbp-130h] BYREF
  _OWORD v20[4]; // [rsp+D8h] [rbp-F0h] BYREF
  _BYTE v21[64]; // [rsp+118h] [rbp-B0h] BYREF
  _BYTE v22[112]; // [rsp+158h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v21, a2, aV, 1LL);
  clap_builder::parser::error::MatchesError::unwrap(v20, aV, 1LL, v21);
  v10 = *(_QWORD *)&v20[0];
  if ( *(_QWORD *)&v20[0] )
  {
    v14 = v20[3];
    v13 = v20[2];
    v12 = v20[1];
    v11 = v20[0];
  }
  else
  {
    *(_QWORD *)&v11 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v11 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *(_QWORD *)&v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *((_QWORD *)&v12 + 1) = 0LL;
    *((_QWORD *)&v13 + 1) = 0LL;
    *((_QWORD *)&v14 + 1) = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v21, a2, aA, 1LL);
  clap_builder::parser::error::MatchesError::unwrap(v19, aA, 1LL, v21);
  if ( *(_QWORD *)&v19[0] )
  {
    v18 = v19[3];
    v17 = v19[2];
    v16 = v19[1];
    v15 = v19[0];
  }
  else
  {
    *(_QWORD *)&v15 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v15 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *(_QWORD *)&v16 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *((_QWORD *)&v16 + 1) = 0LL;
    *((_QWORD *)&v17 + 1) = 0LL;
    *((_QWORD *)&v18 + 1) = 0LL;
  }
  core::iter::traits::iterator::Iterator::chain(v21, &v11, &v15);
  v2 = core::iter::adapters::chain::and_then_or_clear(v21);
  result = core::option::Option<T>::or_else(v2, v22);
  if ( result )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      uu_join::parse_file_number((__int64)v19, *(_QWORD *)(result + 8), *(_QWORD *)(result + 16));
      result = *(_QWORD *)&v19[0];
      if ( *(_QWORD *)&v19[0] )
        break;
      if ( BYTE8(v19[0]) )
        v4 = 1;
      else
        v5 = 1;
      v6 = core::iter::adapters::chain::and_then_or_clear(v21);
      result = core::option::Option<T>::or_else(v6, v22);
      if ( !result )
      {
        v7 = v5 & 1;
        v8 = v4 & 1;
        goto LABEL_16;
      }
    }
    v9 = *((_QWORD *)&v19[0] + 1);
    *a1 = *(_QWORD *)&v19[0];
    a1[1] = v9;
  }
  else
  {
    v7 = 0;
    v8 = 0;
LABEL_16:
    *((_BYTE *)a1 + 8) = v10 == 0;
    *((_BYTE *)a1 + 9) = v7;
    *((_BYTE *)a1 + 10) = v8;
    *a1 = 0LL;
  }
  return result;
}
