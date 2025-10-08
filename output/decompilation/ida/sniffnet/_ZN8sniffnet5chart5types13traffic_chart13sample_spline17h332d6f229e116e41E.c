__int64 __fastcall sniffnet::chart::types::traffic_chart::sample_spline(__int64 a1, __int64 a2, float a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  float *v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  bool v8; // cf
  float *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  __int64 result; // rax
  _OWORD *v13; // rcx
  float v14; // [rsp+Ch] [rbp-7Ch]
  float v15; // [rsp+10h] [rbp-78h]
  float v16; // [rsp+14h] [rbp-74h]
  __int128 v17; // [rsp+18h] [rbp-70h] BYREF
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-48h] BYREF
  float v22; // [rsp+50h] [rbp-38h]

  v19 = a1;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = 10 * v3;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 4LL;
  v18 = 0LL;
  v5 = (float *)&v20;
  if ( v3 )
    v5 = (float *)(*(_QWORD *)(a2 + 8) + 12LL);
  v6 = 0LL;
  v7 = v3 - 1;
  if ( !v3 )
    v7 = 0LL;
  v20 = 0LL;
  v8 = v7 < v3;
  v9 = (float *)(*(_QWORD *)(a2 + 8) + 20 * v7 + 12);
  if ( !v8 )
    v9 = (float *)v21;
  v10 = *v5;
  v21[0] = 0LL;
  v15 = v10;
  v14 = (float)(*v9 - v10) / (float)((float)(int)v4 + -1.0);
  while ( v4 != v6 )
  {
    v16 = (float)((float)(int)v6 * v14) + v15;
    splines::spline::Spline<T,V>::clamped_sample_with_key(v21, a2);
    if ( LOBYTE(v21[0]) )
      v11 = v22;
    else
      v11 = 0.0;
    ++v6;
    alloc::vec::Vec<T,A>::push(&v17, &off_2DFEE08, v16, v11 * a3);
  }
  result = v18;
  v13 = (_OWORD *)v19;
  *(_QWORD *)(v19 + 16) = v18;
  *v13 = v17;
  return result;
}