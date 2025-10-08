__int64 __fastcall alacritty::renderer::rects::RectRenderer::add_rect(
        __int64 a1,
        unsigned __int64 *a2,
        __m128 a3,
        __m128 a4)
{
  char v5; // al
  char v6; // cl
  char v7; // dl
  int v8; // edi
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  _DWORD v18[2]; // [rsp+8h] [rbp-50h] BYREF
  char v19; // [rsp+10h] [rbp-48h]
  char v20; // [rsp+11h] [rbp-47h]
  char v21; // [rsp+12h] [rbp-46h]
  char v22; // [rsp+13h] [rbp-45h]
  _DWORD v23[2]; // [rsp+14h] [rbp-44h] BYREF
  char v24; // [rsp+1Ch] [rbp-3Ch]
  char v25; // [rsp+1Dh] [rbp-3Bh]
  char v26; // [rsp+1Eh] [rbp-3Ah]
  char v27; // [rsp+1Fh] [rbp-39h]
  __int64 v28; // [rsp+20h] [rbp-38h] BYREF
  char v29; // [rsp+28h] [rbp-30h]
  char v30; // [rsp+29h] [rbp-2Fh]
  char v31; // [rsp+2Ah] [rbp-2Eh]
  char v32; // [rsp+2Bh] [rbp-2Dh]
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  char v34; // [rsp+38h] [rbp-20h]
  char v35; // [rsp+39h] [rbp-1Fh]
  char v36; // [rsp+3Ah] [rbp-1Eh]
  char v37; // [rsp+3Bh] [rbp-1Dh]

  v5 = *((_BYTE *)a2 + 20);
  v6 = *((_BYTE *)a2 + 21);
  v7 = *((_BYTE *)a2 + 22);
  v8 = (int)fminf(255.0, fmaxf(0.0, *((float *)a2 + 4) * 255.0));
  v9 = _mm_unpacklo_ps(a3, a4);
  v10 = _mm_div_ps((__m128)*a2, v9);
  v11 = _mm_add_ps((__m128)0xBF800000, v10);
  v12 = _mm_sub_ps((__m128)xmmword_E97C0, v10);
  v13 = _mm_shuffle_ps(_mm_shuffle_ps(v12, v11, 1), v11, 226);
  _mm_storel_ps((double *)&v28, v13);
  v29 = v5;
  v30 = v6;
  v31 = v7;
  v32 = v8;
  v18[0] = v11.m128_i32[0];
  v19 = v5;
  v20 = v6;
  v21 = v7;
  v22 = v8;
  v23[1] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  v24 = v5;
  v25 = v6;
  v26 = v7;
  v27 = v8;
  v14 = _mm_div_ps((__m128)a2[1], v9);
  v15 = _mm_add_ps(v13, v14);
  v16 = _mm_sub_ps(v13, v14);
  v18[1] = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  v23[0] = v15.m128_i32[0];
  _mm_storel_ps((double *)&v33, _mm_shuffle_ps(_mm_shuffle_ps(v16, v15, 1), v15, 226));
  v34 = v5;
  v35 = v6;
  v36 = v7;
  v37 = v8;
  alloc::vec::Vec<T,A>::push(a1, &v28, &off_883A10);
  alloc::vec::Vec<T,A>::push(a1, v18, &off_883A28);
  alloc::vec::Vec<T,A>::push(a1, v23, &off_883A40);
  alloc::vec::Vec<T,A>::push(a1, v23, &off_883A58);
  alloc::vec::Vec<T,A>::push(a1, &v33, &off_883A70);
  return alloc::vec::Vec<T,A>::push(a1, v18, &off_883A88);
}