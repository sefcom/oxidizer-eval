__int64 __fastcall sniffnet::chart::types::donut_chart::DonutChart::angles(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  double v4; // xmm0_8
  __int64 v5; // r13
  __int64 v6; // rbp
  double v7; // xmm0_8
  __int64 v8; // r12
  double v9; // xmm1_8
  double v10; // xmm0_8
  double v11; // xmm2_8
  double v12; // xmm3_8
  double v13; // xmm4_8
  double v14; // xmm0_8
  _DWORD *v15; // rax
  float v17; // [rsp+8h] [rbp-70h]
  unsigned __int64 v18; // [rsp+Ch] [rbp-6Ch] BYREF
  float v19; // [rsp+14h] [rbp-64h]
  float v20; // [rsp+18h] [rbp-60h] BYREF
  float v21; // [rsp+1Ch] [rbp-5Ch]
  float v22; // [rsp+20h] [rbp-58h] BYREF
  int v23; // [rsp+24h] [rbp-54h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h] BYREF
  float v27; // [rsp+40h] [rbp-38h]

  v25 = a1;
  v2 = a2[4];
  v3 = a2[5];
  v4 = _floatuntisf(v2, v3);
  v20 = *(float *)&v4;
  v5 = a2[7];
  v6 = a2[6];
  v7 = _floatuntisf(v6, v5);
  v17 = *(float *)&v7;
  v8 = a2[8];
  v24 = a2[9];
  v10 = _floatuntisf(v8, v24);
  v18 = __PAIR64__(LODWORD(v17), LODWORD(v20));
  *(_QWORD *)&v9 = LODWORD(v17);
  v21 = *(float *)&v10;
  v19 = *(float *)&v10;
  v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v18, &v20);
  *(float *)&v10 = (float)(v22 + v22) / 100.0;
  v11 = 0.0;
  if ( v3 | v2 && *(float *)&v10 > v20 )
  {
    HIDWORD(v9) = HIDWORD(v10);
    *(float *)&v9 = *(float *)&v10 - v20;
    *(float *)&v11 = (float)(*(float *)&v10 - v20) + 0.0;
    *(float *)&v18 = (float)(v22 + v22) / 100.0;
  }
  *(_QWORD *)&v12 = LODWORD(v21);
  *(_QWORD *)&v13 = LODWORD(v17);
  if ( v5 | v6 && *(float *)&v10 > v17 )
  {
    HIDWORD(v9) = HIDWORD(v10);
    *(float *)&v9 = *(float *)&v10 - v17;
    *(float *)&v11 = *(float *)&v11 + (float)(*(float *)&v10 - v17);
    *((float *)&v18 + 1) = (float)(v22 + v22) / 100.0;
  }
  if ( v24 | v8 && *(float *)&v10 > v21 )
  {
    HIDWORD(v9) = HIDWORD(v10);
    *(float *)&v9 = *(float *)&v10 - v21;
    *(float *)&v11 = *(float *)&v11 + (float)(*(float *)&v10 - v21);
    v19 = (float)(v22 + v22) / 100.0;
  }
  v14 = 0.0;
  if ( *(float *)&v11 > 0.0 )
  {
    v15 = (_DWORD *)core::iter::traits::iterator::Iterator::reduce(
                      &v18,
                      &v20,
                      0.0,
                      v9,
                      v11,
                      COERCE_DOUBLE((unsigned __int64)LODWORD(v21)),
                      COERCE_DOUBLE((unsigned __int64)LODWORD(v17)));
    *(_QWORD *)&v9 = LODWORD(v11);
    if ( v15 )
    {
      *(_QWORD *)&v14 = (unsigned int)*v15;
      *(float *)&v14 = *(float *)&v14 - *(float *)&v11;
      *v15 = LODWORD(v14);
    }
  }
  v23 = -1077342245;
  v27 = v19;
  v26 = v18;
  return core::array::drain::drain_array_with(v25, &v26, &v23, &v22, v14, v9, v11, v12, v13);
}