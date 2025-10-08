__int64 __fastcall just::lexer::Lexer::lex_escape(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // cl
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // esi
  unsigned __int64 v11; // rax
  _BYTE v12[80]; // [rsp+8h] [rbp-80h] BYREF

  result = just::lexer::Lexer::presume((__int64)v12, a2, 92LL);
  if ( v12[72] != 37 )
  {
LABEL_17:
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v12[64];
    v4 = *(_OWORD *)v12;
    v5 = *(_OWORD *)&v12[16];
    v6 = *(_OWORD *)&v12[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v12[48];
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return result;
  }
  just::lexer::Lexer::accepted((__int64)v12, a2, 10);
  result = v12[0];
  v3 = v12[72];
  if ( v12[72] != 37 )
    goto LABEL_18;
  if ( (v12[0] & 1) != 0 )
  {
    if ( just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
    {
      while ( 1 )
      {
        result = just::lexer::Lexer::advance((__int64)v12, a2);
        if ( v12[72] != 37 )
          goto LABEL_17;
        if ( !just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  just::lexer::Lexer::accepted((__int64)v12, a2, 13);
  result = v12[0];
  v3 = v12[72];
  if ( v12[72] != 37 )
    goto LABEL_18;
  if ( (v12[0] & 1) != 0 )
  {
    just::lexer::Lexer::accepted((__int64)v12, a2, 10);
    result = v12[0];
    v3 = v12[72];
    if ( v12[72] == 37 )
    {
      if ( (v12[0] & 1) != 0 )
      {
        while ( just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
        {
          result = just::lexer::Lexer::advance((__int64)v12, a2);
          if ( v12[72] != 37 )
            goto LABEL_17;
        }
LABEL_7:
        result = just::lexer::Lexer::token(a2, 36);
LABEL_8:
        *(_BYTE *)(a1 + 72) = 37;
        return result;
      }
      v11 = 0x8000000000000045LL;
      goto LABEL_22;
    }
LABEL_18:
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v12[64];
    v7 = *(_OWORD *)&v12[1];
    v8 = *(_OWORD *)&v12[17];
    v9 = *(_OWORD *)&v12[33];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v12[49];
    *(_OWORD *)(a1 + 33) = v9;
    *(_OWORD *)(a1 + 17) = v8;
    *(_OWORD *)(a1 + 1) = v7;
    v10 = *(_DWORD *)&v12[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v12[73];
    *(_DWORD *)(a1 + 76) = v10;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 72) = v3;
    return result;
  }
  result = *(unsigned int *)(a2 + 192);
  if ( (_DWORD)result == (_DWORD)&unk_110000 )
    goto LABEL_8;
  *(_DWORD *)&v12[8] = *(_DWORD *)(a2 + 192);
  v11 = 0x800000000000002ALL;
LABEL_22:
  *(_QWORD *)v12 = v11;
  return just::lexer::Lexer::error(a1, a2, v12);
}