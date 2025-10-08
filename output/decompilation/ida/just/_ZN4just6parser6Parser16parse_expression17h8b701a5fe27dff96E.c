__int64 __fastcall just::parser::Parser::parse_expression(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r12
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  int v8; // ecx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  char v12; // al
  char v13; // cl
  __int64 v14; // r15
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  int v21; // esi
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  _BYTE v26[128]; // [rsp+0h] [rbp-2B8h] BYREF
  __int128 v27; // [rsp+80h] [rbp-238h]
  __int128 v28; // [rsp+90h] [rbp-228h]
  __int128 v29; // [rsp+A0h] [rbp-218h]
  __int128 v30; // [rsp+B0h] [rbp-208h]
  __int128 v31; // [rsp+C0h] [rbp-1F8h]
  __int64 v32; // [rsp+D8h] [rbp-1E0h] BYREF
  _BYTE v33[128]; // [rsp+E0h] [rbp-1D8h] BYREF
  __int128 v34; // [rsp+160h] [rbp-158h]
  __int128 v35; // [rsp+170h] [rbp-148h]
  __int128 v36; // [rsp+180h] [rbp-138h]
  __int128 v37; // [rsp+190h] [rbp-128h]
  __int128 v38; // [rsp+1A0h] [rbp-118h]
  __int128 v39; // [rsp+1B0h] [rbp-108h]
  __int64 v40; // [rsp+1C0h] [rbp-F8h]
  _OWORD v41[4]; // [rsp+1D0h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+210h] [rbp-A8h]
  __int64 v43; // [rsp+218h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+220h] [rbp-98h]
  __int128 v45; // [rsp+230h] [rbp-88h]
  __int128 v46; // [rsp+240h] [rbp-78h]
  __int128 v47; // [rsp+250h] [rbp-68h]
  __int128 v48; // [rsp+260h] [rbp-58h]
  __int128 v49; // [rsp+270h] [rbp-48h]
  __int128 v50; // [rsp+280h] [rbp-38h]
  __int64 v51; // [rsp+290h] [rbp-28h]

  v2 = a2[12];
  if ( v2 == 256 )
  {
    just::parser::Parser::next((__int64)v26, a2);
    result = v26[72];
    *(_OWORD *)v33 = *(_OWORD *)v26;
    *(_OWORD *)&v33[16] = *(_OWORD *)&v26[16];
    *(_OWORD *)&v33[32] = *(_OWORD *)&v26[32];
    *(_OWORD *)&v33[48] = *(_OWORD *)&v26[48];
    *(_QWORD *)&v33[64] = *(_QWORD *)&v26[64];
    if ( v26[72] == 37 )
    {
      v41[0] = *(_OWORD *)v33;
      v41[1] = *(_OWORD *)&v33[16];
      v41[2] = *(_OWORD *)&v33[32];
      v41[3] = *(_OWORD *)&v33[48];
      v42 = *(_QWORD *)&v33[64];
      *(_QWORD *)v26 = 0x800000000000002FLL;
      result = just::compile_error::CompileError::new(a1 + 8, (__int64)v41, (__int64)v26);
    }
    else
    {
      v8 = *(_DWORD *)&v26[73];
      *(_DWORD *)(a1 + 84) = *(_DWORD *)&v26[76];
      *(_DWORD *)(a1 + 81) = v8;
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v33[64];
      v9 = *(_OWORD *)v33;
      v10 = *(_OWORD *)&v33[16];
      v11 = *(_OWORD *)&v33[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v33[48];
      *(_OWORD *)(a1 + 40) = v11;
      *(_OWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_BYTE *)(a1 + 80) = result;
    }
    *(_QWORD *)a1 = 18LL;
  }
  else
  {
    a2[12] = v2 + 1;
    result = just::parser::Parser::parse_disjunct(v26, a2);
    v4 = *(_QWORD *)v26;
    v27 = *(_OWORD *)&v26[8];
    v28 = *(_OWORD *)&v26[24];
    v29 = *(_OWORD *)&v26[40];
    v30 = *(_OWORD *)&v26[56];
    v31 = *(_OWORD *)&v26[72];
    if ( *(_QWORD *)v26 == 18LL )
    {
      *(_OWORD *)(a1 + 72) = v31;
      v5 = v27;
      v6 = v28;
      v7 = v29;
      *(_OWORD *)(a1 + 56) = v30;
      *(_OWORD *)(a1 + 40) = v7;
      *(_OWORD *)(a1 + 24) = v6;
      *(_OWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = 18LL;
      return result;
    }
    *(_QWORD *)&v33[120] = *(_QWORD *)&v26[120];
    *(_OWORD *)&v33[104] = *(_OWORD *)&v26[104];
    *(_OWORD *)&v33[88] = *(_OWORD *)&v26[88];
    *(_OWORD *)&v33[8] = v27;
    *(_OWORD *)&v33[24] = v28;
    *(_OWORD *)&v33[40] = v29;
    *(_OWORD *)&v33[56] = v30;
    *(_OWORD *)&v33[72] = v31;
    *(_QWORD *)v33 = *(_QWORD *)v26;
    just::parser::Parser::accepted((__int64)v26, a2, 6);
    v12 = v26[0];
    v13 = v26[72];
    if ( v26[72] == 37 )
    {
      if ( (v26[0] & 1) != 0 )
      {
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a2 + 13, 1LL);
        *(_OWORD *)&v26[112] = *(_OWORD *)&v33[112];
        *(_OWORD *)&v26[96] = *(_OWORD *)&v33[96];
        *(_OWORD *)&v26[80] = *(_OWORD *)&v33[80];
        *(_OWORD *)&v26[64] = *(_OWORD *)&v33[64];
        *(_OWORD *)&v26[48] = *(_OWORD *)&v33[48];
        *(_OWORD *)&v26[32] = *(_OWORD *)&v33[32];
        *(_OWORD *)&v26[16] = *(_OWORD *)&v33[16];
        *(_OWORD *)v26 = *(_OWORD *)v33;
        v14 = alloc::boxed::Box<T>::new(v26);
        v32 = v14;
        just::parser::Parser::parse_expression(v26, a2);
        v27 = *(_OWORD *)&v26[8];
        v28 = *(_OWORD *)&v26[24];
        v29 = *(_OWORD *)&v26[40];
        v30 = *(_OWORD *)&v26[56];
        v31 = *(_OWORD *)&v26[72];
        if ( *(_QWORD *)v26 == 18LL )
        {
          *(_OWORD *)(a1 + 72) = v31;
          v15 = v27;
          v16 = v28;
          v17 = v29;
          *(_OWORD *)(a1 + 56) = v30;
          *(_OWORD *)(a1 + 40) = v17;
          *(_OWORD *)(a1 + 24) = v16;
          *(_OWORD *)(a1 + 8) = v15;
          *(_QWORD *)a1 = 18LL;
          return core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v32);
        }
        v51 = *(_QWORD *)&v26[120];
        v50 = *(_OWORD *)&v26[104];
        v49 = *(_OWORD *)&v26[88];
        v43 = *(_QWORD *)v26;
        v44 = v27;
        v45 = v28;
        v46 = v29;
        v47 = v30;
        v48 = v31;
        v22 = alloc::boxed::Box<T>::new(&v43);
        v4 = 15LL;
      }
      else
      {
        v14 = *(_QWORD *)&v33[8];
        v22 = *(_QWORD *)&v33[16];
        v34 = *(_OWORD *)&v33[24];
        v35 = *(_OWORD *)&v33[40];
        v36 = *(_OWORD *)&v33[56];
        v37 = *(_OWORD *)&v33[72];
        v38 = *(_OWORD *)&v33[88];
        v39 = *(_OWORD *)&v33[104];
        v40 = *(_QWORD *)&v33[120];
      }
      --a2[12];
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v22;
      v23 = v35;
      v24 = v36;
      v25 = v37;
      *(_OWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 40) = v23;
      *(_OWORD *)(a1 + 56) = v24;
      *(_OWORD *)(a1 + 72) = v25;
      *(_OWORD *)(a1 + 88) = v38;
      *(_OWORD *)(a1 + 104) = v39;
      result = v40;
      *(_QWORD *)(a1 + 120) = v40;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v26[64];
      v18 = *(_OWORD *)&v26[1];
      v19 = *(_OWORD *)&v26[17];
      v20 = *(_OWORD *)&v26[33];
      *(_OWORD *)(a1 + 57) = *(_OWORD *)&v26[49];
      *(_OWORD *)(a1 + 41) = v20;
      *(_OWORD *)(a1 + 25) = v19;
      *(_OWORD *)(a1 + 9) = v18;
      v21 = *(_DWORD *)&v26[76];
      *(_DWORD *)(a1 + 81) = *(_DWORD *)&v26[73];
      *(_DWORD *)(a1 + 84) = v21;
      *(_BYTE *)(a1 + 8) = v12;
      *(_BYTE *)(a1 + 80) = v13;
      *(_QWORD *)a1 = 18LL;
      return core::ptr::drop_in_place<just::expression::Expression>(v33);
    }
  }
  return result;
}