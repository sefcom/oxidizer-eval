__int64 __fastcall alacritty::renderer::rects::RenderLine::create_rect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        float a7,
        float a8,
        float a9,
        double a10,
        __m128 a11)
{
  float v14; // xmm2_4
  double v15; // xmm1_8
  float v16; // xmm0_4
  __m128 v17; // xmm3
  __int64 v18; // r13
  float v19; // xmm1_4
  __m128 v20; // xmm4
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 result; // rax
  __m128 v24; // [rsp+10h] [rbp-48h]
  __m128 v25; // [rsp+20h] [rbp-38h]

  v14 = fmaxf(a9, 1.0);
  if ( a3 < 0 )
    a11.m128_f32[0] = (float)(int)(((unsigned __int64)a3 >> 1) | a3 & 1)
                    + (float)(int)(((unsigned __int64)a3 >> 1) | a3 & 1);
  else
    a11.m128_f32[0] = (float)(int)a3;
  v24 = (__m128)*(unsigned int *)(a2 + 24);
  a11.m128_f32[0] = (float)(a11.m128_f32[0] + 1.0) * *(float *)(a2 + 28);
  v25 = a11;
  HIDWORD(v15) = 0;
  *(float *)&v15 = (float)(-0.5 * v14) + (float)((float)(a7 + a11.m128_f32[0]) - a8);
  v16 = *(float *)&v15;
  roundf(v15);
  v17 = v25;
  v18 = a5 + 1;
  if ( v18 < 0 )
    v19 = (float)(int)(((unsigned __int64)v18 >> 1) | v18 & 1) + (float)(int)(((unsigned __int64)v18 >> 1) | v18 & 1);
  else
    v19 = (float)(int)v18;
  v17.m128_f32[0] = fminf(v25.m128_f32[0] - v14, v16);
  v20 = v24;
  v21 = v19 * v24.m128_f32[0];
  if ( a4 < 0 )
    v22 = (float)(int)(((unsigned __int64)a4 >> 1) | a4 & 1) + (float)(int)(((unsigned __int64)a4 >> 1) | a4 & 1);
  else
    v22 = (float)(int)a4;
  v20.m128_f32[0] = v24.m128_f32[0] * v22;
  _mm_storel_ps((double *)a1, _mm_add_ps(_mm_unpacklo_ps(v20, v17), (__m128)*(unsigned __int64 *)(a2 + 32)));
  *(float *)(a1 + 8) = v21 - (float)(v24.m128_f32[0] * v22);
  *(float *)(a1 + 12) = v14;
  result = HIWORD(a6);
  *(_BYTE *)(a1 + 22) = BYTE2(a6);
  *(_WORD *)(a1 + 20) = a6;
  *(_DWORD *)(a1 + 16) = 1065353216;
  *(_BYTE *)(a1 + 23) = 0;
  return result;
}