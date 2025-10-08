__int64 __fastcall just::parser::Parser::parse_ast(__int64 a1, __m256i *a2)
{
  int v2; // ebp
  __int64 *v3; // rbx
  unsigned __int64 v4; // rdx
  char v5; // al
  int v6; // r13d
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int8 v19; // cl
  char v20; // bp
  __int8 v21; // al
  __int64 v22; // rdx
  __int8 v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  __int8 v26; // cl
  __int8 v27; // al
  char v28; // al
  _QWORD *v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  int v37; // ecx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  int v41; // edx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int64 v55; // rdx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  __int128 v62; // xmm3
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm2
  __int128 v66; // xmm3
  __int128 v67; // xmm4
  __int128 v68; // xmm0
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  int v77; // edx
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  char v84; // [rsp+Fh] [rbp-4D9h]
  _BYTE v85[87]; // [rsp+10h] [rbp-4D8h] BYREF
  _BYTE v86[256]; // [rsp+70h] [rbp-478h] BYREF
  _DWORD v87[2]; // [rsp+170h] [rbp-378h]
  __int128 v88; // [rsp+178h] [rbp-370h] BYREF
  __int64 v89; // [rsp+188h] [rbp-360h]
  __int128 v90; // [rsp+190h] [rbp-358h] BYREF
  __int128 v91; // [rsp+1A0h] [rbp-348h]
  __int128 v92; // [rsp+1B0h] [rbp-338h]
  _BYTE v93[256]; // [rsp+1C0h] [rbp-328h] BYREF
  __m256i v94; // [rsp+2C0h] [rbp-228h] BYREF
  __int128 v95; // [rsp+2E0h] [rbp-208h]
  __int128 v96; // [rsp+2F0h] [rbp-1F8h]
  __m256i v97; // [rsp+300h] [rbp-1E8h] BYREF
  __int128 v98; // [rsp+320h] [rbp-1C8h] BYREF
  __int64 v99; // [rsp+330h] [rbp-1B8h]
  __int128 v100; // [rsp+340h] [rbp-1A8h]
  __int64 v101; // [rsp+350h] [rbp-198h]
  __int128 v102; // [rsp+358h] [rbp-190h] BYREF
  __int64 v103; // [rsp+368h] [rbp-180h]
  __int64 v104; // [rsp+370h] [rbp-178h]
  __int64 v105; // [rsp+378h] [rbp-170h]
  __int128 v106; // [rsp+380h] [rbp-168h]
  __int128 v107; // [rsp+390h] [rbp-158h]
  __int128 v108; // [rsp+3A0h] [rbp-148h]
  __int128 v109; // [rsp+3B0h] [rbp-138h]
  __int128 v110; // [rsp+3C0h] [rbp-128h] BYREF
  __int128 v111; // [rsp+3D0h] [rbp-118h]
  __int128 v112; // [rsp+3E0h] [rbp-108h]
  __int128 v113; // [rsp+3F0h] [rbp-F8h]
  __int64 v114; // [rsp+400h] [rbp-E8h]
  __int128 v115; // [rsp+410h] [rbp-D8h]
  __int128 v116; // [rsp+420h] [rbp-C8h]
  __int128 v117; // [rsp+430h] [rbp-B8h]
  __int128 v118; // [rsp+440h] [rbp-A8h]
  __int64 v119; // [rsp+450h] [rbp-98h]
  __int128 v120; // [rsp+458h] [rbp-90h] BYREF
  __int64 v121; // [rsp+468h] [rbp-80h]
  _OWORD v122[4]; // [rsp+470h] [rbp-78h] BYREF
  __int64 v123; // [rsp+4B0h] [rbp-38h]

  v3 = (__int64 *)a2;
  *(_QWORD *)&v88 = 0LL;
  *((_QWORD *)&v88 + 1) = 8LL;
  v89 = 0LL;
  just::parser::Parser::accept((__int64)v86, a2, 11);
  v4 = 0x8000000000000000LL;
  v5 = v86[72];
  if ( v86[72] != 37 )
  {
    *(_QWORD *)&v93[64] = *(_QWORD *)&v86[64];
    *(_OWORD *)&v93[48] = *(_OWORD *)&v86[48];
    *(_OWORD *)&v93[32] = *(_OWORD *)&v86[32];
    *(_OWORD *)&v93[16] = *(_OWORD *)&v86[16];
    *(_OWORD *)v93 = *(_OWORD *)v86;
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v86[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v86[73];
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v93[64];
    v30 = *(_OWORD *)v93;
    v31 = *(_OWORD *)&v93[16];
    v32 = *(_OWORD *)&v93[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v93[48];
    *(_OWORD *)(a1 + 40) = v32;
    *(_OWORD *)(a1 + 24) = v31;
    *(_OWORD *)(a1 + 8) = v30;
    *(_BYTE *)(a1 + 80) = v5;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_117:
    core::ptr::drop_in_place<alloc::vec::Vec<just::item::Item>>(&v88, a2, v4);
    return core::ptr::drop_in_place<just::parser::Parser>(v3);
  }
  v6 = 0;
  while ( 1 )
  {
    a2 = (__m256i *)v3;
    just::parser::Parser::parse_attributes(v86, v3, v4);
    if ( *(_DWORD *)v86 == 1 )
    {
      *(_OWORD *)&v93[64] = *(_OWORD *)&v86[72];
      v33 = *(_OWORD *)&v86[8];
      v34 = *(_OWORD *)&v86[24];
      v35 = *(_OWORD *)&v86[40];
      *(_OWORD *)&v93[48] = *(_OWORD *)&v86[56];
      v36 = *(_OWORD *)&v86[56];
      *(_OWORD *)&v93[32] = *(_OWORD *)&v86[40];
      *(_OWORD *)&v93[16] = *(_OWORD *)&v86[24];
      *(_OWORD *)v93 = *(_OWORD *)&v86[8];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v86[72];
      *(_OWORD *)(a1 + 56) = v36;
      *(_OWORD *)(a1 + 40) = v35;
      *(_OWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 8) = v33;
LABEL_105:
      *(_QWORD *)a1 = 0x8000000000000000LL;
      goto LABEL_117;
    }
    *(_OWORD *)&v93[80] = *(_OWORD *)&v86[88];
    *(_OWORD *)&v93[64] = *(_OWORD *)&v86[72];
    *(_OWORD *)&v93[48] = *(_OWORD *)&v86[56];
    v94 = *(__m256i *)&v86[8];
    v95 = *(_OWORD *)&v86[40];
    v96 = *(_OWORD *)&v86[56];
    v97 = *(__m256i *)&v86[72];
    a2 = (__m256i *)v3;
    just::parser::Parser::next((__int64)v86, v3);
    v7 = v86[72];
    *(_OWORD *)v93 = *(_OWORD *)v86;
    *(_OWORD *)&v93[16] = *(_OWORD *)&v86[16];
    *(_OWORD *)&v93[32] = *(_OWORD *)&v86[32];
    *(_OWORD *)&v93[48] = *(_OWORD *)&v86[48];
    *(_QWORD *)&v93[64] = *(_QWORD *)&v86[64];
    if ( v86[72] != 37 )
      goto LABEL_106;
    v122[0] = *(_OWORD *)v93;
    v122[1] = *(_OWORD *)&v93[16];
    v122[2] = *(_OWORD *)&v93[32];
    v122[3] = *(_OWORD *)&v93[48];
    v123 = *(_QWORD *)&v93[64];
    just::parser::Parser::accept((__int64)v86, v3, 16);
    v8 = v86[72];
    v106 = *(_OWORD *)v86;
    v107 = *(_OWORD *)&v86[16];
    v108 = *(_OWORD *)&v86[32];
    v109 = *(_OWORD *)&v86[48];
    v9 = v86[64];
    v87[0] = *(_DWORD *)&v86[65];
    *(_DWORD *)((char *)v87 + 3) = *(_DWORD *)&v86[68];
    if ( v86[72] != 37 )
    {
      v41 = *(_DWORD *)&v86[73];
      *(_DWORD *)(a1 + 84) = *(_DWORD *)&v86[76];
      *(_DWORD *)(a1 + 81) = v41;
      v42 = v106;
      v43 = v107;
      v44 = v108;
      *(_OWORD *)(a1 + 56) = v109;
      *(_OWORD *)(a1 + 40) = v44;
      *(_OWORD *)(a1 + 24) = v43;
      *(_OWORD *)(a1 + 8) = v42;
      v4 = v87[0];
      a2 = (__m256i *)*(_DWORD *)((char *)v87 + 3);
      *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)v87 + 3);
      *(_DWORD *)(a1 + 73) = v4;
      *(_BYTE *)(a1 + 72) = v9;
LABEL_111:
      *(_BYTE *)(a1 + 80) = v8;
LABEL_114:
      *(_QWORD *)a1 = 0x8000000000000000LL;
      goto LABEL_115;
    }
    if ( v86[64] != 37 )
    {
      *(_OWORD *)&v93[48] = v109;
      *(_OWORD *)&v93[32] = v108;
      *(_OWORD *)&v93[16] = v107;
      *(_OWORD *)v93 = v106;
      v93[64] = v86[64];
      *(_DWORD *)&v93[68] = *(_DWORD *)((char *)v87 + 3);
      *(_DWORD *)&v93[65] = v87[0];
      v14 = just::token::Token::lexeme(v93);
      *(_QWORD *)&v86[8] = core::str::<impl str>::trim_end_matches(v14, v15);
      *(_QWORD *)&v86[16] = v16;
      *(_QWORD *)v86 = 0x8000000000000002LL;
      alloc::vec::Vec<T,A>::push(&v88, v86, &off_430780);
      a2 = (__m256i *)v3;
      just::parser::Parser::expect_eol((__int64)v86, v3);
      v7 = v86[72];
      if ( v86[72] == 37 )
      {
        v2 = 0;
LABEL_18:
        if ( v97.m256i_i8[0] != 37 )
          goto LABEL_109;
        goto LABEL_19;
      }
LABEL_112:
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v86[64];
      v51 = *(_OWORD *)v86;
      v52 = *(_OWORD *)&v86[16];
      v53 = *(_OWORD *)&v86[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v86[48];
      *(_OWORD *)(a1 + 40) = v53;
      *(_OWORD *)(a1 + 24) = v52;
      *(_OWORD *)(a1 + 8) = v51;
      v4 = *(unsigned int *)&v86[76];
      *(_DWORD *)(a1 + 81) = *(_DWORD *)&v86[73];
      *(_DWORD *)(a1 + 84) = v4;
      goto LABEL_113;
    }
    just::parser::Parser::accepted((__int64)v86, v3, 20);
    v10 = v86[0];
    v8 = v86[72];
    if ( v86[72] != 37 )
      goto LABEL_110;
    LOBYTE(v2) = 1;
    if ( (v86[0] & 1) != 0 )
      goto LABEL_18;
    just::parser::Parser::accepted((__int64)v86, v3, 19);
    v10 = v86[0];
    v8 = v86[72];
    if ( v86[72] != 37 )
      goto LABEL_110;
    if ( (v86[0] & 1) != 0 )
      break;
    if ( !(unsigned __int8)just::parser::Parser::next_is((__int64)v3, 24) )
    {
      just::parser::Parser::accepted((__int64)v86, v3, 2);
      v10 = v86[0];
      v8 = v86[72];
      if ( v86[72] == 37 )
      {
        if ( (v86[0] & 1) != 0 )
        {
          v17 = just::parser::Parser::parse_ast::pop_doc_comment(&v88, (unsigned __int8)v6);
          v19 = v97.m256i_i8[0];
          v97.m256i_i8[0] = 37;
          if ( v19 == 37 )
          {
            *(_QWORD *)&v90 = 0LL;
            *(_QWORD *)&v91 = 0LL;
          }
          else
          {
            *(_QWORD *)&v91 = v97.m256i_i64[3];
            v90 = *(_OWORD *)&v97.m256i_u64[1];
          }
          a2 = (__m256i *)v3;
          just::parser::Parser::parse_recipe(v86, v3, &v90, v17, v18, 1LL);
          *(_OWORD *)v85 = *(_OWORD *)&v86[8];
          *(_OWORD *)&v85[16] = *(_OWORD *)&v86[24];
          *(_OWORD *)&v85[32] = *(_OWORD *)&v86[40];
          *(_OWORD *)&v85[48] = *(_OWORD *)&v86[56];
          *(_OWORD *)&v85[64] = *(_OWORD *)&v86[72];
          if ( *(_QWORD *)v86 != 0x8000000000000000LL )
          {
            memcpy(&v93[88], &v86[88], 0xA8uLL);
            *(_OWORD *)&v93[72] = *(_OWORD *)&v85[64];
            *(_OWORD *)&v93[56] = *(_OWORD *)&v85[48];
            *(_OWORD *)&v93[40] = *(_OWORD *)&v85[32];
            *(_OWORD *)&v93[24] = *(_OWORD *)&v85[16];
            *(_OWORD *)&v93[8] = *(_OWORD *)v85;
            *(_QWORD *)v93 = *(_QWORD *)v86;
            alloc::vec::Vec<T,A>::push(&v88, v93, &off_430798);
            goto LABEL_27;
          }
LABEL_122:
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v85[64];
          v56 = *(_OWORD *)v85;
          v57 = *(_OWORD *)&v85[16];
          v58 = *(_OWORD *)&v85[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v85[48];
          *(_OWORD *)(a1 + 40) = v58;
          *(_OWORD *)(a1 + 24) = v57;
          *(_OWORD *)(a1 + 8) = v56;
          goto LABEL_114;
        }
        a2 = (__m256i *)v3;
        just::parser::Parser::unexpected_token((__int64)v86, v3);
        v63 = *(_OWORD *)&v86[72];
        *(_OWORD *)&v93[64] = *(_OWORD *)&v86[72];
        v64 = *(_OWORD *)&v86[8];
        v65 = *(_OWORD *)&v86[24];
        v66 = *(_OWORD *)&v86[40];
        v67 = *(_OWORD *)&v86[56];
        goto LABEL_125;
      }
LABEL_110:
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v86[64];
      v48 = *(_OWORD *)&v86[1];
      v49 = *(_OWORD *)&v86[17];
      v50 = *(_OWORD *)&v86[33];
      *(_OWORD *)(a1 + 57) = *(_OWORD *)&v86[49];
      *(_OWORD *)(a1 + 41) = v50;
      *(_OWORD *)(a1 + 25) = v49;
      *(_OWORD *)(a1 + 9) = v48;
      v4 = *(unsigned int *)&v86[73];
      a2 = (__m256i *)*(unsigned int *)&v86[76];
      *(_DWORD *)(a1 + 81) = *(_DWORD *)&v86[73];
      *(_DWORD *)(a1 + 84) = (_DWORD)a2;
      *(_BYTE *)(a1 + 8) = v10;
      goto LABEL_111;
    }
    v11 = just::token::Token::lexeme(v122);
    switch ( (unsigned __int8)just::keyword::Keyword::from_lexeme(v11, v12) )
    {
      case 0u:
        if ( !just::parser::Parser::next_are(v3, asc_715D1, 3LL) )
          goto LABEL_66;
        v13 = v97.m256i_i8[0];
        v97.m256i_i8[0] = 37;
        if ( v13 == 37 )
        {
          *(_QWORD *)&v90 = 0LL;
          *(_QWORD *)&v91 = 0LL;
        }
        else
        {
          *(_QWORD *)&v91 = v97.m256i_i64[3];
          v90 = *(_OWORD *)&v97.m256i_u64[1];
        }
        a2 = (__m256i *)v3;
        just::parser::Parser::parse_alias(v93, v3, &v90);
        *(_OWORD *)v85 = *(_OWORD *)&v93[8];
        *(_OWORD *)&v85[16] = *(_OWORD *)&v93[24];
        *(_OWORD *)&v85[32] = *(_OWORD *)&v93[40];
        *(_OWORD *)&v85[48] = *(_OWORD *)&v93[56];
        *(_OWORD *)&v85[64] = *(_OWORD *)&v93[72];
        if ( *(_QWORD *)v93 != 0x8000000000000000LL )
        {
          *(_OWORD *)&v86[112] = *(_OWORD *)&v93[104];
          *(_OWORD *)&v86[96] = *(_OWORD *)&v93[88];
          *(_OWORD *)&v86[80] = *(_OWORD *)&v85[64];
          *(_OWORD *)&v86[64] = *(_OWORD *)&v85[48];
          *(_OWORD *)&v86[48] = *(_OWORD *)&v85[32];
          *(_OWORD *)&v86[32] = *(_OWORD *)&v85[16];
          *(_OWORD *)&v86[16] = *(_OWORD *)v85;
          *(_QWORD *)&v86[8] = *(_QWORD *)v93;
          *(_QWORD *)v86 = 0x8000000000000000LL;
          alloc::vec::Vec<T,A>::push(&v88, v86, &off_4307B0);
          goto LABEL_27;
        }
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v85[64];
        v81 = *(_OWORD *)v85;
        v82 = *(_OWORD *)&v85[16];
        v83 = *(_OWORD *)&v85[32];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v85[48];
        *(_OWORD *)(a1 + 40) = v83;
        *(_OWORD *)(a1 + 24) = v82;
        *(_OWORD *)(a1 + 8) = v81;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_115;
      case 0xAu:
        if ( !just::parser::Parser::next_are(v3, asc_715D1, 3LL) )
          goto LABEL_66;
        a2 = (__m256i *)v3;
        just::parser::Parser::presume_keyword((__int64)v86, v3, 10);
        v7 = v86[72];
        if ( v86[72] != 37 )
          goto LABEL_112;
        v21 = v97.m256i_i8[0];
        v97.m256i_i8[0] = 37;
        if ( v21 == 37 )
        {
          *(_QWORD *)&v90 = 0LL;
          *(_QWORD *)&v91 = 0LL;
        }
        else
        {
          *(_QWORD *)&v91 = v97.m256i_i64[3];
          v90 = *(_OWORD *)&v97.m256i_u64[1];
        }
        a2 = (__m256i *)v3;
        just::parser::Parser::parse_assignment(v93);
        *(_OWORD *)v85 = *(_OWORD *)&v93[8];
        *(_OWORD *)&v85[16] = *(_OWORD *)&v93[24];
        *(_OWORD *)&v85[32] = *(_OWORD *)&v93[40];
        *(_OWORD *)&v85[48] = *(_OWORD *)&v93[56];
        *(_OWORD *)&v85[64] = *(_OWORD *)&v93[72];
        if ( *(_QWORD *)v93 == 18LL )
          goto LABEL_122;
        *(_QWORD *)&v86[208] = *(_QWORD *)&v93[200];
        *(_OWORD *)&v86[192] = *(_OWORD *)&v93[184];
        *(_OWORD *)&v86[176] = *(_OWORD *)&v93[168];
        *(_OWORD *)&v86[160] = *(_OWORD *)&v93[152];
        *(_OWORD *)&v86[144] = *(_OWORD *)&v93[136];
        *(_OWORD *)&v86[128] = *(_OWORD *)&v93[120];
        *(_OWORD *)&v86[112] = *(_OWORD *)&v93[104];
        *(_OWORD *)&v86[96] = *(_OWORD *)&v93[88];
        *(_OWORD *)&v86[80] = *(_OWORD *)&v85[64];
        *(_OWORD *)&v86[64] = *(_OWORD *)&v85[48];
        *(_OWORD *)&v86[48] = *(_OWORD *)&v85[32];
        *(_OWORD *)&v86[32] = *(_OWORD *)&v85[16];
        *(_OWORD *)&v86[16] = *(_OWORD *)v85;
        *(_QWORD *)&v86[8] = *(_QWORD *)v93;
        *(_QWORD *)v86 = 0x8000000000000001LL;
        alloc::vec::Vec<T,A>::push(&v88, v86, &off_4307C8);
        goto LABEL_27;
      case 0xFu:
        if ( !just::parser::Parser::next_are(v3, asc_715D4, 2LL)
          && !just::parser::Parser::next_are(v3, asc_715D6, 3LL)
          && !just::parser::Parser::next_are(v3, asc_715D9, 2LL) )
        {
          goto LABEL_66;
        }
        a2 = (__m256i *)v3;
        just::parser::Parser::presume_keyword((__int64)v86, v3, 15);
        v7 = v86[72];
        if ( v86[72] != 37 )
          goto LABEL_112;
        a2 = (__m256i *)v3;
        just::parser::Parser::accepted((__int64)v86, v3, 31);
        v20 = v86[0];
        v7 = v86[72];
        if ( v86[72] == 37 )
        {
          a2 = (__m256i *)v3;
          just::parser::Parser::parse_string_literal_token(v86, v3);
          if ( *(_DWORD *)v86 != 1 )
          {
            *(_QWORD *)&v93[112] = *(_QWORD *)&v86[120];
            *(_OWORD *)&v93[96] = *(_OWORD *)&v86[104];
            *(_OWORD *)&v93[80] = *(_OWORD *)&v86[88];
            *(_OWORD *)&v93[64] = *(_OWORD *)&v86[72];
            *(_OWORD *)&v93[48] = *(_OWORD *)&v86[56];
            *(_OWORD *)&v93[32] = *(_OWORD *)&v86[40];
            *(_OWORD *)&v93[16] = *(_OWORD *)&v86[24];
            *(_OWORD *)v93 = *(_OWORD *)&v86[8];
            *(_QWORD *)&v86[144] = *(_QWORD *)&v86[72];
            *(_OWORD *)&v86[128] = *(_OWORD *)&v86[56];
            *(_OWORD *)&v86[112] = *(_OWORD *)&v86[40];
            *(_OWORD *)&v86[96] = *(_OWORD *)&v86[24];
            *(_OWORD *)&v86[80] = *(_OWORD *)&v86[8];
            *(_OWORD *)&v86[40] = *(_OWORD *)&v93[104];
            *(_OWORD *)&v86[24] = *(_OWORD *)&v93[88];
            *(_OWORD *)&v86[8] = *(_OWORD *)&v93[72];
            *(_QWORD *)&v86[56] = 0x8000000000000000LL;
            v86[152] = v20;
            *(_QWORD *)v86 = 0x8000000000000003LL;
            alloc::vec::Vec<T,A>::push(&v88, v86, &off_4307E0);
            goto LABEL_27;
          }
          v63 = *(_OWORD *)&v86[72];
          *(_OWORD *)&v93[64] = *(_OWORD *)&v86[72];
          v64 = *(_OWORD *)&v86[8];
          v65 = *(_OWORD *)&v86[24];
          v66 = *(_OWORD *)&v86[40];
          v67 = *(_OWORD *)&v86[56];
LABEL_125:
          *(_OWORD *)&v93[48] = v67;
          *(_OWORD *)&v93[32] = v66;
          *(_OWORD *)&v93[16] = v65;
          *(_OWORD *)v93 = v64;
LABEL_126:
          *(_OWORD *)(a1 + 72) = v63;
          *(_OWORD *)(a1 + 56) = v67;
          *(_OWORD *)(a1 + 40) = v66;
          *(_OWORD *)(a1 + 24) = v65;
          *(_OWORD *)(a1 + 8) = v64;
          goto LABEL_114;
        }
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&v86[64];
        v78 = *(_OWORD *)&v86[1];
        v79 = *(_OWORD *)&v86[17];
        v80 = *(_OWORD *)&v86[33];
        *(_OWORD *)(a1 + 57) = *(_OWORD *)&v86[49];
        *(_OWORD *)(a1 + 41) = v80;
        *(_OWORD *)(a1 + 25) = v79;
        *(_OWORD *)(a1 + 9) = v78;
        v4 = *(unsigned int *)&v86[76];
        *(_DWORD *)(a1 + 81) = *(_DWORD *)&v86[73];
        *(_DWORD *)(a1 + 84) = v4;
        *(_BYTE *)(a1 + 8) = v20;
        goto LABEL_113;
      case 0x10u:
        if ( !just::parser::Parser::next_are(v3, asc_715DB, 3LL)
          && !just::parser::Parser::next_are(v3, asc_715DE, 3LL)
          && !just::parser::Parser::next_are(v3, asc_715E1, 3LL)
          && !just::parser::Parser::next_are(v3, asc_67D98, 4LL)
          && !just::parser::Parser::next_are(v3, asc_715D6, 3LL)
          && !just::parser::Parser::next_are(v3, asc_715D9, 2LL) )
        {
          goto LABEL_66;
        }
        v105 = just::parser::Parser::parse_ast::pop_doc_comment(&v88, (unsigned __int8)v6);
        v104 = v22;
        a2 = (__m256i *)v3;
        just::parser::Parser::presume_keyword((__int64)v86, v3, 16);
        v7 = v86[72];
        if ( v86[72] != 37 )
          goto LABEL_112;
        just::parser::Parser::accepted((__int64)v86, v3, 31);
        a2 = (__m256i *)v86[0];
        v7 = v86[72];
        if ( v86[72] != 37 )
        {
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v86[64];
          v71 = *(_OWORD *)&v86[1];
          v72 = *(_OWORD *)&v86[17];
          v73 = *(_OWORD *)&v86[33];
          *(_OWORD *)(a1 + 57) = *(_OWORD *)&v86[49];
          *(_OWORD *)(a1 + 41) = v73;
          *(_OWORD *)(a1 + 25) = v72;
          *(_OWORD *)(a1 + 9) = v71;
          v4 = *(unsigned int *)&v86[76];
          *(_DWORD *)(a1 + 81) = *(_DWORD *)&v86[73];
          *(_DWORD *)(a1 + 84) = v4;
          *(_BYTE *)(a1 + 8) = (_BYTE)a2;
          goto LABEL_113;
        }
        v84 = v86[0];
        a2 = (__m256i *)v3;
        just::parser::Parser::parse_name(v86, v3);
        v7 = v86[72];
        *(_OWORD *)v93 = *(_OWORD *)v86;
        *(_OWORD *)&v93[16] = *(_OWORD *)&v86[16];
        *(_OWORD *)&v93[32] = *(_OWORD *)&v86[32];
        *(_OWORD *)&v93[48] = *(_OWORD *)&v86[48];
        *(_QWORD *)&v93[64] = *(_QWORD *)&v86[64];
        if ( v86[72] != 37 )
        {
LABEL_106:
          v37 = *(_DWORD *)&v86[73];
          v4 = *(unsigned int *)&v86[76];
          *(_DWORD *)(a1 + 84) = *(_DWORD *)&v86[76];
LABEL_107:
          *(_DWORD *)(a1 + 81) = v37;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v93[64];
          v38 = *(_OWORD *)v93;
          v39 = *(_OWORD *)&v93[16];
          v40 = *(_OWORD *)&v93[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v93[48];
          *(_OWORD *)(a1 + 40) = v40;
          *(_OWORD *)(a1 + 24) = v39;
          *(_OWORD *)(a1 + 8) = v38;
LABEL_113:
          *(_BYTE *)(a1 + 80) = v7;
          goto LABEL_114;
        }
        v110 = *(_OWORD *)v93;
        v111 = *(_OWORD *)&v93[16];
        v112 = *(_OWORD *)&v93[32];
        v113 = *(_OWORD *)&v93[48];
        v114 = *(_QWORD *)&v93[64];
        if ( (unsigned __int8)just::parser::Parser::next_is((__int64)v3, 33)
          || just::parser::Parser::next_are(v3, asc_715D4, 2LL) )
        {
          a2 = (__m256i *)v3;
          just::parser::Parser::parse_string_literal(v86, v3);
          v7 = v86[72];
          if ( v86[72] == 37 )
          {
            v90 = *(_OWORD *)v86;
            v91 = *(_OWORD *)&v86[16];
            v92 = *(_OWORD *)&v86[32];
            goto LABEL_84;
          }
          *(_QWORD *)&v93[64] = *(_QWORD *)&v86[64];
          *(_OWORD *)&v93[48] = *(_OWORD *)&v86[48];
          *(_OWORD *)&v93[32] = *(_OWORD *)&v86[32];
          *(_OWORD *)&v93[16] = *(_OWORD *)&v86[16];
          *(_OWORD *)v93 = *(_OWORD *)v86;
          *(_DWORD *)(a1 + 84) = *(_DWORD *)&v86[76];
          v37 = *(_DWORD *)&v86[73];
          goto LABEL_107;
        }
        *(_QWORD *)&v90 = 0x8000000000000000LL;
LABEL_84:
        v27 = v97.m256i_i8[0];
        v97.m256i_i8[0] = 37;
        if ( v27 == 37 )
        {
          *(_QWORD *)&v98 = 0LL;
          v99 = 0LL;
        }
        else
        {
          v99 = v97.m256i_i64[3];
          v98 = *(_OWORD *)&v97.m256i_u64[1];
        }
        a2 = (__m256i *)&v98;
        just::attribute_set::AttributeSet::ensure_valid_attributes(
          (__int64)v86,
          (__int64 *)&v98,
          (__int64)aModule_1,
          6LL,
          (__int64)&v110,
          (__int64)&unk_715E4,
          2LL);
        v28 = v86[72];
        if ( v86[72] != 37 )
        {
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v86[64];
          v74 = *(_OWORD *)v86;
          v75 = *(_OWORD *)&v86[16];
          v76 = *(_OWORD *)&v86[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v86[48];
          *(_OWORD *)(a1 + 40) = v76;
          *(_OWORD *)(a1 + 24) = v75;
          *(_OWORD *)(a1 + 8) = v74;
          v77 = *(_DWORD *)&v86[76];
          *(_DWORD *)(a1 + 81) = *(_DWORD *)&v86[73];
          *(_DWORD *)(a1 + 84) = v77;
          *(_BYTE *)(a1 + 80) = v28;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<just::attribute_set::AttributeSet>(&v98);
          core::ptr::drop_in_place<core::option::Option<just::string_literal::StringLiteral>>(&v90);
LABEL_115:
          if ( v97.m256i_i8[0] != 37 )
            core::ptr::drop_in_place<just::attribute_set::AttributeSet>(&v97.m256i_u64[1]);
          goto LABEL_117;
        }
        v29 = (_QWORD *)just::attribute_set::AttributeSet::get((__int64 *)&v98, 2);
        if ( v29 )
        {
          if ( *v29 != 0x8000000000000003LL )
            core::panicking::panic(aInternalErrorE, 40LL, &off_430828);
          if ( v29[1] == 0x8000000000000000LL )
          {
            *(_QWORD *)&v100 = 0x8000000000000000LL;
            goto LABEL_97;
          }
          <alloc::string::String as core::clone::Clone>::clone(v86, v29 + 1);
          goto LABEL_95;
        }
        if ( v105 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v86, v105);
LABEL_95:
          v101 = *(_QWORD *)&v86[16];
          v100 = *(_OWORD *)v86;
          goto LABEL_97;
        }
        *(_QWORD *)&v100 = 0x8000000000000000LL;
LABEL_97:
        *(_QWORD *)&v102 = 0LL;
        *((_QWORD *)&v102 + 1) = 8LL;
        v103 = 0LL;
        <just::attribute_set::AttributeSet as core::iter::traits::collect::IntoIterator>::into_iter(v85, &v98);
        while ( 1 )
        {
          <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v86, v85);
          if ( *(_QWORD *)v86 == 0x8000000000000015LL )
            break;
          *(_OWORD *)&v93[56] = *(_OWORD *)&v86[56];
          *(_OWORD *)&v93[40] = *(_OWORD *)&v86[40];
          *(_OWORD *)&v93[24] = *(_OWORD *)&v86[24];
          *(_OWORD *)&v93[8] = *(_OWORD *)&v86[8];
          *(_QWORD *)v93 = *(_QWORD *)v86;
          if ( *(_QWORD *)v86 == 0x8000000000000006LL )
            alloc::vec::Vec<T,A>::push(&v102, &v93[8], &off_430810);
          else
            core::ptr::drop_in_place<just::attribute::Attribute>(v93);
        }
        core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<just::attribute::Attribute>>(v85);
        *(_QWORD *)&v86[24] = v103;
        *(_OWORD *)&v86[8] = v102;
        *(_QWORD *)&v86[72] = v101;
        *(_OWORD *)&v86[56] = v100;
        *(_OWORD *)&v86[112] = v92;
        *(_OWORD *)&v86[96] = v91;
        *(_OWORD *)&v86[80] = v90;
        *(_QWORD *)&v86[32] = 0x8000000000000000LL;
        *(_QWORD *)&v86[192] = v114;
        *(_OWORD *)&v86[176] = v113;
        *(_OWORD *)&v86[160] = v112;
        *(_OWORD *)&v86[144] = v111;
        *(_OWORD *)&v86[128] = v110;
        v86[200] = v84;
        *(_QWORD *)v86 = 0x8000000000000004LL;
        alloc::vec::Vec<T,A>::push(&v88, v86, &off_4307F8);
LABEL_27:
        v2 = v6;
        if ( v97.m256i_i8[0] != 37 )
        {
LABEL_109:
          *(_QWORD *)&v86[8] = v97.m256i_i64[3];
          *(_QWORD *)v86 = 0x8000000000000024LL;
          a2 = &v94;
          just::token::Token::error(v93, &v94, v86);
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v93[64];
          v45 = *(_OWORD *)v93;
          v46 = *(_OWORD *)&v93[16];
          v47 = *(_OWORD *)&v93[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v93[48];
          *(_OWORD *)(a1 + 40) = v47;
          *(_OWORD *)(a1 + 24) = v46;
          *(_OWORD *)(a1 + 8) = v45;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<just::attribute_set::AttributeSet>(&v97.m256i_u64[1]);
          goto LABEL_117;
        }
LABEL_19:
        core::ptr::drop_in_place<core::option::Option<(just::token::Token,just::attribute_set::AttributeSet)>>(&v94);
        v6 = v2;
        break;
      case 0x15u:
        if ( !just::parser::Parser::next_are(v3, asc_715D1, 3LL)
          && !just::parser::Parser::next_are(v3, asc_67F04, 4LL)
          && !just::parser::Parser::next_are(v3, asc_67D9C, 4LL)
          && !just::parser::Parser::next_are(v3, asc_715DE, 3LL)
          && !just::parser::Parser::next_are(v3, asc_715E1, 3LL) )
        {
          goto LABEL_66;
        }
        a2 = (__m256i *)v3;
        just::parser::Parser::parse_set(v93);
        if ( v93[0] == 20 )
        {
          v63 = *(_OWORD *)&v93[72];
          *(_OWORD *)&v85[71] = *(_OWORD *)&v93[72];
          v64 = *(_OWORD *)&v93[8];
          v65 = *(_OWORD *)&v93[24];
          v66 = *(_OWORD *)&v93[40];
          v67 = *(_OWORD *)&v93[56];
          *(_OWORD *)&v85[55] = *(_OWORD *)&v93[56];
          *(_OWORD *)&v85[39] = *(_OWORD *)&v93[40];
          *(_OWORD *)&v85[23] = *(_OWORD *)&v93[24];
          *(_OWORD *)&v85[7] = *(_OWORD *)&v93[8];
          goto LABEL_126;
        }
        *(_QWORD *)&v85[79] = *(_QWORD *)&v93[80];
        *(_OWORD *)&v85[64] = *(_OWORD *)&v93[65];
        *(_OWORD *)&v85[48] = *(_OWORD *)&v93[49];
        *(_OWORD *)&v85[32] = *(_OWORD *)&v93[33];
        *(_OWORD *)&v85[16] = *(_OWORD *)&v93[17];
        *(_OWORD *)v85 = *(_OWORD *)&v93[1];
        *(_OWORD *)&v86[144] = *(_OWORD *)&v93[136];
        *(_OWORD *)&v86[128] = *(_OWORD *)&v93[120];
        *(_OWORD *)&v86[112] = *(_OWORD *)&v93[104];
        *(_OWORD *)&v86[96] = *(_OWORD *)&v93[88];
        *(_QWORD *)&v86[88] = *(_QWORD *)&v85[79];
        *(_OWORD *)&v86[73] = *(_OWORD *)&v93[65];
        *(_OWORD *)&v86[57] = *(_OWORD *)&v93[49];
        *(_OWORD *)&v86[41] = *(_OWORD *)&v93[33];
        *(_OWORD *)&v86[25] = *(_OWORD *)&v93[17];
        *(_OWORD *)&v86[9] = *(_OWORD *)&v93[1];
        v86[8] = v93[0];
        *(_QWORD *)v86 = 0x8000000000000006LL;
        alloc::vec::Vec<T,A>::push(&v88, v86, &off_430840);
        goto LABEL_27;
      case 0x19u:
        if ( !just::parser::Parser::next_are(v3, asc_715DE, 3LL) && !just::parser::Parser::next_are(v3, asc_715E1, 3LL) )
          goto LABEL_66;
        a2 = (__m256i *)v3;
        just::parser::Parser::presume_keyword((__int64)v86, v3, 25);
        v7 = v86[72];
        if ( v86[72] != 37 )
          goto LABEL_112;
        a2 = (__m256i *)v3;
        just::parser::Parser::parse_name(v86, v3);
        v7 = v86[72];
        *(_OWORD *)v93 = *(_OWORD *)v86;
        *(_OWORD *)&v93[16] = *(_OWORD *)&v86[16];
        *(_OWORD *)&v93[32] = *(_OWORD *)&v86[32];
        *(_OWORD *)&v93[48] = *(_OWORD *)&v86[48];
        *(_QWORD *)&v93[64] = *(_QWORD *)&v86[64];
        if ( v86[72] != 37 )
          goto LABEL_106;
        v115 = *(_OWORD *)v93;
        v116 = *(_OWORD *)&v93[16];
        v117 = *(_OWORD *)&v93[32];
        v118 = *(_OWORD *)&v93[48];
        v119 = *(_QWORD *)&v93[64];
        a2 = (__m256i *)v3;
        just::parser::Parser::expect_eol((__int64)v86, v3);
        v7 = v86[72];
        if ( v86[72] != 37 )
          goto LABEL_112;
        *(_QWORD *)&v86[72] = v119;
        *(_OWORD *)&v86[56] = v118;
        *(_OWORD *)&v86[40] = v117;
        *(_OWORD *)&v86[24] = v116;
        *(_OWORD *)&v86[8] = v115;
        *(_QWORD *)v86 = 0x8000000000000007LL;
        alloc::vec::Vec<T,A>::push(&v88, v86, &off_430858);
        goto LABEL_27;
      default:
LABEL_66:
        if ( just::parser::Parser::next_are(v3, asc_715EC, 2LL) )
        {
          v23 = v97.m256i_i8[0];
          v97.m256i_i8[0] = 37;
          if ( v23 == 37 )
          {
            *(_QWORD *)&v90 = 0LL;
            *(_QWORD *)&v91 = 0LL;
          }
          else
          {
            *(_QWORD *)&v91 = v97.m256i_i64[3];
            v90 = *(_OWORD *)&v97.m256i_u64[1];
          }
          a2 = (__m256i *)v3;
          just::parser::Parser::parse_assignment(v93);
          *(_OWORD *)v85 = *(_OWORD *)&v93[8];
          *(_OWORD *)&v85[16] = *(_OWORD *)&v93[24];
          *(_OWORD *)&v85[32] = *(_OWORD *)&v93[40];
          *(_OWORD *)&v85[48] = *(_OWORD *)&v93[56];
          *(_OWORD *)&v85[64] = *(_OWORD *)&v93[72];
          if ( *(_QWORD *)v93 == 18LL )
            goto LABEL_122;
          *(_QWORD *)&v86[208] = *(_QWORD *)&v93[200];
          *(_OWORD *)&v86[192] = *(_OWORD *)&v93[184];
          *(_OWORD *)&v86[176] = *(_OWORD *)&v93[168];
          *(_OWORD *)&v86[160] = *(_OWORD *)&v93[152];
          *(_OWORD *)&v86[144] = *(_OWORD *)&v93[136];
          *(_OWORD *)&v86[128] = *(_OWORD *)&v93[120];
          *(_OWORD *)&v86[112] = *(_OWORD *)&v93[104];
          *(_OWORD *)&v86[96] = *(_OWORD *)&v93[88];
          *(_OWORD *)&v86[80] = *(_OWORD *)&v85[64];
          *(_OWORD *)&v86[64] = *(_OWORD *)&v85[48];
          *(_OWORD *)&v86[48] = *(_OWORD *)&v85[32];
          *(_OWORD *)&v86[32] = *(_OWORD *)&v85[16];
          *(_OWORD *)&v86[16] = *(_OWORD *)v85;
          *(_QWORD *)&v86[8] = *(_QWORD *)v93;
          *(_QWORD *)v86 = 0x8000000000000001LL;
          alloc::vec::Vec<T,A>::push(&v88, v86, &off_430888);
        }
        else
        {
          v24 = just::parser::Parser::parse_ast::pop_doc_comment(&v88, (unsigned __int8)v6);
          v26 = v97.m256i_i8[0];
          v97.m256i_i8[0] = 37;
          if ( v26 == 37 )
          {
            *(_QWORD *)&v90 = 0LL;
            *(_QWORD *)&v91 = 0LL;
          }
          else
          {
            *(_QWORD *)&v91 = v97.m256i_i64[3];
            v90 = *(_OWORD *)&v97.m256i_u64[1];
          }
          a2 = (__m256i *)v3;
          just::parser::Parser::parse_recipe(v86, v3, &v90, v24, v25, 0LL);
          *(_OWORD *)v85 = *(_OWORD *)&v86[8];
          *(_OWORD *)&v85[16] = *(_OWORD *)&v86[24];
          *(_OWORD *)&v85[32] = *(_OWORD *)&v86[40];
          *(_OWORD *)&v85[48] = *(_OWORD *)&v86[56];
          *(_OWORD *)&v85[64] = *(_OWORD *)&v86[72];
          if ( *(_QWORD *)v86 == 0x8000000000000000LL )
            goto LABEL_122;
          memcpy(&v93[88], &v86[88], 0xA8uLL);
          *(_OWORD *)&v93[72] = *(_OWORD *)&v85[64];
          *(_OWORD *)&v93[56] = *(_OWORD *)&v85[48];
          *(_OWORD *)&v93[40] = *(_OWORD *)&v85[32];
          *(_OWORD *)&v93[24] = *(_OWORD *)&v85[16];
          *(_OWORD *)&v93[8] = *(_OWORD *)v85;
          *(_QWORD *)v93 = *(_QWORD *)v86;
          alloc::vec::Vec<T,A>::push(&v88, v93, &off_430870);
        }
        goto LABEL_27;
    }
  }
  core::ptr::drop_in_place<core::option::Option<(just::token::Token,just::attribute_set::AttributeSet)>>(&v94);
  if ( v3[4] != v3[11] )
  {
    v94.m256i_i64[0] = v3[4] - v3[11];
    *(_QWORD *)v93 = &v94;
    *(_QWORD *)&v93[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)v86 = &off_430760;
    *(_QWORD *)&v86[8] = 2LL;
    *(_QWORD *)&v86[32] = 0LL;
    *(_QWORD *)&v86[16] = v93;
    *(_QWORD *)&v86[24] = 1LL;
    core::option::Option<T>::map_or_else(&v120, 0LL, v55, v86);
    *(_QWORD *)&v86[24] = v121;
    *(_OWORD *)&v86[8] = v120;
    *(_QWORD *)v86 = 0x8000000000000028LL;
    a2 = (__m256i *)v3;
    just::parser::Parser::error((__int64)v93, (__int64)v3, (__int64)v86);
    v59 = *(_OWORD *)&v93[8];
    v60 = *(_OWORD *)&v93[24];
    v61 = *(_OWORD *)&v93[40];
    v62 = *(_OWORD *)&v93[56];
    *(_OWORD *)v86 = *(_OWORD *)&v93[8];
    *(_OWORD *)&v86[16] = *(_OWORD *)&v93[24];
    *(_OWORD *)&v86[32] = *(_OWORD *)&v93[40];
    *(_OWORD *)&v86[48] = *(_OWORD *)&v93[56];
    *(_OWORD *)&v86[64] = *(_OWORD *)&v93[72];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v93[72];
    *(_OWORD *)(a1 + 56) = v62;
    *(_OWORD *)(a1 + 40) = v61;
    *(_OWORD *)(a1 + 24) = v60;
    *(_OWORD *)(a1 + 8) = v59;
    goto LABEL_105;
  }
  *(_QWORD *)&v85[16] = v89;
  *(_OWORD *)v85 = v88;
  if ( v3[10]
    && (<T as alloc::string::SpecToString>::spec_to_string(v86),
        *(_OWORD *)v93 = *(_OWORD *)&v86[8],
        *(_QWORD *)v86 != 0x8000000000000000LL) )
  {
    *(_OWORD *)&v94.m256i_u64[1] = *(_OWORD *)v93;
    v94.m256i_i64[0] = *(_QWORD *)v86;
  }
  else
  {
    v94.m256i_i64[0] = 0LL;
    *(_OWORD *)&v94.m256i_u64[1] = 1uLL;
  }
  *(_QWORD *)&v93[16] = v3[15];
  *(_OWORD *)v93 = *(_OWORD *)(v3 + 13);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v86, v3[5]);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v86[16];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)v86;
  *(_OWORD *)v86 = *(_OWORD *)v85;
  *(_QWORD *)&v86[16] = *(_QWORD *)&v85[16];
  *(_OWORD *)&v86[24] = *(_OWORD *)v94.m256i_i8;
  *(_QWORD *)&v86[40] = v94.m256i_i64[2];
  *(_QWORD *)(a1 + 112) = *(_QWORD *)&v93[16];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)v93;
  v68 = *(_OWORD *)v86;
  v70 = *(_QWORD *)&v86[24];
  v69 = *(_QWORD *)&v86[16];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v86[32];
  *(_OWORD *)(a1 + 16) = __PAIR128__(v70, v69);
  *(_OWORD *)a1 = v68;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<just::unstable_feature::UnstableFeature>>(v3 + 7);
  return core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(*v3, v3[1]);
}