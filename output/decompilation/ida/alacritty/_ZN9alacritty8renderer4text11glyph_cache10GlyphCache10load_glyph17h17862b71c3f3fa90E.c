__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::load_glyph(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  int v6; // ebp
  float v8; // xmm0_4
  int v9; // edx
  __int64 v10; // rdi

  v6 = a4[14] + *(char *)(a2 + 294);
  a4[14] = v6;
  v8 = *(float *)(a2 + 80);
  v9 = 0x7FFFFFFF;
  if ( v8 <= 2147483500.0 )
    v9 = (int)v8;
  a4[13] = a4[13] + *(char *)(a2 + 295) - v9;
  v10 = a4[10];
  if ( (unsigned int)v10 >= 0xA0 && !(unsigned __int8)unicode_width::tables::lookup_width(v10) )
    a4[14] = (int)fmin(fmax(*(double *)(a2 + 64), -2147483648.0), 2147483647.0) + v6;
  <alacritty::renderer::text::glsl3::RenderApi as alacritty::renderer::text::glyph_cache::LoadGlyph>::load_glyph(
    a1,
    a3,
    a4);
  return core::ptr::drop_in_place<crossfont::RasterizedGlyph>(a4);
}