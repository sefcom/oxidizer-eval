__m128 __fastcall uu_fmt::linebreak::compute_demerits(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        float a4,
        double a5,
        double a6,
        __m128 a7)
{
  float v7; // xmm1_4
  __int64 v8; // rdi
  float v9; // xmm1_4
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rsi
  float v14; // xmm2_4
  __int64 v15; // rcx
  float v16; // xmm2_4
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rdx

  if ( (a2 & 0x8000000000000000LL) != 0LL )
  {
    v7 = (float)(int)((a2 >> 1) | a2 & 1) + (float)(int)((a2 >> 1) | a2 & 1);
    if ( a1 )
      goto LABEL_3;
  }
  else
  {
    v7 = (float)(int)a2;
    if ( a1 )
    {
LABEL_3:
      a7.m128_f32[0] = (float)(int)a1 / v7;
      goto LABEL_6;
    }
  }
  a7 = 0LL;
LABEL_6:
  v8 = 10000001LL;
  if ( fabs(a7.m128_f32[0]) <= 1.0 )
  {
    v9 = fabs((float)(a7.m128_f32[0] * a7.m128_f32[0]) * a7.m128_f32[0]) * 100.0;
    v10 = (unsigned int)(int)v9;
    if ( v9 > 9.2233715e18 )
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    v8 = v10 + 1;
  }
  v11 = a2 - a3;
  if ( a2 <= a3 )
  {
    v15 = 0LL;
    goto LABEL_20;
  }
  if ( (__int64)(a2 - a3) < 0 )
  {
    v12 = (float)(int)((v11 >> 1) | v11 & 1) + (float)(int)((v11 >> 1) | v11 & 1);
    v13 = a2 - 1;
    if ( v13 < 0 )
      goto LABEL_13;
LABEL_16:
    v14 = (float)(int)v13;
    goto LABEL_17;
  }
  v12 = (float)(int)v11;
  v13 = a2 - 1;
  if ( v13 >= 0 )
    goto LABEL_16;
LABEL_13:
  v14 = (float)(int)(((unsigned __int64)v13 >> 1) | v13 & 1) + (float)(int)(((unsigned __int64)v13 >> 1) | v13 & 1);
LABEL_17:
  v16 = (float)((float)((float)(v12 / v14) * (float)(v12 / v14)) * (float)(v12 / v14)) * 300.0;
  v17 = (unsigned int)(int)v16;
  if ( v16 > 9.2233715e18 )
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  v15 = v17;
LABEL_20:
  v18 = fabs(
          (float)((float)((float)(a7.m128_f32[0] - a4) * 0.5) * (float)((float)(a7.m128_f32[0] - a4) * 0.5))
        * (float)((float)(a7.m128_f32[0] - a4) * 0.5))
      * 600.0;
  v19 = (unsigned int)(int)v18;
  if ( v18 > 9.2233715e18 )
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  core::num::<impl i64>::pow(v19 + v15 + v8);
  return a7;
}
