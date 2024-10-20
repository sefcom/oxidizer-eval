__int64 __fastcall uu_dd::parseargs::Parser::parse(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int8 *v8; // r15
  size_t v9; // r12
  unsigned __int64 v10; // rbp
  unsigned __int8 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  size_t v15; // rbp
  __int64 v16; // rsi
  _OWORD *v17; // rcx
  __int64 v18; // rax
  unsigned __int8 *v19; // rdi
  const void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r15
  size_t v29; // rcx
  char v30; // bp
  size_t v31; // r12
  unsigned __int64 v32; // r12
  unsigned __int8 *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  size_t v36; // r12
  unsigned __int8 *v37; // r15
  __int64 v38; // rbp
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rbp
  size_t v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rax
  void *v45; // r15
  __int64 v46; // rax
  unsigned __int64 v47; // r15
  size_t v48; // rcx
  char v49; // si
  size_t v50; // r12
  unsigned __int64 v51; // r12
  unsigned __int8 *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  size_t v55; // r12
  unsigned __int8 *v56; // r15
  unsigned __int8 *v57; // rdi
  const void *v58; // rsi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // r9
  char v65; // r11
  unsigned __int8 v66; // al
  unsigned __int8 v67; // di
  char v68; // r13
  char v69; // bp
  unsigned __int8 v70; // r12
  unsigned __int8 v71; // dl
  __m128i v72; // xmm0
  char v73; // r10
  __int64 v74; // rsi
  __int64 v75; // r15
  __int64 v76; // r8
  __int64 v77; // r10
  char *v78; // rdi
  __int64 v79; // rax
  void *v80; // r13
  __int64 v81; // rsi
  __int64 v82; // rsi
  __m128i v83; // xmm0
  char v85; // bp
  __m128i v86; // xmm2
  __int64 v87; // r13
  __int64 v88; // r9
  __int64 v89; // rdi
  char v90; // dl
  __int64 v91; // r11
  _QWORD *v92; // r9
  _QWORD *v93; // r14
  __int64 v94; // r8
  bool v95; // zf
  char v96; // cl
  __int64 v97; // r10
  __int64 v98; // r12
  __int64 v99; // r10
  __int64 v100; // r11
  __int64 v101; // r11
  _QWORD *v102; // rax
  char v103; // r8
  __int64 v104; // rax
  __int64 v105; // r13
  const void *v106; // rsi
  size_t n; // [rsp+8h] [rbp-160h]
  char na; // [rsp+8h] [rbp-160h]
  size_t nb; // [rsp+8h] [rbp-160h]
  size_t v110; // [rsp+10h] [rbp-158h]
  unsigned __int8 v111; // [rsp+10h] [rbp-158h]
  __int64 v112; // [rsp+18h] [rbp-150h]
  __int64 v113; // [rsp+18h] [rbp-150h]
  unsigned __int8 *src; // [rsp+20h] [rbp-148h]
  char srca; // [rsp+20h] [rbp-148h]
  char v116; // [rsp+2Dh] [rbp-13Bh]
  char v117; // [rsp+2Eh] [rbp-13Ah]
  char v118; // [rsp+2Fh] [rbp-139h]
  __m256i v119; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v120; // [rsp+50h] [rbp-118h]
  unsigned __int64 v121; // [rsp+58h] [rbp-110h]
  __m256i v122; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v123; // [rsp+80h] [rbp-E8h]
  __int64 v124; // [rsp+88h] [rbp-E0h]
  __int64 v125; // [rsp+90h] [rbp-D8h]
  int v126; // [rsp+9Ch] [rbp-CCh]
  size_t v127; // [rsp+A0h] [rbp-C8h]
  size_t v128; // [rsp+A8h] [rbp-C0h]
  unsigned __int64 v129; // [rsp+B0h] [rbp-B8h]
  unsigned __int64 v130; // [rsp+B8h] [rbp-B0h]
  __m128i v131; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v132; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-80h]
  __int64 v134; // [rsp+F0h] [rbp-78h]
  __int64 v135; // [rsp+F8h] [rbp-70h]
  __int64 v136; // [rsp+100h] [rbp-68h]
  __int64 v137; // [rsp+108h] [rbp-60h]
  __int64 v138; // [rsp+110h] [rbp-58h]
  __int64 v139; // [rsp+118h] [rbp-50h]
  __int64 v140; // [rsp+120h] [rbp-48h]
  __int64 v141; // [rsp+128h] [rbp-40h]
  __int64 v142; // [rsp+130h] [rbp-38h]

  if ( !a4 )
  {
LABEL_180:
    v63 = *a2;
    v132 = *(__m128i *)(a2 + 3);
    v131 = *(__m128i *)(a2 + 1);
    if ( v63 == 2 )
      goto LABEL_199;
    v130 = a2[5];
    v64 = a2[6];
    nb = a2[7];
    v137 = a2[8];
    v125 = a2[9];
    v140 = a2[10];
    v141 = a2[11];
    v65 = *((_BYTE *)a2 + 160);
    v66 = *((_BYTE *)a2 + 161);
    v67 = *((_BYTE *)a2 + 162);
    v68 = *((_BYTE *)a2 + 163);
    v69 = *((_BYTE *)a2 + 164);
    v70 = *((_BYTE *)a2 + 165);
    v71 = *((_BYTE *)a2 + 166);
    LOBYTE(v128) = *((_BYTE *)a2 + 167);
    v118 = *((_BYTE *)a2 + 168);
    LOBYTE(v127) = *((_BYTE *)a2 + 169);
    v72 = _mm_cvtsi32_si128(*(_DWORD *)((char *)a2 + 170));
    v73 = *((_BYTE *)a2 + 174);
    LOBYTE(v120) = *((_BYTE *)a2 + 175);
    v111 = *((_BYTE *)a2 + 190);
    srca = *((_BYTE *)a2 + 191);
    v116 = *((_BYTE *)a2 + 192);
    v117 = *((_BYTE *)a2 + 207);
    LOBYTE(v124) = *((_BYTE *)a2 + 208);
    v121 = a2[12];
    v142 = a2[13];
    v74 = a2[14];
    v113 = a2[15];
    v139 = a2[16];
    v75 = a2[17];
    v123 = (_QWORD *)a2[18];
    v138 = a2[19];
    v136 = a2[1];
    v133 = a2[2];
    v134 = a2[3];
    v76 = a2[4];
    v135 = v76;
    LOBYTE(v129) = v73;
    if ( v65 )
    {
      v77 = 1LL;
      if ( !(v66 | v67) )
      {
        if ( !v68 )
        {
          v78 = (char *)&unk_1ED5E;
          if ( !v69 )
            v78 = (char *)&unk_1EA5E;
          goto LABEL_212;
        }
        v77 = 2LL;
        if ( !v69 )
        {
          v78 = (char *)&unk_1EE5E;
LABEL_212:
          v85 = 0;
          goto LABEL_213;
        }
      }
LABEL_214:
      *(_QWORD *)(a1 + 8) = v77;
      *(_QWORD *)a1 = 3LL;
      if ( 2 * v74 )
        _rust_dealloc(v113, v74, 1LL);
      if ( 2 * v75 )
        _rust_dealloc(v123, v75, 1LL);
      return a1;
    }
    if ( v66 )
    {
      v77 = 1LL;
      if ( v67 )
        goto LABEL_214;
      if ( v68 )
      {
        v77 = 2LL;
        if ( !v69 )
        {
          v78 = (char *)&unk_1F05E;
          v85 = 1;
          goto LABEL_213;
        }
        goto LABEL_214;
      }
      v78 = (char *)&unk_1EF5E;
      if ( !v69 )
        v78 = (char *)&unk_1EB5E;
      v85 = 1;
    }
    else if ( v67 )
    {
      if ( v68 )
      {
        v77 = 2LL;
        if ( !v69 )
        {
          v78 = (char *)&unk_1ED5E;
          v85 = 2;
          goto LABEL_213;
        }
        goto LABEL_214;
      }
      v78 = (char *)&unk_1EE5E;
      if ( !v69 )
        v78 = (char *)&unk_1EC5E;
      v85 = 2;
    }
    else if ( v68 )
    {
      v77 = 2LL;
      if ( v69 )
        goto LABEL_214;
      v78 = (char *)&unk_1E95E;
      v85 = 3;
    }
    else
    {
      v78 = 0LL;
      if ( v69 )
        v78 = &byte_1E85E;
      v85 = 3;
    }
LABEL_213:
    v86 = _mm_cmpeq_epi8((__m128i)0LL, _mm_unpacklo_epi8(v72, v72));
    v77 = 4LL;
    if ( (_mm_extract_epi16(_mm_xor_si128((__m128i)-1LL, _mm_or_si128(_mm_shufflelo_epi16(v86, 85), v86)), 2) & 1) != 0 )
      goto LABEL_214;
    if ( v64 )
    {
      LOBYTE(v76) = 32;
      if ( v85 )
      {
        v87 = v121;
        if ( v85 == 3 )
        {
          if ( v70 )
          {
            v77 = 3LL;
            if ( v71 )
              goto LABEL_214;
            v88 = 0LL;
            goto LABEL_236;
          }
          v88 = (v71 == 0) + 1LL;
          LOBYTE(v76) = 32 * (v71 != 0);
        }
        else
        {
          v88 = 0LL;
        }
LABEL_242:
        v121 = (unsigned __int64)v78;
        v95 = v78 == 0LL;
        v89 = v130;
        v126 = v76;
        if ( v95 )
        {
          if ( v88 )
          {
            v91 = v125;
            if ( (_DWORD)v88 == 1 )
              v90 = 2;
            else
              v90 = 7;
            goto LABEL_253;
          }
          v90 = 1;
        }
        else if ( v88 )
        {
          if ( (_DWORD)v88 == 1 )
          {
            v90 = 6 - (v65 == 0);
          }
          else
          {
            v90 = 0;
            nb = v121;
          }
        }
        else
        {
          v90 = 4 - (v65 == 0);
        }
        v91 = v125;
LABEL_253:
        v92 = a2 + 22;
        v93 = (__int64 *)((char *)a2 + 193);
        v94 = v134;
        if ( !v133 )
          v94 = 512LL;
        if ( !v135 )
          v89 = 512LL;
        v95 = v63 == 0;
        if ( v63 )
        {
          v94 = v136;
          v89 = v136;
        }
        v96 = 1;
        if ( !v95 )
          v96 = v116;
        v97 = v94;
        if ( srca )
          v97 = 1LL;
        v98 = v94;
        if ( v137 )
          v97 = 1LL;
        v99 = v91 * v97;
        v100 = v89;
        if ( v117 )
          v100 = 1LL;
        if ( v140 )
          v100 = 1LL;
        v101 = v141 * v100;
        if ( v87 )
        {
          v102 = v123;
          v103 = v126;
          if ( v87 == 1 )
            v87 = 1LL;
        }
        else
        {
          v87 = v111;
          v102 = v123;
          v103 = v126;
        }
        *(_QWORD *)(a1 + 16) = v74;
        *(_QWORD *)(a1 + 24) = v113;
        *(_QWORD *)(a1 + 32) = v139;
        *(_QWORD *)(a1 + 40) = v75;
        *(_QWORD *)(a1 + 48) = v102;
        *(_QWORD *)(a1 + 56) = v138;
        *(_QWORD *)(a1 + 64) = *v92;
        *(_QWORD *)(a1 + 70) = *(_QWORD *)((char *)v92 + 6);
        *(_BYTE *)(a1 + 78) = v111;
        *(_BYTE *)(a1 + 79) = srca;
        *(_QWORD *)(a1 + 150) = *v93;
        *(_QWORD *)(a1 + 156) = *(_QWORD *)((char *)v93 + 6);
        *(_BYTE *)(a1 + 164) = v117;
        *(_QWORD *)a1 = v87;
        *(_QWORD *)(a1 + 8) = v142;
        *(_BYTE *)(a1 + 80) = v90;
        *(_BYTE *)(a1 + 81) = v118;
        *(_QWORD *)(a1 + 88) = nb;
        *(_QWORD *)(a1 + 96) = v121;
        *(_BYTE *)(a1 + 104) = v118;
        *(_BYTE *)(a1 + 105) = v103;
        *(_BYTE *)(a1 + 106) = v128;
        *(_BYTE *)(a1 + 107) = v127;
        *(_QWORD *)(a1 + 112) = v98;
        *(_QWORD *)(a1 + 120) = v89;
        *(_QWORD *)(a1 + 128) = v99;
        *(_QWORD *)(a1 + 136) = v101;
        *(_DWORD *)(a1 + 144) = _mm_cvtsi128_si32(v72);
        *(_BYTE *)(a1 + 148) = v129;
        *(_BYTE *)(a1 + 149) = v120;
        *(_BYTE *)(a1 + 165) = v96;
        *(_BYTE *)(a1 + 166) = v124;
        return a1;
      }
      v88 = 1LL;
    }
    else
    {
      v77 = 9LL;
      if ( v70 | v71 )
        goto LABEL_214;
      v88 = 2LL;
      LODWORD(v76) = 0;
    }
LABEL_236:
    v87 = v121;
    goto LABEL_242;
  }
  v6 = a3 + 16 * a4;
  v123 = a2 + 17;
  v7 = a3;
  while ( 2 )
  {
    v8 = *(unsigned __int8 **)v7;
    v9 = *(_QWORD *)(v7 + 8);
    v112 = v7 + 16;
    v10 = 0LL;
    while ( 1 )
    {
      v11 = &v8[v10];
      if ( v9 - v10 > 0xF )
        break;
      if ( v9 == v10 )
        goto LABEL_186;
      v12 = 0LL;
      while ( v11[v12] != 61 )
      {
        if ( v9 - v10 == ++v12 )
          goto LABEL_186;
      }
LABEL_12:
      v14 = v12 + v10 + 1;
      v15 = v12 + v10;
      if ( v15 < v9 && v8[v15] == 61 )
      {
        v121 = v14;
        n = v15;
        goto LABEL_16;
      }
      v10 = v14;
      if ( v9 < v14 )
        goto LABEL_186;
    }
    v13 = core::slice::memchr::memchr_aligned(61LL, v11, v9 - v10);
    if ( v13 == 1 )
      goto LABEL_12;
    if ( !v13 )
    {
LABEL_186:
      if ( v9 )
      {
        if ( (v9 & 0x8000000000000000LL) != 0LL )
        {
          v43 = 0LL;
          goto LABEL_300;
        }
        v43 = 1LL;
        v79 = _rust_alloc(v9, 1LL);
        if ( !v79 )
        {
          v124 = v9;
          goto LABEL_300;
        }
        v80 = (void *)v79;
      }
      else
      {
        v80 = &dword_0 + 1;
      }
      memcpy(v80, v8, v9);
      v122.m256i_i64[0] = 0LL;
      v122.m256i_i64[1] = v9;
      v122.m256i_i64[2] = (__int64)v80;
LABEL_192:
      v122.m256i_i64[3] = v9;
      goto LABEL_193;
    }
LABEL_16:
    v110 = v9 - v121;
    src = &v8[v121];
    switch ( n )
    {
      case 2uLL:
        switch ( *(_WORD *)v8 )
        {
          case 0x7362:
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v119, src, v110);
            v24 = v119.m256i_i64[1];
            v25 = v119.m256i_i64[0];
            if ( v119.m256i_i64[0] == 14 )
            {
              *a2 = 1LL;
              a2[1] = v24;
              goto LABEL_176;
            }
LABEL_276:
            *(_OWORD *)&v122.m256i_u64[2] = *(_OWORD *)&v119.m256i_u64[2];
            v122.m256i_i64[0] = v25;
            v122.m256i_i64[1] = v24;
            goto LABEL_193;
          case 0x6669:
            v42 = v9 - v121;
            if ( !v110 )
            {
              v45 = &dword_0 + 1;
              goto LABEL_172;
            }
            if ( (v110 & 0x8000000000000000LL) != 0LL )
            {
              v43 = 0LL;
            }
            else
            {
              v43 = 1LL;
              v44 = _rust_alloc(v110, 1LL);
              if ( v44 )
              {
                v45 = (void *)v44;
                v42 = v110;
LABEL_172:
                memcpy(v45, src, v42);
                v62 = a2[14];
                if ( v62 != 0x8000000000000000LL && v62 )
                  _rust_dealloc(a2[15], v62, 1LL);
                a2[14] = v110;
                v124 = (__int64)v45;
                a2[15] = (__int64)v45;
                a2[16] = v110;
LABEL_176:
                v18 = 2LL;
                goto LABEL_177;
              }
              v124 = v110;
            }
LABEL_300:
            alloc::raw_vec::handle_error(v43, v124);
          case 0x666F:
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v119, src, v110);
            v16 = *v123;
            if ( *v123 != 0x8000000000000000LL && v16 )
              _rust_dealloc(a2[18], v16, 1LL);
            v17 = v123;
            v123[2] = v119.m256i_i64[2];
            *v17 = *(_OWORD *)v119.m256i_i8;
            goto LABEL_176;
        }
