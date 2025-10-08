__int64 __fastcall just::lexer::Lexer::accepted(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  _OWORD v7[4]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(a2 + 192) == a3 )
  {
    result = just::lexer::Lexer::advance((__int64)v7, a2);
    if ( BYTE8(v8) == 37 )
    {
      *(_BYTE *)a1 = 1;
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      *(_OWORD *)(a1 + 64) = v8;
      v4 = v7[0];
      v5 = v7[1];
      v6 = v7[2];
      *(_OWORD *)(a1 + 48) = v7[3];
      *(_OWORD *)(a1 + 32) = v6;
      *(_OWORD *)(a1 + 16) = v5;
      *(_OWORD *)a1 = v4;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}