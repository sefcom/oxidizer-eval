__int64 __fastcall sniffnet::gui::styles::types::gradient_type::get_gradient_hovered_buttons(
        void *dest,
        __int64 a2,
        char a3,
        char a4)
{
  __int128 v6; // xmm0
  __m128d v7; // xmm0
  unsigned int v8; // xmm1_4
  double v10[3]; // [rsp+0h] [rbp-1B8h] BYREF
  int v11; // [rsp+18h] [rbp-1A0h]
  int v12; // [rsp+30h] [rbp-188h]
  int v13; // [rsp+48h] [rbp-170h]
  int v14; // [rsp+60h] [rbp-158h]
  int v15; // [rsp+78h] [rbp-140h]
  int v16; // [rsp+90h] [rbp-128h]
  int v17; // [rsp+A8h] [rbp-110h]
  int v18; // [rsp+C0h] [rbp-F8h]
  _BYTE desta[236]; // [rsp+CCh] [rbp-ECh] BYREF

  v18 = 1075235812;
  LODWORD(v10[0]) = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  iced_core::gradient::Linear::add_stop(desta, v10);
  if ( a3 )
  {
    if ( a3 == 1 )
      v6 = *(_OWORD *)(a2 + 32);
    else
      v6 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)v10 = v6;
  }
  else
  {
    v7 = 0LL;
    if ( !a4 )
      v7 = (__m128d)0x3FF0000000000000uLL;
    *(float *)&v8 = (*(float *)(a2 + 24) + v7.m128d_f64[0]) * 0.5;
    v10[0] = (_mm_unpacklo_pd(v7, v7).m128d_f64[0] + *(float *)(a2 + 16)) * 0.5;
    *(_QWORD *)&v10[1] = v8 | 0x3F80000000000000LL;
  }
  return iced_core::gradient::Linear::add_stop(dest, desta);
}