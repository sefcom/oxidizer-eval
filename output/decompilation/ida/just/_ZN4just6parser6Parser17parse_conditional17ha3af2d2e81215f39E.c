__int64 __fastcall just::parser::Parser::parse_conditional(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v4; // al
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rdx
  char v14; // si
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  int v17; // edi
  char v18; // al
  char v19; // al
  char v20; // cl
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  int v28; // esi
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // rdx
  char v32; // si
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  int v35; // edi
  __int64 v36; // r14
  char v37; // al
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int64 v40; // rdx
  char v41; // si
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  int v44; // edi
  _BYTE v45[128]; // [rsp+0h] [rbp-288h] BYREF
  _BYTE v46[128]; // [rsp+80h] [rbp-208h] BYREF
  __int128 v47; // [rsp+100h] [rbp-188h] BYREF
  __int64 v48; // [rsp+110h] [rbp-178h]
  __int128 v49; // [rsp+120h] [rbp-168h]
  __int128 v50; // [rsp+130h] [rbp-158h]
  __int128 v51; // [rsp+140h] [rbp-148h]
  __int128 v52; // [rsp+150h] [rbp-138h]
  __int128 v53; // [rsp+160h] [rbp-128h]
  _BYTE v54[128]; // [rsp+170h] [rbp-118h]
  _BYTE v55[128]; // [rsp+1F0h] [rbp-98h] BYREF

  just::parser::Parser::parse_condition(v45);
  result = v45[72];
  if ( v45[72] != 37 )
  {
    *(_QWORD *)&v46[64] = *(_QWORD *)&v45[64];
    *(_OWORD *)&v46[48] = *(_OWORD *)&v45[48];
    *(_OWORD *)&v46[32] = *(_OWORD *)&v45[32];
    *(_OWORD *)&v46[16] = *(_OWORD *)&v45[16];
    *(_OWORD *)v46 = *(_OWORD *)v45;
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v45[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v45[73];
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v46[64];
    v8 = *(_OWORD *)v46;
    v9 = *(_OWORD *)&v46[16];
    v10 = *(_OWORD *)&v46[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v46[48];
    *(_OWORD *)(a1 + 40) = v10;
    *(_OWORD *)(a1 + 24) = v9;
    *(_OWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 80) = result;
    *(_QWORD *)a1 = 18LL;
    return result;
  }
  v47 = *(_OWORD *)v45;
  v48 = *(_QWORD *)&v45[16];
  just::parser::Parser::expect((__int64)v45, a2);
  v4 = v45[72];
  if ( v45[72] != 37 )
  {
    v11 = *(_QWORD *)v45;
    v12 = *(_OWORD *)&v45[8];
    v13 = *(_QWORD *)&v45[56];
    v14 = v45[64];
    *(_DWORD *)v46 = *(_DWORD *)&v45[65];
    *(_DWORD *)&v46[3] = *(_DWORD *)&v45[68];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v45[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v45[73];
    v15 = *(_OWORD *)&v45[24];
    v16 = *(_OWORD *)&v45[40];
    v17 = *(_DWORD *)v46;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v46[3];
    *(_DWORD *)(a1 + 73) = v17;
    *(_QWORD *)(a1 + 8) = v11;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 48) = v16;
    *(_QWORD *)(a1 + 64) = v13;
    *(_BYTE *)(a1 + 72) = v14;
    *(_BYTE *)(a1 + 80) = v4;
    goto LABEL_7;
  }
  just::parser::Parser::parse_expression((__int64)v45, a2);
  *(_OWORD *)v46 = *(_OWORD *)&v45[8];
  *(_OWORD *)&v46[16] = *(_OWORD *)&v45[24];
  *(_OWORD *)&v46[32] = *(_OWORD *)&v45[40];
  *(_OWORD *)&v46[48] = *(_OWORD *)&v45[56];
  *(_OWORD *)&v46[64] = *(_OWORD *)&v45[72];
  if ( *(_QWORD *)v45 == 18LL )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v46[64];
    v5 = *(_OWORD *)v46;
    v6 = *(_OWORD *)&v46[16];
    v7 = *(_OWORD *)&v46[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v46[48];
    *(_OWORD *)(a1 + 40) = v7;
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = v5;
LABEL_7:
    *(_QWORD *)a1 = 18LL;
    return core::ptr::drop_in_place<just::condition::Condition>(&v47);
  }
  *(_QWORD *)&v55[120] = *(_QWORD *)&v45[120];
  *(_OWORD *)&v55[104] = *(_OWORD *)&v45[104];
  *(_OWORD *)&v55[88] = *(_OWORD *)&v45[88];
  *(_OWORD *)&v55[8] = *(_OWORD *)v46;
  *(_OWORD *)&v55[24] = *(_OWORD *)&v46[16];
  *(_OWORD *)&v55[40] = *(_OWORD *)&v46[32];
  *(_OWORD *)&v55[56] = *(_OWORD *)&v46[48];
  *(_OWORD *)&v55[72] = *(_OWORD *)&v46[64];
  *(_QWORD *)v55 = *(_QWORD *)v45;
  just::parser::Parser::expect((__int64)v45, a2);
  v18 = v45[72];
  if ( v45[72] != 37 )
    goto LABEL_20;
  just::parser::Parser::expect_keyword((__int64)v45, a2, 9);
  if ( v45[72] != 37 )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v45[64];
    v21 = *(_OWORD *)v45;
    v22 = *(_OWORD *)&v45[16];
    v23 = *(_OWORD *)&v45[32];
    v24 = *(_OWORD *)&v45[48];
    goto LABEL_15;
  }
  just::parser::Parser::accepted_keyword((__int64)v45, a2, 0xDu);
  v19 = v45[0];
  v20 = v45[72];
  if ( v45[72] != 37 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v45[64];
    v25 = *(_OWORD *)&v45[1];
    v26 = *(_OWORD *)&v45[17];
    v27 = *(_OWORD *)&v45[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v45[49];
    *(_OWORD *)(a1 + 41) = v27;
    *(_OWORD *)(a1 + 25) = v26;
    *(_OWORD *)(a1 + 9) = v25;
    v28 = *(_DWORD *)&v45[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v45[73];
    *(_DWORD *)(a1 + 84) = v28;
    *(_BYTE *)(a1 + 8) = v19;
    *(_BYTE *)(a1 + 80) = v20;
    goto LABEL_21;
  }
  if ( (v45[0] & 1) == 0 )
  {
    just::parser::Parser::expect((__int64)v45, a2);
    v18 = v45[72];
    if ( v45[72] == 37 )
    {
      just::parser::Parser::parse_expression((__int64)v45, a2);
      v49 = *(_OWORD *)&v45[8];
      v50 = *(_OWORD *)&v45[24];
      v51 = *(_OWORD *)&v45[40];
      v52 = *(_OWORD *)&v45[56];
      v53 = *(_OWORD *)&v45[72];
      if ( *(_QWORD *)v45 == 18LL )
      {
        *(_OWORD *)(a1 + 72) = v53;
        v21 = v49;
        v22 = v50;
        v23 = v51;
        v24 = v52;
        goto LABEL_15;
      }
      *(_QWORD *)&v46[120] = *(_QWORD *)&v45[120];
      *(_OWORD *)&v46[104] = *(_OWORD *)&v45[104];
      *(_OWORD *)&v46[88] = *(_OWORD *)&v45[88];
      *(_OWORD *)&v46[8] = v49;
      *(_OWORD *)&v46[24] = v50;
      *(_OWORD *)&v46[40] = v51;
      *(_OWORD *)&v46[56] = v52;
      *(_OWORD *)&v46[72] = v53;
      *(_QWORD *)v46 = *(_QWORD *)v45;
      just::parser::Parser::expect((__int64)v45, a2);
      v37 = v45[72];
      if ( v45[72] != 37 )
      {
        v38 = *(_QWORD *)v45;
        v39 = *(_OWORD *)&v45[8];
        v40 = *(_QWORD *)&v45[56];
        v41 = v45[64];
        LODWORD(v49) = *(_DWORD *)&v45[65];
        *(_DWORD *)((char *)&v49 + 3) = *(_DWORD *)&v45[68];
        *(_DWORD *)(a1 + 84) = *(_DWORD *)&v45[76];
        *(_DWORD *)(a1 + 81) = *(_DWORD *)&v45[73];
        v42 = *(_OWORD *)&v45[24];
        v43 = *(_OWORD *)&v45[40];
        v44 = v49;
        *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v49 + 3);
        *(_DWORD *)(a1 + 73) = v44;
        *(_QWORD *)(a1 + 8) = v38;
        *(_OWORD *)(a1 + 16) = v39;
        *(_OWORD *)(a1 + 32) = v42;
        *(_OWORD *)(a1 + 48) = v43;
        *(_QWORD *)(a1 + 64) = v40;
        *(_BYTE *)(a1 + 72) = v41;
        *(_BYTE *)(a1 + 80) = v37;
        *(_QWORD *)a1 = 18LL;
        core::ptr::drop_in_place<just::expression::Expression>(v46);
        goto LABEL_22;
      }
      *(_OWORD *)v54 = *(_OWORD *)v46;
      *(_OWORD *)&v54[16] = *(_OWORD *)&v46[16];
      *(_OWORD *)&v54[32] = *(_OWORD *)&v46[32];
      *(_OWORD *)&v54[48] = *(_OWORD *)&v46[48];
      *(_OWORD *)&v54[64] = *(_OWORD *)&v46[64];
      *(_OWORD *)&v54[80] = *(_OWORD *)&v46[80];
      *(_OWORD *)&v54[96] = *(_OWORD *)&v46[96];
      *(_OWORD *)&v54[112] = *(_OWORD *)&v46[112];
      goto LABEL_25;
    }
LABEL_20:
    v29 = *(_QWORD *)v45;
    v30 = *(_OWORD *)&v45[8];
    v31 = *(_QWORD *)&v45[56];
    v32 = v45[64];
    *(_DWORD *)v46 = *(_DWORD *)&v45[65];
    *(_DWORD *)&v46[3] = *(_DWORD *)&v45[68];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v45[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v45[73];
    v33 = *(_OWORD *)&v45[24];
    v34 = *(_OWORD *)&v45[40];
    v35 = *(_DWORD *)v46;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v46[3];
    *(_DWORD *)(a1 + 73) = v35;
    *(_QWORD *)(a1 + 8) = v29;
    *(_OWORD *)(a1 + 16) = v30;
    *(_OWORD *)(a1 + 32) = v33;
    *(_OWORD *)(a1 + 48) = v34;
    *(_QWORD *)(a1 + 64) = v31;
    *(_BYTE *)(a1 + 72) = v32;
    *(_BYTE *)(a1 + 80) = v18;
    goto LABEL_21;
  }
  just::parser::Parser::parse_conditional(v45, a2);
  *(_OWORD *)v46 = *(_OWORD *)&v45[8];
  *(_OWORD *)&v46[16] = *(_OWORD *)&v45[24];
  *(_OWORD *)&v46[32] = *(_OWORD *)&v45[40];
  *(_OWORD *)&v46[48] = *(_OWORD *)&v45[56];
  *(_OWORD *)&v46[64] = *(_OWORD *)&v45[72];
  if ( *(_QWORD *)v45 == 18LL )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v46[64];
    v21 = *(_OWORD *)v46;
    v22 = *(_OWORD *)&v46[16];
    v23 = *(_OWORD *)&v46[32];
    v24 = *(_OWORD *)&v46[48];
LABEL_15:
    *(_OWORD *)(a1 + 56) = v24;
    *(_OWORD *)(a1 + 40) = v23;
    *(_OWORD *)(a1 + 24) = v22;
    *(_OWORD *)(a1 + 8) = v21;
LABEL_21:
    *(_QWORD *)a1 = 18LL;
LABEL_22:
    core::ptr::drop_in_place<just::expression::Expression>(v55);
    return core::ptr::drop_in_place<just::condition::Condition>(&v47);
  }
  *(_QWORD *)&v54[120] = *(_QWORD *)&v45[120];
  *(_OWORD *)&v54[104] = *(_OWORD *)&v45[104];
  *(_OWORD *)&v54[88] = *(_OWORD *)&v45[88];
  *(_OWORD *)&v54[8] = *(_OWORD *)v46;
  *(_OWORD *)&v54[24] = *(_OWORD *)&v46[16];
  *(_OWORD *)&v54[40] = *(_OWORD *)&v46[32];
  *(_OWORD *)&v54[56] = *(_OWORD *)&v46[48];
  *(_OWORD *)&v54[72] = *(_OWORD *)&v46[64];
  *(_QWORD *)v54 = *(_QWORD *)v45;
LABEL_25:
  *(_OWORD *)&v45[112] = *(_OWORD *)&v55[112];
  *(_OWORD *)&v45[96] = *(_OWORD *)&v55[96];
  *(_OWORD *)&v45[80] = *(_OWORD *)&v55[80];
  *(_OWORD *)&v45[64] = *(_OWORD *)&v55[64];
  *(_OWORD *)&v45[48] = *(_OWORD *)&v55[48];
  *(_OWORD *)&v45[32] = *(_OWORD *)&v55[32];
  *(_OWORD *)&v45[16] = *(_OWORD *)&v55[16];
  *(_OWORD *)v45 = *(_OWORD *)v55;
  v36 = alloc::boxed::Box<T>::new(v45);
  *(_QWORD *)v46 = v36;
  *(_OWORD *)&v45[112] = *(_OWORD *)&v54[112];
  *(_OWORD *)&v45[96] = *(_OWORD *)&v54[96];
  *(_OWORD *)&v45[80] = *(_OWORD *)&v54[80];
  *(_OWORD *)&v45[64] = *(_OWORD *)&v54[64];
  *(_OWORD *)&v45[48] = *(_OWORD *)&v54[48];
  *(_OWORD *)&v45[32] = *(_OWORD *)&v54[32];
  *(_OWORD *)&v45[16] = *(_OWORD *)&v54[16];
  *(_OWORD *)v45 = *(_OWORD *)v54;
  result = alloc::boxed::Box<T>::new(v45);
  *(_QWORD *)(a1 + 40) = v48;
  *(_OWORD *)(a1 + 24) = v47;
  *(_QWORD *)a1 = 12LL;
  *(_QWORD *)(a1 + 8) = v36;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}