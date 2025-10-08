__int64 __fastcall just::parser::Parser::next(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // edx
  _QWORD v12[2]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v13[72]; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+60h] [rbp-78h]
  __int128 v15; // [rsp+70h] [rbp-68h]
  __int128 v16; // [rsp+80h] [rbp-58h]
  __int128 v17; // [rsp+90h] [rbp-48h]
  __int128 v18; // [rsp+A0h] [rbp-38h]
  __int128 v19; // [rsp+B0h] [rbp-28h]

  v12[0] = just::parser::Parser::rest(a2);
  v12[1] = v2;
  core::iter::traits::iterator::Iterator::try_fold(v13, v12);
  result = v13[64];
  if ( v13[64] == 37 )
  {
    result = just::parser::Parser::internal_error((__int64)v13, (__int64)a2);
    v19 = v14;
    v4 = *(_OWORD *)&v13[8];
    v5 = *(_OWORD *)&v13[24];
    v6 = *(_OWORD *)&v13[40];
    v7 = *(_OWORD *)&v13[56];
    v18 = *(_OWORD *)&v13[56];
    v17 = *(_OWORD *)&v13[40];
    v16 = *(_OWORD *)&v13[24];
    v15 = *(_OWORD *)&v13[8];
    *(_OWORD *)(a1 + 64) = v14;
    *(_OWORD *)(a1 + 48) = v7;
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
  }
  else
  {
    v8 = *(_OWORD *)v13;
    v9 = *(_OWORD *)&v13[16];
    v10 = *(_OWORD *)&v13[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v13[48];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    v11 = *(_DWORD *)&v13[68];
    *(_DWORD *)(a1 + 65) = *(_DWORD *)&v13[65];
    *(_DWORD *)(a1 + 68) = v11;
    *(_BYTE *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}