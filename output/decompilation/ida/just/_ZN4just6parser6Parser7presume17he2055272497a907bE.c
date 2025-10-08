__int64 __fastcall just::parser::Parser::presume(__int64 a1, _QWORD *a2, char a3)
{
  char v4; // cl
  __int64 result; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // ecx
  int v11; // edx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  int v15; // edx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  char v20; // [rsp+7h] [rbp-1A1h] BYREF
  _DWORD v21[2]; // [rsp+8h] [rbp-1A0h]
  _QWORD v22[4]; // [rsp+10h] [rbp-198h] BYREF
  _BYTE v23[72]; // [rsp+30h] [rbp-178h] BYREF
  __int128 v24; // [rsp+78h] [rbp-130h]
  _OWORD v25[4]; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int8 v26; // [rsp+D0h] [rbp-D8h]
  _BYTE v27[7]; // [rsp+D1h] [rbp-D7h]
  char v28; // [rsp+D8h] [rbp-D0h]
  _BYTE v29[7]; // [rsp+D9h] [rbp-CFh]
  __int128 v30; // [rsp+100h] [rbp-A8h]
  __int128 v31; // [rsp+110h] [rbp-98h]
  __int128 v32; // [rsp+120h] [rbp-88h]
  __int128 v33; // [rsp+130h] [rbp-78h]
  __int128 v34; // [rsp+140h] [rbp-68h]
  __int128 v35; // [rsp+150h] [rbp-58h]
  __int128 v36; // [rsp+160h] [rbp-48h]
  __int128 v37; // [rsp+170h] [rbp-38h]
  unsigned __int8 v38; // [rsp+180h] [rbp-28h] BYREF
  _DWORD v39[9]; // [rsp+181h] [rbp-27h]

  v20 = a3;
  just::parser::Parser::advance((__int64)v25, a2);
  v4 = v28;
  *(_OWORD *)v23 = v25[0];
  *(_OWORD *)&v23[16] = v25[1];
  *(_OWORD *)&v23[32] = v25[2];
  *(_OWORD *)&v23[48] = v25[3];
  result = v26;
  LODWORD(v22[0]) = *(_DWORD *)v27;
  *(_DWORD *)((char *)v22 + 3) = *(_DWORD *)&v27[3];
  if ( v28 == 37 )
  {
    v30 = *(_OWORD *)v23;
    v31 = *(_OWORD *)&v23[16];
    v32 = *(_OWORD *)&v23[32];
    v33 = *(_OWORD *)&v23[48];
    v21[0] = v22[0];
    *(_DWORD *)((char *)v21 + 3) = *(_DWORD *)((char *)v22 + 3);
    v34 = *(_OWORD *)v23;
    v35 = *(_OWORD *)&v23[16];
    v36 = *(_OWORD *)&v23[32];
    v37 = *(_OWORD *)&v23[48];
    v38 = v26;
    v6 = *(unsigned int *)((char *)v22 + 3);
    v39[0] = v22[0];
    *(_DWORD *)((char *)v39 + 3) = *(_DWORD *)((char *)v22 + 3);
    if ( v26 == a3 )
    {
      v7 = v30;
      v8 = v31;
      v9 = v32;
      *(_OWORD *)(a1 + 48) = v33;
      *(_OWORD *)(a1 + 32) = v9;
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
      *(_BYTE *)(a1 + 64) = a3;
      result = v21[0];
      v10 = *(_DWORD *)((char *)v21 + 3);
      *(_DWORD *)(a1 + 65) = v21[0];
      *(_DWORD *)(a1 + 68) = v10;
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      v22[0] = &v20;
      v22[1] = <just::token_kind::TokenKind as core::fmt::Debug>::fmt;
      v22[2] = &v38;
      v22[3] = <just::token_kind::TokenKind as core::fmt::Debug>::fmt;
      *(_QWORD *)v23 = &off_4306D8;
      *(_QWORD *)&v23[8] = 2LL;
      *(_QWORD *)&v23[32] = 0LL;
      *(_QWORD *)&v23[16] = v22;
      *(_QWORD *)&v23[24] = 2LL;
      core::option::Option<T>::map_or_else((char *)v25 + 8, 0LL, v6, v23);
      *(_QWORD *)&v25[0] = 0x8000000000000028LL;
      result = just::parser::Parser::error((__int64)v23, (__int64)a2, (__int64)v25);
      v16 = *(_OWORD *)&v23[8];
      v17 = *(_OWORD *)&v23[24];
      v18 = *(_OWORD *)&v23[40];
      v19 = *(_OWORD *)&v23[56];
      *(_OWORD *)(a1 + 64) = v24;
      *(_OWORD *)(a1 + 48) = v19;
      *(_OWORD *)(a1 + 32) = v18;
      *(_OWORD *)(a1 + 16) = v17;
      *(_OWORD *)a1 = v16;
    }
  }
  else
  {
    v11 = *(_DWORD *)v29;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v29[3];
    *(_DWORD *)(a1 + 73) = v11;
    v12 = *(_OWORD *)v23;
    v13 = *(_OWORD *)&v23[16];
    v14 = *(_OWORD *)&v23[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[48];
    *(_OWORD *)(a1 + 32) = v14;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
    v15 = v22[0];
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)v22 + 3);
    *(_DWORD *)(a1 + 65) = v15;
    *(_BYTE *)(a1 + 64) = result;
    *(_BYTE *)(a1 + 72) = v4;
  }
  return result;
}