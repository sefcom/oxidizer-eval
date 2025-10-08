float __fastcall alacritty::display::Display::update_font_size(__int64 a1, char a2, char a3, __int64 a4)
{
  float v5; // xmm0_4
  float v7; // [rsp+Ch] [rbp-6Ch]
  _BYTE v8[96]; // [rsp+18h] [rbp-60h] BYREF

  alacritty::renderer::text::glyph_cache::GlyphCache::update_font_size(v8, a1, a4);
  core::ptr::drop_in_place<core::result::Result<(),crossfont::Error>>(v8);
  v5 = fmax(floor((double)a2 + *(double *)(a1 + 64)), 1.0);
  v7 = v5;
  floor((double)a3 + *(double *)(a1 + 72));
  return v7;
}