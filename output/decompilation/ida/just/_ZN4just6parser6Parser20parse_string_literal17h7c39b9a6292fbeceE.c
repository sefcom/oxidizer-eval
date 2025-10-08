__int64 __fastcall just::parser::Parser::parse_string_literal(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  char v4; // dl
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // [rsp+0h] [rbp-C8h]
  _BYTE v9[55]; // [rsp+0h] [rbp-C8h]
  int v10; // [rsp+40h] [rbp-88h] BYREF
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int128 v12; // [rsp+50h] [rbp-78h]
  __int128 v13; // [rsp+60h] [rbp-68h]
  __int128 v14; // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+80h] [rbp-48h]
  char v16; // [rsp+88h] [rbp-40h]
  __int128 v17; // [rsp+89h] [rbp-3Fh]
  __int128 v18; // [rsp+99h] [rbp-2Fh]
  _BYTE v19[23]; // [rsp+A9h] [rbp-1Fh]

  just::parser::Parser::parse_string_literal_token((__int64)&v10, a2);
  if ( v10 == 1 )
  {
    result = v11;
    v3 = v15;
    v4 = v16;
    v8 = v17;
    HIBYTE(v8) = BYTE7(v17);
    v5 = v12;
    v6 = v13;
    v7 = v14;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)((char *)&v17 + 7);
    *(_QWORD *)(a1 + 65) = v8;
    *(_QWORD *)a1 = result;
    *(_OWORD *)(a1 + 8) = v5;
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 56) = v3;
    *(_BYTE *)(a1 + 64) = v4;
  }
  else
  {
    *(_QWORD *)&v9[47] = *(_QWORD *)&v19[15];
    *(_OWORD *)&v9[32] = *(_OWORD *)v19;
    *(_OWORD *)&v9[16] = v18;
    *(_OWORD *)v9 = v17;
    *(_QWORD *)(a1 + 32) = *(_OWORD *)v19 >> 56;
    result = *(_QWORD *)&v9[47];
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v9[47];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v9[23];
    *(_OWORD *)a1 = *(_OWORD *)&v9[7];
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}