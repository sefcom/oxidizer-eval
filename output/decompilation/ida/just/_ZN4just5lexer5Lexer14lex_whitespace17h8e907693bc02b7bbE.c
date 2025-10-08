__int64 __fastcall just::lexer::Lexer::lex_whitespace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v6[4]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]

  if ( just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
  {
    while ( 1 )
    {
      result = just::lexer::Lexer::advance((__int64)v6, a2);
      if ( BYTE8(v7) != 37 )
        break;
      if ( !just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
        goto LABEL_4;
    }
    *(_OWORD *)(a1 + 64) = v7;
    v3 = v6[0];
    v4 = v6[1];
    v5 = v6[2];
    *(_OWORD *)(a1 + 48) = v6[3];
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
  else
  {
LABEL_4:
    result = just::lexer::Lexer::token(a2, 36);
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}