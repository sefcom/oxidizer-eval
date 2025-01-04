__int64 __fastcall uu_dd::parseargs::Parser::validate(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // di
  unsigned __int8 v6; // si
  char v7; // cl
  char v8; // al
  unsigned __int8 v9; // r15
  __int64 v10; // rdx
  __m128i v11; // xmm0
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r12
  __int64 ctable; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 epi16; // rcx
  __int64 result; // rax
  char v19; // bp
  char v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int32 v24; // xmm1_4
  int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // r8
  char v32; // [rsp+Ah] [rbp-5Eh]
  char v33; // [rsp+Bh] [rbp-5Dh]
  char v34; // [rsp+Ch] [rbp-5Ch]
  char v35; // [rsp+Dh] [rbp-5Bh]
  unsigned __int8 v36; // [rsp+Eh] [rbp-5Ah]
  unsigned __int8 v37; // [rsp+Fh] [rbp-59h]
  __m128i v38; // [rsp+10h] [rbp-58h] BYREF
  __int128 v39; // [rsp+20h] [rbp-48h] BYREF
  __int64 v40; // [rsp+30h] [rbp-38h]

  v4 = *(_BYTE *)(a2 + 160);
  v5 = *(_BYTE *)(a2 + 161);
  v6 = *(_BYTE *)(a2 + 162);
  v7 = *(_BYTE *)(a2 + 163);
  v8 = *(_BYTE *)(a2 + 164);
  v36 = *(_BYTE *)(a2 + 165);
  v9 = *(_BYTE *)(a2 + 166);
  v10 = *(unsigned __int8 *)(a2 + 168);
  v37 = *(_BYTE *)(a2 + 168);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 170));
  if ( v4 )
  {
    v10 = 1LL;
    if ( v5 | v6 )
      goto LABEL_24;
    if ( v7 )
    {
      v10 = 2LL;
      if ( !v8 )
      {
        v35 = *(_BYTE *)(a2 + 169);
        v32 = *(_BYTE *)(a2 + 167);
        v33 = *(_BYTE *)(a2 + 175);
        v34 = *(_BYTE *)(a2 + 174);
        v38 = v11;
        v12 = 1;
        v13 = 0;
        goto LABEL_23;
      }
LABEL_24:
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = 3LL;
      return core::ptr::drop_in_place<uu_dd::parseargs::Parser>(a2);
    }
    v35 = *(_BYTE *)(a2 + 169);
    v32 = *(_BYTE *)(a2 + 167);
    v33 = *(_BYTE *)(a2 + 175);
    v34 = *(_BYTE *)(a2 + 174);
    v38 = v11;
    v12 = 2 * (v8 == 0);
    v13 = 0;
  }
  else
  {
    if ( !v5 )
    {
      if ( v6 )
      {
        if ( !v7 )
        {
          v35 = *(_BYTE *)(a2 + 169);
          v32 = *(_BYTE *)(a2 + 167);
          v33 = *(_BYTE *)(a2 + 175);
          v34 = *(_BYTE *)(a2 + 174);
          v38 = v11;
          v12 = 2 * (v8 == 0);
          v13 = 2;
          goto LABEL_23;
        }
        v10 = 2LL;
        if ( v8 )
          goto LABEL_24;
        v35 = *(_BYTE *)(a2 + 169);
        v32 = *(_BYTE *)(a2 + 167);
        v33 = *(_BYTE *)(a2 + 175);
        v34 = *(_BYTE *)(a2 + 174);
        v38 = v11;
        v13 = 2;
      }
      else
      {
        if ( !v7 )
        {
          v35 = *(_BYTE *)(a2 + 169);
          v32 = *(_BYTE *)(a2 + 167);
          v33 = *(_BYTE *)(a2 + 175);
          v34 = *(_BYTE *)(a2 + 174);
          v38 = v11;
          v12 = 2 * (v8 == 0);
          v13 = 3;
          goto LABEL_23;
        }
        v10 = 2LL;
        if ( v8 )
          goto LABEL_24;
        v35 = *(_BYTE *)(a2 + 169);
        v32 = *(_BYTE *)(a2 + 167);
        v33 = *(_BYTE *)(a2 + 175);
        v34 = *(_BYTE *)(a2 + 174);
        v38 = v11;
        v13 = 3;
      }
      v12 = 1;
      goto LABEL_23;
    }
    v10 = 1LL;
    if ( v6 )
      goto LABEL_24;
    if ( v7 )
    {
      v10 = 2LL;
      if ( v8 )
        goto LABEL_24;
      v35 = *(_BYTE *)(a2 + 169);
      v32 = *(_BYTE *)(a2 + 167);
      v33 = *(_BYTE *)(a2 + 175);
      v34 = *(_BYTE *)(a2 + 174);
      v38 = v11;
      v12 = 1;
      v13 = 1;
    }
    else
    {
      v35 = *(_BYTE *)(a2 + 169);
      v32 = *(_BYTE *)(a2 + 167);
      v33 = *(_BYTE *)(a2 + 175);
      v34 = *(_BYTE *)(a2 + 174);
      v38 = v11;
      v12 = 2 * (v8 == 0);
      v13 = 1;
    }
  }
