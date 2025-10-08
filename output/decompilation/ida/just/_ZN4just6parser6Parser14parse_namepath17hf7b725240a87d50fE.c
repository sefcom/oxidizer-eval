__int64 __fastcall just::parser::Parser::parse_namepath(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v3; // al
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // al
  int v6; // ecx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // esi
  int v11; // ecx
  __int128 v12; // [rsp+0h] [rbp-178h]
  __int128 v13; // [rsp+0h] [rbp-178h]
  __int128 v14; // [rsp+10h] [rbp-168h]
  __int128 v15; // [rsp+10h] [rbp-168h]
  __int128 v16; // [rsp+20h] [rbp-158h]
  __int128 v17; // [rsp+20h] [rbp-158h]
  __int128 v18; // [rsp+30h] [rbp-148h]
  __int128 v19; // [rsp+30h] [rbp-148h]
  __int64 v20; // [rsp+40h] [rbp-138h]
  __int64 v21; // [rsp+40h] [rbp-138h]
  _BYTE v22[72]; // [rsp+48h] [rbp-130h] BYREF
  unsigned __int8 v23; // [rsp+90h] [rbp-E8h]
  _BYTE v24[7]; // [rsp+91h] [rbp-E7h]
  __int128 v25; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-D0h]
  _OWORD v27[4]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-88h]
  _OWORD v29[4]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v30; // [rsp+140h] [rbp-38h]

  just::parser::Parser::parse_name((__int64)v22, a2);
  result = v23;
  v12 = *(_OWORD *)v22;
  v14 = *(_OWORD *)&v22[16];
  v16 = *(_OWORD *)&v22[32];
  v18 = *(_OWORD *)&v22[48];
  v20 = *(_QWORD *)&v22[64];
  if ( v23 == 37 )
  {
    v27[0] = *(_OWORD *)v22;
    v27[1] = *(_OWORD *)&v22[16];
    v27[2] = *(_OWORD *)&v22[32];
    v27[3] = *(_OWORD *)&v22[48];
    v28 = *(_QWORD *)&v22[64];
    <just::namepath::Namepath as core::convert::From<just::name::Name>>::from(&v25, v27);
    while ( 1 )
    {
      just::parser::Parser::accepted((__int64)v22, a2, 13);
      v3 = v22[0];
      v4 = v23;
      if ( v23 != 37 )
      {
        *(_QWORD *)(a1 + 64) = *(_QWORD *)&v22[64];
        v7 = *(_OWORD *)&v22[1];
        v8 = *(_OWORD *)&v22[17];
        v9 = *(_OWORD *)&v22[33];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v22[49];
        *(_OWORD *)(a1 + 33) = v9;
        *(_OWORD *)(a1 + 17) = v8;
        *(_OWORD *)(a1 + 1) = v7;
        v10 = *(_DWORD *)&v24[3];
        *(_DWORD *)(a1 + 73) = *(_DWORD *)v24;
        *(_DWORD *)(a1 + 76) = v10;
        *(_BYTE *)a1 = v3;
        *(_BYTE *)(a1 + 72) = v4;
        return core::ptr::drop_in_place<just::namepath::Namepath>(&v25);
      }
      if ( (v22[0] & 1) == 0 )
      {
        result = v26;
        *(_QWORD *)(a1 + 16) = v26;
        *(_OWORD *)a1 = v25;
        *(_BYTE *)(a1 + 72) = 37;
        return result;
      }
      just::parser::Parser::parse_name((__int64)v22, a2);
      v5 = v23;
      v13 = *(_OWORD *)v22;
      v15 = *(_OWORD *)&v22[16];
      v17 = *(_OWORD *)&v22[32];
      v19 = *(_OWORD *)&v22[48];
      v21 = *(_QWORD *)&v22[64];
      if ( v23 != 37 )
        break;
      v29[0] = *(_OWORD *)v22;
      v29[1] = *(_OWORD *)&v22[16];
      v29[2] = *(_OWORD *)&v22[32];
      v29[3] = *(_OWORD *)&v22[48];
      v30 = *(_QWORD *)&v22[64];
      just::namepath::Namepath::push(&v25, v29);
    }
    v11 = *(_DWORD *)v24;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v24[3];
    *(_DWORD *)(a1 + 73) = v11;
    *(_QWORD *)(a1 + 64) = v21;
    *(_OWORD *)(a1 + 48) = v19;
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v13;
    *(_BYTE *)(a1 + 72) = v5;
    return core::ptr::drop_in_place<just::namepath::Namepath>(&v25);
  }
  else
  {
    v6 = *(_DWORD *)v24;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v24[3];
    *(_DWORD *)(a1 + 73) = v6;
    *(_QWORD *)(a1 + 64) = v20;
    *(_OWORD *)(a1 + 48) = v18;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v12;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}