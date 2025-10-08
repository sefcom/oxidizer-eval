__int64 __fastcall just::parser::Parser::parse_body(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  char v7; // al
  char v8; // cl
  char v9; // cl
  char v10; // al
  char v11; // al
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rdx
  char v15; // si
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  int v18; // edi
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  int v22; // esi
  __int64 v23; // r15
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  int v27; // esi
  int v28; // edx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // r15
  __int64 v40; // r12
  __int128 v41; // xmm0
  bool v43; // zf
  _BYTE v44[7]; // [rsp+8h] [rbp-200h]
  _BYTE v45[72]; // [rsp+10h] [rbp-1F8h] BYREF
  __int128 v46; // [rsp+58h] [rbp-1B0h]
  __int128 v47; // [rsp+68h] [rbp-1A0h]
  __int128 v48; // [rsp+78h] [rbp-190h]
  __int64 v49; // [rsp+88h] [rbp-180h]
  __int128 v50; // [rsp+90h] [rbp-178h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-168h]
  __int128 v52; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-150h]
  __int128 v54; // [rsp+C0h] [rbp-148h]
  __int128 v55; // [rsp+D0h] [rbp-138h]
  __int128 v56; // [rsp+E0h] [rbp-128h]
  __int128 v57; // [rsp+F0h] [rbp-118h]
  __int128 v58; // [rsp+100h] [rbp-108h]
  __int128 v59; // [rsp+110h] [rbp-F8h]
  __int128 v60; // [rsp+120h] [rbp-E8h]
  __int128 v61; // [rsp+130h] [rbp-D8h]
  __int128 v62; // [rsp+140h] [rbp-C8h]
  _BYTE v63[88]; // [rsp+150h] [rbp-B8h] BYREF
  __int128 v64; // [rsp+1A8h] [rbp-60h]
  __int128 v65; // [rsp+1B8h] [rbp-50h]
  __int64 v66; // [rsp+1C8h] [rbp-40h]

  *(_QWORD *)&v50 = 0LL;
  *((_QWORD *)&v50 + 1) = 8LL;
  v51 = 0LL;
  just::parser::Parser::accepted((__int64)v45, a2, 25);
  result = v45[0];
  v4 = v46;
  if ( (_BYTE)v46 == 37 )
  {
    if ( (v45[0] & 1) == 0 )
    {
      v23 = 0LL;
LABEL_24:
      v51 = v23;
      *(_QWORD *)(a1 + 16) = v23;
      *(_OWORD *)a1 = v50;
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    while ( 1 )
    {
      just::parser::Parser::accepted((__int64)v45, a2, 17);
      LOBYTE(result) = v45[0];
      v4 = v46;
      if ( (_BYTE)v46 != 37 )
        break;
      if ( (v45[0] & 1) != 0 )
      {
        result = *((_QWORD *)&v50 + 1);
        v23 = v51;
        if ( v51 != 0 && *((_QWORD *)&v50 + 1) + 32 * v51 != 32 )
        {
          v39 = v51 - 1;
          v40 = 32 * v51 + *((_QWORD *)&v50 + 1) - 64;
          do
          {
            if ( *(_QWORD *)(v40 + 48) )
              break;
            v41 = *(_OWORD *)(v40 + 32);
            *(_OWORD *)&v45[16] = *(_OWORD *)(v40 + 48);
            *(_OWORD *)v45 = v41;
            result = core::ptr::drop_in_place<core::option::Option<just::line::Line>>(v45);
            if ( v39-- == 0 )
              break;
            result = v40 - 32;
            v43 = v40 == 0;
            v40 -= 32LL;
          }
          while ( !v43 );
          v23 = v39 + 1;
        }
        goto LABEL_24;
      }
      *(_QWORD *)&v52 = 0LL;
      *((_QWORD *)&v52 + 1) = 8LL;
      v53 = 0LL;
      v5 = a2[11];
      if ( v5 >= a2[4] )
        v6 = 0LL;
      else
        v6 = *(_QWORD *)(a2[3] + 72 * v5 + 48);
      just::parser::Parser::accepted((__int64)v45, a2, 20);
      v7 = v45[0];
      v8 = v46;
      if ( (_BYTE)v46 != 37 )
        goto LABEL_25;
      if ( (v45[0] & 1) == 0 )
      {
        while ( 1 )
        {
          just::parser::Parser::accepted((__int64)v45, a2, 20);
          v7 = v45[0];
          v8 = v46;
          if ( (_BYTE)v46 != 37 )
            break;
          if ( (v45[0] & 1) != 0 || (unsigned __int8)just::parser::Parser::next_is((__int64)a2, 17) )
            goto LABEL_10;
          just::parser::Parser::accept((__int64)v45, a2, 34);
          v9 = v46;
          v54 = *(_OWORD *)v45;
          v55 = *(_OWORD *)&v45[16];
          v56 = *(_OWORD *)&v45[32];
          v57 = *(_OWORD *)&v45[48];
          v10 = v45[64];
          *(_DWORD *)v44 = *(_DWORD *)&v45[65];
          *(_DWORD *)&v44[3] = *(_DWORD *)&v45[68];
          if ( (_BYTE)v46 != 37 )
          {
            v28 = *(_DWORD *)((char *)&v46 + 1);
            *(_DWORD *)(a1 + 76) = DWORD1(v46);
            *(_DWORD *)(a1 + 73) = v28;
            v29 = v54;
            v30 = v55;
            v31 = v56;
            *(_OWORD *)(a1 + 48) = v57;
            *(_OWORD *)(a1 + 32) = v31;
            *(_OWORD *)(a1 + 16) = v30;
            *(_OWORD *)a1 = v29;
            *(_DWORD *)(a1 + 68) = *(_DWORD *)&v44[3];
            *(_DWORD *)(a1 + 65) = *(_DWORD *)v44;
            *(_BYTE *)(a1 + 64) = v10;
            *(_BYTE *)(a1 + 72) = v9;
            goto LABEL_29;
          }
          if ( v45[64] == 37 )
          {
            just::parser::Parser::accepted((__int64)v45, a2, 27);
            v7 = v45[0];
            v8 = v46;
            if ( (_BYTE)v46 != 37 )
              break;
            if ( (v45[0] & 1) == 0 )
            {
              just::parser::Parser::unexpected_token((__int64)v45, a2);
              *(_OWORD *)&v63[64] = v46;
              v32 = *(_OWORD *)&v45[8];
              v33 = *(_OWORD *)&v45[24];
              v34 = *(_OWORD *)&v45[40];
              v35 = *(_OWORD *)&v45[56];
              *(_OWORD *)&v63[48] = *(_OWORD *)&v45[56];
              *(_OWORD *)&v63[32] = *(_OWORD *)&v45[40];
              *(_OWORD *)&v63[16] = *(_OWORD *)&v45[24];
              *(_OWORD *)v63 = *(_OWORD *)&v45[8];
              *(_OWORD *)(a1 + 64) = v46;
              *(_OWORD *)(a1 + 48) = v35;
              *(_OWORD *)(a1 + 32) = v34;
              *(_OWORD *)(a1 + 16) = v33;
              *(_OWORD *)a1 = v32;
              goto LABEL_29;
            }
            just::parser::Parser::parse_expression((__int64)v45, a2);
            v58 = *(_OWORD *)&v45[8];
            v59 = *(_OWORD *)&v45[24];
            v60 = *(_OWORD *)&v45[40];
            v61 = *(_OWORD *)&v45[56];
            v62 = v46;
            if ( *(_QWORD *)v45 == 18LL )
            {
              *(_OWORD *)(a1 + 64) = v62;
              v36 = v58;
              v37 = v59;
              v38 = v60;
              *(_OWORD *)(a1 + 48) = v61;
              *(_OWORD *)(a1 + 32) = v38;
              *(_OWORD *)(a1 + 16) = v37;
              *(_OWORD *)a1 = v36;
              goto LABEL_29;
            }
            v66 = v49;
            v65 = v48;
            v64 = v47;
            *(_OWORD *)&v63[72] = v62;
            *(_OWORD *)&v63[56] = v61;
            *(_OWORD *)&v63[40] = v60;
            *(_OWORD *)&v63[24] = v59;
            *(_OWORD *)&v63[8] = v58;
            *(_QWORD *)v63 = *(_QWORD *)v45;
            alloc::vec::Vec<T,A>::push(&v52, v63, &off_430988);
            just::parser::Parser::expect((__int64)v45, a2);
            v11 = v46;
            if ( (_BYTE)v46 != 37 )
            {
              v12 = *(_QWORD *)v45;
              v13 = *(_OWORD *)&v45[8];
              v14 = *(_QWORD *)&v45[56];
              v15 = v45[64];
              *(_DWORD *)v63 = *(_DWORD *)&v45[65];
              *(_DWORD *)&v63[3] = *(_DWORD *)&v45[68];
              *(_DWORD *)(a1 + 76) = DWORD1(v46);
              *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v46 + 1);
              v16 = *(_OWORD *)&v45[24];
              v17 = *(_OWORD *)&v45[40];
              v18 = *(_DWORD *)v63;
              *(_DWORD *)(a1 + 68) = *(_DWORD *)&v63[3];
              *(_DWORD *)(a1 + 65) = v18;
              *(_QWORD *)a1 = v12;
              *(_OWORD *)(a1 + 8) = v13;
              *(_OWORD *)(a1 + 24) = v16;
              *(_OWORD *)(a1 + 40) = v17;
              *(_QWORD *)(a1 + 56) = v14;
              *(_BYTE *)(a1 + 64) = v15;
              *(_BYTE *)(a1 + 72) = v11;
              goto LABEL_29;
            }
          }
          else
          {
            *(_OWORD *)&v45[56] = v57;
            *(_OWORD *)&v45[40] = v56;
            *(_OWORD *)&v45[24] = v55;
            *(_OWORD *)&v45[8] = v54;
            DWORD1(v46) = *(_DWORD *)&v44[3];
            *(_DWORD *)((char *)&v46 + 1) = *(_DWORD *)v44;
            LOBYTE(v46) = v10;
            *(_QWORD *)v45 = 18LL;
            alloc::vec::Vec<T,A>::push(&v52, v45, &off_430970);
          }
        }
LABEL_25:
        *(_QWORD *)(a1 + 64) = *(_QWORD *)&v45[64];
        v24 = *(_OWORD *)&v45[1];
        v25 = *(_OWORD *)&v45[17];
        v26 = *(_OWORD *)&v45[33];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v45[49];
        *(_OWORD *)(a1 + 33) = v26;
        *(_OWORD *)(a1 + 17) = v25;
        *(_OWORD *)(a1 + 1) = v24;
        v27 = DWORD1(v46);
        *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v46 + 1);
        *(_DWORD *)(a1 + 76) = v27;
        *(_BYTE *)a1 = v7;
        *(_BYTE *)(a1 + 72) = v8;
LABEL_29:
        core::ptr::drop_in_place<alloc::vec::Vec<just::fragment::Fragment>>(&v52);
        return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v50);
      }
LABEL_10:
      *(_QWORD *)&v45[16] = v53;
      *(_OWORD *)v45 = v52;
      *(_QWORD *)&v45[24] = v6;
      alloc::vec::Vec<T,A>::push(&v50, v45);
    }
  }
  *(_QWORD *)(a1 + 64) = *(_QWORD *)&v45[64];
  v19 = *(_OWORD *)&v45[1];
  v20 = *(_OWORD *)&v45[17];
  v21 = *(_OWORD *)&v45[33];
  *(_OWORD *)(a1 + 49) = *(_OWORD *)&v45[49];
  *(_OWORD *)(a1 + 33) = v21;
  *(_OWORD *)(a1 + 17) = v20;
  *(_OWORD *)(a1 + 1) = v19;
  v22 = DWORD1(v46);
  *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v46 + 1);
  *(_DWORD *)(a1 + 76) = v22;
  *(_BYTE *)a1 = result;
  *(_BYTE *)(a1 + 72) = v4;
  return core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v50);
}