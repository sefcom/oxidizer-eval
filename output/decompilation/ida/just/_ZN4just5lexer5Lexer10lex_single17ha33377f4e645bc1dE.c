__int64 __fastcall just::lexer::Lexer::lex_single(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _OWORD v8[4]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  result = just::lexer::Lexer::advance((__int64)v8, a2);
  if ( BYTE8(v9) == 37 )
  {
    result = just::lexer::Lexer::token(a2, a3);
    *(_BYTE *)(a1 + 72) = 37;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = v9;
    v5 = v8[0];
    v6 = v8[1];
    v7 = v8[2];
    *(_OWORD *)(a1 + 48) = v8[3];
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
  return result;
}