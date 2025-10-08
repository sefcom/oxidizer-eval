unsigned __int64 __fastcall alacritty::renderer::text::builtin_font::Canvas::draw_rounded_corner(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128i a4)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  float v9; // xmm3_4
  int v10; // eax
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 v13; // rdx
  int v14; // ecx
  float v15; // xmm3_4
  unsigned __int64 v16; // rdx
  float v17; // edi
  float v18; // esi
  int v19; // r8d
  float v20; // r9d
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  float v25; // xmm0_4
  __int64 v26; // r15
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  _QWORD *v33; // rdi
  float v34; // xmm3_4
  float v36; // [rsp+8h] [rbp-70h]
  float v37; // [rsp+10h] [rbp-68h]
  float v38; // [rsp+18h] [rbp-60h]
  float v39; // [rsp+1Ch] [rbp-5Ch]
  float v40; // [rsp+2Ch] [rbp-4Ch]
  float y; // [rsp+30h] [rbp-48h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]
  unsigned __int64 v43; // [rsp+40h] [rbp-38h]

  v6 = a1[3];
  v7 = a1[4];
  v8 = a2 + core::cmp::Ord::min(v6, v7);
  if ( v8 < 0 )
  {
    v12 = (float)(int)(((unsigned __int64)v8 >> 1) | v8 & 1);
    v9 = v12 + v12;
    v10 = a2 & 1;
    if ( a2 < 0 )
      goto LABEL_3;
  }
  else
  {
    v9 = (float)(int)v8;
    v10 = a2 & 1;
    if ( a2 < 0 )
    {
LABEL_3:
      v11 = (float)(int)(v10 | ((unsigned __int64)a2 >> 1)) + (float)(int)(v10 | ((unsigned __int64)a2 >> 1));
      goto LABEL_6;
    }
  }
  v11 = (float)(int)a2;
LABEL_6:
  v13 = v6;
  if ( v7 > v6 )
    v13 = v7;
  v14 = v13 & 1;
  if ( v13 < 0 )
    *(float *)a4.m128i_i32 = (float)(int)(v14 | ((unsigned __int64)v13 >> 1))
                           + (float)(int)(v14 | ((unsigned __int64)v13 >> 1));
  else
    *(float *)a4.m128i_i32 = (float)(int)v13;
  v15 = v9 * 0.5;
  v16 = v6;
  if ( v7 < v6 )
    v16 = v7;
  v36 = v11;
  v37 = v11 * 0.5;
  *(float *)a4.m128i_i32 = (float)((float)(*(float *)a4.m128i_i32 * 0.5) - v15) + (float)(v11 * 0.5);
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(a4));
  v18 = 0.0;
  if ( v7 > v6 )
  {
    v18 = v17;
    v17 = 0.0;
  }
  *(float *)a4.m128i_i32 = *(float *)a4.m128i_i32 + 1.0;
  *(float *)&v19 = COERCE_FLOAT(_mm_cvtsi128_si32(a4));
  v20 = 0.0;
  if ( v7 > v6 )
  {
    v20 = *(float *)&v19;
    *(float *)&v19 = 0.0;
  }
  v38 = 0.0;
  if ( (v16 & 1) != v10 )
    v38 = 0.5;
  v42 = v7;
  v43 = v6;
  if ( ((v14 == v10) & (unsigned __int8)(v6 ^ v7)) != 0 )
  {
    v18 = v20;
    v17 = *(float *)&v19;
  }
  v21 = v16 + a2 + 1;
  v39 = v17;
  if ( v21 >= 2 )
  {
    v22 = v21 >> 1;
    v23 = 1LL;
    LODWORD(v24) = 0;
    do
    {
      v25 = (float)(int)v24;
      v24 = v23;
      y = v25;
      v40 = v18 + v25;
      v26 = 0LL;
      do
      {
        v28 = hypotf((float)(int)v26, y) + v38;
        v27 = 0.0;
        if ( (float)((float)(v15 - v11) + -1.0) <= v28 )
        {
          if ( (float)(v15 - v11) > v28 )
          {
            v27 = (float)(v28 + 1.0) - (float)(v15 - v11);
          }
          else
          {
            v27 = 1.0;
            if ( (float)(v15 + -1.0) <= v28 )
            {
              v27 = 0.0;
              if ( v15 > v28 )
                v27 = v15 - v28;
            }
          }
        }
        alacritty::renderer::text::builtin_font::Canvas::put_pixel(
          a1,
          65793 * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, v27 * 255.0)),
          (float)(int)v26++ + v17,
          v40);
      }
      while ( (v22 == 0) + v22 != v26 );
      v23 = (v24 < v22) + v24;
    }
    while ( v24 < v22 );
  }
  if ( v42 <= v43 )
  {
    if ( (v42 & 0x8000000000000000LL) != 0LL )
      v30 = (float)(int)((v42 >> 1) | v42 & 1) + (float)(int)((v42 >> 1) | v42 & 1);
    else
      v30 = (float)(int)v42;
    v32 = (float)(v30 * 0.5) - v37;
    v31 = 0.0;
    v33 = a1;
    v11 = v39;
    v34 = v36;
  }
  else
  {
    if ( (v43 & 0x8000000000000000LL) != 0LL )
      v29 = (float)(int)((v43 >> 1) | v43 & 1) + (float)(int)((v43 >> 1) | v43 & 1);
    else
      v29 = (float)(int)v43;
    v31 = (float)(v29 * 0.5) - v37;
    v32 = 0.0;
    v33 = a1;
    v34 = v18;
  }
  return alacritty::renderer::text::builtin_font::Canvas::draw_rect(v33, v31, v32, v11, v34);
}