__int64 __fastcall uu_fmt::linebreak::compute_demerits(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, float a4)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  __int64 v7; // rdi
  bool v8; // sf
  unsigned __int64 v9; // rcx
  float v10; // xmm1_4
  __int64 v11; // rsi
  float v12; // xmm2_4
  float v13; // xmm1_4
  __int64 v14; // rcx
  __int64 v15; // rcx
  float v16; // xmm2_4
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rdx

  if ( (a2 & 0x8000000000000000LL) != 0LL )
    v4 = (float)(int)((a2 >> 1) | a2 & 1) + (float)(int)((a2 >> 1) | a2 & 1);
  else
    v4 = (float)(int)a2;
  v5 = (float)(int)a1 / v4;
  v6 = v5;
  if ( !a1 )
  {
    v6 = 0.0;
    goto LABEL_11;
  }
  v7 = 10000001LL;
  if ( fabs(v5) <= 1.0 )
  {
LABEL_11:
    v13 = fabs((float)(v6 * v6) * v6) * 100.0;
    v14 = (unsigned int)(int)v13;
    if ( v13 > 9.2233715e18 )
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = v14 + 1;
    v8 = (__int64)(a2 - a3) < 0;
    v9 = a2 - a3;
    if ( a2 <= a3 )
      goto LABEL_14;
    goto LABEL_8;
  }
  v8 = (__int64)(a2 - a3) < 0;
  v9 = a2 - a3;
  if ( a2 <= a3 )
  {
LABEL_14:
    v15 = 0LL;
    goto LABEL_20;
  }
LABEL_8:
  if ( v8 )
  {
    v10 = (float)(int)((v9 >> 1) | v9 & 1) + (float)(int)((v9 >> 1) | v9 & 1);
    v11 = a2 - 1;
    if ( v11 < 0 )
      goto LABEL_10;
LABEL_16:
    v12 = (float)(int)v11;
    goto LABEL_17;
  }
  v10 = (float)(int)v9;
  v11 = a2 - 1;
  if ( v11 >= 0 )
    goto LABEL_16;
LABEL_10:
  v12 = (float)(int)(((unsigned __int64)v11 >> 1) | v11 & 1) + (float)(int)(((unsigned __int64)v11 >> 1) | v11 & 1);
LABEL_17:
  v16 = fabs((float)((float)(v10 / v12) * (float)(v10 / v12)) * (float)(v10 / v12)) * 300.0;
  v17 = (unsigned int)(int)v16;
  if ( v16 > 9.2233715e18 )
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  v15 = v17;
LABEL_20:
  v18 = fabs((float)((float)((float)(v6 - a4) * 0.5) * (float)((float)(v6 - a4) * 0.5)) * (float)((float)(v6 - a4) * 0.5))
      * 600.0;
  v19 = (unsigned int)(int)v18;
  if ( v18 > 9.2233715e18 )
    v19 = 0x7FFFFFFFFFFFFFFFLL;
  return core::num::<impl i64>::pow(v19 + v15 + v7);
}