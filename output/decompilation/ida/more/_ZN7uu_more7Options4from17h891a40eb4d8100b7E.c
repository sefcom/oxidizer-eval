__int64 __fastcall uu_more::Options::from(__int64 a1, __int64 a2)
{
  void *v2; // r14
  _WORD *v3; // rax
  _WORD *v4; // rax
  _WORD *v5; // r13
  unsigned __int64 *v6; // r12
  __int64 v7; // rax
  char v8; // bp
  char v9; // al
  bool v10; // cl
  unsigned __int64 v11; // rsi
  char v13; // [rsp+2h] [rbp-86h]
  char flag; // [rsp+3h] [rbp-85h]
  __int16 v15; // [rsp+4h] [rbp-84h]
  unsigned __int64 v16; // [rsp+8h] [rbp-80h]
  _WORD *v17; // [rsp+10h] [rbp-78h]
  __int128 v18; // [rsp+18h] [rbp-70h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  _BYTE v20[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = &unk_1F51B;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v20, a2, &unk_1F51B, 5LL);
  v3 = (_WORD *)clap_builder::parser::error::MatchesError::unwrap(&unk_1F51B, 5LL, v20);
  v17 = v3;
  if ( v3 )
    LOWORD(v2) = *v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v20, a2, aNumber, 6LL);
  v4 = (_WORD *)clap_builder::parser::error::MatchesError::unwrap(aNumber, 6LL, v20);
  v5 = v4;
  if ( v4 )
    LOWORD(v4) = *v4;
  v15 = (__int16)v4;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v20, a2);
  v6 = (unsigned __int64 *)clap_builder::parser::error::MatchesError::unwrap(v20);
  if ( v6 )
    v16 = *v6;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v20, a2);
  v7 = clap_builder::parser::error::MatchesError::unwrap(v20);
  if ( v7 )
    <alloc::string::String as core::clone::Clone>::clone(&v18, v7);
  else
    *(_QWORD *)&v18 = 0x8000000000000000LL;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCleanPrint, 11LL);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPrintOver, 10LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSilent, 6LL);
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSqueeze, 7LL);
  v10 = (_WORD)v2 != 0;
  if ( !v17 )
  {
    v10 = v5 != 0LL && v15 != 0;
    LOWORD(v2) = v15;
  }
  v11 = 0LL;
  if ( v16 >= 2 )
    v11 = v16 - 1;
  if ( !v6 )
    v11 = 0LL;
  *(_BYTE *)(a1 + 36) = flag;
  *(_QWORD *)(a1 + 24) = v11;
  *(_WORD *)(a1 + 32) = v10;
  *(_WORD *)(a1 + 34) = (_WORD)v2 + 1;
  *(_OWORD *)a1 = v18;
  *(_QWORD *)(a1 + 16) = v19;
  *(_BYTE *)(a1 + 37) = v13;
  *(_BYTE *)(a1 + 38) = v8;
  *(_BYTE *)(a1 + 39) = v9;
  return a1;
}