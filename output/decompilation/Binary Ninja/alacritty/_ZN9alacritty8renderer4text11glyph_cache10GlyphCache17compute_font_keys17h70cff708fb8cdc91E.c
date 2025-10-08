
  int64_t alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::h70cff708fb8cdc91(int64_t* arg1, void* arg2, int64_t* arg3)

{
    int32_t rbp = *(arg2 + 0xc0);
    int32_t var_160 = rbp;
    void var_60;
    alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_60, arg2);
    int64_t var_158;
    alacritty::renderer::text::glyph_cache::GlyphCache::load_regular_font::h31699e5046c8445a(
        &var_158, arg3, &var_60, rbp);
    int64_t rax = var_158;
    int32_t var_150;
    int128_t var_14c;
    int128_t var_13c;
    
    if (rax != 7)
    {
        int32_t var_11c;
        *(arg1 + 0x3c) = var_11c;
        int128_t var_12c;
        *(arg1 + 0x2c) = var_12c;
        *(arg1 + 0x1c) = var_13c;
        *(arg1 + 0xc) = var_14c;
        *arg1 = rax;
        arg1[1] = var_150;
    }
    else
    {
        int32_t var_15c = var_150;
        void* var_110 = &var_60;
        int32_t* var_108_1 = &var_15c;
        int64_t* var_100_1 = arg3;
        int32_t* var_f8_1 = &var_160;
        alacritty::config::font::Font::bold::hfdc88a4fe0c17cd9(&var_158, arg2);
        int128_t var_f0;
        alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_f0, 
            &var_158);
        core::ptr::drop_in_place$LT$alacritty..config..font..FontDescription$GT$::h6e03b4734dd1a15a(
            &var_158);
        int128_t var_d0;
        var_13c = var_d0;
        int128_t var_e0;
        var_14c = var_e0;
        var_158 = var_f0;
        int32_t rax_1 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::_$u7b$$u7b$closure$u7d$$u7d$::hffd5b62a9bc28b2e(&var_110, &var_158);
        alacritty::config::font::Font::italic::hbd7533f9186a5550(&var_158, arg2);
        int128_t var_c0;
        alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_c0, 
            &var_158);
        core::ptr::drop_in_place$LT$alacritty..config..font..FontDescription$GT$::h6e03b4734dd1a15a(
            &var_158);
        int128_t var_a0;
        var_13c = var_a0;
        int128_t var_b0;
        var_14c = var_b0;
        var_158 = var_c0;
        int32_t rax_2 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::_$u7b$$u7b$closure$u7d$$u7d$::hffd5b62a9bc28b2e(&var_110, &var_158);
        alacritty::config::font::Font::bold_italic::hc06c8f3854a106bc(&var_158, arg2);
        int128_t var_90;
        alacritty::renderer::text::glyph_cache::GlyphCache::make_desc::hbb7630277b5f032e(&var_90, 
            &var_158);
        core::ptr::drop_in_place$LT$alacritty..config..font..FontDescription$GT$::h6e03b4734dd1a15a(
            &var_158);
        int128_t var_70;
        var_13c = var_70;
        int128_t var_80;
        var_14c = var_80;
        var_158 = var_90;
        int32_t rax_3 = alacritty::renderer::text::glyph_cache::GlyphCache::compute_font_keys::_$u7b$$u7b$closure$u7d$$u7d$::hffd5b62a9bc28b2e(&var_110, &var_158);
        arg1[1] = var_150;
        *(arg1 + 0xc) = rax_1;
        arg1[2] = rax_2;
        *(arg1 + 0x14) = rax_3;
        *arg1 = 7;
    }
    return core::ptr::drop_in_place$LT$crossfont..FontDesc$GT$::h71e32b267b7b4ae1(&var_60);
}
