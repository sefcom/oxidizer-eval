__int64 __fastcall sniffnet::gui::styles::types::gradient_type::get_gradient_headers(
        void *dest,
        __int64 a2,
        char a3,
        char a4)
{
  __int128 v4; // xmm0
  __m128d v5; // xmm0
  unsigned int v6; // xmm2_4
  __m128 v8; // [rsp+20h] [rbp-298h]
  _DWORD src[49]; // [rsp+3Ch] [rbp-27Ch] BYREF
  double desta[24]; // [rsp+100h] [rbp-1B8h] BYREF
  _BYTE v11[244]; // [rsp+1C4h] [rbp-F4h] BYREF

  src[48] = 1070141403;
  src[0] = 0;
  src[6] = 0;
  src[12] = 0;
  src[18] = 0;
  src[24] = 0;
  src[30] = 0;
  src[36] = 0;
  src[42] = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      iced_core::gradient::Linear::add_stop(desta, src);
      iced_core::gradient::Linear::add_stop(v11, desta);
      iced_core::gradient::Linear::add_stop(src, v11);
      v4 = *(_OWORD *)(a2 + 32);
    }
    else
    {
      iced_core::gradient::Linear::add_stop(desta, src);
      iced_core::gradient::Linear::add_stop(v11, desta);
      iced_core::gradient::Linear::add_stop(src, v11);
      v4 = *(_OWORD *)(a2 + 16);
    }
    *(_OWORD *)desta = v4;
  }
  else
  {
    v5 = 0LL;
    if ( !a4 )
      v5 = (__m128d)0x3FF0000000000000uLL;
    *(float *)&v6 = (*(float *)(a2 + 24) + v5.m128d_f64[0]) * 0.5;
    v8 = _mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(_mm_unpacklo_pd(v5, v5), _mm_cvtps_pd(*(__m64 *)(a2 + 16))), (__m128d)xmmword_26DFA0));
    iced_core::gradient::Linear::add_stop(desta, src);
    iced_core::gradient::Linear::add_stop(v11, desta);
    iced_core::gradient::Linear::add_stop(src, v11);
    _mm_storel_ps(desta, v8);
    *(_QWORD *)&desta[1] = v6 | 0x3F80000000000000LL;
  }
  return iced_core::gradient::Linear::add_stop(dest, src);
}