
  fn alacritty::renderer::text::glyph_cache::GlyphCache::reset_glyph_cache::h2ac9bf445252e45f(arg1: *mut i64, arg2: u64) -> i64

{
    _$LT$alacritty..renderer..text..LoaderApi$u20$as$u20$alacritty..renderer..text..glyph_cache..LoadGlyph$GT$::clear::h339576acbcce310d(*(arg2 + 8), *(arg2 + 0x10));
    let mut var_38: i128;
    ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_38);
    let var_48: i128 = data_c75368;
    let zmm0: i128 = *data_c75358;
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$crossfont..GlyphKey$C$alacritty..renderer..text..glyph_cache..Glyph$C$ahash..random_state..RandomState$GT$$GT$::h00b47e32081c3b1b(*arg1, arg1[1]);
    let zmm2: i128 = var_38;
    let var_28: i128;
    *arg1.byte_offset(0x30) = var_28;
    *arg1.byte_offset(0x20) = zmm2;
    *arg1.byte_offset(0x10) = var_48;
    *arg1 = zmm0;
    /* tailcall */
    alacritty::renderer::text::glyph_cache::GlyphCache::load_common_glyphs::h997e04d309d0bf82(arg1, 
        arg2)
}
