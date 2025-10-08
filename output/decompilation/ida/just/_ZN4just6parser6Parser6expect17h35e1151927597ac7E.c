__int64 __fastcall just::parser::Parser::expect(__int64 a1, _QWORD *a2)
{
  char v2; // cl
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  int v8; // edx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  _BYTE v15[7]; // [rsp+0h] [rbp-108h]
  _BYTE v16[72]; // [rsp+8h] [rbp-100h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B8h]
  __int128 v18; // [rsp+60h] [rbp-A8h]
  __int128 v19; // [rsp+70h] [rbp-98h]
  __int128 v20; // [rsp+80h] [rbp-88h]
  __int128 v21; // [rsp+90h] [rbp-78h]
  __int128 v22; // [rsp+A0h] [rbp-68h]
  __int128 v23; // [rsp+B0h] [rbp-58h]
  __int128 v24; // [rsp+C0h] [rbp-48h]
  __int128 v25; // [rsp+D0h] [rbp-38h]
  __int128 v26; // [rsp+E0h] [rbp-28h]

  just::parser::Parser::accept(v16);
  v2 = v17;
  v18 = *(_OWORD *)v16;
  v19 = *(_OWORD *)&v16[16];
  v20 = *(_OWORD *)&v16[32];
  v21 = *(_OWORD *)&v16[48];
  result = v16[64];
  *(_DWORD *)v15 = *(_DWORD *)&v16[65];
  *(_DWORD *)&v15[3] = *(_DWORD *)&v16[68];
  if ( (_BYTE)v17 == 37 )
  {
    if ( v16[64] == 37 )
    {
      result = just::parser::Parser::unexpected_token((__int64)v16, a2);
      v26 = v17;
      v4 = *(_OWORD *)&v16[8];
      v5 = *(_OWORD *)&v16[24];
      v6 = *(_OWORD *)&v16[40];
      v7 = *(_OWORD *)&v16[56];
      v25 = *(_OWORD *)&v16[56];
      v24 = *(_OWORD *)&v16[40];
      v23 = *(_OWORD *)&v16[24];
      v22 = *(_OWORD *)&v16[8];
      *(_OWORD *)(a1 + 64) = v17;
      *(_OWORD *)(a1 + 48) = v7;
      *(_OWORD *)(a1 + 32) = v6;
      *(_OWORD *)(a1 + 16) = v5;
      *(_OWORD *)a1 = v4;
    }
    else
    {
      v12 = v18;
      v13 = v19;
      v14 = v20;
      *(_OWORD *)(a1 + 48) = v21;
      *(_OWORD *)(a1 + 32) = v14;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v12;
      *(_DWORD *)(a1 + 65) = *(_DWORD *)v15;
      *(_DWORD *)(a1 + 68) = *(_DWORD *)&v15[3];
      *(_BYTE *)(a1 + 64) = result;
      *(_BYTE *)(a1 + 72) = 37;
    }
  }
  else
  {
    v8 = *(_DWORD *)((char *)&v17 + 1);
    *(_DWORD *)(a1 + 76) = DWORD1(v17);
    *(_DWORD *)(a1 + 73) = v8;
    v9 = v18;
    v10 = v19;
    v11 = v20;
    *(_OWORD *)(a1 + 48) = v21;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)&v15[3];
    *(_DWORD *)(a1 + 65) = *(_DWORD *)v15;
    *(_BYTE *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 72) = v2;
  }
  return result;
}