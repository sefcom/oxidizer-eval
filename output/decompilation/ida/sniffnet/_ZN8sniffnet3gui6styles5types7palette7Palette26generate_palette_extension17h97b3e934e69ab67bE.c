void __fastcall sniffnet::gui::styles::types::palette::Palette::generate_palette_extension(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __m128 v5; // xmm0
  int v6; // xmm1_4
  float v7; // [rsp+Ch] [rbp-6Ch]
  __int128 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+20h] [rbp-58h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+60h] [rbp-18h] BYREF

  v2 = _mm_add_ps(
         _mm_shuffle_ps(
           _mm_movelh_ps((__m128)*(unsigned int *)(a2 + 88), *(__m128 *)(a2 + 72)),
           *(__m128 *)(a2 + 72),
           226),
         _mm_add_ps(
           _mm_shuffle_ps(
             _mm_shuffle_ps((__m128)*(unsigned __int64 *)(a2 + 80), (__m128)*(unsigned __int64 *)(a2 + 64), 17),
             (__m128)*(unsigned __int64 *)(a2 + 64),
             226),
           _mm_unpacklo_ps((__m128)*(unsigned __int64 *)(a2 + 64), (__m128)*(unsigned __int64 *)(a2 + 80))));
  if ( (_mm_extract_epi16((__m128i)_mm_cmpnle_ps(v2, (__m128)xmmword_26F430), 2) & 1) != 0 )
  {
    v9 = *(_OWORD *)&qword_2DFF3A0;
    v3 = unk_2DFF390;
  }
  else
  {
    v9 = *(_OWORD *)&qword_2DFF3C0;
    v3 = unk_2DFF3B0;
  }
  v8 = v3;
  v7 = (float)(*(float *)a2 + *(float *)(a2 + 4)) + *(float *)(a2 + 8);
  if ( v2.m128_f32[0] <= 1.5 )
  {
    v11 = *(_OWORD *)&qword_2DFF3C0;
    v4 = unk_2DFF3B0;
  }
  else
  {
    v11 = *(_OWORD *)&qword_2DFF3A0;
    v4 = unk_2DFF390;
  }
  v10 = v4;
  sniffnet::gui::styles::types::palette::Palette::generate_buttons_color((__int64)&v13, (float *)a2);
  if ( v7 > 1.5 )
  {
    v12 = xmmword_26F410;
    v5 = (__m128)0x3F19999A3F400000uLL;
    v6 = 1047904911;
  }
  else
  {
    v12 = unk_2721A0;
    v5 = (__m128)0x3E99999A3E19999AuLL;
    v6 = 1039516303;
  }
  *(_BYTE *)(a1 + 108) = v7 <= 1.5;
  *(_OWORD *)a1 = v8;
  *(_OWORD *)(a1 + 16) = v9;
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 48) = v11;
  _mm_storel_ps((double *)(a1 + 96), v5);
  *(_DWORD *)(a1 + 104) = v6;
  *(_OWORD *)(a1 + 64) = v13;
  *(_OWORD *)(a1 + 80) = v12;
}