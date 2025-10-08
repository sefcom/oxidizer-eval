__int64 __fastcall just::parser::Parser::parse_set(char *dest, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  int v12; // ecx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  int v17; // r15d
  char v18; // cl
  char v19; // cl
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  int v23; // esi
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rdx
  char v27; // si
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  int v30; // edi
  __int64 v31; // rdx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  _OWORD v38[10]; // [rsp+0h] [rbp-368h] BYREF
  _BYTE v39[80]; // [rsp+A0h] [rbp-2C8h] BYREF
  char v40; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v41[79]; // [rsp+F9h] [rbp-26Fh]
  _BYTE v42[55]; // [rsp+149h] [rbp-21Fh]
  __int128 v43; // [rsp+180h] [rbp-1E8h]
  __int128 v44; // [rsp+190h] [rbp-1D8h]
  __int128 v45; // [rsp+1A0h] [rbp-1C8h]
  __int128 v46; // [rsp+1B0h] [rbp-1B8h]
  __int64 v47; // [rsp+1C0h] [rbp-1A8h]
  __int128 v48; // [rsp+1D0h] [rbp-198h]
  __int128 v49; // [rsp+1E0h] [rbp-188h]
  __int128 v50; // [rsp+1F0h] [rbp-178h]
  __int128 v51; // [rsp+200h] [rbp-168h]
  __int64 v52; // [rsp+210h] [rbp-158h]
  __int128 v53; // [rsp+220h] [rbp-148h]
  __int128 v54; // [rsp+230h] [rbp-138h]
  __int128 v55; // [rsp+240h] [rbp-128h]
  __int128 v56; // [rsp+250h] [rbp-118h]
  __int64 v57; // [rsp+260h] [rbp-108h]
  _OWORD v58[4]; // [rsp+268h] [rbp-100h] BYREF
  __int64 v59; // [rsp+2A8h] [rbp-C0h]
  _BYTE v60[2]; // [rsp+2B0h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+2B2h] [rbp-B6h]
  int v62; // [rsp+2BAh] [rbp-AEh]
  __int16 v63; // [rsp+2BEh] [rbp-AAh]
  __int128 v64; // [rsp+2C0h] [rbp-A8h]
  __int128 v65; // [rsp+2D0h] [rbp-98h]
  __int128 v66; // [rsp+2E0h] [rbp-88h]
  __int128 v67; // [rsp+2F0h] [rbp-78h]
  __int128 v68; // [rsp+300h] [rbp-68h] BYREF
  __int128 v69; // [rsp+310h] [rbp-58h]
  __int128 v70; // [rsp+320h] [rbp-48h]
  __int128 v71; // [rsp+330h] [rbp-38h]
  __int64 v72; // [rsp+340h] [rbp-28h]

  result = just::parser::Parser::presume_keyword((__int64)v38, a2, 21);
  if ( BYTE8(v38[4]) != 37 )
  {
    *(_OWORD *)(dest + 72) = v38[4];
    v8 = v38[0];
    v9 = v38[1];
    v10 = v38[2];
    v11 = v38[3];
    goto LABEL_6;
  }
  just::parser::Parser::presume((__int64)v38, a2, 24);
  result = BYTE8(v38[4]);
  v68 = v38[0];
  v69 = v38[1];
  v70 = v38[2];
  v71 = v38[3];
  v72 = *(_QWORD *)&v38[4];
  if ( BYTE8(v38[4]) != 37 )
  {
    v12 = *(_DWORD *)((char *)&v38[4] + 9);
    *((_DWORD *)dest + 21) = HIDWORD(v38[4]);
    *(_DWORD *)(dest + 81) = v12;
    *((_QWORD *)dest + 9) = v72;
    v13 = v68;
    v14 = v69;
    v15 = v70;
    v16 = v71;
LABEL_8:
    *(_OWORD *)(dest + 56) = v16;
    *(_OWORD *)(dest + 40) = v15;
    *(_OWORD *)(dest + 24) = v14;
    *(_OWORD *)(dest + 8) = v13;
LABEL_9:
    dest[80] = result;
    goto LABEL_10;
  }
  just::name::Name::from_identifier((__int64)v58, &v68);
  v4 = just::token::Token::lexeme(v58);
  v6 = just::keyword::Keyword::from_lexeme(v4, v5);
  if ( v6 == 31 )
  {
    *((_QWORD *)&v38[0] + 1) = just::token::Token::lexeme(v58);
    *(_QWORD *)&v38[1] = v7;
    *(_QWORD *)&v38[0] = 0x8000000000000043LL;
    result = just::token::Token::error(v39, v58, v38);
    *(_OWORD *)(dest + 72) = *(_OWORD *)&v39[64];
    v8 = *(_OWORD *)v39;
    v9 = *(_OWORD *)&v39[16];
    v10 = *(_OWORD *)&v39[32];
    v11 = *(_OWORD *)&v39[48];
LABEL_6:
    *(_OWORD *)(dest + 56) = v11;
    *(_OWORD *)(dest + 40) = v10;
    *(_OWORD *)(dest + 24) = v9;
    *(_OWORD *)(dest + 8) = v8;
LABEL_10:
    *dest = 20;
    return result;
  }
  v17 = v6;
  switch ( v6 )
  {
    case 1u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 0;
      goto LABEL_42;
    case 2u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 1;
      goto LABEL_42;
    case 5u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 3;
      goto LABEL_42;
    case 6u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 4;
      goto LABEL_42;
    case 8u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 6;
      goto LABEL_42;
    case 0xAu:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 7;
      goto LABEL_42;
    case 0xBu:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 8;
      goto LABEL_42;
    case 0xEu:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 9;
      goto LABEL_42;
    case 0x11u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 10;
      goto LABEL_42;
    case 0x12u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 11;
      goto LABEL_42;
    case 0x13u:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 12;
      goto LABEL_42;
    case 0x1Au:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
        goto LABEL_44;
      v19 = 16;
      goto LABEL_42;
    case 0x1Bu:
      just::parser::Parser::parse_set_bool((__int64)v38, a2);
      result = LOBYTE(v38[0]);
      v18 = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
      {
LABEL_44:
        *((_QWORD *)dest + 9) = *(_QWORD *)&v38[4];
        v20 = *(_OWORD *)((char *)v38 + 1);
        v21 = *(_OWORD *)((char *)&v38[1] + 1);
        v22 = *(_OWORD *)((char *)&v38[2] + 1);
        *(_OWORD *)(dest + 57) = *(_OWORD *)((char *)&v38[3] + 1);
        *(_OWORD *)(dest + 41) = v22;
        *(_OWORD *)(dest + 25) = v21;
        *(_OWORD *)(dest + 9) = v20;
        v23 = HIDWORD(v38[4]);
        *(_DWORD *)(dest + 81) = *(_DWORD *)((char *)&v38[4] + 9);
        *((_DWORD *)dest + 21) = v23;
        dest[8] = result;
        dest[80] = v18;
        goto LABEL_10;
      }
      v19 = 17;
LABEL_42:
      v60[0] = v19;
      v60[1] = result;
      v38[4] = v67;
      v38[3] = v66;
      v38[2] = v65;
      v38[1] = v64;
      LOBYTE(v38[0]) = v19;
      BYTE1(v38[0]) = result;
      *(_QWORD *)((char *)v38 + 2) = v61;
      *(_DWORD *)((char *)v38 + 10) = v62;
      HIWORD(v38[0]) = v63;
      goto LABEL_43;
    default:
      v60[0] = 20;
      just::parser::Parser::expect((__int64)v38, a2);
      result = BYTE8(v38[4]);
      if ( BYTE8(v38[4]) != 37 )
      {
        v24 = *(_QWORD *)&v38[0];
        v25 = *(_OWORD *)((char *)v38 + 8);
        v26 = *((_QWORD *)&v38[3] + 1);
        v27 = v38[4];
        *(_DWORD *)v39 = *(_DWORD *)((char *)&v38[4] + 1);
        *(_DWORD *)&v39[3] = DWORD1(v38[4]);
        *((_DWORD *)dest + 21) = HIDWORD(v38[4]);
        *(_DWORD *)(dest + 81) = *(_DWORD *)((char *)&v38[4] + 9);
        v28 = *(_OWORD *)((char *)&v38[1] + 8);
        v29 = *(_OWORD *)((char *)&v38[2] + 8);
        v30 = *(_DWORD *)v39;
        *((_DWORD *)dest + 19) = *(_DWORD *)&v39[3];
        *(_DWORD *)(dest + 73) = v30;
        *((_QWORD *)dest + 1) = v24;
        *((_OWORD *)dest + 1) = v25;
        *((_OWORD *)dest + 2) = v28;
        *((_OWORD *)dest + 3) = v29;
        *((_QWORD *)dest + 8) = v26;
        dest[72] = v27;
        goto LABEL_9;
      }
      switch ( v17 )
      {
        case 4:
          just::parser::Parser::parse_string_literal((__int64)v38, a2);
          result = BYTE8(v38[4]);
          if ( BYTE8(v38[4]) != 37 )
            goto LABEL_62;
          *(_OWORD *)&v39[32] = v38[2];
          *(_OWORD *)&v39[16] = v38[1];
          *(_OWORD *)&v42[7] = v38[0];
          *(_OWORD *)&v42[23] = v38[1];
          *(_OWORD *)&v42[39] = v38[2];
          v40 = 2;
          goto LABEL_60;
        case 7:
          just::parser::Parser::parse_string_literal((__int64)v38, a2);
          result = BYTE8(v38[4]);
          if ( BYTE8(v38[4]) != 37 )
            goto LABEL_62;
          *(_OWORD *)&v39[32] = v38[2];
          *(_OWORD *)&v39[16] = v38[1];
          *(_OWORD *)&v42[7] = v38[0];
          *(_OWORD *)&v42[23] = v38[1];
          *(_OWORD *)&v42[39] = v38[2];
          v40 = 5;
          goto LABEL_60;
        case 20:
          just::parser::Parser::parse_interpreter(v38, a2);
          result = BYTE8(v38[4]);
          v43 = v38[0];
          v44 = v38[1];
          v45 = v38[2];
          v46 = v38[3];
          v47 = *(_QWORD *)&v38[4];
          if ( BYTE8(v38[4]) == 37 )
          {
            *(_OWORD *)&v39[7] = v43;
            *(_OWORD *)&v39[23] = v44;
            *(_OWORD *)&v39[39] = v45;
            *(_OWORD *)&v39[55] = v46;
            *(_QWORD *)&v39[71] = v47;
            v40 = 13;
            goto LABEL_57;
          }
          v36 = *(_DWORD *)((char *)&v38[4] + 9);
          *((_DWORD *)dest + 21) = HIDWORD(v38[4]);
          *(_DWORD *)(dest + 81) = v36;
          *((_QWORD *)dest + 9) = v47;
          v13 = v43;
          v14 = v44;
          v15 = v45;
          v16 = v46;
          goto LABEL_8;
        case 22:
          just::parser::Parser::parse_interpreter(v38, a2);
          result = BYTE8(v38[4]);
          v48 = v38[0];
          v49 = v38[1];
          v50 = v38[2];
          v51 = v38[3];
          v52 = *(_QWORD *)&v38[4];
          if ( BYTE8(v38[4]) == 37 )
          {
            *(_OWORD *)&v39[7] = v48;
            *(_OWORD *)&v39[23] = v49;
            *(_OWORD *)&v39[39] = v50;
            *(_OWORD *)&v39[55] = v51;
            *(_QWORD *)&v39[71] = v52;
            v40 = 14;
            goto LABEL_57;
          }
          v37 = *(_DWORD *)((char *)&v38[4] + 9);
          *((_DWORD *)dest + 21) = HIDWORD(v38[4]);
          *(_DWORD *)(dest + 81) = v37;
          *((_QWORD *)dest + 9) = v52;
          v13 = v48;
          v14 = v49;
          v15 = v50;
          v16 = v51;
          goto LABEL_8;
        case 23:
          just::parser::Parser::parse_string_literal((__int64)v38, a2);
          result = BYTE8(v38[4]);
          if ( BYTE8(v38[4]) != 37 )
            goto LABEL_62;
          *(_OWORD *)&v39[32] = v38[2];
          *(_OWORD *)&v39[16] = v38[1];
          *(_OWORD *)&v42[7] = v38[0];
          *(_OWORD *)&v42[23] = v38[1];
          *(_OWORD *)&v42[39] = v38[2];
          v40 = 15;
          goto LABEL_60;
        case 28:
          just::parser::Parser::parse_interpreter(v38, a2);
          result = BYTE8(v38[4]);
          v53 = v38[0];
          v54 = v38[1];
          v55 = v38[2];
          v56 = v38[3];
          v57 = *(_QWORD *)&v38[4];
          if ( BYTE8(v38[4]) != 37 )
          {
            v35 = *(_DWORD *)((char *)&v38[4] + 9);
            *((_DWORD *)dest + 21) = HIDWORD(v38[4]);
            *(_DWORD *)(dest + 81) = v35;
            *((_QWORD *)dest + 9) = v57;
            v13 = v53;
            v14 = v54;
            v15 = v55;
            v16 = v56;
            goto LABEL_8;
          }
          *(_OWORD *)&v39[7] = v53;
          *(_OWORD *)&v39[23] = v54;
          *(_OWORD *)&v39[39] = v55;
          *(_OWORD *)&v39[55] = v56;
          *(_QWORD *)&v39[71] = v57;
          v40 = 18;
LABEL_57:
          *(_OWORD *)v41 = *(_OWORD *)v39;
          *(_OWORD *)&v41[16] = *(_OWORD *)&v39[16];
          *(_OWORD *)&v41[32] = *(_OWORD *)&v39[32];
          *(_OWORD *)&v41[48] = *(_OWORD *)&v39[48];
          *(_OWORD *)&v41[63] = *(_OWORD *)&v39[63];
          goto LABEL_61;
        case 29:
          just::parser::Parser::parse_string_literal((__int64)v38, a2);
          result = BYTE8(v38[4]);
          if ( BYTE8(v38[4]) != 37 )
          {
LABEL_62:
            *(_QWORD *)&v39[64] = *(_QWORD *)&v38[4];
            *(_OWORD *)&v39[48] = v38[3];
            *(_OWORD *)&v39[32] = v38[2];
            *(_OWORD *)&v39[16] = v38[1];
            *(_OWORD *)v39 = v38[0];
            *((_DWORD *)dest + 21) = HIDWORD(v38[4]);
            *(_DWORD *)(dest + 81) = *(_DWORD *)((char *)&v38[4] + 9);
            *((_QWORD *)dest + 9) = *(_QWORD *)&v39[64];
            v13 = *(_OWORD *)v39;
            v14 = *(_OWORD *)&v39[16];
            v15 = *(_OWORD *)&v39[32];
            v16 = *(_OWORD *)&v39[48];
            goto LABEL_8;
          }
          *(_OWORD *)&v39[32] = v38[2];
          *(_OWORD *)&v39[16] = v38[1];
          *(_OWORD *)&v42[7] = v38[0];
          *(_OWORD *)&v42[23] = v38[1];
          *(_OWORD *)&v42[39] = v38[2];
          v40 = 19;
LABEL_60:
          *(_OWORD *)v41 = *(_OWORD *)v42;
          *(_OWORD *)&v41[16] = *(_OWORD *)&v42[16];
          *(_OWORD *)&v41[32] = *(_OWORD *)&v42[32];
          *(_QWORD *)&v41[47] = *(_QWORD *)&v42[47];
LABEL_61:
          v38[4] = *(_OWORD *)&v41[63];
          v38[3] = *(_OWORD *)&v41[47];
          v38[2] = *(_OWORD *)&v41[31];
          v38[1] = *(_OWORD *)&v41[15];
          LOBYTE(v38[0]) = v40;
          *(_QWORD *)((char *)v38 + 1) = *(_QWORD *)v41;
          *(_DWORD *)((char *)v38 + 9) = *(_DWORD *)&v41[8];
          *(_WORD *)((char *)v38 + 13) = *(_WORD *)&v41[12];
          HIBYTE(v38[0]) = v41[14];
          break;
        default:
          v40 = 20;
          *((_QWORD *)&v38[0] + 1) = just::token::Token::lexeme(v58);
          *(_QWORD *)&v38[1] = v31;
          *(_QWORD *)&v38[0] = 0x8000000000000043LL;
          just::token::Token::error(v39, v58, v38);
          *(_OWORD *)(dest + 72) = *(_OWORD *)&v39[64];
          v32 = *(_OWORD *)v39;
          v33 = *(_OWORD *)&v39[16];
          v34 = *(_OWORD *)&v39[32];
          *(_OWORD *)(dest + 56) = *(_OWORD *)&v39[48];
          *(_OWORD *)(dest + 40) = v34;
          *(_OWORD *)(dest + 24) = v33;
          *(_OWORD *)(dest + 8) = v32;
          *dest = 20;
          core::ptr::drop_in_place<core::option::Option<just::setting::Setting>>(&v40);
          return core::ptr::drop_in_place<core::option::Option<just::setting::Setting>>(v60);
      }
LABEL_43:
      v38[5] = v58[0];
      v38[6] = v58[1];
      v38[7] = v58[2];
      v38[8] = v58[3];
      *(_QWORD *)&v38[9] = v59;
      result = (__int64)memcpy(dest, v38, 0x98uLL);
      break;
  }
  return result;
}