LABEL_275:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v122.m256i_u64[1], v8, v9);
        v122.m256i_i64[0] = 0LL;
LABEL_193:
        v132 = *(__m128i *)&v122.m256i_u64[2];
        v131.m128i_i64[0] = v122.m256i_i64[0];
        v131.m128i_i8[8] = v122.m256i_i8[8];
        *(__int32 *)((char *)&v131.m128i_i32[2] + 1) = *(__int32 *)((char *)&v122.m256i_i32[2] + 1);
        *(__int16 *)((char *)&v131.m128i_i16[6] + 1) = *(__int16 *)((char *)&v122.m256i_i16[6] + 1);
        v131.m128i_i8[15] = v122.m256i_i8[15];
        v81 = a2[14];
        if ( v81 != 0x8000000000000000LL && v81 )
          _rust_dealloc(a2[15], v81, 1LL);
        v82 = *v123;
        if ( *v123 != 0x8000000000000000LL && v82 )
          _rust_dealloc(a2[18], v82, 1LL);
LABEL_199:
        v83 = _mm_load_si128(&v131);
        *(__m128i *)(a1 + 24) = _mm_load_si128(&v132);
        *(__m128i *)(a1 + 8) = v83;
        *(_QWORD *)a1 = 3LL;
        return a1;
      case 3uLL:
        if ( *(_WORD *)v8 ^ 0x6263 | v8[2] ^ 0x73 )
        {
          if ( *(_WORD *)v8 ^ 0x6269 | v8[2] ^ 0x73 )
          {
            if ( *(_WORD *)v8 ^ 0x626F | v8[2] ^ 0x73 )
              goto LABEL_275;
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v119, src, v110);
            v24 = v119.m256i_i64[1];
            v25 = v119.m256i_i64[0];
            if ( v119.m256i_i64[0] != 14 )
              goto LABEL_276;
            a2[4] = 1LL;
            a2[5] = v24;
          }
          else
          {
            uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v119, src, v110);
            v24 = v119.m256i_i64[1];
            v25 = v119.m256i_i64[0];
            if ( v119.m256i_i64[0] != 14 )
              goto LABEL_276;
            a2[2] = 1LL;
            a2[3] = v24;
          }
        }
        else
        {
          uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v119, src, v110);
          v24 = v119.m256i_i64[1];
          v25 = v119.m256i_i64[0];
          if ( v119.m256i_i64[0] != 14 )
            goto LABEL_276;
          a2[6] = 1LL;
          a2[7] = v24;
        }
        v18 = 3LL;
        goto LABEL_177;
      case 4uLL:
        if ( *(_DWORD *)v8 != 1986948963 )
        {
          if ( !bcmp(v8, &unk_15310, n) )
            goto LABEL_106;
          v19 = v8;
          v20 = &unk_152E8;
LABEL_35:
          if ( bcmp(v19, v20, n) )
            goto LABEL_275;
          uu_dd::parseargs::Parser::parse_n(&v119, src, v110);
          v21 = v119.m256i_i64[1];
          v22 = v119.m256i_i64[0];
          v23 = v119.m256i_i64[2];
          if ( v119.m256i_i64[0] == 14 )
          {
            a2[8] = v119.m256i_i64[1];
            a2[9] = v23;
            goto LABEL_178;
          }
LABEL_280:
          v9 = v119.m256i_u64[3];
          v122.m256i_i64[0] = v22;
          v122.m256i_i64[1] = v21;
          goto LABEL_288;
        }
        *((_BYTE *)a2 + 192) = 1;
        v26 = 0LL;
        v27 = 0LL;
        while ( 2 )
        {
          v28 = v26;
          v29 = v110;
          if ( v110 < v27 )
          {
LABEL_48:
            v30 = 0;
            v26 = v28;
            v31 = v29;
            goto LABEL_63;
          }
          v32 = v27;
          while ( 1 )
          {
            v33 = &src[v32];
            if ( v29 - v32 > 0xF )
              break;
            if ( v29 == v32 )
              goto LABEL_62;
            v34 = 0LL;
            while ( v33[v34] != 44 )
            {
              if ( v29 - v32 == ++v34 )
                goto LABEL_62;
            }
LABEL_58:
            v27 = v32 + v34 + 1;
            v31 = v34 + v32;
            v29 = v110;
            if ( v31 < v110 && src[v31] == 44 )
            {
              v30 = 1;
              v26 = v27;
              v130 = v27;
              v128 = v31;
              goto LABEL_63;
            }
            v32 = v27;
            if ( v110 < v27 )
              goto LABEL_48;
          }
          v35 = core::slice::memchr::memchr_aligned(44LL, v33, v29 - v32);
          if ( v35 == 1 )
            goto LABEL_58;
          if ( !v35 )
          {
LABEL_62:
            v30 = 0;
            v26 = v28;
            v31 = v110;
            v27 = v110;
            goto LABEL_63;
          }
          v30 = 1;
          v26 = v130;
          v27 = v110;
          v31 = v128;
LABEL_63:
          v36 = v31 - v28;
          v37 = &src[v28];
          switch ( v36 )
          {
            case 3uLL:
              if ( !(*(_WORD *)v37 ^ 0x6269 | v37[2] ^ 0x6D) )
              {
                *((_BYTE *)a2 + 162) = 1;
                goto LABEL_45;
              }
              v36 = 3LL;
              break;
            case 4uLL:
              v7 = v112;
              switch ( *(_DWORD *)v37 )
              {
                case 0x62617773:
                  *((_BYTE *)a2 + 167) = 1;
                  break;
                case 0x636E7973:
                  *((_BYTE *)a2 + 168) = 1;
                  break;
                case 0x6C637865:
                  *((_BYTE *)a2 + 171) = 1;
                  break;
                default:
                  v36 = 4LL;
                  goto LABEL_296;
              }
              goto LABEL_46;
            case 5uLL:
              if ( !(*(_DWORD *)v37 ^ 0x69637361 | v37[4] ^ 0x69) )
              {
                *((_BYTE *)a2 + 160) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x7361636C | v37[4] ^ 0x65) )
              {
                *((_BYTE *)a2 + 164) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x73616375 | v37[4] ^ 0x65) )
              {
                *((_BYTE *)a2 + 163) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x636F6C62 | v37[4] ^ 0x6B) )
              {
                *((_BYTE *)a2 + 165) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x6E797366 | v37[4] ^ 0x63) )
              {
                *((_BYTE *)a2 + 175) = 1;
LABEL_45:
                v7 = v112;
LABEL_46:
                if ( !v30 )
                {
                  n = 4LL;
                  goto LABEL_179;
                }
                continue;
              }
              v36 = 5LL;
              break;
            case 6uLL:
              if ( !(*(_DWORD *)v37 ^ 0x64636265 | *((unsigned __int16 *)v37 + 2) ^ 0x6369) )
              {
                *((_BYTE *)a2 + 161) = 1;
                goto LABEL_45;
              }
              if ( *(_DWORD *)v37 ^ 0x72617073 | *((unsigned __int16 *)v37 + 2) ^ 0x6573 )
              {
                v36 = 6LL;
                goto LABEL_296;
              }
              *((_BYTE *)a2 + 170) = 1;
              goto LABEL_45;
            case 7uLL:
              if ( !(*(_DWORD *)v37 ^ 0x6C626E75 | *(_DWORD *)(v37 + 3) ^ 0x6B636F6C) )
              {
                *((_BYTE *)a2 + 166) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x72656F6E | *(_DWORD *)(v37 + 3) ^ 0x726F7272) )
              {
                *((_BYTE *)a2 + 169) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x72636F6E | *(_DWORD *)(v37 + 3) ^ 0x74616572) )
              {
                *((_BYTE *)a2 + 172) = 1;
                goto LABEL_45;
              }
              if ( !(*(_DWORD *)v37 ^ 0x72746F6E | *(_DWORD *)(v37 + 3) ^ 0x636E7572) )
              {
                *((_BYTE *)a2 + 173) = 1;
                goto LABEL_45;
              }
              v36 = 7LL;
              break;
            case 9uLL:
              v120 = v26;
              if ( bcmp(v37, &unk_1E5CB, v36) )
              {
                v36 = 9LL;
                goto LABEL_296;
              }
              *((_BYTE *)a2 + 174) = 1;
              v7 = v112;
              v26 = v120;
              goto LABEL_46;
            default:
              goto LABEL_296;
          }
          break;
        }
