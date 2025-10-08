__int64 __fastcall just::lexer::Lexer::lex_body(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  bool v4; // cf
  __int64 v5; // rdi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v14; // [rsp+10h] [rbp-88h] BYREF
  __int128 v15; // [rsp+20h] [rbp-78h]
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]

  while ( 1 )
  {
    while ( (unsigned __int8)just::lexer::Lexer::rest_starts_with(a2, (__int64)asc_68968, 4LL) )
    {
      just::lexer::Lexer::skip((__int64)&v14, (__int64)a2);
      if ( BYTE8(v18) != 37 )
        goto LABEL_21;
    }
    if ( (unsigned __int8)just::lexer::Lexer::rest_starts_with(a2, (__int64)asc_6E198, 1LL) )
      break;
    if ( (unsigned __int8)just::lexer::Lexer::rest_starts_with(a2, (__int64)asc_6E55E, 2LL) )
    {
      if ( a2[20] != a2[23] )
        just::lexer::Lexer::token((__int64)a2, 34);
      return just::lexer::Lexer::lex_double(a1, a2, 20LL);
    }
    if ( (unsigned __int8)just::lexer::Lexer::rest_starts_with(a2, (__int64)&unk_70957, 2LL) )
    {
      if ( a2[20] != a2[23] )
        just::lexer::Lexer::token((__int64)a2, 34);
      just::lexer::Lexer::lex_double(&v14, a2, 27LL);
      if ( BYTE8(v18) != 37 )
      {
LABEL_21:
        result = a1;
        *(_OWORD *)(a1 + 64) = v18;
        v10 = v14;
        v11 = v15;
        v12 = v16;
        *(_OWORD *)(a1 + 48) = v17;
        *(_OWORD *)(a1 + 32) = v12;
        *(_OWORD *)(a1 + 16) = v11;
        *(_OWORD *)a1 = v10;
        return result;
      }
      v3 = a2[11];
      v4 = v3 == 0;
      v5 = v3 - 1;
      if ( v4 )
        core::panicking::panic_bounds_check(v5, 0LL, &off_4304B8);
      v6 = a2[10];
      *(_QWORD *)&v18 = *(_QWORD *)(v6 + 72 * v5 + 64);
      v7 = *(_OWORD *)(v6 + 72 * v5);
      v8 = *(_OWORD *)(v6 + 72 * v5 + 16);
      v9 = *(_OWORD *)(v6 + 72 * v5 + 32);
      v17 = *(_OWORD *)(v6 + 72 * v5 + 48);
      v16 = v9;
      v15 = v8;
      v14 = v7;
      alloc::vec::Vec<T,A>::push(a2 + 3, &v14, &off_4304D0);
      goto LABEL_24;
    }
    if ( just::lexer::Lexer::at_eof(a2) )
    {
      if ( a2[20] != a2[23] )
        just::lexer::Lexer::token((__int64)a2, 34);
LABEL_24:
      result = a1;
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    just::lexer::Lexer::advance((__int64)&v14, (__int64)a2);
    if ( BYTE8(v18) != 37 )
      goto LABEL_21;
  }
  if ( a2[20] != a2[23] )
    just::lexer::Lexer::token((__int64)a2, 34);
  return just::lexer::Lexer::lex_single(a1, a2, 20LL);
}