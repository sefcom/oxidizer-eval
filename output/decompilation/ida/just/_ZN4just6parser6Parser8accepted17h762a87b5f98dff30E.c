__int64 __fastcall just::parser::Parser::accepted(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  char v4; // cl
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // [rsp+8h] [rbp-A0h]
  _OWORD v9[4]; // [rsp+10h] [rbp-98h] BYREF
  char v10; // [rsp+50h] [rbp-58h]
  _BYTE v11[7]; // [rsp+51h] [rbp-57h]
  unsigned __int8 v12; // [rsp+58h] [rbp-50h]
  _BYTE v13[7]; // [rsp+59h] [rbp-4Fh]
  __int128 v14; // [rsp+60h] [rbp-48h]
  __int128 v15; // [rsp+70h] [rbp-38h]
  __int128 v16; // [rsp+80h] [rbp-28h]
  __int128 v17; // [rsp+90h] [rbp-18h]

  just::parser::Parser::accept((__int64)v9, a2, a3);
  result = v12;
  if ( v12 == 37 )
  {
    *(_BYTE *)a1 = v10 != 37;
  }
  else
  {
    v17 = v9[3];
    v16 = v9[2];
    v15 = v9[1];
    v14 = v9[0];
    v4 = v10;
    LODWORD(v8) = *(_DWORD *)v11;
    *(_DWORD *)((char *)&v8 + 3) = *(_DWORD *)&v11[3];
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v13[3];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)v13;
    v5 = v14;
    v6 = v15;
    v7 = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    *(_DWORD *)(a1 + 65) = v8;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v8 + 3);
    *(_BYTE *)(a1 + 64) = v4;
  }
  *(_BYTE *)(a1 + 72) = result;
  return result;
}