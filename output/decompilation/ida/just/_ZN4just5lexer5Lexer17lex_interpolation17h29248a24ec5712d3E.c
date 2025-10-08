__int64 __fastcall just::lexer::Lexer::lex_interpolation(_OWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD v11[4]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int8)just::lexer::Lexer::rest_starts_with(a2, (__int64)asc_712CC, 2LL) )
  {
    v6 = a2[5];
    if ( v6 && (a2[5] = v6 - 1, *(_BYTE *)(a2[4] + 72 * v6 - 8) != 37) )
    {
      return just::lexer::Lexer::lex_double(a1, a2, 26LL);
    }
    else
    {
      result = just::lexer::Lexer::advance((__int64)v11, (__int64)a2);
      if ( BYTE8(v12) == 37 && (result = just::lexer::Lexer::advance((__int64)v11, (__int64)a2), BYTE8(v12) == 37) )
      {
        return just::lexer::Lexer::internal_error(a1, a2, aLexerLexInterp, 82LL);
      }
      else
      {
        a1[4] = v12;
        v8 = v11[0];
        v9 = v11[1];
        v10 = v11[2];
        a1[3] = v11[3];
        a1[2] = v10;
        a1[1] = v9;
        *a1 = v8;
      }
    }
  }
  else if ( just::lexer::Lexer::at_eol_or_eof(a2) )
  {
    return just::lexer::Lexer::unterminated_interpolation_error((__int64)a1, a3);
  }
  else
  {
    return just::lexer::Lexer::lex_normal(a1, a2, a4);
  }
  return result;
}