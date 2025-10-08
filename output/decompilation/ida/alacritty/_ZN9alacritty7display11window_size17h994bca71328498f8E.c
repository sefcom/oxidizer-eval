__int64 __fastcall alacritty::display::window_size(
        unsigned __int16 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v9; // rax
  float v10; // xmm0_4
  __int64 v11; // rax
  float v12; // xmm0_4
  double v13; // xmm0_8
  double v14; // xmm0_8
  __int64 result; // rax
  float v17; // [rsp+8h] [rbp-30h]
  float v18; // [rsp+8h] [rbp-30h]
  float v19; // [rsp+Ch] [rbp-2Ch]
  float v20; // [rsp+10h] [rbp-28h]
  float v21; // [rsp+14h] [rbp-24h]

  v21 = floorf(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)a1 * a7)));
  v19 = floorf(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)a2 * a7)));
  v9 = core::cmp::Ord::max(a3, 2LL);
  if ( v9 < 0 )
    v10 = (float)(int)(((unsigned __int64)v9 >> 1) | v9 & 1) + (float)(int)(((unsigned __int64)v9 >> 1) | v9 & 1);
  else
    v10 = (float)(int)v9;
  v17 = a5 * v10;
  v11 = core::cmp::Ord::max(a4, 1LL);
  if ( v11 < 0 )
    v12 = (float)(int)(((unsigned __int64)v11 >> 1) | v11 & 1) + (float)(int)(((unsigned __int64)v11 >> 1) | v11 & 1);
  else
    v12 = (float)(int)v11;
  v20 = a6 * v12;
  v13 = fmaf(v21, 2.0, v17);
  v18 = floorf(v13);
  v14 = fmaf(v19, 2.0, v20);
  floorf(v14);
  result = (unsigned int)(int)v18;
  if ( v18 < 0.0 )
    result = 0LL;
  if ( v18 > 4294967000.0 )
    return 0xFFFFFFFFLL;
  return result;
}