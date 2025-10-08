__int64 __fastcall just::lexer::Lexer::lex_identifier(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int i; // eax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  _OWORD v7[4]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]

  result = just::lexer::Lexer::advance((__int64)v7, a2);
  if ( BYTE8(v8) == 37 )
  {
    for ( i = *(_DWORD *)(a2 + 192); i != (_DWORD)&unk_110000; i = *(_DWORD *)(a2 + 192) )
    {
      if ( i - 97 >= 0x1A && (i < 0x41 || i >= 0x5B && i != 95) && i - 48 >= 0xA && i != 45 )
        break;
      result = just::lexer::Lexer::advance((__int64)v7, a2);
      if ( BYTE8(v8) != 37 )
        goto LABEL_10;
    }
    result = just::lexer::Lexer::token(a2, 24);
    *(_BYTE *)(a1 + 72) = 37;
  }
  else
  {
LABEL_10:
    *(_OWORD *)(a1 + 64) = v8;
    v4 = v7[0];
    v5 = v7[1];
    v6 = v7[2];
    *(_OWORD *)(a1 + 48) = v7[3];
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
  }
  return result;
}