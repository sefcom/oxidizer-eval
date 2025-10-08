
  int512_t alacritty::display::Display::update_font_size::h86a7d3c64310d9e8(void* arg1, char arg2, char arg3, void* arg4)

{
    void var_60;
    alacritty::renderer::text::glyph_cache::GlyphCache::update_font_size::hc45cf17b76341be8(
        &var_60, arg1, arg4);
    uint128_t zmm0;
    uint128_t zmm1;
    zmm0 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$crossfont..Error$GT$$GT$::hf8c39d173a5e65eb(&var_60);
    zmm0 = arg2;
    zmm1 = arg3;
    zmm0 = zmm0 + *(arg1 + 0x40);
    uint128_t zmm0_1;
    uint128_t zmm1_1;
    zmm0_1 = floor(zmm0, zmm1);
    zmm0_1 = __maxsd_xmmsd_memsd(zmm0_1, 0x3ff0000000000000);
    int32_t result = zmm0_1;
    zmm0_1 = zmm1 + *(arg1 + 0x48);
    int64_t zmm0_2;
    int512_t zmm1_2;
    zmm0_2 = floor(zmm0_1, zmm1_1);
    zmm1_2 = {0};
    zmm1_2 = __maxsd_xmmsd_memsd(zmm0_2, 0x3ff0000000000000);
    return result;
}
