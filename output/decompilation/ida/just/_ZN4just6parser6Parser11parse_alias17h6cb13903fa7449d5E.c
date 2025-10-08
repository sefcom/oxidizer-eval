__int64 __fastcall just::parser::Parser::parse_alias(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v5; // al
  __int128 v6; // xmm0
  __int64 result; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  int v12; // ecx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  char v19; // si
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  int v22; // edi
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  _BYTE v26[88]; // [rsp+10h] [rbp-158h] BYREF
  __int64 v27; // [rsp+68h] [rbp-100h]
  __int128 v28; // [rsp+70h] [rbp-F8h]
  __int64 v29; // [rsp+80h] [rbp-E8h]
  __int128 v30; // [rsp+90h] [rbp-D8h]
  __int128 v31; // [rsp+A0h] [rbp-C8h]
  __int128 v32; // [rsp+B0h] [rbp-B8h]
  __int128 v33; // [rsp+C0h] [rbp-A8h]
  __int64 v34; // [rsp+D0h] [rbp-98h]
  __int128 v35; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-78h]
  __int128 v37; // [rsp+100h] [rbp-68h] BYREF
  __int128 v38; // [rsp+110h] [rbp-58h]
  __int128 v39; // [rsp+120h] [rbp-48h]
  __int128 v40; // [rsp+130h] [rbp-38h]
  __int64 v41; // [rsp+140h] [rbp-28h]

  just::parser::Parser::presume_keyword((__int64)v26, a2, 0);
  if ( v26[72] != 37 )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v26[64];
    v9 = *(_OWORD *)v26;
    v10 = *(_OWORD *)&v26[16];
    v11 = *(_OWORD *)&v26[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v26[48];
    *(_OWORD *)(a1 + 40) = v11;
    *(_OWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
LABEL_13:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a3);
  }
  just::parser::Parser::parse_name(v26, a2);
  v5 = v26[72];
  v30 = *(_OWORD *)v26;
  v31 = *(_OWORD *)&v26[16];
  v32 = *(_OWORD *)&v26[32];
  v33 = *(_OWORD *)&v26[48];
  v34 = *(_QWORD *)&v26[64];
  if ( v26[72] != 37 )
  {
    v12 = *(_DWORD *)&v26[73];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v26[76];
LABEL_10:
    *(_DWORD *)(a1 + 81) = v12;
    *(_QWORD *)(a1 + 72) = v34;
    v13 = v30;
    v14 = v31;
    v15 = v32;
    *(_OWORD *)(a1 + 56) = v33;
    *(_OWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 24) = v14;
    *(_OWORD *)(a1 + 8) = v13;
LABEL_12:
    *(_BYTE *)(a1 + 80) = v5;
    goto LABEL_13;
  }
  v37 = v30;
  v38 = v31;
  v39 = v32;
  v40 = v33;
  v41 = v34;
  just::parser::Parser::presume_any((__int64)v26, a2);
  v5 = v26[72];
  if ( v26[72] != 37 )
  {
    v16 = *(_QWORD *)v26;
    v17 = *(_OWORD *)&v26[8];
    v18 = *(_QWORD *)&v26[56];
    v19 = v26[64];
    LODWORD(v30) = *(_DWORD *)&v26[65];
    *(_DWORD *)((char *)&v30 + 3) = *(_DWORD *)&v26[68];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v26[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v26[73];
    v20 = *(_OWORD *)&v26[24];
    v21 = *(_OWORD *)&v26[40];
    v22 = v30;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v30 + 3);
    *(_DWORD *)(a1 + 73) = v22;
    *(_QWORD *)(a1 + 8) = v16;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)(a1 + 32) = v20;
    *(_OWORD *)(a1 + 48) = v21;
    *(_QWORD *)(a1 + 64) = v18;
    *(_BYTE *)(a1 + 72) = v19;
    goto LABEL_12;
  }
  just::parser::Parser::parse_namepath(v26, a2);
  v5 = v26[72];
  if ( v26[72] != 37 )
  {
    v34 = *(_QWORD *)&v26[64];
    v33 = *(_OWORD *)&v26[48];
    v32 = *(_OWORD *)&v26[32];
    v31 = *(_OWORD *)&v26[16];
    v30 = *(_OWORD *)v26;
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v26[76];
    v12 = *(_DWORD *)&v26[73];
    goto LABEL_10;
  }
  v35 = *(_OWORD *)v26;
  v36 = *(_QWORD *)&v26[16];
  just::parser::Parser::expect_eol((__int64)v26, a2);
  if ( v26[72] == 37 )
  {
    just::attribute_set::AttributeSet::ensure_valid_attributes(
      (__int64)v26,
      a3,
      (__int64)aAlias_2,
      5LL,
      (__int64)&v37,
      (__int64)&unk_715F0,
      1LL);
    if ( v26[72] == 37 )
    {
      *(_QWORD *)&v26[16] = v36;
      *(_OWORD *)v26 = v35;
      v28 = *(_OWORD *)a3;
      v29 = a3[2];
      *(_OWORD *)&v26[24] = v37;
      *(_OWORD *)&v26[72] = v40;
      v27 = v41;
      *(_OWORD *)&v26[56] = v39;
      *(_OWORD *)&v26[40] = v38;
      *(_QWORD *)(a1 + 16) = v36;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v26[24];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v26[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v26[48];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v26[64];
      *(_QWORD *)(a1 + 112) = v29;
      v6 = *(_OWORD *)v26;
      result = *(_QWORD *)&v26[80];
      v8 = v27;
      *(_OWORD *)(a1 + 96) = v28;
      *(_QWORD *)(a1 + 80) = result;
      *(_QWORD *)(a1 + 88) = v8;
      *(_OWORD *)a1 = v6;
      return result;
    }
  }
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v26[64];
  v23 = *(_OWORD *)v26;
  v24 = *(_OWORD *)&v26[16];
  v25 = *(_OWORD *)&v26[32];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v26[48];
  *(_OWORD *)(a1 + 40) = v25;
  *(_OWORD *)(a1 + 24) = v24;
  *(_OWORD *)(a1 + 8) = v23;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<just::namepath::Namepath>(&v35);
  return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a3);
}