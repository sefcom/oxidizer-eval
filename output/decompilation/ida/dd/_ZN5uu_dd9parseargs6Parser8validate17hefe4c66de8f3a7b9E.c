__int64 __fastcall uu_dd::parseargs::Parser::validate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // r9
  unsigned int v10; // r11d
  char v11; // r13
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rdx
  char v15; // al
  char v16; // al
  char v17; // cl
  unsigned __int8 v18; // r15
  char v19; // bl
  unsigned int v20; // r12d
  __int64 ctable; // rax
  char v22; // r12
  char v23; // r13
  __int64 v25; // rdx
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // r8
  __m128i v34; // xmm0
  __int64 v35; // r8
  unsigned __int8 v36; // [rsp+Dh] [rbp-6Bh]
  unsigned __int8 v37; // [rsp+Eh] [rbp-6Ah]
  unsigned __int8 v38; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v39; // [rsp+10h] [rbp-68h]
  char v40; // [rsp+10h] [rbp-68h]
  char v41; // [rsp+1Dh] [rbp-5Bh]
  char v42; // [rsp+1Fh] [rbp-59h]
  unsigned int v43; // [rsp+24h] [rbp-54h]
  __m128i v44; // [rsp+28h] [rbp-50h] BYREF
  __int64 v45; // [rsp+38h] [rbp-40h]

  v3 = a1;
  v4 = *(_BYTE *)(a2 + 160);
  v5 = *(_BYTE *)(a2 + 161);
  v6 = *(unsigned __int8 *)(a2 + 162);
  v7 = *(unsigned __int8 *)(a2 + 163);
  v8 = *(_BYTE *)(a2 + 164);
  v38 = *(_BYTE *)(a2 + 165);
  v36 = *(_BYTE *)(a2 + 166);
  v9 = *(unsigned __int8 *)(a2 + 167);
  v42 = *(_BYTE *)(a2 + 169);
  v10 = *(_DWORD *)(a2 + 170);
  v11 = *(_BYTE *)(a2 + 174);
  v12 = *(unsigned __int8 *)(a2 + 175);
  if ( v4 )
  {
    v13 = ((unsigned __int8)v6 | v5) == 0;
    v14 = 1LL;
    if ( !v13 )
      goto LABEL_26;
    if ( (_BYTE)v7 )
    {
      v14 = 2LL;
      if ( !v8 )
      {
        LOBYTE(v7) = 1;
        v39 = 0;
        goto LABEL_25;
      }
LABEL_26:
      *(_QWORD *)(v3 + 8) = v14;
      *(_QWORD *)v3 = 3LL;
      core::ptr::drop_in_place<uu_dd::parseargs::Parser>(a2, v6, v14, v7, v12, v9);
      return v3;
    }
    v16 = 2 * (v8 ^ 1);
    v39 = 0;
    goto LABEL_24;
  }
  if ( !v5 )
  {
    if ( (_BYTE)v6 )
    {
      if ( !(_BYTE)v7 )
      {
        v16 = 2 * (v8 ^ 1);
        v17 = 2;
        goto LABEL_23;
      }
      v14 = 2LL;
      if ( v8 )
        goto LABEL_26;
      v15 = 2;
    }
    else
    {
      if ( !(_BYTE)v7 )
      {
        v16 = 2 * (v8 ^ 1);
        v17 = 3;
        goto LABEL_23;
      }
      v14 = 2LL;
      if ( v8 )
        goto LABEL_26;
      v15 = 3;
    }
    v39 = v15;
    LOBYTE(v7) = 1;
    goto LABEL_25;
  }
  v14 = 1LL;
  if ( (_BYTE)v6 )
    goto LABEL_26;
  if ( !(_BYTE)v7 )
  {
    v16 = 2 * (v8 ^ 1);
    v17 = 1;
LABEL_23:
    v39 = v17;
LABEL_24:
    LOBYTE(v7) = v16;
    goto LABEL_25;
  }
  LOBYTE(v7) = 1;
  v14 = 2LL;
  LOBYTE(v6) = 1;
  v39 = 1;
  if ( v8 )
    goto LABEL_26;
