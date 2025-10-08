void __fastcall alacritty::renderer::text::builtin_font::Canvas::draw_line(_QWORD *a1, __m128 a2, __m128 a3, __m128 a4)
{
  __m128 v4; // xmm3
  unsigned __int64 v5; // xmm5_8
  float v6; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  double v10; // xmm0_8
  double v11; // xmm0_8
  double v12; // xmm0_8
  float v13; // xmm5_4
  unsigned int v14; // esi
  unsigned int v15; // ebp
  float v16; // xmm0_4
  float v17; // xmm1_4
  double v18; // xmm0_8
  float v19; // xmm1_4
  double v20; // xmm0_8
  double v21; // xmm0_8
  double v22; // xmm0_8
  float v23; // xmm1_4
  unsigned int v24; // esi
  unsigned int v25; // ebp
  int v26; // r15d
  int v27; // r12d
  int v28; // r15d
  __m128 v29; // xmm0
  double v30; // xmm0_8
  double v31; // xmm0_8
  float v32; // xmm4_4
  float v33; // [rsp+Ch] [rbp-7Ch]
  float v34; // [rsp+Ch] [rbp-7Ch]
  float v35; // [rsp+Ch] [rbp-7Ch]
  float v36; // [rsp+Ch] [rbp-7Ch]
  float v37; // [rsp+10h] [rbp-78h]
  float v38; // [rsp+10h] [rbp-78h]
  float v39; // [rsp+10h] [rbp-78h]
  float v40; // [rsp+14h] [rbp-74h]
  unsigned int v41; // [rsp+14h] [rbp-74h]
  float v42; // [rsp+14h] [rbp-74h]
  float v43; // [rsp+18h] [rbp-70h]
  __m128 v44; // [rsp+20h] [rbp-68h]
  __m128 v45; // [rsp+20h] [rbp-68h]
  __m128 v46; // [rsp+20h] [rbp-68h]
  float v47; // [rsp+3Ch] [rbp-4Ch]
  float v48; // [rsp+40h] [rbp-48h]
  float v49; // [rsp+50h] [rbp-38h]

  v49 = fabs(a4.m128_f32[0] - a2.m128_f32[0]);
  v48 = fabs(a3.m128_f32[0]);
  if ( v49 <= v48 )
  {
    v5 = a3.m128_u64[0];
    a3 = a4;
    v4 = a2;
    a2.m128_u64[0] = 0LL;
    if ( *(float *)&v5 >= 0.0 )
      goto LABEL_3;
  }
  else
  {
    v4 = 0LL;
    v5 = a4.m128_u64[0];
    if ( a2.m128_f32[0] <= a4.m128_f32[0] )
    {
LABEL_3:
      v6 = *(float *)&v5;
      v7 = a3.m128_f32[0];
      a3 = v4;
      v5 = a2.m128_u64[0];
      goto LABEL_6;
    }
  }
  v6 = a2.m128_f32[0];
  v7 = v4.m128_f32[0];
LABEL_6:
  v33 = v6;
  v8 = v6 - *(float *)&v5;
  v9 = 1.0;
  if ( fabs(v8) > 0.00000011920929 )
    v9 = (float)(v7 - a3.m128_f32[0]) / v8;
  v40 = v7;
  v37 = *(float *)&v5;
  v10 = roundf(*(double *)&v5);
  v43 = *(float *)&v10;
  a3.m128_f32[0] = a3.m128_f32[0] + (float)((float)(*(float *)&v10 - v37) * v9);
  v44 = a3;
  v11 = ((double (*)(void))truncf)();
  v47 = (float)(*(float *)&v11 - (float)(v37 + 0.5)) + 1.0;
  v12 = truncf(*(double *)a3.m128_u64);
  v13 = *(float *)&v12;
  *(float *)&v12 = a3.m128_f32[0] - *(float *)&v12;
  v14 = 65793 * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, (float)((float)(1.0 - *(float *)&v12) * v47) * 255.0));
  v15 = 65793 * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, (float)(*(float *)&v12 * v47) * 255.0));
  v38 = v13;
  if ( v49 <= v48 )
  {
    alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v14, v43, v13);
    v17 = v38;
    v16 = v43;
  }
  else
  {
    alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v14, v13, v43);
    v16 = v38;
    v17 = v43;
  }
  alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v15, v16 + 1.0, v17);
  v18 = roundf(COERCE_DOUBLE((unsigned __int64)LODWORD(v33)));
  v39 = *(float *)&v18;
  v19 = *(float *)&v18;
  *(_QWORD *)&v20 = LODWORD(v33);
  *(float *)&v41 = v40 + (float)((float)(v19 - v33) * v9);
  v34 = v33 + 0.5;
  *(float *)&v20 = v34;
  v21 = truncf(v20);
  v35 = v34 - *(float *)&v21;
  v22 = truncf(COERCE_DOUBLE((unsigned __int64)v41));
  v23 = *(float *)&v22;
  v24 = 65793
      * (unsigned __int8)(int)fminf(
                                255.0,
                                fmaxf(
                                  0.0,
                                  (float)((float)(1.0 - (float)(*(float *)&v41 - *(float *)&v22)) * v35) * 255.0));
  v25 = 65793
      * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, (float)((float)(*(float *)&v41 - *(float *)&v22) * v35) * 255.0));
  v26 = (int)v43;
  if ( v43 > 2147483500.0 )
    v26 = 0x7FFFFFFF;
  v27 = (int)v39;
  if ( v39 > 2147483500.0 )
    v27 = 0x7FFFFFFF;
  v28 = v26 + 1;
  v29 = v44;
  v29.m128_f32[0] = v44.m128_f32[0] + v9;
  v36 = v23 + 1.0;
  if ( v49 <= v48 )
  {
    alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v24, v39, v23);
    alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v25, v39, v36);
    if ( v28 < v27 )
    {
      do
      {
        v46 = v29;
        v31 = truncf(*(double *)v29.m128_u64);
        v32 = *(float *)&v31;
        *(float *)&v31 = v46.m128_f32[0] - *(float *)&v31;
        v42 = v32;
        alacritty::renderer::text::builtin_font::Canvas::put_pixel(
          a1,
          65793 * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, (float)(1.0 - *(float *)&v31) * 255.0)),
          (float)v28,
          v32);
        alacritty::renderer::text::builtin_font::Canvas::put_pixel(
          a1,
          65793 * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, *(float *)&v31 * 255.0)),
          (float)v28,
          v42 + 1.0);
        v29 = v46;
        v29.m128_f32[0] = v46.m128_f32[0] + v9;
        ++v28;
      }
      while ( v27 != v28 );
    }
  }
  else
  {
    alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v24, v23, v39);
    alacritty::renderer::text::builtin_font::Canvas::put_pixel(a1, v25, v36, v39);
    if ( v28 < v27 )
    {
      do
      {
        v45 = v29;
        v30 = truncf(*(double *)v29.m128_u64);
        alacritty::renderer::text::builtin_font::Canvas::put_pixel(
          a1,
          65793
        * (unsigned __int8)(int)fminf(
                                  255.0,
                                  fmaxf(0.0, (float)(1.0 - (float)(v45.m128_f32[0] - *(float *)&v30)) * 255.0)),
          *(float *)&v30,
          (float)v28);
        alacritty::renderer::text::builtin_font::Canvas::put_pixel(
          a1,
          65793 * (unsigned __int8)(int)fminf(255.0, fmaxf(0.0, (float)(v45.m128_f32[0] - *(float *)&v30) * 255.0)),
          *(float *)&v30 + 1.0,
          (float)v28);
        v29 = v45;
        v29.m128_f32[0] = v45.m128_f32[0] + v9;
        ++v28;
      }
      while ( v27 != v28 );
    }
  }
}