__int64 __fastcall just::parser::Parser::parse_sequence(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v4; // al
  char v5; // cl
  char v6; // al
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // rdx
  char v10; // si
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  int v13; // edi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rdx
  char v20; // si
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  int v23; // edi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  int v27; // esi
  __int128 v28; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v29; // [rsp+18h] [rbp-190h]
  __int128 v30; // [rsp+20h] [rbp-188h]
  __int128 v31; // [rsp+30h] [rbp-178h]
  __int128 v32; // [rsp+40h] [rbp-168h]
  __int128 v33; // [rsp+50h] [rbp-158h]
  __int128 v34; // [rsp+60h] [rbp-148h]
  _BYTE v35[72]; // [rsp+78h] [rbp-130h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-E8h]
  __int128 v37; // [rsp+D0h] [rbp-D8h]
  __int128 v38; // [rsp+E0h] [rbp-C8h]
  __int64 v39; // [rsp+F0h] [rbp-B8h]
  __int64 v40; // [rsp+F8h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+100h] [rbp-A8h]
  __int128 v42; // [rsp+110h] [rbp-98h]
  __int128 v43; // [rsp+120h] [rbp-88h]
  __int128 v44; // [rsp+130h] [rbp-78h]
  __int128 v45; // [rsp+140h] [rbp-68h]
  __int128 v46; // [rsp+150h] [rbp-58h]
  __int128 v47; // [rsp+160h] [rbp-48h]
  __int64 v48; // [rsp+170h] [rbp-38h]

  just::parser::Parser::presume((__int64)v35, a2, 28);
  result = (unsigned __int8)v36;
  if ( (_BYTE)v36 == 37 )
  {
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = 8LL;
    v29 = 0LL;
    do
    {
      if ( (unsigned __int8)just::parser::Parser::next_is((__int64)a2, 29) )
        break;
      just::parser::Parser::parse_expression((__int64)v35, a2);
      v30 = *(_OWORD *)&v35[8];
      v31 = *(_OWORD *)&v35[24];
      v32 = *(_OWORD *)&v35[40];
      v33 = *(_OWORD *)&v35[56];
      v34 = v36;
      if ( *(_QWORD *)v35 == 18LL )
      {
        *(_OWORD *)(a1 + 64) = v34;
        v14 = v30;
        v15 = v31;
        v16 = v32;
        *(_OWORD *)(a1 + 48) = v33;
        *(_OWORD *)(a1 + 32) = v16;
        *(_OWORD *)(a1 + 16) = v15;
        *(_OWORD *)a1 = v14;
        return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v28);
      }
      v48 = v39;
      v47 = v38;
      v46 = v37;
      v40 = *(_QWORD *)v35;
      v45 = v34;
      v44 = v33;
      v43 = v32;
      v42 = v31;
      v41 = v30;
      alloc::vec::Vec<T,A>::push(&v28, &v40, &off_430910);
      just::parser::Parser::accepted((__int64)v35, a2, 15);
      v4 = v35[0];
      v5 = v36;
      if ( (_BYTE)v36 != 37 )
      {
        *(_QWORD *)(a1 + 64) = *(_QWORD *)&v35[64];
        v24 = *(_OWORD *)&v35[1];
        v25 = *(_OWORD *)&v35[17];
        v26 = *(_OWORD *)&v35[33];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v35[49];
        *(_OWORD *)(a1 + 33) = v26;
        *(_OWORD *)(a1 + 17) = v25;
        *(_OWORD *)(a1 + 1) = v24;
        v27 = DWORD1(v36);
        *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v36 + 1);
        *(_DWORD *)(a1 + 76) = v27;
        *(_BYTE *)a1 = v4;
        *(_BYTE *)(a1 + 72) = v5;
        return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v28);
      }
    }
    while ( (v35[0] & 1) != 0 );
    just::parser::Parser::expect((__int64)v35, a2);
    v6 = v36;
    if ( (_BYTE)v36 == 37 )
    {
      result = v29;
      *(_QWORD *)(a1 + 16) = v29;
      *(_OWORD *)a1 = v28;
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    v17 = *(_QWORD *)v35;
    v18 = *(_OWORD *)&v35[8];
    v19 = *(_QWORD *)&v35[56];
    v20 = v35[64];
    LODWORD(v30) = *(_DWORD *)&v35[65];
    *(_DWORD *)((char *)&v30 + 3) = *(_DWORD *)&v35[68];
    *(_DWORD *)(a1 + 76) = DWORD1(v36);
    *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v36 + 1);
    v21 = *(_OWORD *)&v35[24];
    v22 = *(_OWORD *)&v35[40];
    v23 = v30;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v30 + 3);
    *(_DWORD *)(a1 + 65) = v23;
    *(_QWORD *)a1 = v17;
    *(_OWORD *)(a1 + 8) = v18;
    *(_OWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 40) = v22;
    *(_QWORD *)(a1 + 56) = v19;
    *(_BYTE *)(a1 + 64) = v20;
    *(_BYTE *)(a1 + 72) = v6;
    return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v28);
  }
  else
  {
    v7 = *(_QWORD *)v35;
    v8 = *(_OWORD *)&v35[8];
    v9 = *(_QWORD *)&v35[56];
    v10 = v35[64];
    LODWORD(v30) = *(_DWORD *)&v35[65];
    *(_DWORD *)((char *)&v30 + 3) = *(_DWORD *)&v35[68];
    *(_DWORD *)(a1 + 76) = DWORD1(v36);
    *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v36 + 1);
    v11 = *(_OWORD *)&v35[24];
    v12 = *(_OWORD *)&v35[40];
    v13 = v30;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v30 + 3);
    *(_DWORD *)(a1 + 65) = v13;
    *(_QWORD *)a1 = v7;
    *(_OWORD *)(a1 + 8) = v8;
    *(_OWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 40) = v12;
    *(_QWORD *)(a1 + 56) = v9;
    *(_BYTE *)(a1 + 64) = v10;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}