__int64 __fastcall just::lexer::Lexer::lex_eol(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // cl
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  int v7; // esi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _BYTE v11[80]; // [rsp+0h] [rbp-78h] BYREF

  just::lexer::Lexer::accepted((__int64)v11, a2, 13);
  result = v11[0];
  v3 = v11[72];
  if ( v11[72] != 37 )
    goto LABEL_6;
  if ( (v11[0] & 1) != 0 )
  {
    just::lexer::Lexer::accepted((__int64)v11, a2, 10);
    result = v11[0];
    v3 = v11[72];
    if ( v11[72] == 37 )
    {
      if ( (v11[0] & 1) == 0 )
      {
        *(_QWORD *)v11 = 0x8000000000000045LL;
        return just::lexer::Lexer::error(a1, a2, v11);
      }
      goto LABEL_8;
    }
LABEL_6:
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v11[64];
    v4 = *(_OWORD *)&v11[1];
    v5 = *(_OWORD *)&v11[17];
    v6 = *(_OWORD *)&v11[33];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v11[49];
    *(_OWORD *)(a1 + 33) = v6;
    *(_OWORD *)(a1 + 17) = v5;
    *(_OWORD *)(a1 + 1) = v4;
    v7 = *(_DWORD *)&v11[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v11[73];
    *(_DWORD *)(a1 + 76) = v7;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 72) = v3;
    return result;
  }
  result = just::lexer::Lexer::presume((__int64)v11, a2, 10LL);
  if ( v11[72] == 37 )
  {
LABEL_8:
    result = just::lexer::Lexer::token(a2, 16 * (*(_QWORD *)(a2 + 64) != 0LL) + 20);
    *(_BYTE *)(a1 + 72) = 37;
    return result;
  }
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v11[64];
  v8 = *(_OWORD *)v11;
  v9 = *(_OWORD *)&v11[16];
  v10 = *(_OWORD *)&v11[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v11[48];
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  return result;
}