LABEL_23:
  ctable = uu_dd::parseargs::get_ctable(v13, v12, v10);
  v15 = _mm_load_si128(&v38);
  v16 = _mm_cmpeq_epi8((__m128i)0LL, _mm_unpacklo_epi8(v15, v15));
  epi16 = (unsigned int)_mm_extract_epi16(
                          _mm_xor_si128((__m128i)-1LL, _mm_or_si128(_mm_shufflelo_epi16(v16, 85), v16)),
                          2);
  v10 = 4LL;
  if ( (epi16 & 1) != 0 )
    goto LABEL_24;
  if ( *(_QWORD *)(a2 + 48) )
  {
    epi16 = *(_QWORD *)(a2 + 56);
    if ( v13 )
    {
      if ( v13 == 3 )
      {
        if ( !v36 )
        {
          v20 = v35;
          v21 = (v9 == 0) + 1LL;
          v19 = 32 * v9;
          goto LABEL_35;
        }
        v10 = 3LL;
        if ( v9 )
          goto LABEL_24;
      }
      v19 = 32;
      v20 = v35;
      v21 = 0LL;
    }
    else
    {
      v19 = 32;
      v20 = v35;
      v21 = 1LL;
    }
  }
  else
  {
    v10 = 9LL;
    if ( v36 | v9 )
      goto LABEL_24;
    v20 = v35;
    v21 = 2LL;
    v19 = 0;
  }
LABEL_35:
  uu_dd::parseargs::conversion_mode(&v39, ctable, v21, epi16, v4, v37);
  if ( *(_QWORD *)a2 )
  {
    v22 = *(_QWORD *)(a2 + 8);
    v23 = v22;
    v24 = v38.m128i_i32[0];
  }
  else
  {
    v23 = 512LL;
    v22 = 512LL;
    if ( *(_QWORD *)(a2 + 16) )
      v22 = *(_QWORD *)(a2 + 24);
    v24 = v38.m128i_i32[0];
    if ( *(_QWORD *)(a2 + 32) )
      v23 = *(_QWORD *)(a2 + 40);
  }
  LOBYTE(v25) = 1;
  if ( *(_QWORD *)a2 )
    v25 = *(_DWORD *)(a2 + 192);
  v26 = v22;
  if ( *(_BYTE *)(a2 + 191) )
    v26 = 1LL;
  if ( *(_QWORD *)(a2 + 64) )
    v26 = 1LL;
  v27 = *(_QWORD *)(a2 + 72) * v26;
  v28 = v23;
  if ( *(_BYTE *)(a2 + 207) )
    v28 = 1LL;
  if ( *(_QWORD *)(a2 + 80) )
    v28 = 1LL;
  v29 = *(_QWORD *)(a2 + 88) * v28;
  v30 = *(_QWORD *)(a2 + 96);
  v31 = *(_QWORD *)(a2 + 104);
  if ( v30 )
  {
    if ( (_DWORD)v30 == 1 )
      v30 = 1LL;
  }
  else
  {
    v30 = *(unsigned __int8 *)(a2 + 190);
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 176);
  *(_QWORD *)(a1 + 150) = *(_QWORD *)(a2 + 193);
  *(_QWORD *)(a1 + 157) = *(_QWORD *)(a2 + 200);
  *(_QWORD *)(a1 + 96) = v40;
  *(_OWORD *)(a1 + 80) = v39;
  *(_QWORD *)a1 = v30;
  *(_QWORD *)(a1 + 8) = v31;
  *(_BYTE *)(a1 + 104) = v37;
  *(_BYTE *)(a1 + 105) = v19;
  *(_BYTE *)(a1 + 106) = v32;
  *(_BYTE *)(a1 + 107) = v20;
  *(_QWORD *)(a1 + 112) = v22;
  *(_QWORD *)(a1 + 120) = v23;
  *(_QWORD *)(a1 + 128) = v27;
  *(_QWORD *)(a1 + 136) = v29;
  *(_DWORD *)(a1 + 144) = v24;
  *(_BYTE *)(a1 + 148) = v34;
  *(_BYTE *)(a1 + 149) = v33;
  *(_BYTE *)(a1 + 165) = v25;
  result = *(unsigned __int8 *)(a2 + 208);
  *(_BYTE *)(a1 + 166) = result;
  return result;
}
