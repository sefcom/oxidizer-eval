__int64 __fastcall just::parser::Parser::forbid(__int64 a1, _QWORD *a2)
{
  char v2; // cl
  __int64 result; // rax
  int v4; // edx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _BYTE v8[7]; // [rsp+0h] [rbp-E8h]
  int v9; // [rsp+8h] [rbp-E0h]
  __int128 v10; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+20h] [rbp-C8h]
  __int128 v12; // [rsp+30h] [rbp-B8h]
  __int128 v13; // [rsp+40h] [rbp-A8h]
  unsigned __int8 v14; // [rsp+50h] [rbp-98h]
  _BYTE v15[7]; // [rsp+51h] [rbp-97h]
  char v16; // [rsp+58h] [rbp-90h]
  _BYTE v17[7]; // [rsp+59h] [rbp-8Fh]
  __int128 v18; // [rsp+60h] [rbp-88h]
  __int128 v19; // [rsp+70h] [rbp-78h]
  __int128 v20; // [rsp+80h] [rbp-68h]
  __int128 v21; // [rsp+90h] [rbp-58h]
  __int128 v22; // [rsp+A0h] [rbp-48h]
  __int128 v23; // [rsp+B0h] [rbp-38h]
  __int128 v24; // [rsp+C0h] [rbp-28h]
  __int128 v25; // [rsp+D0h] [rbp-18h]

  just::parser::Parser::next((__int64)&v10, a2);
  v2 = v16;
  v18 = v10;
  v19 = v11;
  v20 = v12;
  v21 = v13;
  result = v14;
  *(_DWORD *)v8 = *(_DWORD *)v15;
  *(_DWORD *)&v8[3] = *(_DWORD *)&v15[3];
  if ( v16 == 37 )
  {
    v22 = v18;
    v23 = v19;
    v24 = v20;
    v25 = v21;
    v9 = *(_DWORD *)v8;
    HIBYTE(v9) = v15[3];
    if ( v14 == 24 )
    {
      v13 = v25;
      v12 = v24;
      v11 = v23;
      v10 = v22;
      v14 = 24;
      *(_DWORD *)v15 = v9;
      *(_DWORD *)&v15[3] = *(_DWORD *)&v8[3];
      return just::parser::Parser::parse_recipe::{{closure}}(a1, &v10);
    }
    else
    {
      *(_BYTE *)(a1 + 72) = 37;
    }
  }
  else
  {
    v4 = *(_DWORD *)v17;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v17[3];
    *(_DWORD *)(a1 + 73) = v4;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    *(_OWORD *)(a1 + 48) = v21;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)&v8[3];
    *(_DWORD *)(a1 + 65) = *(_DWORD *)v8;
    *(_BYTE *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 72) = v2;
  }
  return result;
}