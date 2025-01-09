__int64 __fastcall uu_more::Options::from(__int64 a1, __int64 a2)
{
  _WORD *v3; // rax
  _WORD *v4; // rax
  _WORD *v5; // r12
  unsigned __int64 *v6; // r13
  __int64 v7; // rax
  char v8; // r14
  char v9; // bp
  char v10; // al
  __int16 v11; // di
  bool v12; // cl
  unsigned __int64 v13; // rsi
  char flag; // [rsp+7h] [rbp-91h]
  __int16 v16; // [rsp+8h] [rbp-90h]
  __int16 v17; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v18; // [rsp+10h] [rbp-88h]
  _WORD *v19; // [rsp+18h] [rbp-80h]
  __int128 v20; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aLines, 5LL);
  v3 = (_WORD *)clap_builder::parser::error::MatchesError::unwrap(aLines, 5LL, &v20);
  v19 = v3;
  if ( v3 )
    LOWORD(v3) = *v3;
  v17 = (__int16)v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aNumber, 6LL);
  v4 = (_WORD *)clap_builder::parser::error::MatchesError::unwrap(aNumber, 6LL, &v20);
  v5 = v4;
  if ( v4 )
    LOWORD(v4) = *v4;
  v16 = (__int16)v4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aFromLine, 9LL);
  v6 = (unsigned __int64 *)clap_builder::parser::error::MatchesError::unwrap(aFromLine, 9LL, &v20);
  if ( v6 )
    v18 = *v6;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a2, aPattern, 7LL);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aPattern, 7LL, &v20);
  if ( v7 )
    <alloc::string::String as core::clone::Clone>::clone(&v22, v7);
  else
    *(_QWORD *)&v22 = 0x8000000000000000LL;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCleanPrint, 11LL);
  v21 = v23;
  v20 = v22;
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPrintOver, 10LL);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSilent, 6LL);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSqueeze, 7LL);
  v11 = v17;
  v12 = v17 != 0;
  if ( !v19 )
  {
    v12 = v5 != 0LL && v16 != 0;
    v11 = v16;
  }
  v13 = 0LL;
  if ( v18 >= 2 )
    v13 = v18 - 1;
  if ( !v6 )
    v13 = 0LL;
  *(_BYTE *)(a1 + 36) = flag;
  *(_QWORD *)(a1 + 24) = v13;
  *(_WORD *)(a1 + 32) = v12;
  *(_WORD *)(a1 + 34) = v11 + 1;
  *(_OWORD *)a1 = v20;
  *(_QWORD *)(a1 + 16) = v21;
  *(_BYTE *)(a1 + 37) = v8;
  *(_BYTE *)(a1 + 38) = v9;
  *(_BYTE *)(a1 + 39) = v10;
  return a1;
}
