__int64 __fastcall just::parser::Parser::parse_condition(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  char v7; // al
  char v8; // cl
  char v9; // bp
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  char v13; // al
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  int v17; // esi
  __int64 v18; // r14
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rdx
  char v22; // si
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  int v25; // edi
  _BYTE v26[128]; // [rsp+0h] [rbp-1E8h] BYREF
  _BYTE v27[128]; // [rsp+80h] [rbp-168h]
  __int128 v28; // [rsp+100h] [rbp-E8h]
  __int128 v29; // [rsp+110h] [rbp-D8h]
  __int128 v30; // [rsp+120h] [rbp-C8h]
  __int128 v31; // [rsp+130h] [rbp-B8h]
  __int128 v32; // [rsp+140h] [rbp-A8h]
  _BYTE v33[128]; // [rsp+150h] [rbp-98h] BYREF

  just::parser::Parser::parse_expression((__int64)v26, a2);
  result = *(_QWORD *)v26;
  *(_OWORD *)v27 = *(_OWORD *)&v26[8];
  *(_OWORD *)&v27[16] = *(_OWORD *)&v26[24];
  *(_OWORD *)&v27[32] = *(_OWORD *)&v26[40];
  *(_OWORD *)&v27[48] = *(_OWORD *)&v26[56];
  *(_OWORD *)&v27[64] = *(_OWORD *)&v26[72];
  if ( *(_QWORD *)v26 == 18LL )
  {
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v27[64];
    v4 = *(_OWORD *)v27;
    v5 = *(_OWORD *)&v27[16];
    v6 = *(_OWORD *)&v27[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v27[48];
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return result;
  }
  *(_QWORD *)&v33[120] = *(_QWORD *)&v26[120];
  *(_OWORD *)&v33[104] = *(_OWORD *)&v26[104];
  *(_OWORD *)&v33[88] = *(_OWORD *)&v26[88];
  *(_OWORD *)&v33[8] = *(_OWORD *)v27;
  *(_OWORD *)&v33[24] = *(_OWORD *)&v27[16];
  *(_OWORD *)&v33[40] = *(_OWORD *)&v27[32];
  *(_OWORD *)&v33[56] = *(_OWORD *)&v27[48];
  *(_OWORD *)&v33[72] = *(_OWORD *)&v27[64];
  *(_QWORD *)v33 = *(_QWORD *)v26;
  just::parser::Parser::accepted((__int64)v26, a2, 4);
  v7 = v26[0];
  v8 = v26[72];
  if ( v26[72] != 37 )
    goto LABEL_13;
  v9 = 1;
  if ( (v26[0] & 1) != 0 )
    goto LABEL_5;
  just::parser::Parser::accepted((__int64)v26, a2, 23);
  v7 = v26[0];
  v8 = v26[72];
  if ( v26[72] != 37 )
    goto LABEL_13;
  v9 = 2;
  if ( (v26[0] & 1) != 0 )
    goto LABEL_5;
  just::parser::Parser::accepted((__int64)v26, a2, 5);
  v7 = v26[0];
  v8 = v26[72];
  if ( v26[72] != 37 )
  {
LABEL_13:
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v26[64];
    v14 = *(_OWORD *)&v26[1];
    v15 = *(_OWORD *)&v26[17];
    v16 = *(_OWORD *)&v26[33];
    *(_OWORD *)(a1 + 49) = *(_OWORD *)&v26[49];
    *(_OWORD *)(a1 + 33) = v16;
    *(_OWORD *)(a1 + 17) = v15;
    *(_OWORD *)(a1 + 1) = v14;
    v17 = *(_DWORD *)&v26[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&v26[73];
    *(_DWORD *)(a1 + 76) = v17;
    *(_BYTE *)a1 = v7;
    *(_BYTE *)(a1 + 72) = v8;
    return core::ptr::drop_in_place<just::expression::Expression>(v33);
  }
  v9 = 3;
  if ( (v26[0] & 1) == 0 )
  {
    just::parser::Parser::expect((__int64)v26, a2);
    v13 = v26[72];
    if ( v26[72] != 37 )
    {
      v19 = *(_QWORD *)v26;
      v20 = *(_OWORD *)&v26[8];
      v21 = *(_QWORD *)&v26[56];
      v22 = v26[64];
      *(_DWORD *)v27 = *(_DWORD *)&v26[65];
      *(_DWORD *)&v27[3] = *(_DWORD *)&v26[68];
      *(_DWORD *)(a1 + 76) = *(_DWORD *)&v26[76];
      *(_DWORD *)(a1 + 73) = *(_DWORD *)&v26[73];
      v23 = *(_OWORD *)&v26[24];
      v24 = *(_OWORD *)&v26[40];
      v25 = *(_DWORD *)v27;
      *(_DWORD *)(a1 + 68) = *(_DWORD *)&v27[3];
      *(_DWORD *)(a1 + 65) = v25;
      *(_QWORD *)a1 = v19;
      *(_OWORD *)(a1 + 8) = v20;
      *(_OWORD *)(a1 + 24) = v23;
      *(_OWORD *)(a1 + 40) = v24;
      *(_QWORD *)(a1 + 56) = v21;
      *(_BYTE *)(a1 + 64) = v22;
      *(_BYTE *)(a1 + 72) = v13;
      return core::ptr::drop_in_place<just::expression::Expression>(v33);
    }
    v9 = 0;
  }
LABEL_5:
  just::parser::Parser::parse_expression((__int64)v26, a2);
  v28 = *(_OWORD *)&v26[8];
  v29 = *(_OWORD *)&v26[24];
  v30 = *(_OWORD *)&v26[40];
  v31 = *(_OWORD *)&v26[56];
  v32 = *(_OWORD *)&v26[72];
  if ( *(_QWORD *)v26 == 18LL )
  {
    *(_OWORD *)(a1 + 64) = v32;
    v10 = v28;
    v11 = v29;
    v12 = v30;
    *(_OWORD *)(a1 + 48) = v31;
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    return core::ptr::drop_in_place<just::expression::Expression>(v33);
  }
  *(_QWORD *)&v27[120] = *(_QWORD *)&v26[120];
  *(_OWORD *)&v27[104] = *(_OWORD *)&v26[104];
  *(_OWORD *)&v27[88] = *(_OWORD *)&v26[88];
  *(_OWORD *)&v27[8] = v28;
  *(_OWORD *)&v27[24] = v29;
  *(_OWORD *)&v27[40] = v30;
  *(_OWORD *)&v27[56] = v31;
  *(_OWORD *)&v27[72] = v32;
  *(_QWORD *)v27 = *(_QWORD *)v26;
  *(_OWORD *)&v26[112] = *(_OWORD *)&v33[112];
  *(_OWORD *)&v26[96] = *(_OWORD *)&v33[96];
  *(_OWORD *)&v26[80] = *(_OWORD *)&v33[80];
  *(_OWORD *)&v26[64] = *(_OWORD *)&v33[64];
  *(_OWORD *)&v26[48] = *(_OWORD *)&v33[48];
  *(_OWORD *)&v26[32] = *(_OWORD *)&v33[32];
  *(_OWORD *)&v26[16] = *(_OWORD *)&v33[16];
  *(_OWORD *)v26 = *(_OWORD *)v33;
  v18 = alloc::boxed::Box<T>::new(v26);
  *(_QWORD *)&v28 = v18;
  *(_OWORD *)&v26[112] = *(_OWORD *)&v27[112];
  *(_OWORD *)&v26[96] = *(_OWORD *)&v27[96];
  *(_OWORD *)&v26[80] = *(_OWORD *)&v27[80];
  *(_OWORD *)&v26[64] = *(_OWORD *)&v27[64];
  *(_OWORD *)&v26[48] = *(_OWORD *)&v27[48];
  *(_OWORD *)&v26[32] = *(_OWORD *)&v27[32];
  *(_OWORD *)&v26[16] = *(_OWORD *)&v27[16];
  *(_OWORD *)v26 = *(_OWORD *)v27;
  result = alloc::boxed::Box<T>::new(v26);
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 16) = v9;
  *(_BYTE *)(a1 + 72) = 37;
  return result;
}