LABEL_296:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v119.m256i_u64[1], v37, v36);
        v122.m256i_i64[3] = v119.m256i_i64[3];
        *(_OWORD *)&v122.m256i_u64[1] = *(_OWORD *)&v119.m256i_u64[1];
        v122.m256i_i64[0] = 6LL;
        goto LABEL_193;
      case 5uLL:
        if ( *(_DWORD *)v8 ^ 0x6E756F63 | v8[4] ^ 0x74 )
        {
          if ( *(_DWORD *)v8 ^ 0x616C6669 | v8[4] ^ 0x67 )
          {
            if ( bcmp(v8, &unk_1E590, n) )
            {
              if ( !bcmp(v8, &unk_1E595, n) )
              {
LABEL_106:
                uu_dd::parseargs::Parser::parse_n(&v119, src, v110);
                v21 = v119.m256i_i64[1];
                v22 = v119.m256i_i64[0];
                v23 = v119.m256i_i64[2];
                if ( v119.m256i_i64[0] != 14 )
                  goto LABEL_280;
                a2[10] = v119.m256i_i64[1];
                a2[11] = v23;
LABEL_178:
                v7 = v112;
LABEL_179:
                if ( v7 == v6 )
                  goto LABEL_180;
                continue;
              }
              v19 = v8;
              v20 = &unk_1E59A;
              goto LABEL_35;
            }
            uu_dd::parseargs::Parser::parse_output_flags(&v119, a2, src, v110);
            if ( v119.m256i_i64[0] != 14 )
            {
              v122 = v119;
              goto LABEL_193;
            }
LABEL_170:
            v18 = 5LL;
LABEL_177:
            n = v18;
            goto LABEL_178;
          }
          v40 = 0LL;
          v41 = 0LL;
          while ( 2 )
          {
            v47 = v40;
            v48 = v110;
            if ( v110 < v41 )
            {
LABEL_124:
              v49 = 0;
              v50 = v48;
              goto LABEL_139;
            }
            v51 = v41;
            while ( 1 )
            {
              v52 = &src[v51];
              if ( v48 - v51 > 0xF )
                break;
              if ( v48 == v51 )
                goto LABEL_138;
              v53 = 0LL;
              while ( v52[v53] != 44 )
              {
                if ( v48 - v51 == ++v53 )
                  goto LABEL_138;
              }
LABEL_134:
              v41 = v51 + v53 + 1;
              v50 = v53 + v51;
              v48 = v110;
              if ( v50 < v110 && src[v50] == 44 )
              {
                v49 = 1;
                v40 = v41;
                v129 = v41;
                v127 = v50;
                goto LABEL_139;
              }
              v51 = v41;
              if ( v110 < v41 )
                goto LABEL_124;
            }
            v54 = core::slice::memchr::memchr_aligned(44LL, v52, v48 - v51);
            if ( v54 == 1 )
              goto LABEL_134;
            if ( !v54 )
            {
LABEL_138:
              v49 = 0;
              v50 = v110;
              v41 = v110;
              goto LABEL_139;
            }
            v49 = 1;
            v40 = v129;
            v41 = v110;
            v50 = v127;
LABEL_139:
            v55 = v50 - v47;
            v56 = &src[v47];
            switch ( v55 )
            {
              case 3uLL:
                if ( *(_WORD *)v56 ^ 0x6963 | v56[2] ^ 0x6F )
                  goto LABEL_291;
                v124 = 3LL;
                v43 = 1LL;
                v104 = _rust_alloc(3LL, 1LL);
                if ( !v104 )
                  goto LABEL_300;
                *(_BYTE *)(v104 + 2) = v56[2];
                *(_WORD *)v104 = *(_WORD *)v56;
                v119.m256i_i64[1] = 3LL;
                v119.m256i_i64[2] = v104;
                v119.m256i_i64[3] = 3LL;
                v105 = 11LL;
                goto LABEL_292;
              case 4uLL:
                if ( *(_DWORD *)v56 == 1668184435 )
                {
                  *((_BYTE *)a2 + 180) = 1;
                  break;
                }
                v106 = &unk_152DC;
                goto LABEL_290;
              case 5uLL:
                if ( *(_DWORD *)v56 ^ 0x6E797364 | v56[4] ^ 0x63 )
                  goto LABEL_291;
                *((_BYTE *)a2 + 179) = 1;
                break;
              case 6uLL:
                if ( !(*(_DWORD *)v56 ^ 0x65726964 | *((unsigned __int16 *)v56 + 2) ^ 0x7463) )
                {
                  *((_BYTE *)a2 + 177) = 1;
                  break;
                }
                v120 = v40;
                na = v49;
                if ( bcmp(v56, &unk_1E59F, v55) )
                {
                  if ( bcmp(v56, &unk_1E5AC, v55) )
                  {
                    v57 = v56;
                    v58 = &unk_1E5BB;
                    goto LABEL_155;
                  }
LABEL_293:
                  v105 = 11LL;
                  <T as alloc::slice::hack::ConvertVec>::to_vec(&v119.m256i_u64[1], v56, v55);
                  goto LABEL_292;
                }
                *((_BYTE *)a2 + 184) = 1;
                v40 = v120;
                break;
              case 7uLL:
                if ( *(_DWORD *)v56 ^ 0x61636F6E | *(_DWORD *)(v56 + 3) ^ 0x65686361 )
                {
                  if ( *(_DWORD *)v56 ^ 0x74616F6E | *(_DWORD *)(v56 + 3) ^ 0x656D6974 )
                  {
                    v106 = &unk_1E5A5;
LABEL_290:
                    if ( bcmp(v56, v106, v55) )
                      goto LABEL_291;
                    goto LABEL_293;
                  }
                  *((_BYTE *)a2 + 183) = 1;
                }
                else
                {
                  *((_BYTE *)a2 + 181) = 1;
                }
                break;
              case 8uLL:
                if ( *(_QWORD *)v56 != 0x6B636F6C626E6F6ELL )
                {
                  v120 = v40;
                  v61 = bcmp(v56, aNofollow, v55);
                  v40 = v120;
                  if ( !v61 )
                  {
                    *((_BYTE *)a2 + 185) = 1;
                    break;
                  }
LABEL_291:
                  v105 = 5LL;
                  <T as alloc::slice::hack::ConvertVec>::to_vec(&v119.m256i_u64[1], v56, v55);
LABEL_292:
                  v122.m256i_i64[3] = v119.m256i_i64[3];
                  *(_OWORD *)&v122.m256i_u64[1] = *(_OWORD *)&v119.m256i_u64[1];
                  v122.m256i_i64[0] = v105;
                  goto LABEL_193;
                }
                *((_BYTE *)a2 + 182) = 1;
                break;
              case 9uLL:
                if ( *(_QWORD *)v56 ^ 0x726F746365726964LL | v56[8] ^ 0x79LL )
                {
                  v120 = v40;
                  v59 = bcmp(v56, &unk_1E5B2, v55);
                  v40 = v120;
                  if ( !v59 )
                  {
                    *((_BYTE *)a2 + 189) = 1;
                    break;
                  }
                  goto LABEL_291;
                }
                *((_BYTE *)a2 + 178) = 1;
                break;
              case 0xAuLL:
                if ( *(_QWORD *)v56 ^ 0x7479625F70696B73LL | *((unsigned __int16 *)v56 + 4) ^ 0x7365LL )
                {
                  v120 = v40;
                  v57 = v56;
                  na = v49;
                  v58 = &unk_1E5C1;
LABEL_155:
                  v60 = bcmp(v57, v58, v55);
                  v40 = v120;
                  v49 = na;
                  if ( !v60 )
                    break;
                  goto LABEL_291;
                }
                *((_BYTE *)a2 + 191) = 1;
                break;
              case 0xBuLL:
                if ( *(_QWORD *)v56 ^ 0x79625F746E756F63LL | *(_QWORD *)(v56 + 3) ^ 0x73657479625F746ELL )
                  goto LABEL_291;
                *((_BYTE *)a2 + 190) = 1;
                break;
              default:
                goto LABEL_291;
            }
            if ( !v49 )
              goto LABEL_170;
            continue;
          }
        }
        uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v119, src, v110);
        v38 = v119.m256i_i64[1];
        if ( v119.m256i_i64[0] != 14 )
        {
          v9 = v119.m256i_u64[3];
          v23 = v119.m256i_i64[2];
          *(_OWORD *)v122.m256i_i8 = *(_OWORD *)v119.m256i_i8;
LABEL_288:
          v122.m256i_i64[2] = v23;
          goto LABEL_192;
        }
        if ( v110 > 0xF )
        {
          if ( core::slice::memchr::memchr_aligned(66LL, src, v110) == 1 )
          {
LABEL_118:
            v46 = 1LL;
LABEL_120:
            a2[12] = v46;
            a2[13] = v38;
            goto LABEL_170;
          }
        }
        else
        {
          v39 = v121;
          if ( v9 != v121 )
          {
            while ( v8[v39] != 66 )
            {
              if ( v9 == ++v39 )
                goto LABEL_119;
            }
            goto LABEL_118;
          }
        }
LABEL_119:
        v46 = 0LL;
        goto LABEL_120;
      case 6uLL:
        if ( *(_DWORD *)v8 ^ 0x74617473 | *((unsigned __int16 *)v8 + 2) ^ 0x7375 )
          goto LABEL_275;
        uu_dd::parseargs::Parser::parse_status_level(&v119, src, v110);
        if ( v119.m256i_i64[0] != 14 )
        {
          v122.m256i_i64[3] = v119.m256i_i64[3];
          *(_OWORD *)((char *)&v122.m256i_u64[1] + 1) = *(_OWORD *)((char *)&v119.m256i_u64[1] + 1);
          v122.m256i_i64[0] = v119.m256i_i64[0];
          v122.m256i_i8[8] = v119.m256i_i8[8];
          goto LABEL_193;
        }
        *((_BYTE *)a2 + 208) = v119.m256i_i8[8];
        v18 = 6LL;
        goto LABEL_177;
      default:
        goto LABEL_275;
    }
  }
}
