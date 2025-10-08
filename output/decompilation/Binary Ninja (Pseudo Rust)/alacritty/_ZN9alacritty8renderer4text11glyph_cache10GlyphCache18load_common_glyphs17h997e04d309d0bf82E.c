
  fn alacritty::renderer::text::glyph_cache::GlyphCache::load_common_glyphs::h997e04d309d0bf82(arg1: *mut i64, arg2: u64) -> i64

{
    alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font::hfa00bbb094469db2(
        arg1, arg1[0x22], arg2);
    alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font::hfa00bbb094469db2(
        arg1, *arg1.byte_offset(0x114), arg2);
    alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font::hfa00bbb094469db2(
        arg1, arg1[0x23], arg2);
    /* tailcall */
    alacritty::renderer::text::glyph_cache::GlyphCache::load_glyphs_for_font::hfa00bbb094469db2(
        arg1, *arg1.byte_offset(0x11c), arg2)
}
