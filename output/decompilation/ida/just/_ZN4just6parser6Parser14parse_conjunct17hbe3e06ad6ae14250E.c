__int64 __fastcall just::parser::Parser::parse_conjunct(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v3; // cl
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // esi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  char v14; // cl
  __int64 v15; // r15
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // r15
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  int v26; // esi
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  _BYTE v30[128]; // [rsp+0h] [rbp-2F8h] BYREF
  __int64 v31; // [rsp+88h] [rbp-270h] BYREF
  __int128 v32; // [rsp+90h] [rbp-268h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-258h]
  __int128 v34; // [rsp+B0h] [rbp-248h]
  __int128 v35; // [rsp+C0h] [rbp-238h]
  __int128 v36; // [rsp+D0h] [rbp-228h]
  _BYTE v37[128]; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v38; // [rsp+160h] [rbp-198h] BYREF
  __int128 v39; // [rsp+168h] [rbp-190h]
  __int128 v40; // [rsp+178h] [rbp-180h]
  __int128 v41; // [rsp+188h] [rbp-170h]
  __int128 v42; // [rsp+198h] [rbp-160h]
  __int128 v43; // [rsp+1A8h] [rbp-150h]
  __int128 v44; // [rsp+1B8h] [rbp-140h]
  __int128 v45; // [rsp+1C8h] [rbp-130h]
  __int64 v46; // [rsp+1D8h] [rbp-120h]
  __int64 v47; // [rsp+1E0h] [rbp-118h] BYREF
  __int128 v48; // [rsp+1E8h] [rbp-110h]
  __int128 v49; // [rsp+1F8h] [rbp-100h]
  __int128 v50; // [rsp+208h] [rbp-F0h]
  __int128 v51; // [rsp+218h] [rbp-E0h]
  __int128 v52; // [rsp+228h] [rbp-D0h]
  __int128 v53; // [rsp+238h] [rbp-C0h]
  __int128 v54; // [rsp+248h] [rbp-B0h]
  __int64 v55; // [rsp+258h] [rbp-A0h]
  __int64 v56; // [rsp+260h] [rbp-98h] BYREF
  __int128 v57; // [rsp+268h] [rbp-90h]
  __int128 v58; // [rsp+278h] [rbp-80h]
  __int128 v59; // [rsp+288h] [rbp-70h]
  __int128 v60; // [rsp+298h] [rbp-60h]
  __int128 v61; // [rsp+2A8h] [rbp-50h]
  __int128 v62; // [rsp+2B8h] [rbp-40h]
  __int128 v63; // [rsp+2C8h] [rbp-30h]
  __int64 v64; // [rsp+2D8h] [rbp-20h]

  just::parser::Parser::accepted_keyword((__int64)v30, a2, 0xDu);
  result = v30[0];
  v3 = v30[72];
  if ( v30[72] != 37 )
    goto LABEL_8;
  if ( (v30[0] & 1) != 0 )
    return just::parser::Parser::parse_conditional(a1, a2);
  just::parser::Parser::accepted((__int64)v30, a2, 32);
  result = v30[0];
  v3 = v30[72];
  if ( v30[72] != 37 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v30[64];
    v7 = *(_OWORD *)&v30[1];
    v8 = *(_OWORD *)&v30[17];
    v9 = *(_OWORD *)&v30[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v30[49];
    *(_OWORD *)(a1 + 41) = v9;
    *(_OWORD *)(a1 + 25) = v8;
    *(_OWORD *)(a1 + 9) = v7;
    v10 = *(_DWORD *)&v30[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v30[73];
    *(_DWORD *)(a1 + 84) = v10;
    *(_BYTE *)(a1 + 8) = result;
    *(_BYTE *)(a1 + 80) = v3;
LABEL_9:
    *(_QWORD *)a1 = 18LL;
    return result;
  }
  if ( (v30[0] & 1) != 0 )
  {
    *(_QWORD *)&v32 = 0LL;
    just::parser::Parser::parse_conjunct(v30);
    *(_OWORD *)v37 = *(_OWORD *)&v30[8];
    *(_OWORD *)&v37[16] = *(_OWORD *)&v30[24];
    *(_OWORD *)&v37[32] = *(_OWORD *)&v30[40];
    *(_OWORD *)&v37[48] = *(_OWORD *)&v30[56];
    *(_OWORD *)&v37[64] = *(_OWORD *)&v30[72];
    if ( *(_QWORD *)v30 == 18LL )
    {
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v37[64];
      v4 = *(_OWORD *)v37;
      v5 = *(_OWORD *)&v37[16];
      v6 = *(_OWORD *)&v37[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v37[48];
      *(_OWORD *)(a1 + 40) = v6;
      *(_OWORD *)(a1 + 24) = v5;
      *(_OWORD *)(a1 + 8) = v4;
      *(_QWORD *)a1 = 18LL;
      return core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<just::expression::Expression>>>(&v32, a2);
    }
    else
    {
      v46 = *(_QWORD *)&v30[120];
      v45 = *(_OWORD *)&v30[104];
      v44 = *(_OWORD *)&v30[88];
      v38 = *(_QWORD *)v30;
      v39 = *(_OWORD *)v37;
      v40 = *(_OWORD *)&v37[16];
      v41 = *(_OWORD *)&v37[32];
      v42 = *(_OWORD *)&v37[48];
      v43 = *(_OWORD *)&v37[64];
      result = alloc::boxed::Box<T>::new(&v38);
      *(_QWORD *)a1 = 14LL;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    return result;
  }
  just::parser::Parser::parse_value(v30, a2);
  result = *(_QWORD *)v30;
  v32 = *(_OWORD *)&v30[8];
  v33 = *(_OWORD *)&v30[24];
  v34 = *(_OWORD *)&v30[40];
  v35 = *(_OWORD *)&v30[56];
  v36 = *(_OWORD *)&v30[72];
  if ( *(_QWORD *)v30 == 18LL )
  {
    *(_OWORD *)(a1 + 72) = v36;
    v11 = v32;
    v12 = v33;
    v13 = v34;
    *(_OWORD *)(a1 + 56) = v35;
    *(_OWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    goto LABEL_9;
  }
  *(_QWORD *)&v37[120] = *(_QWORD *)&v30[120];
  *(_OWORD *)&v37[104] = *(_OWORD *)&v30[104];
  *(_OWORD *)&v37[88] = *(_OWORD *)&v30[88];
  *(_OWORD *)&v37[8] = v32;
  *(_OWORD *)&v37[24] = v33;
  *(_OWORD *)&v37[40] = v34;
  *(_OWORD *)&v37[56] = v35;
  *(_OWORD *)&v37[72] = v36;
  *(_QWORD *)v37 = *(_QWORD *)v30;
  just::parser::Parser::accepted((__int64)v30, a2, 32);
  LOBYTE(result) = v30[0];
  v14 = v30[72];
  if ( v30[72] != 37 )
    goto LABEL_21;
  if ( (v30[0] & 1) != 0 )
  {
    *(_OWORD *)&v30[112] = *(_OWORD *)&v37[112];
    *(_OWORD *)&v30[96] = *(_OWORD *)&v37[96];
    *(_OWORD *)&v30[80] = *(_OWORD *)&v37[80];
    *(_OWORD *)&v30[64] = *(_OWORD *)&v37[64];
    *(_OWORD *)&v30[48] = *(_OWORD *)&v37[48];
    *(_OWORD *)&v30[32] = *(_OWORD *)&v37[32];
    *(_OWORD *)&v30[16] = *(_OWORD *)&v37[16];
    *(_OWORD *)v30 = *(_OWORD *)v37;
    v15 = alloc::boxed::Box<T>::new(v30);
    v31 = v15;
    just::parser::Parser::parse_conjunct(v30);
    v32 = *(_OWORD *)&v30[8];
    v33 = *(_OWORD *)&v30[24];
    v34 = *(_OWORD *)&v30[40];
    v35 = *(_OWORD *)&v30[56];
    v36 = *(_OWORD *)&v30[72];
    if ( *(_QWORD *)v30 == 18LL )
    {
      *(_OWORD *)(a1 + 72) = v36;
      v16 = v32;
      v17 = v33;
      v18 = v34;
      *(_OWORD *)(a1 + 56) = v35;
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 18LL;
      return core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<just::expression::Expression>>>(&v31, a2);
    }
    else
    {
      v55 = *(_QWORD *)&v30[120];
      v54 = *(_OWORD *)&v30[104];
      v53 = *(_OWORD *)&v30[88];
      v47 = *(_QWORD *)v30;
      v48 = v32;
      v49 = v33;
      v50 = v34;
      v51 = v35;
      v52 = v36;
      result = alloc::boxed::Box<T>::new(&v47);
      *(_QWORD *)a1 = 14LL;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v15;
    }
    return result;
  }
  just::parser::Parser::accepted((__int64)v30, a2, 30);
  result = v30[0];
  v14 = v30[72];
  if ( v30[72] != 37 )
  {
LABEL_21:
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v30[64];
    v23 = *(_OWORD *)&v30[1];
    v24 = *(_OWORD *)&v30[17];
    v25 = *(_OWORD *)&v30[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v30[49];
    *(_OWORD *)(a1 + 41) = v25;
    *(_OWORD *)(a1 + 25) = v24;
    *(_OWORD *)(a1 + 9) = v23;
    v26 = *(_DWORD *)&v30[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v30[73];
    *(_DWORD *)(a1 + 84) = v26;
    *(_BYTE *)(a1 + 8) = result;
    *(_BYTE *)(a1 + 80) = v14;
    *(_QWORD *)a1 = 18LL;
    return core::ptr::drop_in_place<just::expression::Expression>(v37);
  }
  if ( (v30[0] & 1) != 0 )
  {
    *(_OWORD *)&v30[112] = *(_OWORD *)&v37[112];
    *(_OWORD *)&v30[96] = *(_OWORD *)&v37[96];
    *(_OWORD *)&v30[80] = *(_OWORD *)&v37[80];
    *(_OWORD *)&v30[64] = *(_OWORD *)&v37[64];
    *(_OWORD *)&v30[48] = *(_OWORD *)&v37[48];
    *(_OWORD *)&v30[32] = *(_OWORD *)&v37[32];
    *(_OWORD *)&v30[16] = *(_OWORD *)&v37[16];
    *(_OWORD *)v30 = *(_OWORD *)v37;
    v19 = alloc::boxed::Box<T>::new(v30);
    v31 = v19;
    just::parser::Parser::parse_conjunct(v30);
    v32 = *(_OWORD *)&v30[8];
    v33 = *(_OWORD *)&v30[24];
    v34 = *(_OWORD *)&v30[40];
    v35 = *(_OWORD *)&v30[56];
    v36 = *(_OWORD *)&v30[72];
    if ( *(_QWORD *)v30 == 18LL )
    {
      *(_OWORD *)(a1 + 72) = v36;
      v20 = v32;
      v21 = v33;
      v22 = v34;
      *(_OWORD *)(a1 + 56) = v35;
      *(_OWORD *)(a1 + 40) = v22;
      *(_OWORD *)(a1 + 24) = v21;
      *(_OWORD *)(a1 + 8) = v20;
      *(_QWORD *)a1 = 18LL;
      return core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v31);
    }
    else
    {
      v64 = *(_QWORD *)&v30[120];
      v63 = *(_OWORD *)&v30[104];
      v62 = *(_OWORD *)&v30[88];
      v56 = *(_QWORD *)v30;
      v57 = v32;
      v58 = v33;
      v59 = v34;
      v60 = v35;
      v61 = v36;
      result = alloc::boxed::Box<T>::new(&v56);
      *(_QWORD *)a1 = 11LL;
      *(_QWORD *)(a1 + 8) = v19;
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)&v37[112];
    *(_OWORD *)(a1 + 96) = *(_OWORD *)&v37[96];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v37[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v37[64];
    v27 = *(_OWORD *)v37;
    v28 = *(_OWORD *)&v37[16];
    v29 = *(_OWORD *)&v37[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v37[48];
    *(_OWORD *)(a1 + 32) = v29;
    *(_OWORD *)(a1 + 16) = v28;
    *(_OWORD *)a1 = v27;
  }
  return result;
}