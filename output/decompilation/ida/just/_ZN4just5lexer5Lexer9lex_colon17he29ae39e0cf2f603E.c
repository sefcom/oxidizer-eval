__int64 __fastcall just::lexer::Lexer::lex_colon(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // cl
  __int64 v5; // rdi
  char v6; // si
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  int v13; // esi
  _BYTE v14[80]; // [rsp+8h] [rbp-60h] BYREF

  result = just::lexer::Lexer::presume((__int64)v14, a2, 58LL);
  if ( v14[72] == 37 )
  {
    just::lexer::Lexer::accepted((__int64)v14, a2, 61);
    result = v14[0];
    v4 = v14[72];
    if ( v14[72] == 37 )
    {
      if ( (v14[0] & 1) != 0 )
      {
        v5 = a2;
        v6 = 14;
        goto LABEL_5;
      }
      just::lexer::Lexer::accepted((__int64)v14, a2, 58);
      result = v14[0];
      v4 = v14[72];
      if ( v14[72] == 37 )
      {
        if ( (v14[0] & 1) == 0 )
        {
          result = just::lexer::Lexer::token(a2, 12);
          *(_BYTE *)(a2 + 197) = 1;
          goto LABEL_6;
        }
        v5 = a2;
        v6 = 13;
LABEL_5:
        result = just::lexer::Lexer::token(v5, v6);
LABEL_6:
        *(_BYTE *)(a1 + 72) = 37;
        return result;
      }
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v14[64];
    v10 = *(_OWORD *)&v14[1];
    v11 = *(_OWORD *)&v14[17];
    v12 = *(_OWORD *)&v14[33];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v14[49];
    *(_OWORD *)(a1 + 33) = v12;
    *(_OWORD *)(a1 + 17) = v11;
    *(_OWORD *)(a1 + 1) = v10;
    v13 = *(_DWORD *)&v14[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v14[73];
    *(_DWORD *)(a1 + 76) = v13;
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 72) = v4;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v14[64];
    v7 = *(_OWORD *)v14;
    v8 = *(_OWORD *)&v14[16];
    v9 = *(_OWORD *)&v14[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v14[48];
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
  }
  return result;
}