LABEL_25:
  v43 = *(_DWORD *)(a2 + 170);
  v18 = _mm_movemask_epi8(
          _mm_slli_epi16(
            _mm_cvtsi32_si128((v10 >> 9) & 0x100 | HIWORD(v10) & 1 | (v10 >> 2) & 0x10000 | (32 * v10) & 0x1000000),
            7u)) & 1;
  v41 = *(_BYTE *)(a2 + 167);
  v19 = *(_BYTE *)(a2 + 175);
  v20 = ((unsigned int)_mm_movemask_epi8(_mm_slli_epi16(_mm_shuffle_epi32(_mm_cvtsi32_si128((v10 >> 8) & 1), 68), 7u)) >> 8) & 1;
  v37 = *(_BYTE *)(a2 + 168);
  ctable = uu_dd::parseargs::get_ctable(v39, (unsigned __int8)v7);
  v6 = v37;
  v14 = 4LL;
  v13 = ((unsigned __int8)v20 & v18) == 0;
  v22 = v11;
  v23 = v19;
  v3 = a1;
  if ( !v13 )
    goto LABEL_26;
  if ( *(_DWORD *)(a2 + 48) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 56);
    if ( v39 )
    {
      if ( v39 != 3 )
      {
LABEL_33:
        v40 = 32;
        v25 = 0LL;
        goto LABEL_38;
      }
      if ( v38 )
      {
        v14 = 3LL;
        if ( v36 )
          goto LABEL_26;
        goto LABEL_33;
      }
      v25 = 2LL - v36;
      v40 = 32 * v36;
    }
    else
    {
      v40 = 32;
      v25 = 1LL;
    }
  }
  else
  {
    v7 = v38;
    LOBYTE(v7) = v36 | v38;
    v14 = 9LL;
    if ( v36 | v38 )
      goto LABEL_26;
    v25 = 2LL;
    v40 = 0;
  }
LABEL_38:
  uu_dd::parseargs::conversion_mode(&v44, ctable, v25, v7, v4, v37);
  if ( !*(_QWORD *)a2 )
  {
    v28 = 512LL;
    v27 = 512LL;
    if ( *(_BYTE *)(a2 + 16) )
    {
      v27 = *(_QWORD *)(a2 + 24);
      if ( !*(_BYTE *)(a2 + 32) )
      {
LABEL_44:
        LOBYTE(v31) = 1;
        goto LABEL_40;
      }
    }
    else if ( !*(_BYTE *)(a2 + 32) )
    {
      goto LABEL_44;
    }
    v28 = *(_QWORD *)(a2 + 40);
    LOBYTE(v31) = 1;
LABEL_40:
    v29 = *(_QWORD *)(a2 + 72);
    v30 = 1LL;
    if ( *(_DWORD *)(a2 + 64) != 1 )
      goto LABEL_46;
    goto LABEL_47;
  }
  v27 = *(_QWORD *)(a2 + 8);
  v28 = v27;
  v31 = *(_DWORD *)(a2 + 192);
  v29 = *(_QWORD *)(a2 + 72);
  v30 = 1LL;
  if ( *(_DWORD *)(a2 + 64) != 1 )
  {
LABEL_46:
    v30 = v27;
    if ( *(_BYTE *)(a2 + 191) == 1 )
      goto LABEL_48;
  }
LABEL_47:
  v29 *= v30;
LABEL_48:
  v32 = *(_QWORD *)(a2 + 88);
  v33 = 1LL;
  if ( *(_DWORD *)(a2 + 80) == 1 || (v33 = v28, *(_BYTE *)(a2 + 207) != 1) )
    v32 *= v33;
  v34 = _mm_cvtsi32_si128(v43);
  v35 = *(_QWORD *)(a2 + 96);
  if ( v35 == 2 )
  {
    v35 = 2LL;
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 104);
    if ( (v35 & 1) == 0 && *(_BYTE *)(a2 + 190) )
      v35 = 1LL;
  }
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(a2 + 128);
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 112);
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(a2 + 152);
  *(_OWORD *)(v3 + 40) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(v3 + 64) = *(_OWORD *)(a2 + 176);
  *(_QWORD *)(v3 + 157) = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(v3 + 150) = *(_QWORD *)(a2 + 193);
  *(_QWORD *)v3 = v35;
  *(_QWORD *)(v3 + 8) = v26;
  *(_QWORD *)(v3 + 96) = v45;
  *(__m128i *)(v3 + 80) = _mm_loadu_si128(&v44);
  *(_BYTE *)(v3 + 104) = v37;
  *(_BYTE *)(v3 + 105) = v40;
  *(_BYTE *)(v3 + 106) = v41;
  *(_BYTE *)(v3 + 107) = v42;
  *(_QWORD *)(v3 + 112) = v27;
  *(_QWORD *)(v3 + 120) = v28;
  *(_QWORD *)(v3 + 128) = v29;
  *(_QWORD *)(v3 + 136) = v32;
  *(_DWORD *)(v3 + 144) = _mm_cvtsi128_si32(v34);
  *(_BYTE *)(v3 + 148) = v22;
  *(_BYTE *)(v3 + 149) = v23;
  *(_BYTE *)(v3 + 165) = v31;
  *(_BYTE *)(v3 + 166) = *(_BYTE *)(a2 + 208);
  return v3;
}