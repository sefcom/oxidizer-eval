__int64 __fastcall alacritty::display::Display::highlight_damage(__int64 a1, __int64 a2)
{
  float v3; // xmm2_4
  int v4; // eax
  float v5; // xmm3_4
  int v6; // edx
  float v7; // xmm2_4
  int v8; // edi
  bool v9; // cc
  float v10; // xmm2_4
  int v11; // r8d
  float v12; // xmm2_4
  int v13; // r9d
  float v14; // xmm2_4
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rbx
  __int64 v18; // r13
  int v19; // ebp
  __int64 v21; // [rsp+0h] [rbp-A8h]
  _QWORD v23[2]; // [rsp+18h] [rbp-90h] BYREF
  int v24; // [rsp+28h] [rbp-80h]
  int v25; // [rsp+2Ch] [rbp-7Ch]
  int v26; // [rsp+30h] [rbp-78h]
  int v27; // [rsp+34h] [rbp-74h]
  int v28; // [rsp+38h] [rbp-70h]
  int v29; // [rsp+3Ch] [rbp-6Ch]
  __m128 v30; // [rsp+40h] [rbp-68h] BYREF
  int v31; // [rsp+50h] [rbp-58h]
  __int16 v32; // [rsp+54h] [rbp-54h]
  char v33; // [rsp+56h] [rbp-52h]
  char v34; // [rsp+57h] [rbp-51h]
  __int64 v35; // [rsp+60h] [rbp-48h] BYREF
  __int64 v36; // [rsp+68h] [rbp-40h]
  __int64 v37; // [rsp+70h] [rbp-38h]

  v3 = *(float *)(a1 + 1960);
  v4 = (int)v3;
  if ( v3 < 0.0 )
    v4 = 0;
  v5 = *(float *)(a1 + 1964);
  if ( v3 > 4294967000.0 )
    v4 = -1;
  v6 = (int)v5;
  if ( v5 < 0.0 )
    v6 = 0;
  v7 = *(float *)(a1 + 1968);
  if ( v5 > 4294967000.0 )
    v6 = -1;
  v8 = (int)v7;
  if ( v7 < 0.0 )
    v8 = 0;
  v9 = v7 <= 4294967000.0;
  v10 = *(float *)(a1 + 1972);
  if ( !v9 )
    v8 = -1;
  v11 = (int)v10;
  if ( v10 < 0.0 )
    v11 = 0;
  v9 = v10 <= 4294967000.0;
  v12 = *(float *)(a1 + 1976);
  if ( !v9 )
    v11 = -1;
  v13 = (int)v12;
  if ( v12 < 0.0 )
    v13 = 0;
  v9 = v12 <= 4294967000.0;
  v14 = *(float *)(a1 + 1980);
  if ( !v9 )
    v13 = -1;
  v15 = (int)v14;
  if ( v14 < 0.0 )
    v15 = 0;
  v16 = *(_QWORD *)(a1 + 1944);
  if ( v14 > 4294967000.0 )
    v15 = -1;
  v24 = v4;
  v25 = v6;
  v26 = v8;
  v27 = v11;
  v28 = v13;
  v29 = v15;
  v23[0] = v16;
  v23[1] = v16;
  alacritty::display::damage::DamageTracker::shape_frame_damage(&v35, a1, (__int64)v23);
  v21 = v36;
  if ( v37 )
  {
    v17 = v36;
    v18 = v36 + 16 * v37;
    v19 = 0x7FFFFFFF;
    if ( v5 <= 2147483500.0 )
      v19 = (int)v5;
    do
    {
      v30 = _mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(
                                       (__m128)_mm_unpacklo_epi64(
                                                 _mm_cvtsi32_si128(v19 - (*(_DWORD *)(v17 + 4) + *(_DWORD *)(v17 + 12))),
                                                 _mm_cvtsi32_si128(*(_DWORD *)v17)),
                                       (__m128)*(unsigned __int64 *)(v17 + 8),
                                       66));
      v33 = -1;
      v32 = 255;
      v31 = 1056964608;
      v34 = 0;
      alloc::vec::Vec<T,A>::push(a2, &v30, &off_882818);
      v17 += 16LL;
    }
    while ( v17 != v18 );
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<glutin::surface::Rect>>(v35, v21);
}