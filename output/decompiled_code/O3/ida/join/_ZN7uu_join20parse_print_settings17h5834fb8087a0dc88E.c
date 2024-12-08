__int64 __fastcall uu_join::parse_print_settings(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  char v5; // bp
  char v6; // r13
  __int64 v7; // rax
  char v8; // bp
  char v9; // r13
  __int64 v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-1C0h]
  __int128 v12; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v13; // [rsp+20h] [rbp-1A8h]
  __int128 v14; // [rsp+30h] [rbp-198h]
  __int128 v15; // [rsp+40h] [rbp-188h]
  __int128 v16; // [rsp+50h] [rbp-178h] BYREF
  __int128 v17; // [rsp+60h] [rbp-168h]
  __int128 v18; // [rsp+70h] [rbp-158h]
  __int128 v19; // [rsp+80h] [rbp-148h]
  _OWORD v20[4]; // [rsp+98h] [rbp-130h] BYREF
  _OWORD v21[4]; // [rsp+D8h] [rbp-F0h] BYREF
  _BYTE v22[64]; // [rsp+118h] [rbp-B0h] BYREF
  _BYTE v23[112]; // [rsp+158h] [rbp-70h] BYREF

  v2 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v22, a2, aV, 1LL);
  clap_builder::parser::error::MatchesError::unwrap(v21, aV, 1LL, v22);
  v11 = *(_QWORD *)&v21[0];
  if ( *(_QWORD *)&v21[0] )
  {
    v15 = v21[3];
    v14 = v21[2];
    v13 = v21[1];
    v12 = v21[0];
  }
  else
  {
    *(_QWORD *)&v12 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v12 + 1) = "&";
    *(_QWORD *)&v13 = "&";
    *((_QWORD *)&v13 + 1) = 0LL;
    *((_QWORD *)&v14 + 1) = 0LL;
    *((_QWORD *)&v15 + 1) = 0LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v22, a2, aA, 1LL);
  clap_builder::parser::error::MatchesError::unwrap(v20, aA, 1LL, v22);
  if ( *(_QWORD *)&v20[0] )
  {
    v19 = v20[3];
    v18 = v20[2];
    v17 = v20[1];
    v16 = v20[0];
  }
  else
  {
    *(_QWORD *)&v16 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v16 + 1) = "&";
    *(_QWORD *)&v17 = "&";
    *((_QWORD *)&v17 + 1) = 0LL;
    *((_QWORD *)&v18 + 1) = 0LL;
    *((_QWORD *)&v19 + 1) = 0LL;
  }
  core::iter::traits::iterator::Iterator::chain(v22, &v12, &v16);
  v3 = core::iter::adapters::chain::and_then_or_clear(v22);
  result = core::option::Option<T>::or_else(v3, v23);
  if ( result )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      uu_join::parse_file_number(v20, *(_QWORD *)(result + 8), *(_QWORD *)(result + 16));
      result = *(_QWORD *)&v20[0];
      if ( *(_QWORD *)&v20[0] )
        break;
      if ( BYTE8(v20[0]) )
        v6 = 1;
      else
        v5 = 1;
      v7 = core::iter::adapters::chain::and_then_or_clear(v22);
      result = core::option::Option<T>::or_else(v7, v23);
      if ( !result )
      {
        v8 = v5 & 1;
        v9 = v6 & 1;
        v2 = a1;
        goto LABEL_16;
      }
    }
    v10 = *((_QWORD *)&v20[0] + 1);
    *a1 = *(_QWORD *)&v20[0];
    a1[1] = v10;
  }
  else
  {
    v9 = 0;
    v8 = 0;
LABEL_16:
    *((_BYTE *)v2 + 8) = v11 == 0;
    *((_BYTE *)v2 + 9) = v8;
    *((_BYTE *)v2 + 10) = v9;
    *v2 = 0LL;
  }
  return result;
}
