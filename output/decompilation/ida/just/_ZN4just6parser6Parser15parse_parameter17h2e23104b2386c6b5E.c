__int64 __fastcall just::parser::Parser::parse_parameter(__int64 a1, _QWORD *a2, char a3)
{
  char v4; // r15
  __int64 result; // rax
  char v6; // cl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // edx
  int v11; // ecx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  int v15; // esi
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // [rsp+0h] [rbp-1B8h]
  __int128 v23; // [rsp+0h] [rbp-1B8h]
  __int128 v24; // [rsp+10h] [rbp-1A8h]
  __int128 v25; // [rsp+10h] [rbp-1A8h]
  __int128 v26; // [rsp+20h] [rbp-198h]
  __int128 v27; // [rsp+20h] [rbp-198h]
  __int128 v28; // [rsp+30h] [rbp-188h]
  __int128 v29; // [rsp+30h] [rbp-188h]
  __int64 v30; // [rsp+40h] [rbp-178h]
  _BYTE v31[72]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v32; // [rsp+98h] [rbp-120h]
  __int128 v33; // [rsp+A8h] [rbp-110h]
  __int128 v34; // [rsp+B8h] [rbp-100h]
  __int64 v35; // [rsp+C8h] [rbp-F0h]
  __int128 v36; // [rsp+D0h] [rbp-E8h]
  __int128 v37; // [rsp+E0h] [rbp-D8h]
  __int128 v38; // [rsp+F0h] [rbp-C8h]
  __int128 v39; // [rsp+100h] [rbp-B8h]
  __int64 v40; // [rsp+110h] [rbp-A8h]
  __int128 v41; // [rsp+120h] [rbp-98h]
  __int128 v42; // [rsp+130h] [rbp-88h]
  __int128 v43; // [rsp+140h] [rbp-78h]
  __int128 v44; // [rsp+150h] [rbp-68h]
  __int128 v45; // [rsp+160h] [rbp-58h]
  __int128 v46; // [rsp+170h] [rbp-48h]
  __int128 v47; // [rsp+180h] [rbp-38h]
  __int64 v48; // [rsp+190h] [rbp-28h]

  just::parser::Parser::accepted((__int64)v31, a2, 18);
  v4 = v31[0];
  result = (unsigned __int8)v32;
  if ( (_BYTE)v32 != 37 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v31[64];
    v7 = *(_OWORD *)&v31[1];
    v8 = *(_OWORD *)&v31[17];
    v9 = *(_OWORD *)&v31[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v31[49];
    *(_OWORD *)(a1 + 41) = v9;
    *(_OWORD *)(a1 + 25) = v8;
    *(_OWORD *)(a1 + 9) = v7;
    v10 = DWORD1(v32);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v32 + 1);
    *(_DWORD *)(a1 + 84) = v10;
    *(_BYTE *)(a1 + 8) = v4;
LABEL_10:
    *(_BYTE *)(a1 + 80) = result;
    goto LABEL_11;
  }
  just::parser::Parser::parse_name((__int64)v31, a2);
  result = (unsigned __int8)v32;
  v22 = *(_OWORD *)v31;
  v24 = *(_OWORD *)&v31[16];
  v26 = *(_OWORD *)&v31[32];
  v28 = *(_OWORD *)&v31[48];
  v30 = *(_QWORD *)&v31[64];
  if ( (_BYTE)v32 != 37 )
  {
    v11 = *(_DWORD *)((char *)&v32 + 1);
    *(_DWORD *)(a1 + 84) = DWORD1(v32);
    *(_DWORD *)(a1 + 81) = v11;
    *(_QWORD *)(a1 + 72) = v30;
    *(_OWORD *)(a1 + 56) = v28;
    *(_OWORD *)(a1 + 40) = v26;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v22;
    goto LABEL_10;
  }
  v36 = *(_OWORD *)v31;
  v37 = *(_OWORD *)&v31[16];
  v38 = *(_OWORD *)&v31[32];
  v39 = *(_OWORD *)&v31[48];
  v40 = *(_QWORD *)&v31[64];
  just::parser::Parser::accepted((__int64)v31, a2, 21);
  v6 = v31[0];
  result = (unsigned __int8)v32;
  if ( (_BYTE)v32 != 37 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v31[64];
    v12 = *(_OWORD *)&v31[1];
    v13 = *(_OWORD *)&v31[17];
    v14 = *(_OWORD *)&v31[33];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v31[49];
    *(_OWORD *)(a1 + 41) = v14;
    *(_OWORD *)(a1 + 25) = v13;
    *(_OWORD *)(a1 + 9) = v12;
    v15 = DWORD1(v32);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v32 + 1);
    *(_DWORD *)(a1 + 84) = v15;
    *(_BYTE *)(a1 + 8) = v6;
    goto LABEL_10;
  }
  result = 18LL;
  if ( (v31[0] & 1) != 0 )
  {
    just::parser::Parser::parse_value((__int64)v31, a2);
    result = *(_QWORD *)v31;
    v23 = *(_OWORD *)&v31[8];
    v25 = *(_OWORD *)&v31[24];
    v27 = *(_OWORD *)&v31[40];
    v29 = *(_OWORD *)&v31[56];
    if ( *(_QWORD *)v31 == 18LL )
    {
      *(_OWORD *)(a1 + 72) = v32;
      *(_OWORD *)(a1 + 56) = v29;
      *(_OWORD *)(a1 + 40) = v27;
      *(_OWORD *)(a1 + 24) = v25;
      *(_OWORD *)(a1 + 8) = v23;
LABEL_11:
      *(_QWORD *)a1 = 19LL;
      return result;
    }
    v48 = v35;
    v47 = v34;
    v46 = v33;
    v41 = *(_OWORD *)&v31[8];
    v42 = *(_OWORD *)&v31[24];
    v43 = *(_OWORD *)&v31[40];
    v44 = *(_OWORD *)&v31[56];
    v45 = v32;
  }
  *(_QWORD *)(a1 + 192) = v40;
  v16 = v36;
  v17 = v37;
  v18 = v38;
  *(_OWORD *)(a1 + 176) = v39;
  *(_OWORD *)(a1 + 160) = v18;
  *(_OWORD *)(a1 + 144) = v17;
  *(_OWORD *)(a1 + 128) = v16;
  *(_QWORD *)a1 = result;
  v19 = v42;
  v20 = v43;
  v21 = v44;
  *(_OWORD *)(a1 + 8) = v41;
  *(_OWORD *)(a1 + 24) = v19;
  *(_OWORD *)(a1 + 40) = v20;
  *(_OWORD *)(a1 + 56) = v21;
  *(_OWORD *)(a1 + 72) = v45;
  *(_OWORD *)(a1 + 88) = v46;
  *(_OWORD *)(a1 + 104) = v47;
  result = v48;
  *(_QWORD *)(a1 + 120) = v48;
  *(_BYTE *)(a1 + 200) = v4;
  *(_BYTE *)(a1 + 201) = a3;
  return result;
}