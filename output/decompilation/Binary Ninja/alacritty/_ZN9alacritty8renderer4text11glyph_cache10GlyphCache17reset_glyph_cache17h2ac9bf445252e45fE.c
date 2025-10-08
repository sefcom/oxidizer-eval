
  int64_t alacritty::renderer::text::glyph_cache::GlyphCache::reset_glyph_cache::h2ac9bf445252e45f(int64_t* arg1, uint64_t arg2)

{
    _$LT$alacritty..renderer..text..LoaderApi$u20$as$u20$alacritty..renderer..text..glyph_cache..LoadGlyph$GT$::clear::h339576acbcce310d(*(arg2 + 8), *(arg2 + 0x10));
    int128_t var_38;
    ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_38);
    int128_t var_48 = data_c75368;
    int128_t zmm0 = *data_c75358;
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$crossfont..GlyphKey$C$alacritty..renderer..text..glyph_cache..Glyph$C$ahash..random_state..RandomState$GT$$GT$::h00b47e32081c3b1b(*arg1, arg1[1]);
    int128_t zmm2 = var_38;
    int128_t var_28;
    *(arg1 + 0x30) = var_28;
    *(arg1 + 0x20) = zmm2;
    *(arg1 + 0x10) = var_48;
    *arg1 = zmm0;
    /* tailcall */
    return
        alacritty::renderer::text::glyph_cache::GlyphCache::load_common_glyphs::h997e04d309d0bf82(
        arg1, arg2);
}
