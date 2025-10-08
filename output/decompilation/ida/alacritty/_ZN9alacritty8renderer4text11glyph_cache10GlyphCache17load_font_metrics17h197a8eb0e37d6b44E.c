__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::load_font_metrics(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rcx
  float v13; // xmm0_4
  _OWORD v14[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-B0h] BYREF
  __m256i v16; // [rsp+30h] [rbp-A8h]
  __m256i v17; // [rsp+50h] [rbp-88h]
  __m256i v18; // [rsp+70h] [rbp-68h] BYREF
  __m256i v19; // [rsp+90h] [rbp-48h]

  LODWORD(v14[0]) = 109;
  *(_QWORD *)((char *)v14 + 4) = __PAIR64__(a3, a5);
  <crossfont::ft::FreeTypeRasterizer as crossfont::Rasterize>::get_glyph(&v15, a2, v14);
  result = (unsigned int)v15;
  v18 = v16;
  v19 = v17;
  if ( (_DWORD)v15 == 1 )
  {
    v9 = *(_OWORD *)v18.m256i_i8;
    v10 = *(_OWORD *)&v18.m256i_u64[2];
    v11 = *(_OWORD *)v19.m256i_i8;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v19.m256i_u64[2];
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
  }
  else
  {
    core::ptr::drop_in_place<crossfont::RasterizedGlyph>(&v18);
    <crossfont::ft::FreeTypeRasterizer as crossfont::Rasterize>::metrics(&v15, a2, a5, a3);
    v12 = v15;
    v14[0] = *(_OWORD *)v16.m256i_i8;
    *(_OWORD *)((char *)v14 + 12) = *(_OWORD *)((char *)&v16.m256i_u64[1] + 4);
    v13 = *(float *)&v16.m256i_i32[7];
    result = v17.m256i_i64[0];
    if ( v15 == 7 )
    {
      *(_OWORD *)(a1 + 20) = *(_OWORD *)((char *)v14 + 12);
      *(_OWORD *)(a1 + 8) = v14[0];
      *(float *)(a1 + 36) = v13 + (float)a4;
      *(_QWORD *)(a1 + 40) = result;
      *(_QWORD *)a1 = 7LL;
    }
    else
    {
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v17.m256i_u64[1];
      *(_OWORD *)(a1 + 20) = *(_OWORD *)((char *)v14 + 12);
      *(_OWORD *)(a1 + 8) = v14[0];
      *(_QWORD *)a1 = v12;
      *(float *)(a1 + 36) = v13;
      *(_QWORD *)(a1 + 40) = result;
    }
  }
  return result;
}