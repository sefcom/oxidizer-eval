__int64 __fastcall just::parser::Parser::parse_disjunct(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  char v4; // al
  char v5; // cl
  __int64 v6; // r15
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // esi
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // [rsp+0h] [rbp-268h]
  __int128 v16; // [rsp+0h] [rbp-268h]
  __int128 v17; // [rsp+10h] [rbp-258h]
  __int128 v18; // [rsp+10h] [rbp-258h]
  __int128 v19; // [rsp+20h] [rbp-248h]
  __int128 v20; // [rsp+20h] [rbp-248h]
  __int128 v21; // [rsp+30h] [rbp-238h]
  __int128 v22; // [rsp+30h] [rbp-238h]
  __int64 v23; // [rsp+58h] [rbp-210h] BYREF
  _BYTE v24[128]; // [rsp+60h] [rbp-208h] BYREF
  _BYTE v25[128]; // [rsp+E0h] [rbp-188h] BYREF
  __int128 v26; // [rsp+160h] [rbp-108h]
  __int128 v27; // [rsp+170h] [rbp-F8h]
  __int128 v28; // [rsp+180h] [rbp-E8h]
  __int128 v29; // [rsp+190h] [rbp-D8h]
  __int128 v30; // [rsp+1A0h] [rbp-C8h]
  __int128 v31; // [rsp+1B0h] [rbp-B8h]
  __int64 v32; // [rsp+1C0h] [rbp-A8h]
  __int64 v33; // [rsp+1C8h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+1D0h] [rbp-98h]
  __int128 v35; // [rsp+1E0h] [rbp-88h]
  __int128 v36; // [rsp+1F0h] [rbp-78h]
  __int128 v37; // [rsp+200h] [rbp-68h]
  __int128 v38; // [rsp+210h] [rbp-58h]
  __int128 v39; // [rsp+220h] [rbp-48h]
  __int128 v40; // [rsp+230h] [rbp-38h]
  __int64 v41; // [rsp+240h] [rbp-28h]

  result = just::parser::Parser::parse_conjunct(v24);
  v3 = *(_QWORD *)v24;
  v15 = *(_OWORD *)&v24[8];
  v17 = *(_OWORD *)&v24[24];
  v19 = *(_OWORD *)&v24[40];
  v21 = *(_OWORD *)&v24[56];
  if ( *(_QWORD *)v24 == 18LL )
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v24[72];
    *(_OWORD *)(a1 + 56) = v21;
    *(_OWORD *)(a1 + 40) = v19;
    *(_OWORD *)(a1 + 24) = v17;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = 18LL;
    return result;
  }
  *(_QWORD *)&v25[120] = *(_QWORD *)&v24[120];
  *(_OWORD *)&v25[104] = *(_OWORD *)&v24[104];
  *(_OWORD *)&v25[88] = *(_OWORD *)&v24[88];
  *(_OWORD *)&v25[8] = *(_OWORD *)&v24[8];
  *(_OWORD *)&v25[24] = *(_OWORD *)&v24[24];
  *(_OWORD *)&v25[40] = *(_OWORD *)&v24[40];
  *(_OWORD *)&v25[56] = *(_OWORD *)&v24[56];
  *(_OWORD *)&v25[72] = *(_OWORD *)&v24[72];
  *(_QWORD *)v25 = *(_QWORD *)v24;
  just::parser::Parser::accepted((__int64)v24, a2, 0);
  v4 = v24[0];
  v5 = v24[72];
  if ( v24[72] == 37 )
  {
    if ( (v24[0] & 1) != 0 )
    {
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a2 + 13, 1LL);
      *(_OWORD *)&v24[112] = *(_OWORD *)&v25[112];
      *(_OWORD *)&v24[96] = *(_OWORD *)&v25[96];
      *(_OWORD *)&v24[80] = *(_OWORD *)&v25[80];
      *(_OWORD *)&v24[64] = *(_OWORD *)&v25[64];
      *(_OWORD *)&v24[48] = *(_OWORD *)&v25[48];
      *(_OWORD *)&v24[32] = *(_OWORD *)&v25[32];
      *(_OWORD *)&v24[16] = *(_OWORD *)&v25[16];
      *(_OWORD *)v24 = *(_OWORD *)v25;
      v6 = alloc::boxed::Box<T>::new(v24);
      v23 = v6;
      just::parser::Parser::parse_disjunct(v24, a2);
      v16 = *(_OWORD *)&v24[8];
      v18 = *(_OWORD *)&v24[24];
      v20 = *(_OWORD *)&v24[40];
      v22 = *(_OWORD *)&v24[56];
      if ( *(_QWORD *)v24 == 18LL )
      {
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v24[72];
        *(_OWORD *)(a1 + 56) = v22;
        *(_OWORD *)(a1 + 40) = v20;
        *(_OWORD *)(a1 + 24) = v18;
        *(_OWORD *)(a1 + 8) = v16;
        *(_QWORD *)a1 = 18LL;
        return core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v23);
      }
      v41 = *(_QWORD *)&v24[120];
      v40 = *(_OWORD *)&v24[104];
      v39 = *(_OWORD *)&v24[88];
      v33 = *(_QWORD *)v24;
      v34 = *(_OWORD *)&v24[8];
      v35 = *(_OWORD *)&v24[24];
      v36 = *(_OWORD *)&v24[40];
      v37 = *(_OWORD *)&v24[56];
      v38 = *(_OWORD *)&v24[72];
      v11 = alloc::boxed::Box<T>::new(&v33);
      v3 = 7LL;
    }
    else
    {
      v6 = *(_QWORD *)&v25[8];
      v11 = *(_QWORD *)&v25[16];
      v26 = *(_OWORD *)&v25[24];
      v27 = *(_OWORD *)&v25[40];
      v28 = *(_OWORD *)&v25[56];
      v29 = *(_OWORD *)&v25[72];
      v30 = *(_OWORD *)&v25[88];
      v31 = *(_OWORD *)&v25[104];
      v32 = *(_QWORD *)&v25[120];
    }
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v11;
    v12 = v27;
    v13 = v28;
    v14 = v29;
    *(_OWORD *)(a1 + 24) = v26;
    *(_OWORD *)(a1 + 40) = v12;
    *(_OWORD *)(a1 + 56) = v13;
    *(_OWORD *)(a1 + 72) = v14;
    *(_OWORD *)(a1 + 88) = v30;
    *(_OWORD *)(a1 + 104) = v31;
    result = v32;
    *(_QWORD *)(a1 + 120) = v32;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v24[64];
    v7 = *(_OWORD *)&v24[1];
    v8 = *(_OWORD *)&v24[17];
    v9 = *(_OWORD *)&v24[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v24[49];
    *(_OWORD *)(a1 + 41) = v9;
    *(_OWORD *)(a1 + 25) = v8;
    *(_OWORD *)(a1 + 9) = v7;
    v10 = *(_DWORD *)&v24[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v24[73];
    *(_DWORD *)(a1 + 84) = v10;
    *(_BYTE *)(a1 + 8) = v4;
    *(_BYTE *)(a1 + 80) = v5;
    *(_QWORD *)a1 = 18LL;
    return core::ptr::drop_in_place<just::expression::Expression>(v25);
  }
  return result;
}