__int64 __fastcall just::justfile::Justfile::name(__int64 a1)
{
  char v1; // al
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  int v6; // edx
  _OWORD v7[4]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+40h] [rbp-8h]
  _BYTE v9[7]; // [rsp+41h] [rbp-7h]

  v1 = *(_BYTE *)(a1 + 560);
  if ( v1 == 37 )
    return 1LL;
  v3 = *(_OWORD *)(a1 + 496);
  v4 = *(_OWORD *)(a1 + 512);
  v5 = *(_OWORD *)(a1 + 528);
  v7[3] = *(_OWORD *)(a1 + 544);
  v7[2] = v5;
  v7[1] = v4;
  v7[0] = v3;
  v6 = *(_DWORD *)(a1 + 564);
  *(_DWORD *)v9 = *(_DWORD *)(a1 + 561);
  *(_DWORD *)&v9[3] = v6;
  v8 = v1;
  return just::token::Token::lexeme(v7);
}