__int64 __fastcall uu_join::parse_print_settings(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char v4; // bp
  char v5; // r13
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-1C0h]
  __int128 v10; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v11; // [rsp+20h] [rbp-1A8h]
  __int128 v12; // [rsp+30h] [rbp-198h]
  __int128 v13; // [rsp+40h] [rbp-188h]
  __int128 v14; // [rsp+50h] [rbp-178h] BYREF
  __int128 v15; // [rsp+60h] [rbp-168h]
  __int128 v16; // [rsp+70h] [rbp-158h]
  __int128 v17; // [rsp+80h] [rbp-148h]
  _OWORD v18[4]; // [rsp+98h] [rbp-130h] BYREF
  _OWORD v19[4]; // [rsp+D8h] [rbp-F0h] BYREF
  _BYTE v20[64]; // [rsp+118h] [rbp-B0h] BYREF
  _BYTE v21[112]; // [rsp+158h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v20, a2, aV);
  clap_builder::parser::error::MatchesError::unwrap(v19, aV, v20);
  v9 = *(_QWORD *)&v19[0];
  if ( *(_QWORD *)&v19[0] )
  {
    v13 = v19[3];
    v12 = v19[2];
    v11 = v19[1];
    v10 = v19[0];
  }
  else
  {
    *(_QWORD *)&v10 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v10 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *(_QWORD *)&v11 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *((_QWORD *)&v11 + 1) = 0LL;
    *((_QWORD *)&v12 + 1) = 0LL;
    *((_QWORD *)&v13 + 1) = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v20, a2, aA);
  clap_builder::parser::error::MatchesError::unwrap(v18, aA, v20);
  if ( *(_QWORD *)&v18[0] )
  {
    v17 = v18[3];
    v16 = v18[2];
    v15 = v18[1];
    v14 = v18[0];
  }
  else
  {
    *(_QWORD *)&v14 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v14 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *(_QWORD *)&v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *((_QWORD *)&v15 + 1) = 0LL;
    *((_QWORD *)&v16 + 1) = 0LL;
    *((_QWORD *)&v17 + 1) = 0LL;
  }
  core::iter::traits::iterator::Iterator::chain(v20, &v10, &v14);
  v2 = core::iter::adapters::chain::and_then_or_clear(v20);
  v3 = core::option::Option<T>::or_else(v2, v21);
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      uu_join::parse_file_number(v18, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
      result = *(_QWORD *)&v18[0];
      if ( *(_QWORD *)&v18[0] )
        break;
      if ( BYTE8(v18[0]) )
        v5 = 1;
      else
        v4 = 1;
      v7 = core::iter::adapters::chain::and_then_or_clear(v20);
      v3 = core::option::Option<T>::or_else(v7, v21);
      if ( !v3 )
        goto LABEL_16;
    }
    v8 = *((_QWORD *)&v18[0] + 1);
    *(_QWORD *)a1 = *(_QWORD *)&v18[0];
    *(_QWORD *)(a1 + 8) = v8;
  }
  else
  {
    v5 = 0;
    v4 = 0;
LABEL_16:
    result = a1;
    *(_BYTE *)(a1 + 8) = v9 == 0;
    *(_BYTE *)(a1 + 9) = v4;
    *(_BYTE *)(a1 + 10) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}