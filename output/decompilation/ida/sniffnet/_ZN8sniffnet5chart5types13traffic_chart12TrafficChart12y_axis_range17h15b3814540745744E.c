float __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::y_axis_range(__int64 a1)
{
  __m128 v1; // xmm0

  if ( *(_BYTE *)(a1 + 439) )
  {
    if ( *(_BYTE *)(a1 + 439) == 1 )
      v1 = (__m128)*(unsigned __int64 *)(a1 + 420);
    else
      v1 = _mm_mul_ps((__m128)*(unsigned __int64 *)(a1 + 420), (__m128)xmmword_26F960);
  }
  else
  {
    v1 = (__m128)*(unsigned __int64 *)(a1 + 428);
  }
  return v1.m128_f32[0] - (float)((float)(_mm_shuffle_ps(v1, v1, 85).m128_f32[0] - v1.m128_f32[0]) * 0.050000001);
}