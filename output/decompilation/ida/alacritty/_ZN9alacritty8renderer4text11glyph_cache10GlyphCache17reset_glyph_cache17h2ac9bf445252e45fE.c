__int64 __fastcall alacritty::renderer::text::glyph_cache::GlyphCache::reset_glyph_cache(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm2
  _OWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF

  <alacritty::renderer::text::LoaderApi as alacritty::renderer::text::glyph_cache::LoadGlyph>::clear(
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  ahash::random_state::RandomState::new(v4);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<crossfont::GlyphKey,alacritty::renderer::text::glyph_cache::Glyph,ahash::random_state::RandomState>>(
    *(_QWORD *)a1,
    *(_QWORD *)(a1 + 8));
  v2 = v4[0];
  *(_OWORD *)(a1 + 48) = v4[1];
  *(_OWORD *)(a1 + 32) = v2;
  *(_OWORD *)(a1 + 16) = xmmword_875368;
  *(_OWORD *)a1 = *(_OWORD *)&off_875358;
  return alacritty::renderer::text::glyph_cache::GlyphCache::load_common_glyphs(a1, a2);
}