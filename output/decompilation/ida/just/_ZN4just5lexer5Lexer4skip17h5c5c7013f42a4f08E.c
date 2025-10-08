__int64 __fastcall just::lexer::Lexer::skip(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v6[4]; // [rsp+8h] [rbp-60h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]

  result = just::lexer::Lexer::advance((__int64)v6, a2);
  if ( BYTE8(v7) == 37
    && (result = just::lexer::Lexer::advance((__int64)v6, a2), BYTE8(v7) == 37)
    && (result = just::lexer::Lexer::advance((__int64)v6, a2), BYTE8(v7) == 37)
    && (result = just::lexer::Lexer::advance((__int64)v6, a2), BYTE8(v7) == 37) )
  {
    *(_BYTE *)(a1 + 72) = 37;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = v7;
    v3 = v6[0];
    v4 = v6[1];
    v5 = v6[2];
    *(_OWORD *)(a1 + 48) = v6[3];
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
  return result;
}